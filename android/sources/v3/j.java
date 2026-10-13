package v3;

import com.google.common.util.concurrent.ListenableFuture;
import java.util.concurrent.Executor;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import nr.x0;

/* loaded from: classes.dex */
public final class j implements ListenableFuture {

    /* renamed from: d, reason: collision with root package name */
    public final g4.j f19205d;

    public j(x0 job) {
        g4.j underlying = new g4.j();
        Intrinsics.checkNotNullExpressionValue(underlying, "create()");
        Intrinsics.checkNotNullParameter(job, "job");
        Intrinsics.checkNotNullParameter(underlying, "underlying");
        this.f19205d = underlying;
        job.P(new androidx.fragment.app.s(6, this));
    }

    @Override // com.google.common.util.concurrent.ListenableFuture
    public final void a(Runnable runnable, Executor executor) {
        this.f19205d.a(runnable, executor);
    }

    @Override // java.util.concurrent.Future
    public final boolean cancel(boolean z5) {
        return this.f19205d.cancel(z5);
    }

    @Override // java.util.concurrent.Future
    public final Object get() {
        return this.f19205d.get();
    }

    @Override // java.util.concurrent.Future
    public final boolean isCancelled() {
        return this.f19205d.f9110d instanceof g4.a;
    }

    @Override // java.util.concurrent.Future
    public final boolean isDone() {
        return this.f19205d.isDone();
    }

    @Override // java.util.concurrent.Future
    public final Object get(long j, TimeUnit timeUnit) {
        return this.f19205d.get(j, timeUnit);
    }
}
