package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class t1 extends u1 {

    /* renamed from: i, reason: collision with root package name */
    public final byte[] f5835i;

    /* renamed from: v, reason: collision with root package name */
    public final int f5836v;

    /* renamed from: w, reason: collision with root package name */
    public final int f5837w;

    public t1(byte[] bArr, int i5, int i6) {
        u1.k(i5, i5 + i6, bArr.length);
        this.f5835i = bArr;
        this.f5836v = i5;
        this.f5837w = i6;
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final byte a(int i5) {
        return this.f5835i[this.f5836v + i5];
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final int b(int i5, int i6) {
        return j2.a(i5, this.f5836v, i6, this.f5835i);
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final int d() {
        return this.f5837w;
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final u1 e(int i5, int i6) {
        int k = u1.k(i5, i6, this.f5837w);
        if (k == 0) {
            return u1.f5850e;
        }
        return new t1(this.f5835i, this.f5836v + i5, k);
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final void h(byte[] bArr, int i5) {
        System.arraycopy(this.f5835i, this.f5836v, bArr, 0, i5);
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final void i(w1 w1Var) {
        w1Var.F(this.f5835i, this.f5836v, this.f5837w);
    }

    @Override // com.google.android.gms.internal.play_billing.u1
    public final boolean j(u1 u1Var) {
        boolean z5 = u1Var instanceof v1;
        if (!z5 && !(u1Var instanceof t1)) {
            return u1Var.j(this);
        }
        int d6 = u1Var.d();
        int i5 = this.f5837w;
        if (i5 > d6) {
            throw new IllegalArgumentException("Length too large: " + i5 + i5);
        }
        if (i5 > u1Var.d()) {
            throw new IllegalArgumentException(a3.e.f(i5, u1Var.d(), "Ran off end of other: 0, ", ", "));
        }
        byte[] bArr = this.f5835i;
        int i6 = this.f5836v;
        if (z5) {
            return u1.n(i6, 0, i5, bArr, ((v1) u1Var).f5857i);
        }
        if (!(u1Var instanceof t1)) {
            return u1Var.e(0, i5).equals(e(i6, i5 + i6));
        }
        t1 t1Var = (t1) u1Var;
        return u1.n(i6, t1Var.f5836v, i5, bArr, t1Var.f5835i);
    }
}
