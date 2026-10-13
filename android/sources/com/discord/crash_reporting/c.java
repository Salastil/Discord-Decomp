package com.discord.crash_reporting;

import com.discord.jank_stats.JankSessionRecorder;
import java.util.concurrent.ThreadFactory;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements ThreadFactory {
    public final /* synthetic */ int a;

    public /* synthetic */ c(int i5) {
        this.a = i5;
    }

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        Thread ioExecutor_delegate$lambda$2$lambda$1;
        Thread flushExecutor_delegate$lambda$2$lambda$1;
        switch (this.a) {
            case 0:
                ioExecutor_delegate$lambda$2$lambda$1 = TelemetryRing.ioExecutor_delegate$lambda$2$lambda$1(runnable);
                return ioExecutor_delegate$lambda$2$lambda$1;
            case 1:
                flushExecutor_delegate$lambda$2$lambda$1 = JankSessionRecorder.flushExecutor_delegate$lambda$2$lambda$1(runnable);
                return flushExecutor_delegate$lambda$2$lambda$1;
            case 2:
                Thread thread = new Thread(runnable, "AppSingleThread");
                thread.setDaemon(true);
                return thread;
            default:
                Thread thread2 = new Thread(runnable);
                thread2.setPriority(1);
                return thread2;
        }
    }
}
