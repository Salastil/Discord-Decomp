package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class u3 extends e2 {
    private static final u3 zzb;
    private int zzd;
    private int zze = 0;
    private Object zzf;
    private int zzg;
    private y3 zzh;
    private int zzi;

    static {
        u3 u3Var = new u3();
        zzb = u3Var;
        e2.f(u3.class, u3Var);
    }

    public static /* synthetic */ void r(u3 u3Var, j4 j4Var) {
        u3Var.zzf = j4Var;
        u3Var.zze = 7;
    }

    public static /* synthetic */ void s(u3 u3Var, u4 u4Var) {
        u3Var.zzf = u4Var;
        u3Var.zze = 6;
    }

    public static /* synthetic */ void t(u3 u3Var, int i5) {
        u3Var.zzg = i5 - 1;
        u3Var.zzd |= 1;
    }

    public static t3 u() {
        return (t3) zzb.k();
    }

    public static u3 v(byte[] bArr) {
        return (u3) e2.o(zzb, bArr);
    }

    public static void x(u3 u3Var, a4 a4Var) {
        u3Var.zzi = a4Var.f5700d;
        u3Var.zzd |= 4;
    }

    public static /* synthetic */ void y(u3 u3Var, y3 y3Var) {
        u3Var.zzh = y3Var;
        u3Var.zzd |= 2;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0006\u0001\u0001\u0001\u0007\u0006\u0000\u0000\u0000\u0001᠌\u0000\u0002ဉ\u0001\u0004<\u0000\u0005᠌\u0002\u0006<\u0000\u0007<\u0000", new Object[]{"zzf", "zze", "zzd", "zzg", n1.f5778c, "zzh", g4.class, "zzi", n1.f5780e, u4.class, j4.class});
        }
        if (i6 == 3) {
            return new u3();
        }
        if (i6 == 4) {
            return new t3(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }

    public final j4 w() {
        return this.zze == 7 ? (j4) this.zzf : j4.r();
    }
}
