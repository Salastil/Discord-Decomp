package com.google.android.gms.internal.play_billing;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class v1 extends u1 {

    /* renamed from: i, reason: collision with root package name */
    public final byte[] f5857i;

    public v1(byte[] bArr) {
        this.f5857i = bArr;
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final byte a(int i5) {
        return this.f5857i[i5];
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final int b(int i5, int i6) {
        return j2.a(i5, 0, i6, this.f5857i);
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final int d() {
        return this.f5857i.length;
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final u1 e(int i5, int i6) {
        byte[] bArr = this.f5857i;
        int k = u1.k(0, i6, bArr.length);
        return k == 0 ? u1.f5850e : new t1(bArr, 0, k);
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final void h(byte[] bArr, int i5) {
        System.arraycopy(this.f5857i, 0, bArr, 0, i5);
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final void i(w1 w1Var) {
        byte[] bArr = this.f5857i;
        w1Var.F(bArr, 0, bArr.length);
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final boolean j(u1 u1Var) {
        boolean z5 = u1Var instanceof v1;
        byte[] bArr = this.f5857i;
        if (z5) {
            return Arrays.equals(bArr, ((v1) u1Var).f5857i);
        }
        boolean z6 = u1Var instanceof t1;
        if (!z6) {
            return u1Var.j(this);
        }
        t1 t1Var = (t1) u1Var;
        int i5 = t1Var.f5837w;
        int length = bArr.length;
        if (length > i5) {
            throw new IllegalArgumentException("Length too large: " + length + length);
        }
        if (length > i5) {
            throw new IllegalArgumentException(a3.e.f(length, i5, "Ran off end of other: 0, ", ", "));
        }
        if (z5) {
            return u1.n(0, 0, length, bArr, ((v1) u1Var).f5857i);
        }
        if (!z6) {
            return u1Var.e(0, length).equals(e(0, length));
        }
        return u1.n(0, t1Var.f5836v, length, bArr, t1Var.f5835i);
    }
}
