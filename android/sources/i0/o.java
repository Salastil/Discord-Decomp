package i0;

import android.graphics.Paint;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class o extends f0 {
    public c O;
    public n P;

    static {
        d0.g fVar;
        Paint setNativeStyle = new Paint(7);
        Intrinsics.checkNotNullParameter(setNativeStyle, "internalPaint");
        long j = c0.a.f3268c;
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

    @Override // i0.f0
    public final void C() {
        if (this.P == null) {
            this.P = new n(this);
        }
    }

    @Override // i0.f0
    public final b0 D() {
        return this.P;
    }

    @Override // i0.f0
    public final z.e F() {
        return this.O.a;
    }

    @Override // g0.m
    public final int a(int i5) {
        c cVar = this.O;
        f0 measurable = this.F;
        Intrinsics.checkNotNull(measurable);
        cVar.getClass();
        Intrinsics.checkNotNullParameter(this, "<this>");
        Intrinsics.checkNotNullParameter(measurable, "measurable");
        z.d dVar = cVar.f10381i;
        Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type androidx.compose.ui.layout.LayoutModifier");
        dVar.getClass();
        throw new ClassCastException();
    }

    @Override // g0.m
    public final int e(int i5) {
        c cVar = this.O;
        f0 measurable = this.F;
        Intrinsics.checkNotNull(measurable);
        cVar.getClass();
        Intrinsics.checkNotNullParameter(this, "<this>");
        Intrinsics.checkNotNullParameter(measurable, "measurable");
        z.d dVar = cVar.f10381i;
        Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type androidx.compose.ui.layout.LayoutModifier");
        dVar.getClass();
        throw new ClassCastException();
    }

    @Override // g0.m
    public final int f(int i5) {
        c cVar = this.O;
        f0 measurable = this.F;
        Intrinsics.checkNotNull(measurable);
        cVar.getClass();
        Intrinsics.checkNotNullParameter(this, "<this>");
        Intrinsics.checkNotNullParameter(measurable, "measurable");
        z.d dVar = cVar.f10381i;
        Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type androidx.compose.ui.layout.LayoutModifier");
        dVar.getClass();
        throw new ClassCastException();
    }

    @Override // g0.m
    public final g0.t g(long j) {
        p(j);
        c cVar = this.O;
        f0 measurable = this.F;
        Intrinsics.checkNotNull(measurable);
        cVar.getClass();
        Intrinsics.checkNotNullParameter(this, "$this$measure");
        Intrinsics.checkNotNullParameter(measurable, "measurable");
        z.d dVar = cVar.f10381i;
        Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type androidx.compose.ui.layout.LayoutModifier");
        dVar.getClass();
        throw new ClassCastException();
    }

    @Override // g0.m
    public final int k(int i5) {
        c cVar = this.O;
        f0 measurable = this.F;
        Intrinsics.checkNotNull(measurable);
        cVar.getClass();
        Intrinsics.checkNotNullParameter(this, "<this>");
        Intrinsics.checkNotNullParameter(measurable, "measurable");
        z.d dVar = cVar.f10381i;
        Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type androidx.compose.ui.layout.LayoutModifier");
        dVar.getClass();
        throw new ClassCastException();
    }

    @Override // g0.t
    public final void n(long j) {
        K(j);
        if (this.f10379x) {
            return;
        }
        J();
        m0.e eVar = this.E.f10412h;
        boolean b10 = g0.r.b(this);
        ((com.google.firebase.messaging.p) x()).f();
        this.f10380y = b10;
    }

    @Override // i0.a0
    public final int q(g0.f alignmentLine) {
        Intrinsics.checkNotNullParameter(alignmentLine, "alignmentLine");
        n nVar = this.P;
        if (nVar == null) {
            return w.a(this, alignmentLine);
        }
        Intrinsics.checkNotNullParameter(alignmentLine, "alignmentLine");
        Integer num = (Integer) nVar.I.get(alignmentLine);
        if (num != null) {
            return num.intValue();
        }
        return Integer.MIN_VALUE;
    }
}
