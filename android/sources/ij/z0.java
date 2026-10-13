package ij;

import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public final class z0 extends b1 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f10934b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ z0(Unsafe unsafe, int i5) {
        super(unsafe);
        this.f10934b = i5;
    }

    @Override // ij.b1
    public final boolean c(long j, Object obj) {
        switch (this.f10934b) {
            case 0:
                if (c1.f10850g) {
                    if (c1.h(j, obj) == 0) {
                    }
                } else if (c1.i(j, obj) == 0) {
                }
                break;
            default:
                if (c1.f10850g) {
                    if (c1.h(j, obj) == 0) {
                    }
                } else if (c1.i(j, obj) == 0) {
                }
                break;
        }
        return false;
    }

    @Override // ij.b1
    public final byte d(long j, Object obj) {
        switch (this.f10934b) {
            case 0:
                if (!c1.f10850g) {
                    break;
                } else {
                    break;
                }
            default:
                if (!c1.f10850g) {
                    break;
                } else {
                    break;
                }
        }
        return c1.i(j, obj);
    }

    @Override // ij.b1
    public final double e(long j, Object obj) {
        switch (this.f10934b) {
        }
        return Double.longBitsToDouble(h(j, obj));
    }

    @Override // ij.b1
    public final float f(long j, Object obj) {
        switch (this.f10934b) {
        }
        return Float.intBitsToFloat(g(j, obj));
    }

    @Override // ij.b1
    public final void k(Object obj, long j, boolean z5) {
        switch (this.f10934b) {
            case 0:
                if (!c1.f10850g) {
                    c1.l(obj, j, z5 ? (byte) 1 : (byte) 0);
                    break;
                } else {
                    c1.k(obj, j, z5 ? (byte) 1 : (byte) 0);
                    break;
                }
            default:
                if (!c1.f10850g) {
                    c1.l(obj, j, z5 ? (byte) 1 : (byte) 0);
                    break;
                } else {
                    c1.k(obj, j, z5 ? (byte) 1 : (byte) 0);
                    break;
                }
        }
    }

    @Override // ij.b1
    public final void l(Object obj, long j, double d6) {
        switch (this.f10934b) {
            case 0:
                o(obj, j, Double.doubleToLongBits(d6));
                break;
            default:
                o(obj, j, Double.doubleToLongBits(d6));
                break;
        }
    }

    @Override // ij.b1
    public final void m(Object obj, long j, float f2) {
        switch (this.f10934b) {
            case 0:
                n(Float.floatToIntBits(f2), j, obj);
                break;
            default:
                n(Float.floatToIntBits(f2), j, obj);
                break;
        }
    }

    @Override // ij.b1
    public final boolean r() {
        switch (this.f10934b) {
        }
        return false;
    }
}
