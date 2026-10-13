package qe;

import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class g implements ThreadFactory {
    public static final AtomicInteger a = new AtomicInteger();

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        int incrementAndGet = a.incrementAndGet();
        StringBuilder sb2 = new StringBuilder(23);
        sb2.append("measurement-");
        sb2.append(incrementAndGet);
        return new h(runnable, sb2.toString());
    }
}
