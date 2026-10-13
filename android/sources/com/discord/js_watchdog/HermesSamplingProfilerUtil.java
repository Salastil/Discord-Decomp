package com.discord.js_watchdog;

import com.discord.crash_reporting.CrashReporting;
import com.facebook.hermes.instrumentation.HermesSamplingProfiler;
import com.facebook.imagepipeline.nativecode.b;
import cs.h;
import fo.q;
import fo.r;
import java.io.File;
import java.io.FileInputStream;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.collections.b0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.text.x;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.a;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0010\u0010\b\u001a\u00020\u00052\u0006\u0010\t\u001a\u00020\u0007H\u0002¨\u0006\n"}, d2 = {"Lcom/discord/js_watchdog/HermesSamplingProfilerUtil;", "", "<init>", "()V", "findSampleTrace", "", "cacheDir", "Ljava/io/File;", "readFile", "file", "js_watchdog_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nHermesSamplingProfilerUtil.kt\nKotlin\n*S Kotlin\n*F\n+ 1 HermesSamplingProfilerUtil.kt\ncom/discord/js_watchdog/HermesSamplingProfilerUtil\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n*L\n1#1,89:1\n1#2:90\n538#3:91\n523#3,6:92\n*S KotlinDebug\n*F\n+ 1 HermesSamplingProfilerUtil.kt\ncom/discord/js_watchdog/HermesSamplingProfilerUtil\n*L\n59#1:91\n59#1:92,6\n*E\n"})
/* loaded from: classes.dex */
public final class HermesSamplingProfilerUtil {

    @NotNull
    public static final HermesSamplingProfilerUtil INSTANCE = new HermesSamplingProfilerUtil();

    private HermesSamplingProfilerUtil() {
    }

    private final String readFile(File file) {
        FileInputStream fileInputStream = new FileInputStream(file);
        try {
            byte[] E = b.E(fileInputStream);
            fileInputStream.close();
            return x.g(E);
        } finally {
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:37:0x00bc, code lost:
    
        if ((r12.exists()) != false) goto L50;
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x00be, code lost:
    
        r12.delete();
     */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x018a, code lost:
    
        if (r3 != false) goto L50;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:105:0x019a  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0139 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:60:0x010d A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String findSampleTrace(@NotNull File cacheDir) {
        File file;
        r rVar;
        boolean z5;
        r rVar2;
        Integer h6;
        Intrinsics.checkNotNullParameter(cacheDir, "cacheDir");
        File file2 = null;
        try {
            file = File.createTempFile("sampling-profiler-trace", ".cpuprofile", cacheDir);
            try {
                try {
                    HermesSamplingProfiler.enable();
                    HermesSamplingProfiler.disable();
                    String path = file.getPath();
                    Intrinsics.checkNotNullExpressionValue(path, "getPath(...)");
                    HermesSamplingProfiler.dumpSampledTraceToFile(path);
                    Intrinsics.checkNotNull(file);
                    JsonElement d6 = Json.f13606d.d(readFile(file));
                    JsonElement jsonElement = (JsonElement) h.j(d6).get("samples");
                    a i5 = jsonElement != null ? h.i(jsonElement) : null;
                    if (i5 != null) {
                        List list = i5.f13611d;
                        if (!list.isEmpty()) {
                            try {
                                q qVar = Result.f13476e;
                                Iterator it = list.iterator();
                                while (true) {
                                    if (!it.hasNext()) {
                                        rVar2 = null;
                                        break;
                                    }
                                    JsonElement jsonElement2 = (JsonElement) it.next();
                                    JsonElement jsonElement3 = (JsonElement) h.j(jsonElement2).get("sf");
                                    rVar2 = ((jsonElement3 == null || (h6 = h.h(h.k(jsonElement3))) == null) ? -1 : h6.intValue()) > 1 ? jsonElement2 : null;
                                    if (rVar2 != null) {
                                        break;
                                    }
                                }
                            } catch (Throwable th2) {
                                q qVar2 = Result.f13476e;
                                rVar = ki.b.i(th2);
                            }
                            if (rVar2 == null) {
                                throw new NoSuchElementException("No element of the collection was transformed to a non-null value.");
                            }
                            rVar = rVar2;
                            q qVar3 = Result.f13476e;
                            boolean z6 = rVar instanceof r;
                            Object obj = rVar;
                            if (z6) {
                                obj = null;
                            }
                            JsonElement jsonElement4 = (JsonElement) obj;
                            if (jsonElement4 != null) {
                                LinkedHashMap o6 = v0.o(h.j(d6));
                                o6.put("samples", new a(b0.c(jsonElement4)));
                                JsonElement jsonElement5 = (JsonElement) h.j(d6).get("stackFrames");
                                if (jsonElement5 != null) {
                                    JsonObject j = h.j(jsonElement5);
                                    Object obj2 = h.j(jsonElement4).get("sf");
                                    Intrinsics.checkNotNull(obj2);
                                    Integer h7 = h.h(h.k((JsonElement) obj2));
                                    if (h7 != null) {
                                        LinkedHashMap linkedHashMap = new LinkedHashMap();
                                        for (Map.Entry entry : j.f13610d.entrySet()) {
                                            Integer intOrNull = StringsKt.toIntOrNull((String) entry.getKey());
                                            if (intOrNull != null) {
                                                if (intOrNull.intValue() <= h7.intValue()) {
                                                    z5 = true;
                                                    if (!z5) {
                                                        linkedHashMap.put(entry.getKey(), entry.getValue());
                                                    }
                                                }
                                            }
                                            z5 = false;
                                            if (!z5) {
                                            }
                                        }
                                        o6.put("stackFrames", new JsonObject(linkedHashMap));
                                    }
                                }
                                String c6 = Json.f13606d.c(JsonObject.INSTANCE.serializer(), new JsonObject(o6));
                                if (file.exists()) {
                                    file.delete();
                                }
                                return c6;
                            }
                        }
                    }
                    if (file.exists()) {
                        file.delete();
                        return null;
                    }
                } catch (Exception e9) {
                    e = e9;
                    CrashReporting.captureException$default(CrashReporting.INSTANCE, e, false, 2, null);
                    if (file != null && file.exists()) {
                        r3 = true;
                    }
                }
            } catch (Throwable th3) {
                th = th3;
                file2 = file;
                if (file2 != null && file2.exists()) {
                    r3 = true;
                }
                if (r3) {
                    file2.delete();
                }
                throw th;
            }
        } catch (Exception e10) {
            e = e10;
            file = null;
        } catch (Throwable th4) {
            th = th4;
            if (file2 != null) {
                r3 = true;
            }
            if (r3) {
            }
            throw th;
        }
        return null;
    }
}
