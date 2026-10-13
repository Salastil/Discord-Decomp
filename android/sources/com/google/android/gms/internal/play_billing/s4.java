package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class s4 extends e2 {
    private static final s4 zzb;
    private int zzd;
    private int zze;

    static {
        s4 s4Var = new s4();
        zzb = s4Var;
        e2.f(s4.class, s4Var);
    }

    public static s4 r() {
        return zzb;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0001\u0000\u0001\u0001\u0001\u0001\u0000\u0000\u0000\u0001᠌\u0000", new Object[]{"zzd", "zze", n1.j});
        }
        if (i6 == 3) {
            return new s4();
        }
        if (i6 == 4) {
            return new e1(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
