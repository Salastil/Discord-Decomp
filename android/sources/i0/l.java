package i0;

import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class l extends b0 {
    @Override // i0.b0
    public final void C() {
        x xVar = this.E.E.f10415m.j;
        Intrinsics.checkNotNull(xVar);
        u uVar = xVar.K.a;
        if (!xVar.E) {
            xVar.q();
        }
        xVar.h();
    }

    @Override // g0.m
    public final int a(int i5) {
        e4.c cVar = this.E.E.f10410f;
        g0.n W0 = cVar.W0();
        u uVar = (u) cVar.f7939e;
        return W0.maxIntrinsicHeight(uVar.f10414l.f10383c, uVar.b(), i5);
    }

    @Override // g0.m
    public final int e(int i5) {
        e4.c cVar = this.E.E.f10410f;
        g0.n W0 = cVar.W0();
        u uVar = (u) cVar.f7939e;
        return W0.minIntrinsicWidth(uVar.f10414l.f10383c, uVar.b(), i5);
    }

    @Override // g0.m
    public final int f(int i5) {
        e4.c cVar = this.E.E.f10410f;
        g0.n W0 = cVar.W0();
        u uVar = (u) cVar.f7939e;
        return W0.maxIntrinsicWidth(uVar.f10414l.f10383c, uVar.b(), i5);
    }

    @Override // g0.m
    public final g0.t g(long j) {
        Unit unit;
        LinkedHashMap linkedHashMap;
        p(j);
        f0 f0Var = this.E;
        v.d dVar = (v.d) f0Var.E.f10408d.f9613d;
        int i5 = dVar.f19132i;
        if (i5 > 0) {
            Object[] objArr = dVar.f19130d;
            int i6 = 0;
            do {
                x xVar = ((u) objArr[i6]).f10415m.j;
                Intrinsics.checkNotNull(xVar);
                xVar.getClass();
                Intrinsics.checkNotNullParameter(s.f10401d, "<set-?>");
                i6++;
            } while (i6 < i5);
        }
        u uVar = f0Var.E;
        g0.o mo43measure3p2s80s = uVar.f10409e.mo43measure3p2s80s(this, uVar.b(), j);
        if (mo43measure3p2s80s != null) {
            com.google.firebase.messaging.p pVar = (com.google.firebase.messaging.p) mo43measure3p2s80s;
            o(ys.l.a(pVar.a, pVar.f6252b));
            unit = Unit.a;
        } else {
            unit = null;
        }
        if (unit == null) {
            o(0L);
        }
        if (!Intrinsics.areEqual(this.H, mo43measure3p2s80s) && mo43measure3p2s80s != null && (((linkedHashMap = this.G) != null && !linkedHashMap.isEmpty()) || !((Map) ((com.google.firebase.messaging.p) mo43measure3p2s80s).f6253c).isEmpty())) {
            Map map = (Map) ((com.google.firebase.messaging.p) mo43measure3p2s80s).f6253c;
            if (!Intrinsics.areEqual(map, this.G)) {
                x xVar2 = f0Var.E.f10415m.j;
                Intrinsics.checkNotNull(xVar2);
                xVar2.F.d();
                LinkedHashMap linkedHashMap2 = this.G;
                if (linkedHashMap2 == null) {
                    linkedHashMap2 = new LinkedHashMap();
                    this.G = linkedHashMap2;
                }
                linkedHashMap2.clear();
                linkedHashMap2.putAll(map);
            }
        }
        this.H = mo43measure3p2s80s;
        return this;
    }

    @Override // g0.m
    public final int k(int i5) {
        e4.c cVar = this.E.E.f10410f;
        g0.n W0 = cVar.W0();
        u uVar = (u) cVar.f7939e;
        return W0.minIntrinsicHeight(uVar.f10414l.f10383c, uVar.b(), i5);
    }

    @Override // i0.a0
    public final int q(g0.f alignmentLine) {
        Intrinsics.checkNotNullParameter(alignmentLine, "alignmentLine");
        x xVar = this.E.E.f10415m.j;
        Intrinsics.checkNotNull(xVar);
        v vVar = xVar.F;
        z zVar = xVar.K;
        if (zVar.f10427b == 2) {
            vVar.f10418c = true;
            if (vVar.f10417b) {
                zVar.f10430e = true;
                zVar.f10431f = true;
            }
        } else {
            vVar.f10419d = true;
        }
        l lVar = xVar.b().P;
        if (lVar != null) {
            lVar.f10380y = true;
        }
        xVar.h();
        l lVar2 = xVar.b().P;
        if (lVar2 != null) {
            lVar2.f10380y = false;
        }
        Integer num = (Integer) vVar.f10421f.get(alignmentLine);
        int intValue = num != null ? num.intValue() : Integer.MIN_VALUE;
        this.I.put(alignmentLine, Integer.valueOf(intValue));
        return intValue;
    }
}
