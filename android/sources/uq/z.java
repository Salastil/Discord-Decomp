package uq;

import cq.s0;
import ip.r0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class z implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19071d;

    /* renamed from: e, reason: collision with root package name */
    public final c0 f19072e;

    public /* synthetic */ z(c0 c0Var, int i5) {
        this.f19071d = i5;
        this.f19072e = c0Var;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f19071d) {
            case 0:
                int intValue = ((Number) obj).intValue();
                cc.k kVar = this.f19072e.a;
                eq.g gVar = (eq.g) kVar.f3399i;
                j jVar = (j) kVar.f3398e;
                hq.b r5 = nt.a.r(gVar, intValue);
                return r5.f10202c ? jVar.b(r5) : nf.e.k(jVar.f19016b, r5);
            case 1:
                int intValue2 = ((Number) obj).intValue();
                cc.k kVar2 = this.f19072e.a;
                hq.b classId = nt.a.r((eq.g) kVar2.f3399i, intValue2);
                if (!classId.f10202c) {
                    ip.a0 a0Var = ((j) kVar2.f3398e).f19016b;
                    Intrinsics.checkNotNullParameter(a0Var, "<this>");
                    Intrinsics.checkNotNullParameter(classId, "classId");
                    ip.i k = nf.e.k(a0Var, classId);
                    if (k instanceof r0) {
                        return (r0) k;
                    }
                }
                return null;
            default:
                s0 it = (s0) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                return zo.c0.F(it, (a4.i) this.f19072e.a.f3401w);
        }
    }
}
