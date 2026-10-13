package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class j4 extends e2 {
    private static final j4 zzb;
    private int zzd;
    private i2 zze = w2.f5870w;
    private String zzf = "";
    private boolean zzg;

    static {
        j4 j4Var = new j4();
        zzb = j4Var;
        e2.f(j4.class, j4Var);
    }

    public static j4 r() {
        return zzb;
    }

    public static /* synthetic */ void s(j4 j4Var, boolean z5) {
        j4Var.zzd |= 2;
        j4Var.zzg = z5;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0003\u0000\u0001\u0001\u0003\u0003\u0000\u0001\u0000\u0001\u001b\u0002ဈ\u0000\u0003ဇ\u0001", new Object[]{"zzd", "zze", i4.class, "zzf", "zzg"});
        }
        if (i6 == 3) {
            return new j4();
        }
        if (i6 == 4) {
            return new h4(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
