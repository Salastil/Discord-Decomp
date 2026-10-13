package androidx.datastore.preferences.protobuf;

import sun.misc.Unsafe;

/* loaded from: classes.dex */
public final class k1 extends m1 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f1773b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ k1(Unsafe unsafe, int i5) {
        super(unsafe);
        this.f1773b = i5;
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final boolean c(long j, Object obj) {
        switch (this.f1773b) {
            case 0:
                if (n1.f1796h) {
                    if (n1.g(j, obj) == 0) {
                    }
                } else if (n1.h(j, obj) == 0) {
                }
                break;
            default:
                if (n1.f1796h) {
                    if (n1.g(j, obj) == 0) {
                    }
                } else if (n1.h(j, obj) == 0) {
                }
                break;
        }
        return false;
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final byte d(long j, Object obj) {
        switch (this.f1773b) {
            case 0:
                if (!n1.f1796h) {
                    break;
                } else {
                    break;
                }
            default:
                if (!n1.f1796h) {
                    break;
                } else {
                    break;
                }
        }
        return n1.h(j, obj);
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final double e(long j, Object obj) {
        switch (this.f1773b) {
        }
        return Double.longBitsToDouble(h(j, obj));
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final float f(long j, Object obj) {
        switch (this.f1773b) {
        }
        return Float.intBitsToFloat(g(j, obj));
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final void k(Object obj, long j, boolean z5) {
        switch (this.f1773b) {
            case 0:
                if (!n1.f1796h) {
                    n1.l(obj, j, z5 ? (byte) 1 : (byte) 0);
                    break;
                } else {
                    n1.k(obj, j, z5 ? (byte) 1 : (byte) 0);
                    break;
                }
            default:
                if (!n1.f1796h) {
                    n1.l(obj, j, z5 ? (byte) 1 : (byte) 0);
                    break;
                } else {
                    n1.k(obj, j, z5 ? (byte) 1 : (byte) 0);
                    break;
                }
        }
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final void l(Object obj, long j, byte b10) {
        switch (this.f1773b) {
            case 0:
                if (!n1.f1796h) {
                    n1.l(obj, j, b10);
                    break;
                } else {
                    n1.k(obj, j, b10);
                    break;
                }
            default:
                if (!n1.f1796h) {
                    n1.l(obj, j, b10);
                    break;
                } else {
                    n1.k(obj, j, b10);
                    break;
                }
        }
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final void m(Object obj, long j, double d6) {
        switch (this.f1773b) {
            case 0:
                p(obj, j, Double.doubleToLongBits(d6));
                break;
            default:
                p(obj, j, Double.doubleToLongBits(d6));
                break;
        }
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final void n(Object obj, long j, float f2) {
        switch (this.f1773b) {
            case 0:
                o(Float.floatToIntBits(f2), j, obj);
                break;
            default:
                o(Float.floatToIntBits(f2), j, obj);
                break;
        }
    }
}
