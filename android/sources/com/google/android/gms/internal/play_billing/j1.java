package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class j1 extends e2 {
    private static final j1 zzb;
    private int zzd;
    private int zze;
    private String zzf = "";

    static {
        j1 j1Var = new j1();
        zzb = j1Var;
        e2.f(j1.class, j1Var);
    }

    public static j1 s(byte[] bArr) {
        return (j1) e2.o(zzb, bArr);
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001င\u0000\u0002ဈ\u0001", new Object[]{"zzd", "zze", "zzf"});
        }
        if (i6 == 3) {
            return new j1();
        }
        if (i6 == 4) {
            return new e1(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }

    public final int r() {
        return this.zze;
    }

    public final String t() {
        return this.zzf;
    }
}
