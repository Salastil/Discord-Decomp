package i0;

import android.graphics.Paint;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class m extends f0 {
    public final h0 O;
    public l P;

    static {
        d0.g fVar;
        Paint setNativeStyle = new Paint(7);
        Intrinsics.checkNotNullParameter(setNativeStyle, "internalPaint");
        long j = c0.a.f3267b;
        Intrinsics.checkNotNullParameter(setNativeStyle, "$this$setNativeColor");
        d0.p destination = d0.d.f7353c;
        Intrinsics.checkNotNullParameter(destination, "colorSpace");
        long j5 = 63 & j;
        fo.e0 e0Var = fo.f0.f8814e;
        d0.c source = d0.d.f7356f[(int) j5];
        if (!Intrinsics.areEqual(destination, source)) {
            Intrinsics.checkNotNullParameter(source, "$this$connect");
            Intrinsics.checkNotNullParameter(destination, "destination");
            if (source == destination) {
                fVar = d0.g.f7360e;
            } else if (source == d0.d.f7355e) {
                fVar = d0.g.f7361f;
            } else if (source == destination) {
                d0.e eVar = d0.g.f7360e;
                Intrinsics.checkNotNullParameter(source, "source");
                fVar = new d0.e(source, source, 1);
            } else {
                long j7 = source.f7350b;
                long j10 = d0.b.a;
                fVar = (d0.b.a(j7, j10) && d0.b.a(destination.f7350b, j10)) ? new d0.f((d0.p) source, destination) : new d0.g(source, destination, 0);
            }
            j = fVar.a(j5 == 0 ? ((float) ks.n.A((j >>> 48) & 255)) / 255.0f : c0.b.b((short) ((j >>> 48) & 65535)), j5 == 0 ? ((float) ks.n.A((j >>> 40) & 255)) / 255.0f : c0.b.b((short) ((j >>> 32) & 65535)), j5 == 0 ? ((float) ks.n.A((j >>> 32) & 255)) / 255.0f : c0.b.b((short) (65535 & (j >>> 16))), j5 == 0 ? ((float) ks.n.A((j >>> 56) & 255)) / 255.0f : ((float) ks.n.A((j >>> 6) & 1023)) / 1023.0f);
        }
        setNativeStyle.setColor((int) (j >>> 32));
        Intrinsics.checkNotNullParameter(setNativeStyle, "<this>");
        setNativeStyle.setStrokeWidth(1.0f);
        Intrinsics.checkNotNullParameter(setNativeStyle, "$this$setNativeStyle");
        setNativeStyle.setStyle(Paint.Style.STROKE);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(u layoutNode) {
        super(layoutNode);
        Intrinsics.checkNotNullParameter(layoutNode, "layoutNode");
        h0 h0Var = new h0();
        h0Var.f21117c = 0;
        this.O = h0Var;
        h0Var.f21120f = this;
        this.P = layoutNode.f10407c != null ? new l(this) : null;
    }

    @Override // i0.f0
    public final void C() {
        if (this.P == null) {
            this.P = new l(this);
        }
    }

    @Override // i0.f0
    public final b0 D() {
        return this.P;
    }

    @Override // i0.f0
    public final z.e F() {
        return this.O;
    }

    @Override // g0.m
    public final int a(int i5) {
        e4.c cVar = this.E.f10410f;
        g0.n W0 = cVar.W0();
        u uVar = (u) cVar.f7939e;
        return W0.maxIntrinsicHeight(uVar.f10414l.f10383c, uVar.c(), i5);
    }

    @Override // g0.m
    public final int e(int i5) {
        e4.c cVar = this.E.f10410f;
        g0.n W0 = cVar.W0();
        u uVar = (u) cVar.f7939e;
        return W0.minIntrinsicWidth(uVar.f10414l.f10383c, uVar.c(), i5);
    }

    @Override // g0.m
    public final int f(int i5) {
        e4.c cVar = this.E.f10410f;
        g0.n W0 = cVar.W0();
        u uVar = (u) cVar.f7939e;
        return W0.maxIntrinsicWidth(uVar.f10414l.f10383c, uVar.c(), i5);
    }

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0053, code lost:
    
        if (r5.f6252b == r10.f6252b) goto L35;
     */
    @Override // g0.m
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final g0.t g(long j) {
        p(j);
        u uVar = this.E;
        v.d dVar = (v.d) uVar.f10408d.f9613d;
        int i5 = dVar.f19132i;
        if (i5 > 0) {
            Object[] objArr = dVar.f19130d;
            int i6 = 0;
            do {
                ((u) objArr[i6]).f10415m.f10434i.getClass();
                Intrinsics.checkNotNullParameter(s.f10401d, "<set-?>");
                i6++;
            } while (i6 < i5);
        }
        g0.o value = uVar.f10409e.mo43measure3p2s80s(this, uVar.c(), j);
        Intrinsics.checkNotNullParameter(value, "value");
        g0.o oVar = this.K;
        h0 h0Var = this.O;
        if (value != oVar) {
            this.K = value;
            if (oVar != null) {
                com.google.firebase.messaging.p pVar = (com.google.firebase.messaging.p) value;
                com.google.firebase.messaging.p pVar2 = (com.google.firebase.messaging.p) oVar;
                if (pVar.a == pVar2.a) {
                }
            }
            com.google.firebase.messaging.p pVar3 = (com.google.firebase.messaging.p) value;
            int i10 = pVar3.a;
            int i11 = pVar3.f6252b;
            f0 f0Var = this.G;
            if (f0Var != null) {
                f0Var.H();
            }
            o(ys.l.a(i10, i11));
            z.e eVar = h0Var.f21118d;
            if (eVar != null) {
                for (z.e G = G(false); G != null && (G.f21117c & 4) != 0; G = G.f21119e) {
                    if ((G.f21116b & 4) != 0) {
                        for (z.e eVar2 = G; eVar2 != null; eVar2 = null) {
                            if (eVar2 instanceof c) {
                                c cVar = (c) eVar2;
                                cVar.getClass();
                                w.c(cVar);
                            }
                        }
                    }
                    if (G == eVar) {
                        break;
                    }
                }
            }
            LinkedHashMap linkedHashMap = this.L;
            if ((linkedHashMap != null && !linkedHashMap.isEmpty()) || !((Map) ((com.google.firebase.messaging.p) value).f6253c).isEmpty()) {
                com.google.firebase.messaging.p pVar4 = (com.google.firebase.messaging.p) value;
                if (!Intrinsics.areEqual((Map) pVar4.f6253c, this.L)) {
                    uVar.f10415m.f10434i.H.d();
                    LinkedHashMap linkedHashMap2 = this.L;
                    if (linkedHashMap2 == null) {
                        linkedHashMap2 = new LinkedHashMap();
                        this.L = linkedHashMap2;
                    }
                    linkedHashMap2.clear();
                    linkedHashMap2.putAll((Map) pVar4.f6253c);
                }
            }
        }
        z.e has = G(true);
        if (has != null) {
            Intrinsics.checkNotNullParameter(has, "$this$has");
            if ((has.a.f21117c & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
                k2.r rVar = y.f.a;
                y.c cVar2 = (y.c) rVar.get();
                boolean z5 = cVar2 instanceof y.b;
                y.c iVar = (z5 || cVar2 == null) ? new y.i(z5 ? (y.b) cVar2 : null, null, false, false) : new y.j(cVar2, null, false);
                try {
                    y.c cVar3 = (y.c) rVar.get();
                    rVar.J(iVar);
                    try {
                        for (z.e G2 = G(true); G2 != null && (G2.f21117c & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0; G2 = G2.f21119e) {
                            if ((G2.f21116b & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
                                for (z.e eVar3 = G2; eVar3 != null; eVar3 = null) {
                                    if (eVar3 instanceof c) {
                                    }
                                }
                            }
                            if (G2 == h0Var) {
                                break;
                            }
                        }
                        Unit unit = Unit.a;
                        y.f.a.J(cVar3);
                        return this;
                    } catch (Throwable th2) {
                        y.f.a.J(cVar3);
                        throw th2;
                    }
                } finally {
                    iVar.a();
                }
            }
        }
        return this;
    }

    @Override // g0.m
    public final int k(int i5) {
        e4.c cVar = this.E.f10410f;
        g0.n W0 = cVar.W0();
        u uVar = (u) cVar.f7939e;
        return W0.minIntrinsicHeight(uVar.f10414l.f10383c, uVar.c(), i5);
    }

    @Override // g0.t
    public final void n(long j) {
        K(j);
        if (this.f10379x) {
            return;
        }
        J();
        y yVar = this.E.f10415m.f10434i;
        z zVar = yVar.L;
        yVar.b().getClass();
        c0 c0Var = zVar.a.f10414l;
        f0 f0Var = c0Var.f10383c;
        m mVar = c0Var.f10382b;
        while (f0Var != mVar) {
            Intrinsics.checkNotNull(f0Var, "null cannot be cast to non-null type androidx.compose.ui.node.LayoutModifierNodeCoordinator");
            o oVar = (o) f0Var;
            oVar.getClass();
            f0Var = oVar.F;
        }
        if (0.0f != yVar.K) {
            yVar.K = 0.0f;
        }
        if (!yVar.G) {
            yVar.q();
        }
        yVar.f10425x = 0;
        yVar.h();
    }

    @Override // i0.a0
    public final int q(g0.f alignmentLine) {
        Intrinsics.checkNotNullParameter(alignmentLine, "alignmentLine");
        l lVar = this.P;
        if (lVar != null) {
            return lVar.q(alignmentLine);
        }
        y yVar = this.E.f10415m.f10434i;
        v vVar = yVar.H;
        z zVar = yVar.L;
        if (zVar.f10427b == 1) {
            vVar.f10418c = true;
            if (vVar.f10417b) {
                zVar.f10428c = true;
                zVar.f10429d = true;
            }
        } else {
            vVar.f10419d = true;
        }
        yVar.b().f10380y = true;
        yVar.h();
        yVar.b().f10380y = false;
        Integer num = (Integer) vVar.f10421f.get(alignmentLine);
        if (num != null) {
            return num.intValue();
        }
        return Integer.MIN_VALUE;
    }
}
