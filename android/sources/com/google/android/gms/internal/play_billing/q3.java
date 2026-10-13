package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class q3 extends e2 {
    private static final q3 zzb;
    private int zzd = 0;
    private Object zze;

    static {
        q3 q3Var = new q3();
        zzb = q3Var;
        e2.f(q3.class, q3Var);
    }

    public static p3 r() {
        return (p3) zzb.k();
    }

    public static q3 s() {
        return zzb;
    }

    public static /* synthetic */ void t(q3 q3Var, String str) {
        str.getClass();
        q3Var.zzd = 3;
        q3Var.zze = str;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0000\u0006\u0001\u0000\u0001\u0006\u0006\u0000\u0000\u0000\u0001?\u0000\u00023\u0000\u0003Ȼ\u0000\u0004:\u0000\u0005<\u0000\u0006<\u0000", new Object[]{"zze", "zzd", e3.class, p2.class});
        }
        if (i6 == 3) {
            return new q3();
        }
        if (i6 == 4) {
            return new p3(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
