package nd;

import com.google.android.exoplayer2.Format;
import java.util.List;

/* loaded from: classes3.dex */
public final class y implements ge.p {
    public final ge.p a;

    /* renamed from: b, reason: collision with root package name */
    public final z0 f15202b;

    public y(ge.p pVar, z0 z0Var) {
        this.a = pVar;
        this.f15202b = z0Var;
    }

    @Override // ge.p
    public final boolean a(int i5, long j) {
        return this.a.a(i5, j);
    }

    @Override // ge.p
    public final z0 b() {
        return this.f15202b;
    }

    @Override // ge.p
    public final void c(long j, long j5, long j7, List list, pd.m[] mVarArr) {
        this.a.c(j, j5, j7, list, mVarArr);
    }

    @Override // ge.p
    public final int d() {
        return this.a.d();
    }

    @Override // ge.p
    public final void disable() {
        this.a.disable();
    }

    @Override // ge.p
    public final boolean e(long j, pd.e eVar, List list) {
        return this.a.e(j, eVar, list);
    }

    @Override // ge.p
    public final void enable() {
        this.a.enable();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof y)) {
            return false;
        }
        y yVar = (y) obj;
        return this.a.equals(yVar.a) && this.f15202b.equals(yVar.f15202b);
    }

    @Override // ge.p
    public final void f(boolean z5) {
        this.a.f(z5);
    }

    @Override // ge.p
    public final Format g(int i5) {
        return this.a.g(i5);
    }

    @Override // ge.p
    public final int h(int i5) {
        return this.a.h(i5);
    }

    public final int hashCode() {
        return this.a.hashCode() + ((this.f15202b.hashCode() + 527) * 31);
    }

    @Override // ge.p
    public final int i(long j, List list) {
        return this.a.i(j, list);
    }

    @Override // ge.p
    public final int j(Format format) {
        return this.a.j(format);
    }

    @Override // ge.p
    public final int k() {
        return this.a.k();
    }

    @Override // ge.p
    public final Format l() {
        return this.a.l();
    }

    @Override // ge.p
    public final int length() {
        return this.a.length();
    }

    @Override // ge.p
    public final int m() {
        return this.a.m();
    }

    @Override // ge.p
    public final boolean n(int i5, long j) {
        return this.a.n(i5, j);
    }

    @Override // ge.p
    public final void o(float f2) {
        this.a.o(f2);
    }

    @Override // ge.p
    public final Object p() {
        return this.a.p();
    }

    @Override // ge.p
    public final void q() {
        this.a.q();
    }

    @Override // ge.p
    public final void r() {
        this.a.r();
    }

    @Override // ge.p
    public final int s(int i5) {
        return this.a.s(i5);
    }
}
