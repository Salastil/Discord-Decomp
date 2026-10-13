package io.sentry;

import java.util.concurrent.ThreadFactory;

/* loaded from: classes3.dex */
public final class h0 implements ThreadFactory {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public int f11578b;

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        switch (this.a) {
            case 0:
                StringBuilder sb2 = new StringBuilder("SentryHostnameCache-");
                int i5 = this.f11578b;
                this.f11578b = i5 + 1;
                sb2.append(i5);
                Thread thread = new Thread(runnable, sb2.toString());
                thread.setDaemon(true);
                return thread;
            case 1:
                StringBuilder sb3 = new StringBuilder("SentryExecutorServiceThreadFactory-");
                int i6 = this.f11578b;
                this.f11578b = i6 + 1;
                sb3.append(i6);
                Thread thread2 = new Thread(runnable, sb3.toString());
                thread2.setDaemon(true);
                return thread2;
            default:
                StringBuilder sb4 = new StringBuilder("SentryAsyncConnection-");
                int i10 = this.f11578b;
                this.f11578b = i10 + 1;
                sb4.append(i10);
                Thread thread3 = new Thread(runnable, sb4.toString());
                thread3.setDaemon(true);
                return thread3;
        }
    }
}
