package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class w3 extends e2 {
    private static final w3 zzb;
    private int zzd;
    private int zze = 0;
    private Object zzf;
    private int zzg;
    private int zzh;

    static {
        w3 w3Var = new w3();
        zzb = w3Var;
        e2.f(w3.class, w3Var);
    }

    public static /* synthetic */ void r(w3 w3Var, int i5) {
        w3Var.zzg = i5 - 1;
        w3Var.zzd |= 1;
    }

    public static v3 s() {
        return (v3) zzb.k();
    }

    public static void u(w3 w3Var, a4 a4Var) {
        w3Var.zzh = a4Var.f5700d;
        w3Var.zzd |= 2;
    }

    public static /* synthetic */ void v(w3 w3Var, j4 j4Var) {
        w3Var.zzf = j4Var;
        w3Var.zze = 4;
    }

    public static /* synthetic */ void w(w3 w3Var, u4 u4Var) {
        w3Var.zzf = u4Var;
        w3Var.zze = 3;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0005\u0001\u0001\u0001\u0005\u0005\u0000\u0000\u0000\u0001᠌\u0000\u0002<\u0000\u0003<\u0000\u0004<\u0000\u0005᠌\u0001", new Object[]{"zzf", "zze", "zzd", "zzg", n1.f5778c, g4.class, u4.class, j4.class, "zzh", n1.f5780e});
        }
        if (i6 == 3) {
            return new w3();
        }
        if (i6 == 4) {
            return new v3(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }

    public final j4 t() {
        return this.zze == 4 ? (j4) this.zzf : j4.r();
    }
}
