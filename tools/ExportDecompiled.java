// Headless Ghidra script: decompile every function in parallel and write
//   <outdir>/functions.tsv     address, size, name, flags
//   <outdir>/strings.tsv       address, string
//   <outdir>/imports.txt, exports.txt
//   <outdir>/c/funcs_<first-address>.c   (CHUNK functions per file, address order)
//   <outdir>/summary.json
//
// args: <outdir> [chunk=400] [timeoutSecs=60]
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.decompiler.parallel.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.StringDataInstance;

import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;
import java.util.concurrent.atomic.AtomicInteger;

public class ExportDecompiled extends GhidraScript {

    static class Res {
        final Address addr; final String name; final String text; final boolean ok;
        Res(Address a, String n, String t, boolean ok) { addr = a; name = n; text = t; this.ok = ok; }
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File out = new File(args[0]);
        int chunk = args.length > 1 ? Integer.parseInt(args[1]) : 400;
        int timeout = args.length > 2 ? Integer.parseInt(args[2]) : 60;
        new File(out, "c").mkdirs();

        Listing listing = currentProgram.getListing();
        List<Function> funcs = new ArrayList<>();
        for (Function f : listing.getFunctions(true)) {
            if (!f.isExternal()) funcs.add(f);
        }
        println("functions to decompile: " + funcs.size());

        // ---- function index
        try (PrintWriter w = new PrintWriter(new OutputStreamWriter(
                new FileOutputStream(new File(out, "functions.tsv")), StandardCharsets.UTF_8))) {
            w.println("address\tsize\tname\tflags");
            for (Function f : funcs) {
                String flags = (f.isThunk() ? "thunk," : "") + (f.getSymbol().getSource() == SourceType.DEFAULT ? "auto" : "named");
                w.println(f.getEntryPoint() + "\t" + f.getBody().getNumAddresses() + "\t" + f.getName(true) + "\t" + flags);
            }
        }

        // ---- imports / exports
        try (PrintWriter wi = new PrintWriter(new File(out, "imports.txt"));
             PrintWriter we = new PrintWriter(new File(out, "exports.txt"))) {
            SymbolTable st = currentProgram.getSymbolTable();
            for (Symbol s : st.getExternalSymbols()) wi.println(s.getName(true));
            for (Symbol s : st.getAllSymbols(false)) {
                if (s.isExternalEntryPoint()) we.println(s.getAddress() + "\t" + s.getName());
            }
        }

        // ---- defined strings
        int nstr = 0;
        try (PrintWriter w = new PrintWriter(new OutputStreamWriter(
                new FileOutputStream(new File(out, "strings.tsv")), StandardCharsets.UTF_8))) {
            for (Data d : listing.getDefinedData(true)) {
                if (monitor.isCancelled()) break;
                if (!d.hasStringValue()) continue;
                StringDataInstance si = StringDataInstance.getStringDataInstance(d);
                String s = si.getStringValue();
                if (s == null) continue;
                w.println(d.getAddress() + "\t" + s.replace("\\", "\\\\").replace("\n", "\\n").replace("\r", "\\r").replace("\t", "\\t"));
                nstr++;
            }
        }
        println("strings: " + nstr);

        // ---- parallel decompile
        final TreeMap<Address, Res> results = new TreeMap<>();
        final AtomicInteger done = new AtomicInteger();
        final AtomicInteger failed = new AtomicInteger();
        final int total = funcs.size();
        final long t0 = System.currentTimeMillis();

        DecompilerCallback<Res> cb = new DecompilerCallback<Res>(currentProgram, new DecompileConfigurer() {
            public void configure(DecompInterface d) { }
        }) {
            @Override
            public Res process(DecompileResults r, ghidra.util.task.TaskMonitor m) throws Exception {
                Function f = r.getFunction();
                if (r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    return new Res(f.getEntryPoint(), f.getName(true), r.getDecompiledFunction().getC(), true);
                }
                String err = r.getErrorMessage();
                return new Res(f.getEntryPoint(), f.getName(true),
                        "/* decompilation failed: " + (err == null ? "timeout/unknown" : err.replace("*/", "* /")) + " */\n", false);
            }
        };
        cb.setTimeout(timeout);

        ParallelDecompiler.decompileFunctions(cb, currentProgram, funcs.iterator(), (Res r) -> {
            synchronized (results) { results.put(r.addr, r); }
            if (!r.ok) failed.incrementAndGet();
            int n = done.incrementAndGet();
            if (n % 2000 == 0) {
                println(String.format("decompiled %d/%d (%d failed) %.0fs", n, total, failed.get(), (System.currentTimeMillis() - t0) / 1000.0));
            }
        }, monitor);
        cb.dispose();

        // ---- write chunks in address order
        int i = 0, files = 0;
        PrintWriter w = null;
        for (Res r : results.values()) {
            if (i % chunk == 0) {
                if (w != null) w.close();
                w = new PrintWriter(new OutputStreamWriter(new FileOutputStream(
                        new File(out, "c/funcs_" + r.addr + ".c")), StandardCharsets.UTF_8));
                files++;
            }
            w.println("// ===== " + r.addr + "  " + r.name + (r.ok ? "" : "  [FAILED]") + " =====");
            w.println(r.text);
            i++;
        }
        if (w != null) w.close();

        try (PrintWriter s = new PrintWriter(new File(out, "summary.json"))) {
            s.println("{\"program\":\"" + currentProgram.getName() + "\",\"language\":\"" + currentProgram.getLanguageID()
                + "\",\"functions\":" + total + ",\"decompiled_ok\":" + (total - failed.get()) + ",\"failed\":" + failed.get()
                + ",\"strings\":" + nstr + ",\"chunk_files\":" + files + ",\"seconds\":" + (System.currentTimeMillis() - t0) / 1000 + "}");
        }
        println("DONE " + total + " functions, " + failed.get() + " failed, " + files + " files");
    }
}
