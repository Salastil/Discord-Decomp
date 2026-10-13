package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class l4 extends e2 {
    private static final l4 zzb;
    private int zzd;
    private int zze = 0;
    private Object zzf;
    private e4 zzg;
    private f4 zzh;

    static {
        l4 l4Var = new l4();
        zzb = l4Var;
        e2.f(l4.class, l4Var);
    }

    public static /* synthetic */ void r(l4 l4Var, r4 r4Var) {
        l4Var.zzf = r4Var;
        l4Var.zze = 8;
    }

    public static /* synthetic */ void s(l4 l4Var, s4 s4Var) {
        l4Var.zzf = s4Var;
        l4Var.zze = 4;
    }

    public static k4 t() {
        return (k4) zzb.k();
    }

    public static /* synthetic */ void u(l4 l4Var, u3 u3Var) {
        l4Var.zzf = u3Var;
        l4Var.zze = 2;
    }

    public static /* synthetic */ void v(l4 l4Var, w3 w3Var) {
        l4Var.zzf = w3Var;
        l4Var.zze = 3;
    }

    public static /* synthetic */ void w(l4 l4Var, z3 z3Var) {
        z3Var.getClass();
        l4Var.zzf = z3Var;
        l4Var.zze = 7;
    }

    public static /* synthetic */ void x(l4 l4Var, c4 c4Var) {
        l4Var.zzf = c4Var;
        l4Var.zze = 5;
    }

    public static /* synthetic */ void y(l4 l4Var, e4 e4Var) {
        e4Var.getClass();
        l4Var.zzg = e4Var;
        l4Var.zzd |= 1;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\b\u0001\u0001\u0001\b\b\u0000\u0000\u0000\u0001ဉ\u0000\u0002<\u0000\u0003<\u0000\u0004<\u0000\u0005<\u0000\u0006ဉ\u0001\u0007<\u0000\b<\u0000", new Object[]{"zzf", "zze", "zzd", "zzg", u3.class, w3.class, s4.class, c4.class, "zzh", z3.class, r4.class});
        }
        if (i6 == 3) {
            return new l4();
        }
        if (i6 == 4) {
            return new k4(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
