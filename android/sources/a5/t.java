package a5;

import java.io.Serializable;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class t implements ThreadFactory {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f223b;

    /* renamed from: c, reason: collision with root package name */
    public final Serializable f224c;

    public t(b bVar) {
        this.a = 0;
        this.f223b = Executors.defaultThreadFactory();
        this.f224c = new AtomicInteger(1);
    }

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        switch (this.a) {
            case 0:
                AtomicInteger atomicInteger = (AtomicInteger) this.f224c;
                Thread newThread = ((ThreadFactory) this.f223b).newThread(runnable);
                newThread.setName("PlayBillingLibrary-" + atomicInteger.getAndIncrement());
                return newThread;
            case 1:
                Thread newThread2 = ((ThreadFactory) this.f223b).newThread(new hf.a(0, runnable));
                newThread2.setName((String) this.f224c);
                return newThread2;
            default:
                String str = (String) this.f223b;
                Intrinsics.checkNotNullParameter(runnable, "runnable");
                return new Thread(new com.mkuczera.haptic.a(28, this, runnable), str + "-" + ((AtomicInteger) this.f224c).getAndIncrement());
        }
    }

    public t(String prefix, int i5) {
        this.a = i5;
        switch (i5) {
            case 2:
                Intrinsics.checkNotNullParameter(prefix, "prefix");
                this.f223b = prefix;
                this.f224c = new AtomicInteger(1);
                break;
            default:
                this.f223b = Executors.defaultThreadFactory();
                this.f224c = prefix;
                break;
        }
    }
}
