package nd;

import com.google.android.exoplayer2.Timeline;
import hc.s1;

/* loaded from: classes3.dex */
public final class o extends c1 {
    public final boolean I;
    public final Timeline.Window J;
    public final s1 K;
    public m L;
    public l M;
    public boolean N;
    public boolean O;
    public boolean P;

    public o(a aVar, boolean z5) {
        super(aVar);
        this.I = z5 && aVar.i();
        this.J = new Timeline.Window();
        this.K = new s1();
        Timeline g6 = aVar.g();
        if (g6 == null) {
            this.L = new m(new n(aVar.h()), Timeline.Window.O, m.f15137w);
        } else {
            this.L = new m(g6, null, null);
            this.P = true;
        }
    }

    @Override // nd.a
    /* renamed from: B, reason: merged with bridge method [inline-methods] */
    public final l b(s sVar, ie.q qVar, long j) {
        l lVar = new l(sVar, qVar, j);
        ke.b.k(lVar.f15127v == null);
        lVar.f15127v = this.H;
        if (this.O) {
            Object obj = sVar.a;
            if (this.L.f15139v != null && obj.equals(m.f15137w)) {
                obj = this.L.f15139v;
            }
            s b10 = sVar.b(obj);
            long j5 = lVar.f15130y;
            if (j5 != -9223372036854775807L) {
                j = j5;
            }
            a aVar = lVar.f15127v;
            aVar.getClass();
            q b11 = aVar.b(b10, qVar, j);
            lVar.f15128w = b11;
            if (lVar.f15129x != null) {
                b11.p(lVar, j);
                return lVar;
            }
        } else {
            this.M = lVar;
            if (!this.N) {
                this.N = true;
                A();
            }
        }
        return lVar;
    }

    public final void C(long j) {
        l lVar = this.M;
        int b10 = this.L.b(lVar.f15124d.a);
        if (b10 == -1) {
            return;
        }
        m mVar = this.L;
        s1 s1Var = this.K;
        mVar.f(b10, s1Var, false);
        long j5 = s1Var.f9872v;
        if (j5 != -9223372036854775807L && j >= j5) {
            j = Math.max(0L, j5 - 1);
        }
        lVar.f15130y = j;
    }

    @Override // nd.a
    public final void o(q qVar) {
        l lVar = (l) qVar;
        if (lVar.f15128w != null) {
            a aVar = lVar.f15127v;
            aVar.getClass();
            aVar.o(lVar.f15128w);
        }
        if (qVar == this.M) {
            this.M = null;
        }
    }

    @Override // nd.g, nd.a
    public final void q() {
        this.O = false;
        this.N = false;
        super.q();
    }

    @Override // nd.a
    public final void j() {
    }
}
