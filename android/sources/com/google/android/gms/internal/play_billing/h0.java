package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class h0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final b1 f5746d;

    /* renamed from: e, reason: collision with root package name */
    public final y0 f5747e;

    public h0(b1 b1Var, y0 y0Var) {
        this.f5746d = b1Var;
        this.f5747e = y0Var;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.f5746d.f5809d != this) {
            return;
        }
        y0 y0Var = this.f5747e;
        if (q0.f5808y.E(this.f5746d, this, b1.h(y0Var))) {
            b1.j(this.f5746d);
        }
    }
}
