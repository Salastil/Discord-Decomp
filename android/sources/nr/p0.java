package nr;

import kotlin.collections.ArrayDeque;
import kotlinx.coroutines.CoroutineDispatcher;

/* loaded from: classes3.dex */
public abstract class p0 extends CoroutineDispatcher {

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ int f15646x = 0;

    /* renamed from: i, reason: collision with root package name */
    public long f15647i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f15648v;

    /* renamed from: w, reason: collision with root package name */
    public ArrayDeque f15649w;

    public final void p0(boolean z5) {
        long j = this.f15647i - (z5 ? 4294967296L : 1L);
        this.f15647i = j;
        if (j <= 0 && this.f15648v) {
            shutdown();
        }
    }

    public final void q0(e0 e0Var) {
        ArrayDeque arrayDeque = this.f15649w;
        if (arrayDeque == null) {
            arrayDeque = new ArrayDeque();
            this.f15649w = arrayDeque;
        }
        arrayDeque.addLast(e0Var);
    }

    public abstract Thread r0();

    public final void s0(boolean z5) {
        this.f15647i = (z5 ? 4294967296L : 1L) + this.f15647i;
        if (z5) {
            return;
        }
        this.f15648v = true;
    }

    public abstract void shutdown();

    public abstract long t0();

    public final boolean u0() {
        ArrayDeque arrayDeque = this.f15649w;
        if (arrayDeque == null) {
            return false;
        }
        e0 e0Var = (e0) (arrayDeque.isEmpty() ? null : arrayDeque.removeFirst());
        if (e0Var == null) {
            return false;
        }
        e0Var.run();
        return true;
    }

    public void v0(long j, n0 n0Var) {
        kotlinx.coroutines.a.G.A0(j, n0Var);
    }
}
