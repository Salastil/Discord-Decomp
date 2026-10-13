package rd;

import com.google.android.exoplayer2.Format;
import fi.e0;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes3.dex */
public final class k extends m implements qd.i {
    public final n E;

    public k(Format format, e0 e0Var, n nVar, ArrayList arrayList, List list, List list2) {
        super(format, e0Var, nVar, arrayList, list, list2);
        this.E = nVar;
    }

    @Override // qd.i
    public final long B(long j, long j5) {
        return this.E.b(j, j5);
    }

    @Override // rd.m
    public final String a() {
        return null;
    }

    @Override // qd.i
    public final long b(long j) {
        return this.E.g(j);
    }

    @Override // rd.m
    public final j d() {
        return null;
    }

    @Override // qd.i
    public final long e(long j, long j5) {
        return this.E.e(j, j5);
    }

    @Override // qd.i
    public final long f(long j, long j5) {
        return this.E.c(j, j5);
    }

    @Override // qd.i
    public final long g(long j, long j5) {
        n nVar = this.E;
        if (nVar.f17260f != null) {
            return -9223372036854775807L;
        }
        long b10 = nVar.b(j, j5) + nVar.c(j, j5);
        return (nVar.e(b10, j) + nVar.g(b10)) - nVar.f17263i;
    }

    @Override // qd.i
    public final j h(long j) {
        return this.E.h(this, j);
    }

    @Override // qd.i
    public final long m(long j, long j5) {
        return this.E.f(j, j5);
    }

    @Override // qd.i
    public final boolean v() {
        return this.E.i();
    }

    @Override // qd.i
    public final long w() {
        return this.E.f17258d;
    }

    @Override // qd.i
    public final long z(long j) {
        return this.E.d(j);
    }

    @Override // rd.m
    public final qd.i c() {
        return this;
    }
}
