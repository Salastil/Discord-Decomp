package net.time4j;

/* loaded from: classes3.dex */
public final class y0 implements ks.j {

    /* renamed from: d, reason: collision with root package name */
    public final i0 f15399d;

    /* renamed from: e, reason: collision with root package name */
    public final long f15400e;

    public y0(i0 i0Var, long j) {
        this.f15399d = i0Var;
        this.f15400e = j;
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x007d  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0093  */
    @Override // ks.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object b(ks.e eVar, Object obj, boolean z5) {
        boolean z6;
        z0 z0Var = (z0) eVar;
        Long l6 = (Long) obj;
        if (l6 == null) {
            throw new IllegalArgumentException("Missing element value.");
        }
        i0 i0Var = this.f15399d;
        if (z5) {
            long longValue = l6.longValue();
            if (i0Var != z0.f15401b0) {
                long p3 = z0.p(longValue, 86400000000000L);
                return (p3 != 0 || longValue <= 0) ? z0.o(p3) : z0.K;
            }
            long p5 = z0.p(longValue, 86400000000L);
            int i5 = z0Var.f15414v % 1000;
            return (p5 == 0 && i5 == 0 && longValue > 0) ? z0.K : z0.n(i5, p5);
        }
        if (l6 != null) {
            i0 i0Var2 = this.f15399d;
            i0 i0Var3 = z0.f15401b0;
            long j = this.f15400e;
            if (i0Var2 != i0Var3 || l6.longValue() != j ? !(0 > l6.longValue() || l6.longValue() > j) : z0Var.f15414v % 1000 == 0) {
                z6 = true;
                if (!z6) {
                    long longValue2 = l6.longValue();
                    return i0Var == z0.f15401b0 ? z0.n(z0Var.f15414v % 1000, longValue2) : z0.o(longValue2);
                }
                throw new IllegalArgumentException("Value out of range: " + l6);
            }
        }
        z6 = false;
        if (!z6) {
        }
    }

    @Override // ks.j
    public final Object c(ks.e eVar) {
        z0 z0Var = (z0) eVar;
        return Long.valueOf(this.f15399d == z0.f15401b0 ? z0.q(z0Var) / 1000 : z0.q(z0Var));
    }

    @Override // ks.j
    public final Object d(ks.e eVar) {
        z0 z0Var = (z0) eVar;
        i0 i0Var = this.f15399d;
        i0 i0Var2 = z0.f15401b0;
        long j = this.f15400e;
        return (i0Var != i0Var2 || z0Var.f15414v % 1000 == 0) ? Long.valueOf(j) : Long.valueOf(j - 1);
    }
}
