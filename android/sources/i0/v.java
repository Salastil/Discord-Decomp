package i0;

import java.util.HashMap;
import java.util.Map;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class v {
    public final g0.t a;

    /* renamed from: c, reason: collision with root package name */
    public boolean f10418c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f10419d;

    /* renamed from: e, reason: collision with root package name */
    public b f10420e;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f10422g;

    /* renamed from: b, reason: collision with root package name */
    public boolean f10417b = true;

    /* renamed from: f, reason: collision with root package name */
    public final HashMap f10421f = new HashMap();

    /* JADX WARN: Multi-variable type inference failed */
    public v(b bVar, int i5) {
        this.f10422g = i5;
        this.a = (g0.t) bVar;
    }

    /* JADX WARN: Type inference failed for: r12v5, types: [g0.t, i0.b] */
    public static final void a(v vVar, g0.f fVar, int i5, f0 calculatePositionInParent) {
        HashMap hashMap = vVar.f10421f;
        float f2 = i5;
        long a = tn.g.a(f2, f2);
        while (true) {
            int i6 = vVar.f10422g;
            Intrinsics.checkNotNullParameter(calculatePositionInParent, "$this$calculatePositionInParent");
            switch (i6) {
                case 0:
                    long j = calculatePositionInParent.M;
                    float a10 = b0.a.a(a);
                    int i10 = m0.d.f14312b;
                    a = tn.g.a(a10 + ((int) (j >> 32)), b0.a.b(a) + ((int) (j & 4294967295L)));
                    break;
                default:
                    b0 D = calculatePositionInParent.D();
                    Intrinsics.checkNotNull(D);
                    long j5 = D.F;
                    int i11 = m0.d.f14312b;
                    a = b0.a.c(tn.g.a((int) (j5 >> 32), (int) (4294967295L & j5)), a);
                    break;
            }
            calculatePositionInParent = calculatePositionInParent.G;
            Intrinsics.checkNotNull(calculatePositionInParent);
            if (Intrinsics.areEqual(calculatePositionInParent, vVar.a.b())) {
                int b10 = fVar instanceof g0.f ? uo.c.b(b0.a.b(a)) : uo.c.b(b0.a.a(a));
                if (!hashMap.containsKey(fVar)) {
                    hashMap.put(fVar, Integer.valueOf(b10));
                    return;
                }
                ((Number) v0.e(hashMap, fVar)).intValue();
                int i12 = g0.c.a;
                Intrinsics.checkNotNullParameter(fVar, "<this>");
                throw null;
            }
            if (vVar.b(calculatePositionInParent).containsKey(fVar)) {
                float c6 = vVar.c(calculatePositionInParent, fVar);
                a = tn.g.a(c6, c6);
            }
        }
    }

    public final Map b(f0 f0Var) {
        switch (this.f10422g) {
            case 0:
                Intrinsics.checkNotNullParameter(f0Var, "<this>");
                return (Map) ((com.google.firebase.messaging.p) f0Var.x()).f6253c;
            default:
                Intrinsics.checkNotNullParameter(f0Var, "<this>");
                b0 D = f0Var.D();
                Intrinsics.checkNotNull(D);
                return (Map) ((com.google.firebase.messaging.p) D.x()).f6253c;
        }
    }

    public final int c(f0 f0Var, g0.f alignmentLine) {
        switch (this.f10422g) {
            case 0:
                Intrinsics.checkNotNullParameter(f0Var, "<this>");
                Intrinsics.checkNotNullParameter(alignmentLine, "alignmentLine");
                return f0Var.s(alignmentLine);
            default:
                Intrinsics.checkNotNullParameter(f0Var, "<this>");
                Intrinsics.checkNotNullParameter(alignmentLine, "alignmentLine");
                b0 D = f0Var.D();
                Intrinsics.checkNotNull(D);
                return D.s(alignmentLine);
        }
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [g0.t, i0.b] */
    public final void d() {
        this.f10417b = true;
        this.a.c();
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [g0.t, i0.b] */
    public final void e() {
        HashMap hashMap = this.f10421f;
        hashMap.clear();
        a aVar = new a(this);
        ?? r22 = this.a;
        r22.j(aVar);
        hashMap.putAll(b(r22.b()));
        this.f10417b = false;
    }

    /* JADX WARN: Type inference failed for: r1v0, types: [g0.t, i0.b] */
    public final void f() {
        boolean z5 = this.f10418c || this.f10419d;
        ?? r12 = this.a;
        if (z5) {
            this.f10420e = r12;
        } else {
            r12.c();
        }
    }
}
