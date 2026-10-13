package net.time4j;

import java.math.BigDecimal;

/* loaded from: classes3.dex */
public final class b1 extends r1 {
    @Override // net.time4j.r1, ks.j
    public final /* bridge */ /* synthetic */ Object b(ks.e eVar, Object obj, boolean z5) {
        return g((c1) eVar, (BigDecimal) obj);
    }

    @Override // net.time4j.r1
    public final /* bridge */ /* synthetic */ c1 f(c1 c1Var, Object obj, boolean z5) {
        return g(c1Var, (BigDecimal) obj);
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0034  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0022  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final c1 g(c1 c1Var, BigDecimal bigDecimal) {
        boolean z5;
        if (bigDecimal != null) {
            ks.d dVar = this.f15313e;
            BigDecimal bigDecimal2 = (BigDecimal) dVar.v();
            BigDecimal bigDecimal3 = (BigDecimal) dVar.a();
            if (bigDecimal2.compareTo(bigDecimal) <= 0 && bigDecimal.compareTo(bigDecimal3) <= 0) {
                z5 = true;
                if (!z5) {
                    return new c1(c1Var.f15234d, (z0) c1Var.f15235e.h(this.f15313e, bigDecimal));
                }
                throw new IllegalArgumentException("Out of range: " + bigDecimal);
            }
        }
        z5 = false;
        if (!z5) {
        }
    }
}
