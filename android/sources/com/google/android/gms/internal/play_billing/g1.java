package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class g1 extends e2 {
    private static final g1 zzb;
    private int zzd;
    private m1 zze;
    private m1 zzf;
    private int zzg;

    static {
        g1 g1Var = new g1();
        zzb = g1Var;
        e2.f(g1.class, g1Var);
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0003\u0000\u0001\u0001\u0003\u0003\u0000\u0000\u0000\u0001ဉ\u0000\u0002ဉ\u0001\u0003᠌\u0002", new Object[]{"zzd", "zze", "zzf", "zzg", n1.f5777b});
        }
        if (i6 == 3) {
            return new g1();
        }
        if (i6 == 4) {
            return new e1(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
