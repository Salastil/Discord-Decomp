package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public final class q implements l0 {

    /* renamed from: b, reason: collision with root package name */
    public static final q f1807b = new q(0);
    public final /* synthetic */ int a;

    public /* synthetic */ q(int i5) {
        this.a = i5;
    }

    @Override // androidx.datastore.preferences.protobuf.l0
    public final v0 a(Class cls) {
        switch (this.a) {
            case 0:
                if (!t.class.isAssignableFrom(cls)) {
                    throw new IllegalArgumentException("Unsupported message type: ".concat(cls.getName()));
                }
                try {
                    return (v0) t.e(cls.asSubclass(t.class)).d(3);
                } catch (Exception e9) {
                    throw new RuntimeException("Unable to get message info for ".concat(cls.getName()), e9);
                }
            default:
                throw new IllegalStateException("This should never be called.");
        }
    }

    @Override // androidx.datastore.preferences.protobuf.l0
    public final boolean b(Class cls) {
        switch (this.a) {
            case 0:
                return t.class.isAssignableFrom(cls);
            default:
                return false;
        }
    }
}
