package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class z3 extends e2 {
    private static final z3 zzb;

    static {
        z3 z3Var = new z3();
        zzb = z3Var;
        e2.f(z3.class, z3Var);
    }

    public static z3 r() {
        return zzb;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0000", null);
        }
        if (i6 == 3) {
            return new z3();
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
