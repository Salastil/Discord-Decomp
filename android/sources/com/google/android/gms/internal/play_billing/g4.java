package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class g4 extends e2 {
    private static final g4 zzb;
    private int zzd;
    private int zze;

    static {
        g4 g4Var = new g4();
        zzb = g4Var;
        e2.f(g4.class, g4Var);
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0001\u0000\u0001\u0001\u0001\u0001\u0000\u0000\u0000\u0001᠌\u0000", new Object[]{"zzd", "zze", n1.f5782g});
        }
        if (i6 == 3) {
            return new g4();
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
