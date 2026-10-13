package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class p4 extends e2 {
    private static final p4 zzb;
    private int zzd;
    private int zze;

    static {
        p4 p4Var = new p4();
        zzb = p4Var;
        e2.f(p4.class, p4Var);
    }

    public static o4 r() {
        return (o4) zzb.k();
    }

    public static /* synthetic */ void s(p4 p4Var, int i5) {
        p4Var.zze = i5 - 1;
        p4Var.zzd |= 1;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0001\u0000\u0001\u0001\u0001\u0001\u0000\u0000\u0000\u0001᠌\u0000", new Object[]{"zzd", "zze", n1.f5784i});
        }
        if (i6 == 3) {
            return new p4();
        }
        if (i6 == 4) {
            return new o4(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
