package nr;

import kotlin.Unit;

/* loaded from: classes3.dex */
public abstract class n0 implements Runnable, Comparable, i0 {
    private volatile Object _heap;

    /* renamed from: d, reason: collision with root package name */
    public long f15639d;

    /* renamed from: e, reason: collision with root package name */
    public int f15640e = -1;

    public n0(long j) {
        this.f15639d = j;
    }

    public final int b(long j, o0 o0Var, kotlinx.coroutines.b bVar) {
        synchronized (this) {
            if (this._heap == x.f15676b) {
                return 2;
            }
            synchronized (o0Var) {
                try {
                    n0[] n0VarArr = o0Var.a;
                    n0 n0Var = n0VarArr != null ? n0VarArr[0] : null;
                    if (kotlinx.coroutines.b.F.get(bVar) == 1) {
                        return 1;
                    }
                    if (n0Var == null) {
                        o0Var.f15641c = j;
                    } else {
                        long j5 = n0Var.f15639d;
                        if (j5 - j < 0) {
                            j = j5;
                        }
                        if (j - o0Var.f15641c > 0) {
                            o0Var.f15641c = j;
                        }
                    }
                    long j7 = this.f15639d;
                    long j10 = o0Var.f15641c;
                    if (j7 - j10 < 0) {
                        this.f15639d = j10;
                    }
                    o0Var.a(this);
                    return 0;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
    }

    public final void c(o0 o0Var) {
        if (this._heap == x.f15676b) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        this._heap = o0Var;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        long j = this.f15639d - ((n0) obj).f15639d;
        if (j > 0) {
            return 1;
        }
        return j < 0 ? -1 : 0;
    }

    @Override // nr.i0
    public final void dispose() {
        synchronized (this) {
            try {
                Object obj = this._heap;
                a5.h hVar = x.f15676b;
                if (obj == hVar) {
                    return;
                }
                o0 o0Var = obj instanceof o0 ? (o0) obj : null;
                if (o0Var != null) {
                    synchronized (o0Var) {
                        Object obj2 = this._heap;
                        if ((obj2 instanceof sr.z ? (sr.z) obj2 : null) != null) {
                            o0Var.b(this.f15640e);
                        }
                    }
                }
                this._heap = hVar;
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public String toString() {
        return "Delayed[nanos=" + this.f15639d + ']';
    }
}
