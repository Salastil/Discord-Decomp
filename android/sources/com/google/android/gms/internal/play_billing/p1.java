package com.google.android.gms.internal.play_billing;

import java.io.IOException;

/* loaded from: classes3.dex */
public abstract class p1 {
    protected transient int zza;

    public abstract void a(w1 w1Var);

    public final byte[] b() {
        try {
            int d6 = d();
            byte[] bArr = new byte[d6];
            w1 w1Var = new w1(bArr, d6);
            a(w1Var);
            w1Var.D();
            return bArr;
        } catch (IOException e9) {
            throw new RuntimeException(s4.h.f("Serializing ", getClass().getName(), " to a byte array threw an IOException (should never happen)."), e9);
        }
    }

    public abstract int c(y2 y2Var);

    public abstract int d();
}
