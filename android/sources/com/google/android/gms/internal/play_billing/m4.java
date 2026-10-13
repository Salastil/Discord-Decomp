package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class m4 extends e2 {
    private static final m4 zzb;
    private int zzd;
    private int zzf;
    private i2 zze = w2.f5870w;
    private String zzg = "";

    static {
        m4 m4Var = new m4();
        zzb = m4Var;
        e2.f(m4.class, m4Var);
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0003\u0000\u0001\u0001\u0003\u0003\u0000\u0001\u0000\u0001\u001a\u0002င\u0000\u0003ဈ\u0001", new Object[]{"zzd", "zze", "zzf", "zzg"});
        }
        if (i6 == 3) {
            return new m4();
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
