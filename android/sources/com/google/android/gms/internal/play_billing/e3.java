package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class e3 extends e2 {
    private static final e3 zzb;
    private r2 zzd = r2.f5816e;

    static {
        e3 e3Var = new e3();
        zzb = e3Var;
        e2.f(e3.class, e3Var);
    }

    public static c3 r() {
        return (c3) zzb.k();
    }

    public static r2 s(e3 e3Var) {
        r2 r2Var = e3Var.zzd;
        if (!r2Var.f5817d) {
            e3Var.zzd = r2Var.a();
        }
        return e3Var.zzd;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0000\u0001\u0000\u0000\u0001\u0001\u0001\u0001\u0000\u0000\u00012", new Object[]{"zzd", d3.a});
        }
        if (i6 == 3) {
            return new e3();
        }
        if (i6 == 4) {
            return new c3(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
