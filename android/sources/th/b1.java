package th;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Properties;

/* loaded from: classes3.dex */
public final class b1 {

    /* renamed from: b, reason: collision with root package name */
    public static final a5.m f18406b = new a5.m("MergeSliceTaskHandler", 3);
    public final s a;

    public b1(s sVar) {
        this.a = sVar;
    }

    public static void b(File file, File file2) {
        if (!file.isDirectory()) {
            if (file2.exists()) {
                throw new l0("File clashing with existing file from other slice: ".concat(file2.toString()));
            }
            if (!file.renameTo(file2)) {
                throw new l0("Unable to move file: ".concat(String.valueOf(file)));
            }
            return;
        }
        file2.mkdirs();
        for (File file3 : file.listFiles()) {
            b(file3, new File(file2, file3.getName()));
        }
        if (!file.delete()) {
            throw new l0("Unable to delete directory: ".concat(String.valueOf(file)));
        }
    }

    public final void a(a1 a1Var) {
        String str = (String) a1Var.f10877b;
        int i5 = a1Var.a;
        long j = a1Var.f18395d;
        int i6 = a1Var.f18394c;
        String str2 = a1Var.f18396e;
        s sVar = this.a;
        File l6 = sVar.l(i6, str, j, str2);
        if (!l6.exists()) {
            throw new l0(s4.h.f("Cannot find verified files for slice ", a1Var.f18396e, "."), i5);
        }
        sVar.getClass();
        File file = new File(sVar.c(i6, j, str), "_packs");
        if (!file.exists()) {
            file.mkdirs();
        }
        b(l6, file);
        try {
            int h6 = sVar.h(i6, j, str) + 1;
            File file2 = new File(new File(sVar.c(i6, j, str), "_packs"), "merge.tmp");
            Properties properties = new Properties();
            properties.put("numberOfMerges", String.valueOf(h6));
            file2.getParentFile().mkdirs();
            file2.createNewFile();
            FileOutputStream fileOutputStream = new FileOutputStream(file2);
            properties.store(fileOutputStream, (String) null);
            fileOutputStream.close();
        } catch (IOException e9) {
            f18406b.b("Writing merge checkpoint failed with %s.", e9.getMessage());
            throw new l0("Writing merge checkpoint failed.", e9, i5);
        }
    }
}
