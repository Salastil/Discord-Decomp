package nr;

import java.util.concurrent.locks.LockSupport;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f extends a {

    /* renamed from: v, reason: collision with root package name */
    public final Thread f15616v;

    /* renamed from: w, reason: collision with root package name */
    public final p0 f15617w;

    public f(CoroutineContext coroutineContext, Thread thread, p0 p0Var) {
        super(coroutineContext, true);
        this.f15616v = thread;
        this.f15617w = p0Var;
    }

    @Override // nr.e1
    public final void u(Object obj) {
        Thread currentThread = Thread.currentThread();
        Thread thread = this.f15616v;
        if (Intrinsics.areEqual(currentThread, thread)) {
            return;
        }
        LockSupport.unpark(thread);
    }
}
