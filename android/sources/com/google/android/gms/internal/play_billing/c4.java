package com.google.android.gms.internal.play_billing;

import java.util.RandomAccess;

/* loaded from: classes3.dex */
public final class c4 extends e2 {
    private static final c4 zzb;
    private int zzd;
    private int zzf;
    private y3 zzi;
    private boolean zzj;
    private boolean zzk;
    private p4 zzl;
    private String zze = "";
    private h2 zzg = f2.f5734w;
    private i2 zzh = w2.f5870w;

    static {
        c4 c4Var = new c4();
        zzb = c4Var;
        e2.f(c4.class, c4Var);
    }

    public static b4 r() {
        return (b4) zzb.k();
    }

    public static void s(c4 c4Var, a4 a4Var) {
        RandomAccess randomAccess = c4Var.zzg;
        if (!((q1) randomAccess).f5812d) {
            f2 f2Var = (f2) randomAccess;
            int i5 = f2Var.f5736i;
            c4Var.zzg = f2Var.l(i5 + i5);
        }
        ((f2) c4Var.zzg).e(a4Var.f5700d);
    }

    public static /* synthetic */ void t(c4 c4Var, y3 y3Var) {
        c4Var.zzi = y3Var;
        c4Var.zzd |= 4;
    }

    public static /* synthetic */ void u(c4 c4Var) {
        c4Var.zzd |= 1;
        c4Var.zze = "ProxyBillingBroadcastReceiver";
    }

    public static /* synthetic */ void v(c4 c4Var, p4 p4Var) {
        c4Var.zzl = p4Var;
        c4Var.zzd |= 32;
    }

    public static /* synthetic */ void w(c4 c4Var, int i5) {
        c4Var.zzf = i5 - 1;
        c4Var.zzd |= 2;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\b\u0000\u0001\u0001\b\b\u0000\u0002\u0000\u0001ဈ\u0000\u0002᠌\u0001\u0003ࠬ\u0004\u001b\u0005ဉ\u0002\u0006ဇ\u0003\u0007ဇ\u0004\bဉ\u0005", new Object[]{"zzd", "zze", "zzf", n1.f5781f, "zzg", n1.f5780e, "zzh", m4.class, "zzi", "zzj", "zzk", "zzl"});
        }
        if (i6 == 3) {
            return new c4();
        }
        if (i6 == 4) {
            return new b4(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
