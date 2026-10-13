package androidx.lifecycle;

import androidx.lifecycle.Lifecycle;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Job;

/* loaded from: classes.dex */
public final class q extends o implements t {

    /* renamed from: d, reason: collision with root package name */
    public final Lifecycle f2218d;

    /* renamed from: e, reason: collision with root package name */
    public final CoroutineContext f2219e;

    public q(Lifecycle lifecycle, CoroutineContext coroutineContext) {
        Job job;
        Intrinsics.checkNotNullParameter(lifecycle, "lifecycle");
        Intrinsics.checkNotNullParameter(coroutineContext, "coroutineContext");
        this.f2218d = lifecycle;
        this.f2219e = coroutineContext;
        if (lifecycle.b() != Lifecycle.State.f2137d || (job = (Job) coroutineContext.o(nr.t.f15661e)) == null) {
            return;
        }
        job.f(null);
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner source, n event) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(event, "event");
        Lifecycle lifecycle = this.f2218d;
        if (lifecycle.b().compareTo(Lifecycle.State.f2137d) <= 0) {
            lifecycle.c(this);
            Job job = (Job) this.f2219e.o(nr.t.f15661e);
            if (job != null) {
                job.f(null);
            }
        }
    }

    @Override // kotlinx.coroutines.CoroutineScope
    public final CoroutineContext getCoroutineContext() {
        return this.f2219e;
    }
}
