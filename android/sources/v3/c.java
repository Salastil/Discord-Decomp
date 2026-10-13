package v3;

import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c implements ThreadFactory {
    public final AtomicInteger a = new AtomicInteger(0);

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ boolean f19191b;

    public c(boolean z5) {
        this.f19191b = z5;
    }

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        Intrinsics.checkNotNullParameter(runnable, "runnable");
        StringBuilder o6 = k0.d.o(this.f19191b ? "WM.task-" : "androidx.work-");
        o6.append(this.a.incrementAndGet());
        return new Thread(runnable, o6.toString());
    }
}
