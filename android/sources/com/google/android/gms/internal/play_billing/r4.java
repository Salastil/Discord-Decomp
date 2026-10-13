package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class r4 extends e2 {
    private static final r4 zzb;
    private int zzd;
    private y3 zze;
    private long zzf;

    static {
        r4 r4Var = new r4();
        zzb = r4Var;
        e2.f(r4.class, r4Var);
    }

    public static q4 r() {
        return (q4) zzb.k();
    }

    public static /* synthetic */ void s(r4 r4Var, y3 y3Var) {
        r4Var.zze = y3Var;
        r4Var.zzd |= 1;
    }

    public static /* synthetic */ void t(r4 r4Var, long j) {
        r4Var.zzd |= 2;
        r4Var.zzf = j;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001ဉ\u0000\u0002ဂ\u0001", new Object[]{"zzd", "zze", "zzf"});
        }
        if (i6 == 3) {
            return new r4();
        }
        if (i6 == 4) {
            return new q4(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
