package sd;

import bg.y0;
import com.google.android.exoplayer2.Format;
import java.util.ArrayList;
import java.util.Iterator;
import ke.d0;
import nd.q0;

/* loaded from: classes3.dex */
public final class p implements q0 {

    /* renamed from: d, reason: collision with root package name */
    public final int f17902d;

    /* renamed from: e, reason: collision with root package name */
    public final t f17903e;

    /* renamed from: i, reason: collision with root package name */
    public int f17904i = -1;

    public p(t tVar, int i5) {
        this.f17903e = tVar;
        this.f17902d = i5;
    }

    public final void a() {
        ke.b.g(this.f17904i == -1);
        t tVar = this.f17903e;
        tVar.f();
        tVar.h0.getClass();
        int[] iArr = tVar.h0;
        int i5 = this.f17902d;
        int i6 = iArr[i5];
        if (i6 == -1) {
            if (tVar.f17921g0.contains(tVar.f17920f0.a(i5))) {
                i6 = -3;
            }
            i6 = -2;
        } else {
            boolean[] zArr = tVar.f17925k0;
            if (!zArr[i6]) {
                zArr[i6] = true;
            }
            i6 = -2;
        }
        this.f17904i = i6;
    }

    @Override // nd.q0
    public final void b() {
        int i5 = this.f17904i;
        t tVar = this.f17903e;
        if (i5 == -2) {
            tVar.f();
            throw new y0(s4.h.f("Unable to bind a sample queue to TrackGroup with MIME type ", tVar.f17920f0.a(this.f17902d).f15211v[0].I, "."));
        }
        if (i5 == -1) {
            tVar.E();
        } else if (i5 != -3) {
            tVar.E();
            tVar.S[i5].t();
        }
    }

    @Override // nd.q0
    public final int c(long j) {
        Object next;
        Object obj;
        if (!d()) {
            return 0;
        }
        int i5 = this.f17904i;
        t tVar = this.f17903e;
        if (tVar.C()) {
            return 0;
        }
        s sVar = tVar.S[i5];
        int p3 = sVar.p(j, tVar.f17931q0);
        ArrayList arrayList = tVar.K;
        if (arrayList != null) {
            if (!arrayList.isEmpty()) {
                obj = k0.d.f(1, arrayList);
            }
            obj = null;
        } else {
            Iterator it = arrayList.iterator();
            if (it.hasNext()) {
                do {
                    next = it.next();
                } while (it.hasNext());
                obj = next;
            }
            obj = null;
        }
        m mVar = (m) obj;
        if (mVar != null && !mVar.h0) {
            p3 = Math.min(p3, mVar.e(i5) - sVar.n());
        }
        sVar.z(p3);
        return p3;
    }

    public final boolean d() {
        int i5 = this.f17904i;
        return (i5 == -1 || i5 == -3 || i5 == -2) ? false : true;
    }

    @Override // nd.q0
    public final int f(e4.l lVar, mc.f fVar, int i5) {
        Format format;
        if (this.f17904i == -3) {
            fVar.a(4);
            return -4;
        }
        if (d()) {
            int i6 = this.f17904i;
            t tVar = this.f17903e;
            ArrayList arrayList = tVar.K;
            if (!tVar.C()) {
                int i10 = 0;
                if (!arrayList.isEmpty()) {
                    int i11 = 0;
                    loop0: while (i11 < arrayList.size() - 1) {
                        int i12 = ((m) arrayList.get(i11)).H;
                        int length = tVar.S.length;
                        for (int i13 = 0; i13 < length; i13++) {
                            if (tVar.f17925k0[i13] && tVar.S[i13].v() == i12) {
                                break loop0;
                            }
                        }
                        i11++;
                    }
                    d0.N(arrayList, 0, i11);
                    m mVar = (m) arrayList.get(0);
                    Format format2 = mVar.f16363v;
                    if (!format2.equals(tVar.f17917d0)) {
                        tVar.H.e(tVar.f17918e, format2, mVar.f16364w, mVar.f16365x, mVar.f16366y);
                    }
                    tVar.f17917d0 = format2;
                }
                if (arrayList.isEmpty() || ((m) arrayList.get(0)).h0) {
                    int w5 = tVar.S[i6].w(lVar, fVar, i5, tVar.f17931q0);
                    if (w5 == -5) {
                        Format format3 = (Format) lVar.f7960i;
                        format3.getClass();
                        if (i6 == tVar.Y) {
                            int d6 = ki.b.d(tVar.S[i6].v());
                            while (i10 < arrayList.size() && ((m) arrayList.get(i10)).H != d6) {
                                i10++;
                            }
                            if (i10 < arrayList.size()) {
                                format = ((m) arrayList.get(i10)).f16363v;
                            } else {
                                format = tVar.f17915c0;
                                format.getClass();
                            }
                            format3 = format3.c(format);
                        }
                        lVar.f7960i = format3;
                    }
                    return w5;
                }
            }
        }
        return -3;
    }

    @Override // nd.q0
    public final boolean isReady() {
        if (this.f17904i == -3) {
            return true;
        }
        if (!d()) {
            return false;
        }
        int i5 = this.f17904i;
        t tVar = this.f17903e;
        return !tVar.C() && tVar.S[i5].r(tVar.f17931q0);
    }
}
