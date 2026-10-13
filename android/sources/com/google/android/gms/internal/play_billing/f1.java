package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class f1 extends e2 {
    private static final f1 zzb;
    private int zzd;
    private String zze = "";

    static {
        f1 f1Var = new f1();
        zzb = f1Var;
        e2.f(f1.class, f1Var);
    }

    public static f1 r(byte[] bArr) {
        return (f1) e2.o(zzb, bArr);
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0001\u0000\u0001\u0001\u0001\u0001\u0000\u0000\u0000\u0001ဈ\u0000", new Object[]{"zzd", "zze"});
        }
        if (i6 == 3) {
            return new f1();
        }
        if (i6 == 4) {
            return new e1(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }

    public final String s() {
        return this.zze;
    }
}
