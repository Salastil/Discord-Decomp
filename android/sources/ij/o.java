package ij;

/* loaded from: classes3.dex */
public final class o implements h0 {

    /* renamed from: b, reason: collision with root package name */
    public static final o f10909b = new o(0);
    public final /* synthetic */ int a;

    public /* synthetic */ o(int i5) {
        this.a = i5;
    }

    @Override // ij.h0
    public final p0 a(Class cls) {
        switch (this.a) {
            case 0:
                if (!r.class.isAssignableFrom(cls)) {
                    throw new IllegalArgumentException("Unsupported message type: ".concat(cls.getName()));
                }
                try {
                    return (p0) r.b(cls.asSubclass(r.class)).a(3);
                } catch (Exception e9) {
                    throw new RuntimeException("Unable to get message info for ".concat(cls.getName()), e9);
                }
            default:
                throw new IllegalStateException("This should never be called.");
        }
    }

    @Override // ij.h0
    public final boolean b(Class cls) {
        switch (this.a) {
            case 0:
                return r.class.isAssignableFrom(cls);
            default:
                return false;
        }
    }
}
