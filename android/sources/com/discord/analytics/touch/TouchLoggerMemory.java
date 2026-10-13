package com.discord.analytics.touch;

import a3.e;
import android.os.Debug;
import android.os.Process;
import com.discord.logging.Log;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.Iterator;
import java.util.Locale;
import k0.d;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\t\n\u0000\n\u0002\u0010\b\n\u0000\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\b\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\u0005J\u0010\u0010\n\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0002J\u0018\u0010\u000b\u001a\u00020\f2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\r\u001a\u00020\u000eH\u0002¨\u0006\u000f"}, d2 = {"Lcom/discord/analytics/touch/TouchLoggerMemory;", "", "<init>", "()V", "getMemoryStats", "Lcom/discord/analytics/touch/MemoryStats;", "tag", "", "formatMemoryStats", "stats", "collectMemoryStatsFast", "getVmRssFromProc", "", "pid", "", "analytics_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nTouchLoggerMemory.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TouchLoggerMemory.kt\ncom/discord/analytics/touch/TouchLoggerMemory\n+ 2 FileReadWrite.kt\nkotlin/io/FilesKt__FileReadWriteKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,125:1\n284#2,5:126\n1#3:131\n*S KotlinDebug\n*F\n+ 1 TouchLoggerMemory.kt\ncom/discord/analytics/touch/TouchLoggerMemory\n*L\n103#1:126,5\n103#1:131\n*E\n"})
/* loaded from: classes.dex */
public final class TouchLoggerMemory {

    @NotNull
    public static final TouchLoggerMemory INSTANCE = new TouchLoggerMemory();

    private TouchLoggerMemory() {
    }

    private final MemoryStats collectMemoryStatsFast(String tag) {
        Runtime runtime = Runtime.getRuntime();
        int myPid = Process.myPid();
        long j = runtime.totalMemory();
        long j5 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
        long freeMemory = (j / j5) - (runtime.freeMemory() / j5);
        long nativeHeapAllocatedSize = Debug.getNativeHeapAllocatedSize() / j5;
        long nativeHeapFreeSize = Debug.getNativeHeapFreeSize() / j5;
        return new MemoryStats(freeMemory, nativeHeapAllocatedSize - nativeHeapFreeSize, 0L, getVmRssFromProc(tag, myPid), 0L, 0L, 0L, nativeHeapAllocatedSize, nativeHeapFreeSize, freeMemory);
    }

    private final long getVmRssFromProc(String tag, int pid) {
        int I;
        try {
            File file = new File("/proc/" + pid + "/status");
            if (!file.exists()) {
                return 0L;
            }
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file), Charsets.UTF_8), 8192);
            try {
                Iterator it = d9.a.B(bufferedReader).iterator();
                while (it.hasNext()) {
                    String str = (String) it.next();
                    if (x.o(str, "VmRSS:", false) && (I = StringsKt.I(str, ':', 0, 6)) != -1) {
                        String substring = str.substring(I + 1);
                        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
                        String obj = StringsKt.b0(substring).toString();
                        int I2 = StringsKt.I(obj, ' ', 0, 6);
                        if (I2 != -1) {
                            obj = obj.substring(0, I2);
                            Intrinsics.checkNotNullExpressionValue(obj, "substring(...)");
                        }
                        Long a0 = StringsKt.a0(obj);
                        long longValue = a0 != null ? a0.longValue() : 0L;
                        bufferedReader.close();
                        return longValue;
                    }
                }
                Unit unit = Unit.a;
                bufferedReader.close();
                return 0L;
            } finally {
            }
        } catch (Exception e9) {
            Log.INSTANCE.e(tag, "Error reading VmRSS", e9);
            return 0L;
        }
    }

    @NotNull
    public final String formatMemoryStats(@NotNull MemoryStats stats) {
        Intrinsics.checkNotNullParameter(stats, "stats");
        long totalPss = stats.getTotalPss();
        long j = IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
        long nativePss = stats.getNativePss() / j;
        long javaPss = stats.getJavaPss() / j;
        long swapPss = stats.getSwapPss() / j;
        long graphicsPss = stats.getGraphicsPss() / j;
        StringBuilder n6 = d.n(totalPss / j, "Memory: PSS: ", "MB, Native: ");
        n6.append(nativePss);
        n6.append("MB, Java: ");
        n6.append(javaPss);
        n6.append("MB");
        if (swapPss > 1) {
            n6.append(", Swap: ");
            n6.append(swapPss);
            n6.append("MB");
        }
        if (graphicsPss > 1) {
            n6.append(", Graphics: ");
            n6.append(graphicsPss);
            n6.append("MB");
        }
        return n6.toString();
    }

    @NotNull
    public final MemoryStats getMemoryStats(@NotNull String tag) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        long nanoTime = System.nanoTime();
        MemoryStats collectMemoryStatsFast = collectMemoryStatsFast(tag);
        double nanoTime2 = (System.nanoTime() - nanoTime) / 1000.0d;
        if (nanoTime2 > 1000.0d) {
            Log log = Log.INSTANCE;
            StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
            Locale locale = Locale.US;
            Log.w$default(log, tag, h.g("! Memory collection slow: ", e.p(new Object[]{Double.valueOf(nanoTime2)}, 1, locale, "%.2f", "format(...)"), "μs (", e.p(new Object[]{Double.valueOf(nanoTime2 / 1000.0d)}, 1, locale, "%.2f", "format(...)"), "ms)"), (Throwable) null, 4, (Object) null);
        }
        return collectMemoryStatsFast;
    }
}
