package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class i3 extends k3 {
    @Override // com.google.android.gms.internal.play_billing.k3
    public final double a(long j, Object obj) {
        return Double.longBitsToDouble(this.a.getLong(obj, j));
    }

    @Override // com.google.android.gms.internal.play_billing.k3
    public final float b(long j, Object obj) {
        return Float.intBitsToFloat(this.a.getInt(obj, j));
    }

    @Override // com.google.android.gms.internal.play_billing.k3
    public final void c(Object obj, long j, boolean z5) {
        if (l3.f5763e) {
            l3.f(obj, j, z5);
        } else {
            l3.g(obj, j, z5);
        }
    }

    @Override // com.google.android.gms.internal.play_billing.k3
    public final void d(Object obj, long j, double d6) {
        this.a.putLong(obj, j, Double.doubleToLongBits(d6));
    }

    @Override // com.google.android.gms.internal.play_billing.k3
    public final void e(Object obj, long j, float f2) {
        this.a.putInt(obj, j, Float.floatToIntBits(f2));
    }

    @Override // com.google.android.gms.internal.play_billing.k3
    public final boolean f(long j, Object obj) {
        return l3.f5763e ? l3.k(j, obj) : l3.l(j, obj);
    }
}
