package nr;

import java.util.concurrent.CancellationException;
import kotlin.jvm.functions.Function1;
import kotlin.sequences.Sequence;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public final class h1 extends kotlin.coroutines.a implements Job {

    /* renamed from: e, reason: collision with root package name */
    public static final h1 f15623e = new h1(t.f15661e);

    @Override // kotlinx.coroutines.Job
    public final i0 P(Function1 function1) {
        return i1.f15624d;
    }

    @Override // kotlinx.coroutines.Job
    public final Object X(lo.c cVar) {
        throw new UnsupportedOperationException("This job is always active");
    }

    @Override // kotlinx.coroutines.Job
    public final boolean c() {
        return true;
    }

    @Override // kotlinx.coroutines.Job
    public final m d0(e1 e1Var) {
        return i1.f15624d;
    }

    @Override // kotlinx.coroutines.Job
    public final i0 i(boolean z5, boolean z6, y0 y0Var) {
        return i1.f15624d;
    }

    @Override // kotlinx.coroutines.Job
    public final boolean isCompleted() {
        return false;
    }

    @Override // kotlinx.coroutines.Job
    public final boolean start() {
        return false;
    }

    @Override // kotlinx.coroutines.Job
    public final Sequence t() {
        return kr.f.a;
    }

    public final String toString() {
        return "NonCancellable";
    }

    @Override // kotlinx.coroutines.Job
    public final CancellationException x() {
        throw new IllegalStateException("This job is always active");
    }

    @Override // kotlinx.coroutines.Job
    public final void f(CancellationException cancellationException) {
    }
}
