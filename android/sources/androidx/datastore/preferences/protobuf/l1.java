package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public final class l1 extends m1 {
    @Override // androidx.datastore.preferences.protobuf.m1
    public final boolean c(long j, Object obj) {
        return this.a.getBoolean(obj, j);
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final byte d(long j, Object obj) {
        return this.a.getByte(obj, j);
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final double e(long j, Object obj) {
        return this.a.getDouble(obj, j);
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final float f(long j, Object obj) {
        return this.a.getFloat(obj, j);
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final void k(Object obj, long j, boolean z5) {
        this.a.putBoolean(obj, j, z5);
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final void l(Object obj, long j, byte b10) {
        this.a.putByte(obj, j, b10);
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final void m(Object obj, long j, double d6) {
        this.a.putDouble(obj, j, d6);
    }

    @Override // androidx.datastore.preferences.protobuf.m1
    public final void n(Object obj, long j, float f2) {
        this.a.putFloat(obj, j, f2);
    }
}
