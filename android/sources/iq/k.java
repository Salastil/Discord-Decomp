package iq;

import com.google.android.gms.internal.play_billing.w1;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* loaded from: classes3.dex */
public abstract class k extends n {

    /* renamed from: d, reason: collision with root package name */
    public final h f12228d;

    public k() {
        this.f12228d = new h();
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x003a, code lost:
    
        return false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean i() {
        y yVar = this.f12228d.a;
        int i5 = 0;
        while (true) {
            if (i5 >= yVar.f12252e.size()) {
                Iterator it = yVar.c().iterator();
                while (it.hasNext()) {
                    if (!h.e((Map.Entry) it.next())) {
                    }
                }
                return true;
            }
            if (!h.e((Map.Entry) yVar.f12252e.get(i5))) {
                break;
            }
            i5++;
        }
    }

    public final int j() {
        y yVar = this.f12228d.a;
        int i5 = 0;
        for (int i6 = 0; i6 < yVar.f12252e.size(); i6++) {
            Map.Entry entry = (Map.Entry) yVar.f12252e.get(i6);
            i5 += h.d((l) entry.getKey(), entry.getValue());
        }
        for (Map.Entry entry2 : yVar.c()) {
            i5 += h.d((l) entry2.getKey(), entry2.getValue());
        }
        return i5;
    }

    public final Object k(m mVar) {
        o(mVar);
        l lVar = mVar.f12234d;
        Object obj = this.f12228d.a.get(lVar);
        if (obj == null) {
            return mVar.f12232b;
        }
        if (!lVar.f12231i) {
            return mVar.a(obj);
        }
        if (lVar.f12230e.f12217d != j0.F) {
            return obj;
        }
        ArrayList arrayList = new ArrayList();
        Iterator it = ((List) obj).iterator();
        while (it.hasNext()) {
            arrayList.add(mVar.a(it.next()));
        }
        return arrayList;
    }

    public final boolean l(m mVar) {
        o(mVar);
        l lVar = mVar.f12234d;
        h hVar = this.f12228d;
        hVar.getClass();
        if (lVar.f12231i) {
            throw new IllegalArgumentException("hasField() can only be called on non-repeated fields.");
        }
        return hVar.a.get(lVar) != null;
    }

    public final void m() {
        this.f12228d.f();
    }

    /* JADX WARN: Removed duplicated region for block: B:5:0x003a  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x003f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean n(e eVar, w1 w1Var, g gVar, int i5) {
        boolean z5;
        boolean z6;
        Object c6;
        a aVar;
        int i6 = i5 & 7;
        m mVar = (m) gVar.a.get(new f(i5 >>> 3, a()));
        if (mVar != null) {
            l lVar = mVar.f12234d;
            i0 i0Var = lVar.f12230e;
            h hVar = h.f12209c;
            if (i6 == i0Var.f12218e) {
                z6 = false;
                z5 = false;
            } else if (lVar.f12231i && i0Var.a() && i6 == 2) {
                z5 = true;
                z6 = false;
            }
            if (!z6) {
                return eVar.q(i5, w1Var);
            }
            i iVar = null;
            h hVar2 = this.f12228d;
            if (z5) {
                int d6 = eVar.d(eVar.k());
                l lVar2 = mVar.f12234d;
                if (lVar2.f12230e != i0.f12216y) {
                    while (eVar.b() > 0) {
                        hVar2.a(lVar2, h.h(eVar, lVar2.f12230e));
                    }
                } else if (eVar.b() > 0) {
                    eVar.k();
                    throw null;
                }
                eVar.c(d6);
                return true;
            }
            l lVar3 = mVar.f12234d;
            i0 i0Var2 = lVar3.f12230e;
            boolean z7 = lVar3.f12231i;
            int ordinal = i0Var2.f12217d.ordinal();
            if (ordinal == 7) {
                eVar.k();
                throw null;
            }
            if (ordinal != 8) {
                c6 = h.h(eVar, i0Var2);
            } else {
                if (!z7 && (aVar = (a) hVar2.a.get(lVar3)) != null) {
                    iVar = aVar.e();
                }
                if (iVar == null) {
                    iVar = mVar.f12233c.d();
                }
                if (i0Var2 == i0.f12214w) {
                    int i10 = lVar3.f12229d;
                    int i11 = eVar.f12206i;
                    if (i11 >= 64) {
                        throw new q("Protocol message had too many levels of nesting.  May be malicious.  Use CodedInputStream.setRecursionLimit() to increase the depth limit.");
                    }
                    eVar.f12206i = i11 + 1;
                    iVar.d(eVar, gVar);
                    eVar.a((i10 << 3) | 4);
                    eVar.f12206i--;
                } else {
                    int k = eVar.k();
                    if (eVar.f12206i >= 64) {
                        throw new q("Protocol message had too many levels of nesting.  May be malicious.  Use CodedInputStream.setRecursionLimit() to increase the depth limit.");
                    }
                    int d7 = eVar.d(k);
                    eVar.f12206i++;
                    iVar.d(eVar, gVar);
                    eVar.a(0);
                    eVar.f12206i--;
                    eVar.c(d7);
                }
                c6 = iVar.c();
            }
            if (z7) {
                hVar2.a(lVar3, mVar.b(c6));
                return true;
            }
            hVar2.i(lVar3, mVar.b(c6));
            return true;
        }
        z6 = true;
        z5 = false;
        if (!z6) {
        }
    }

    public final void o(m mVar) {
        if (mVar.a != a()) {
            throw new IllegalArgumentException("This extension is for a different message type.  Please make sure that you are not suppressing any generics type warnings.");
        }
    }

    public k(j jVar) {
        jVar.f12219e.f();
        jVar.f12220i = false;
        this.f12228d = jVar.f12219e;
    }
}
