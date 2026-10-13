package com.discord.resource_usage;

import android.app.ActivityManager;
import android.content.Context;
import android.system.Os;
import android.system.OsConstants;
import com.discord.resource_usage.utils.ProcfsStats;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import fo.q;
import fo.r;
import jb.a;
import ki.b;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0006\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u0002\n\u0002\b\u0004\b\u0000\u0018\u0000 $2\u00020\u0001:\u0001$B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010 \u001a\u00020!H\u0007J\b\u0010\"\u001a\u00020!H\u0007J\b\u0010#\u001a\u00020!H\u0002R\u0016\u0010\u0006\u001a\n \b*\u0004\u0018\u00010\u00070\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u0004\u0018\u00010\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\f\u001a\u00020\rX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000e\u0010\u000f\"\u0004\b\u0010\u0010\u0011R\u001a\u0010\u0012\u001a\u00020\u0013X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\u0015\"\u0004\b\u0016\u0010\u0017R\u001a\u0010\u0018\u001a\u00020\u0019X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001a\u0010\u001b\"\u0004\b\u001c\u0010\u001dR\u0011\u0010\u001e\u001a\u00020\u0013¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\u0015¨\u0006%"}, d2 = {"Lcom/discord/resource_usage/DeviceResourceUsageManager;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "activityManager", "Landroid/app/ActivityManager;", "kotlin.jvm.PlatformType", "thread", "Ljava/lang/Thread;", "threadSync", "cpuUsagePercent", "", "getCpuUsagePercent", "()D", "setCpuUsagePercent", "(D)V", "memoryRssKB", "", "getMemoryRssKB", "()I", "setMemoryRssKB", "(I)V", "memoryInfo", "Landroid/app/ActivityManager$MemoryInfo;", "getMemoryInfo", "()Landroid/app/ActivityManager$MemoryInfo;", "setMemoryInfo", "(Landroid/app/ActivityManager$MemoryInfo;)V", "cpuCoreCount", "getCpuCoreCount", ViewProps.START, "", "stop", "monitor", "Companion", "resource_usage_monitor_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nDeviceResourceUsageManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 DeviceResourceUsageManager.kt\ncom/discord/resource_usage/DeviceResourceUsageManager\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,145:1\n1#2:146\n*E\n"})
/* loaded from: classes.dex */
public final class DeviceResourceUsageManager {
    private static final long SC_CLK_TCK;
    private static final int SC_CPU_CORE_COUNT;
    private static final long SC_PAGE_SIZE;
    private static final long THREAD_SLEEP_MS = 1000;
    private final ActivityManager activityManager;
    private final int cpuCoreCount;
    private double cpuUsagePercent;

    @NotNull
    private ActivityManager.MemoryInfo memoryInfo;
    private int memoryRssKB;
    private Thread thread;

    @NotNull
    private final Object threadSync;

    static {
        Object i5;
        Object i6;
        Object i10;
        try {
            q qVar = Result.f13476e;
            i5 = Long.valueOf(Os.sysconf(OsConstants._SC_CLK_TCK));
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        if (i5 instanceof r) {
            i5 = 100L;
        }
        SC_CLK_TCK = ((Number) i5).longValue();
        try {
            i6 = Long.valueOf(Os.sysconf(OsConstants._SC_PAGE_SIZE));
        } catch (Throwable th3) {
            q qVar3 = Result.f13476e;
            i6 = b.i(th3);
        }
        if (i6 instanceof r) {
            i6 = 4096L;
        }
        SC_PAGE_SIZE = ((Number) i6).longValue();
        try {
            i10 = Integer.valueOf(Runtime.getRuntime().availableProcessors());
        } catch (Throwable th4) {
            q qVar4 = Result.f13476e;
            i10 = b.i(th4);
        }
        if (i10 instanceof r) {
            i10 = 1;
        }
        SC_CPU_CORE_COUNT = ((Number) i10).intValue();
    }

    public DeviceResourceUsageManager(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.activityManager = (ActivityManager) context.getSystemService(ActivityManager.class);
        this.threadSync = new Object();
        this.memoryInfo = new ActivityManager.MemoryInfo();
        int i5 = SC_CPU_CORE_COUNT;
        this.cpuCoreCount = i5 == 0 ? 1 : i5;
    }

    private final void monitor() {
        ProcfsStats procfsStats = null;
        Long l6 = null;
        while (true) {
            try {
                synchronized (this.threadSync) {
                    if (this.thread != Thread.currentThread()) {
                        return;
                    }
                    Unit unit = Unit.a;
                    if (Thread.interrupted()) {
                        return;
                    }
                    ActivityManager.MemoryInfo memoryInfo = this.memoryInfo;
                    this.activityManager.getMemoryInfo(memoryInfo);
                    if (memoryInfo.lowMemory) {
                        Thread.sleep(1000L);
                    } else {
                        ProcfsStats readStatFile = ProcfsStats.INSTANCE.readStatFile();
                        long currentTimeMillis = System.currentTimeMillis();
                        if (procfsStats != null && l6 != null && readStatFile != null) {
                            this.cpuUsagePercent = (((readStatFile.getTotalTime() - procfsStats.getTotalTime()) * 100) / (SC_CLK_TCK * ((currentTimeMillis - l6.longValue()) / 1000.0d))) / Math.max(this.cpuCoreCount, 1);
                            this.memoryRssKB = (int) ((readStatFile.getRssPages() * SC_PAGE_SIZE) / IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
                        }
                        l6 = Long.valueOf(currentTimeMillis);
                        Thread.sleep(1000L);
                        procfsStats = readStatFile;
                    }
                }
            } catch (Exception e9) {
                String simpleName = e9.getClass().getSimpleName();
                Throwable cause = e9.getCause();
                String simpleName2 = cause != null ? cause.getClass().getSimpleName() : null;
                Intrinsics.checkNotNull(simpleName);
                if (StringsKt.D(simpleName, "DeadSystem", false)) {
                    return;
                }
                if (simpleName2 == null || !StringsKt.D(simpleName2, "DeadSystem", false)) {
                    throw e9;
                }
                return;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit start$lambda$1$lambda$0(DeviceResourceUsageManager deviceResourceUsageManager) {
        try {
            deviceResourceUsageManager.monitor();
        } catch (InterruptedException unused) {
        }
        return Unit.a;
    }

    public final int getCpuCoreCount() {
        return this.cpuCoreCount;
    }

    public final double getCpuUsagePercent() {
        return this.cpuUsagePercent;
    }

    @NotNull
    public final ActivityManager.MemoryInfo getMemoryInfo() {
        return this.memoryInfo;
    }

    public final int getMemoryRssKB() {
        return this.memoryRssKB;
    }

    public final void setCpuUsagePercent(double d6) {
        this.cpuUsagePercent = d6;
    }

    public final void setMemoryInfo(@NotNull ActivityManager.MemoryInfo memoryInfo) {
        Intrinsics.checkNotNullParameter(memoryInfo, "<set-?>");
        this.memoryInfo = memoryInfo;
    }

    public final void setMemoryRssKB(int i5) {
        this.memoryRssKB = i5;
    }

    public final void start() {
        Thread thread;
        synchronized (this.threadSync) {
            thread = this.thread;
            this.thread = a.M("DeviceResourceUsageMonitor", 2, new h8.a(13, this), 4);
        }
        if (thread != null) {
            thread.interrupt();
        }
    }

    public final void stop() {
        Thread thread;
        synchronized (this.threadSync) {
            thread = this.thread;
            this.thread = null;
        }
        if (thread != null) {
            thread.interrupt();
        }
    }
}
