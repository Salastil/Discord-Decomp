package net.time4j;

import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class p0 implements ks.u {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final Enum f15298b;

    public /* synthetic */ p0(Enum r12, int i5) {
        this.a = i5;
        this.f15298b = r12;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x00d0  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x00e4  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00e9  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00de  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Object b(Class cls, t tVar, z0 z0Var, long j) {
        long j5;
        long z5;
        int i5;
        long j7;
        int i6 = z0Var.f15412e;
        byte b10 = z0Var.f15411d;
        int i10 = z0Var.f15413i;
        int i11 = z0Var.f15414v;
        int ordinal = tVar.ordinal();
        if (ordinal != 0) {
            if (ordinal == 1) {
                j5 = j;
                long z6 = w3.q.z(i6, j5);
                j7 = w3.q.z(b10, w3.q.m(60, z6));
                i5 = w3.q.o(60, z6);
            } else if (ordinal != 2) {
                s sVar = t.f15319x;
                if (ordinal == 3) {
                    return b(cls, sVar, z0Var, w3.q.B(j, 1000000L));
                }
                if (ordinal == 4) {
                    return b(cls, sVar, z0Var, w3.q.B(j, 1000L));
                }
                if (ordinal != 5) {
                    throw new UnsupportedOperationException(tVar.name());
                }
                long z7 = w3.q.z(i11, j);
                long z8 = w3.q.z(i10, w3.q.m(1000000000, z7));
                long z10 = w3.q.z(i6, w3.q.m(60, z8));
                j7 = w3.q.z(b10, w3.q.m(60, z10));
                i5 = w3.q.o(60, z10);
                i10 = w3.q.o(60, z8);
                i11 = w3.q.o(1000000000, z7);
                j5 = j;
            } else {
                j5 = j;
                long z11 = w3.q.z(i10, j5);
                long z12 = w3.q.z(i6, w3.q.m(60, z11));
                long z13 = w3.q.z(b10, w3.q.m(60, z12));
                i6 = w3.q.o(60, z12);
                z5 = z13;
                i10 = w3.q.o(60, z11);
            }
            int o6 = w3.q.o(24, j7);
            z0 y5 = (((o6 | i5) | i10) | i11) != 0 ? (j5 <= 0 || cls != z0.class) ? z0.J : z0.K : z0.y(o6, i5, i10, i11, true);
            return cls != z0.class ? cls.cast(y5) : cls.cast(new v(w3.q.m(24, j7), y5));
        }
        j5 = j;
        z5 = w3.q.z(b10, j5);
        i5 = i6;
        j7 = z5;
        int o62 = w3.q.o(24, j7);
        if ((((o62 | i5) | i10) | i11) != 0) {
        }
        if (cls != z0.class) {
        }
    }

    @Override // ks.u
    public final Object a(ks.e eVar, long j) {
        switch (this.a) {
            case 0:
                q0 q0Var = (q0) eVar;
                TimeUnit timeUnit = (TimeUnit) this.f15298b;
                int compareTo = timeUnit.compareTo(TimeUnit.SECONDS);
                ns.e eVar2 = ns.e.f15694d;
                if (compareTo >= 0) {
                    return q0.s(w3.q.z(q0Var.f15306d, w3.q.B(j, timeUnit.toSeconds(1L))), q0Var.r(), eVar2);
                }
                long z5 = w3.q.z(q0Var.r(), w3.q.B(j, timeUnit.toNanos(1L)));
                return q0.s(w3.q.z(q0Var.f15306d, w3.q.m(1000000000, z5)), w3.q.o(1000000000, z5), eVar2);
            default:
                z0 z0Var = (z0) eVar;
                return j == 0 ? z0Var : (z0) b(z0.class, (t) this.f15298b, z0Var, j);
        }
    }
}
