package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class u4 extends e2 {
    private static final u4 zzb;
    private int zzd;
    private int zze;
    private boolean zzf;
    private long zzg;
    private boolean zzh;
    private int zzi;
    private int zzj;

    static {
        u4 u4Var = new u4();
        zzb = u4Var;
        e2.f(u4.class, u4Var);
    }

    public static t4 r() {
        return (t4) zzb.k();
    }

    public static /* synthetic */ void s(u4 u4Var, boolean z5) {
        u4Var.zzd |= 8;
        u4Var.zzh = z5;
    }

    public static /* synthetic */ void t(u4 u4Var) {
        u4Var.zzd |= 16;
        u4Var.zzi = 0;
    }

    public static /* synthetic */ void u(u4 u4Var, long j) {
        u4Var.zzd |= 4;
        u4Var.zzg = j;
    }

    public static /* synthetic */ void v(u4 u4Var, int i5) {
        u4Var.zzd |= 32;
        u4Var.zzj = i5;
    }

    public static /* synthetic */ void w(u4 u4Var) {
        u4Var.zzd |= 2;
        u4Var.zzf = true;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0006\u0000\u0001\u0001\u0006\u0006\u0000\u0000\u0000\u0001င\u0000\u0002ဇ\u0001\u0003ဂ\u0002\u0004ဇ\u0003\u0005င\u0004\u0006င\u0005", new Object[]{"zzd", "zze", "zzf", "zzg", "zzh", "zzi", "zzj"});
        }
        if (i6 == 3) {
            return new u4();
        }
        if (i6 == 4) {
            return new t4(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
