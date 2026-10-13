package nd;

import android.util.Pair;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.Timeline;
import hc.s1;

/* loaded from: classes3.dex */
public abstract class c1 extends g {
    public final a H;

    public c1(a aVar) {
        this.H = aVar;
    }

    public final void A() {
        y(null, this.H);
    }

    @Override // nd.a
    public final Timeline g() {
        return this.H.g();
    }

    @Override // nd.a
    public final MediaItem h() {
        return this.H.h();
    }

    @Override // nd.a
    public final boolean i() {
        return this.H.i();
    }

    @Override // nd.a
    public final void m(ie.u0 u0Var) {
        this.G = u0Var;
        this.F = ke.d0.m(null);
        o oVar = (o) this;
        if (oVar.I) {
            return;
        }
        oVar.N = true;
        oVar.A();
    }

    @Override // nd.g
    public final s t(Object obj, s sVar) {
        Object obj2 = sVar.a;
        Object obj3 = ((o) this).L.f15139v;
        if (obj3 != null && obj3.equals(obj2)) {
            obj2 = m.f15137w;
        }
        return sVar.b(obj2);
    }

    @Override // nd.g
    public final long u(long j, Object obj) {
        return j;
    }

    @Override // nd.g
    public final int w(int i5, Object obj) {
        return i5;
    }

    /* JADX WARN: Removed duplicated region for block: B:18:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x008c  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00a4  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0098  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x00cf  */
    @Override // nd.g
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void x(Object obj, a aVar, Timeline timeline) {
        long j;
        m mVar;
        l lVar;
        s b10;
        m mVar2;
        o oVar = (o) this;
        if (oVar.O) {
            m mVar3 = oVar.L;
            oVar.L = new m(timeline, mVar3.f15138i, mVar3.f15139v);
            l lVar2 = oVar.M;
            if (lVar2 != null) {
                oVar.C(lVar2.f15130y);
            }
        } else if (timeline.p()) {
            if (oVar.P) {
                m mVar4 = oVar.L;
                mVar2 = new m(timeline, mVar4.f15138i, mVar4.f15139v);
            } else {
                mVar2 = new m(timeline, Timeline.Window.O, m.f15137w);
            }
            oVar.L = mVar2;
        } else {
            Timeline.Window window = oVar.J;
            timeline.n(0, window);
            long j5 = window.J;
            Object obj2 = window.f5292d;
            l lVar3 = oVar.M;
            if (lVar3 != null) {
                long j7 = lVar3.f15125e;
                m mVar5 = oVar.L;
                Object obj3 = lVar3.f15124d.a;
                s1 s1Var = oVar.K;
                mVar5.g(obj3, s1Var);
                long j10 = s1Var.f9873w + j7;
                oVar.L.m(0, window, 0L);
                if (j10 != window.J) {
                    j = j10;
                    Pair i5 = timeline.i(oVar.J, oVar.K, 0, j);
                    Object obj4 = i5.first;
                    long longValue = ((Long) i5.second).longValue();
                    if (oVar.P) {
                        mVar = new m(timeline, obj2, obj4);
                    } else {
                        m mVar6 = oVar.L;
                        mVar = new m(timeline, mVar6.f15138i, mVar6.f15139v);
                    }
                    oVar.L = mVar;
                    lVar = oVar.M;
                    if (lVar != null) {
                        oVar.C(longValue);
                        s sVar = lVar.f15124d;
                        Object obj5 = sVar.a;
                        if (oVar.L.f15139v != null && obj5.equals(m.f15137w)) {
                            obj5 = oVar.L.f15139v;
                        }
                        b10 = sVar.b(obj5);
                        oVar.P = true;
                        oVar.O = true;
                        oVar.n(oVar.L);
                        if (b10 == null) {
                            l lVar4 = oVar.M;
                            lVar4.getClass();
                            long j11 = lVar4.f15125e;
                            long j12 = lVar4.f15130y;
                            if (j12 != -9223372036854775807L) {
                                j11 = j12;
                            }
                            a aVar2 = lVar4.f15127v;
                            aVar2.getClass();
                            q b11 = aVar2.b(b10, lVar4.f15126i, j11);
                            lVar4.f15128w = b11;
                            if (lVar4.f15129x != null) {
                                b11.p(lVar4, j11);
                                return;
                            }
                            return;
                        }
                        return;
                    }
                }
            }
            j = j5;
            Pair i52 = timeline.i(oVar.J, oVar.K, 0, j);
            Object obj42 = i52.first;
            long longValue2 = ((Long) i52.second).longValue();
            if (oVar.P) {
            }
            oVar.L = mVar;
            lVar = oVar.M;
            if (lVar != null) {
            }
        }
        b10 = null;
        oVar.P = true;
        oVar.O = true;
        oVar.n(oVar.L);
        if (b10 == null) {
        }
    }
}
