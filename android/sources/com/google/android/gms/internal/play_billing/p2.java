package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class p2 extends e2 {
    private static final p2 zzb;
    private i2 zzd = w2.f5870w;

    static {
        p2 p2Var = new p2();
        zzb = p2Var;
        e2.f(p2.class, p2Var);
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0000\u0001\u0000\u0000\u0001\u0001\u0001\u0000\u0001\u0000\u0001\u001b", new Object[]{"zzd", q3.class});
        }
        if (i6 == 3) {
            return new p2();
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
