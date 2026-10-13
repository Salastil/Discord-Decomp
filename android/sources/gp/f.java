package gp;

import fr.s;
import ip.o0;
import ip.v;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import lp.l0;
import lp.r0;
import lp.t;
import yq.w0;
import yq.y;

/* loaded from: classes3.dex */
public final class f extends l0 {
    public f(ip.l lVar, f fVar, ip.c cVar, boolean z5) {
        super(lVar, fVar, jp.g.a, s.f9040g, cVar, o0.f12151g);
        this.K = true;
        this.S = z5;
        this.T = false;
    }

    @Override // lp.l0, lp.t
    public final t D0(hq.e eVar, ip.c kind, ip.l newOwner, v vVar, o0 source, jp.h annotations) {
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(source, "source");
        return new f(newOwner, (f) vVar, kind, this.S);
    }

    @Override // lp.t
    public final t E0(lp.s configuration) {
        hq.e eVar;
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        f fVar = (f) super.E0(configuration);
        if (fVar == null) {
            return null;
        }
        List P = fVar.P();
        Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
        if (P != null && P.isEmpty()) {
            return fVar;
        }
        Iterator it = P.iterator();
        while (it.hasNext()) {
            y type = ((r0) it.next()).getType();
            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
            if (nt.a.o(type) != null) {
                List P2 = fVar.P();
                Intrinsics.checkNotNullExpressionValue(P2, "getValueParameters(...)");
                ArrayList arrayList = new ArrayList(d0.l(P2, 10));
                Iterator it2 = P2.iterator();
                while (it2.hasNext()) {
                    y type2 = ((r0) it2.next()).getType();
                    Intrinsics.checkNotNullExpressionValue(type2, "getType(...)");
                    arrayList.add(nt.a.o(type2));
                }
                int size = fVar.P().size() - arrayList.size();
                boolean z5 = true;
                if (size == 0) {
                    List P3 = fVar.P();
                    Intrinsics.checkNotNullExpressionValue(P3, "getValueParameters(...)");
                    ArrayList n02 = CollectionsKt.n0(arrayList, P3);
                    if (n02.isEmpty()) {
                        return fVar;
                    }
                    Iterator it3 = n02.iterator();
                    while (it3.hasNext()) {
                        Pair pair = (Pair) it3.next();
                        if (!Intrinsics.areEqual((hq.e) pair.f13474d, ((r0) pair.f13475e).getName())) {
                        }
                    }
                    return fVar;
                }
                List<r0> P4 = fVar.P();
                Intrinsics.checkNotNullExpressionValue(P4, "getValueParameters(...)");
                ArrayList arrayList2 = new ArrayList(d0.l(P4, 10));
                for (r0 r0Var : P4) {
                    hq.e name = r0Var.getName();
                    Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                    int i5 = r0Var.f14177y;
                    int i6 = i5 - size;
                    if (i6 >= 0 && (eVar = (hq.e) arrayList.get(i6)) != null) {
                        name = eVar;
                    }
                    arrayList2.add(r0Var.B0(fVar, name, i5));
                }
                lp.s H0 = fVar.H0(w0.f21077b);
                if (!arrayList.isEmpty()) {
                    Iterator it4 = arrayList.iterator();
                    while (it4.hasNext()) {
                        if (((hq.e) it4.next()) == null) {
                            break;
                        }
                    }
                }
                z5 = false;
                H0.S = Boolean.valueOf(z5);
                H0.f14184y = arrayList2;
                H0.f14182w = fVar.a();
                Intrinsics.checkNotNullExpressionValue(H0, "setOriginal(...)");
                t E0 = super.E0(H0);
                Intrinsics.checkNotNull(E0);
                return E0;
            }
        }
        return fVar;
    }

    @Override // lp.t, ip.v
    public final boolean F() {
        return false;
    }

    @Override // lp.t, ip.y
    public final boolean isExternal() {
        return false;
    }

    @Override // lp.t, ip.v
    public final boolean isInline() {
        return false;
    }
}
