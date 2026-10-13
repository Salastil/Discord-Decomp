package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class y3 extends e2 {
    private static final y3 zzb;
    private int zzd;
    private int zze;
    private int zzg;
    private int zzi;
    private int zzj;
    private String zzf = "";
    private String zzh = "";

    static {
        y3 y3Var = new y3();
        zzb = y3Var;
        e2.f(y3.class, y3Var);
    }

    public static /* synthetic */ void r(y3 y3Var, int i5) {
        y3Var.zzd |= 1;
        y3Var.zze = i5;
    }

    public static x3 s() {
        return (x3) zzb.k();
    }

    public static /* synthetic */ void t(y3 y3Var, String str) {
        y3Var.zzd |= 8;
        y3Var.zzh = str;
    }

    public static /* synthetic */ void u(y3 y3Var, String str) {
        str.getClass();
        y3Var.zzd |= 2;
        y3Var.zzf = str;
    }

    public static /* synthetic */ void v(y3 y3Var, int i5) {
        y3Var.zzd |= 32;
        y3Var.zzj = i5;
    }

    public static /* synthetic */ void w(y3 y3Var, int i5) {
        y3Var.zzd |= 16;
        y3Var.zzi = i5;
    }

    public static void x(y3 y3Var, int i5) {
        y3Var.zzg = com.discord.chat.bridge.botuikit.a.b(i5);
        y3Var.zzd |= 4;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0006\u0000\u0001\u0001\b\u0006\u0000\u0000\u0000\u0001င\u0000\u0002ဈ\u0001\u0004᠌\u0002\u0005ဈ\u0003\u0007င\u0004\bင\u0005", new Object[]{"zzd", "zze", "zzf", "zzg", n1.f5779d, "zzh", "zzi", "zzj"});
        }
        if (i6 == 3) {
            return new y3();
        }
        if (i6 == 4) {
            return new x3(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
