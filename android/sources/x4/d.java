package x4;

import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes.dex */
public final class d implements ThreadFactory {

    /* renamed from: d, reason: collision with root package name */
    public static final AtomicInteger f20277d = new AtomicInteger(1);
    public final ThreadGroup a;

    /* renamed from: b, reason: collision with root package name */
    public final AtomicInteger f20278b = new AtomicInteger(1);

    /* renamed from: c, reason: collision with root package name */
    public final String f20279c;

    public d() {
        SecurityManager securityManager = System.getSecurityManager();
        this.a = securityManager == null ? Thread.currentThread().getThreadGroup() : securityManager.getThreadGroup();
        this.f20279c = "lottie-" + f20277d.getAndIncrement() + "-thread-";
    }

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        Thread thread = new Thread(this.a, runnable, this.f20279c + this.f20278b.getAndIncrement(), 0L);
        thread.setDaemon(false);
        thread.setPriority(10);
        return thread;
    }
}
