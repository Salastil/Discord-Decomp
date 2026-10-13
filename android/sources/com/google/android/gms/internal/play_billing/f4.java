package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class f4 extends e2 {
    private static final f4 zzb;
    private int zzd;
    private boolean zze;
    private boolean zzf;

    static {
        f4 f4Var = new f4();
        zzb = f4Var;
        e2.f(f4.class, f4Var);
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001ဇ\u0000\u0002ဇ\u0001", new Object[]{"zzd", "zze", "zzf"});
        }
        if (i6 == 3) {
            return new f4();
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
