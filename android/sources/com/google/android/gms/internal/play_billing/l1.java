package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class l1 extends e2 {
    private static final l1 zzb;
    private int zzd;
    private int zze;
    private int zzf;
    private String zzg = "";
    private String zzh = "";
    private String zzi = "";
    private String zzj = "";

    static {
        l1 l1Var = new l1();
        zzb = l1Var;
        e2.f(l1.class, l1Var);
    }

    public static k1 r() {
        return (k1) zzb.k();
    }

    public static /* synthetic */ void s(l1 l1Var, String str) {
        l1Var.zzd |= 4;
        l1Var.zzg = str;
    }

    public static /* synthetic */ void t(l1 l1Var, String str) {
        str.getClass();
        l1Var.zzd |= 16;
        l1Var.zzi = str;
    }

    public static /* synthetic */ void u(l1 l1Var) {
        l1Var.zzd |= 32;
        l1Var.zzj = "getBillingConfig";
    }

    public static /* synthetic */ void v(l1 l1Var) {
        l1Var.zzd |= 8;
        l1Var.zzh = z4.a.a;
    }

    public static /* synthetic */ void w(l1 l1Var) {
        l1Var.zzd |= 1;
        l1Var.zze = 24;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0006\u0000\u0001\u0001\u0006\u0006\u0000\u0000\u0000\u0001င\u0000\u0002င\u0001\u0003ဈ\u0002\u0004ဈ\u0003\u0005ဈ\u0004\u0006ဈ\u0005", new Object[]{"zzd", "zze", "zzf", "zzg", "zzh", "zzi", "zzj"});
        }
        if (i6 == 3) {
            return new l1();
        }
        if (i6 == 4) {
            return new k1(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
