package bg;

/* loaded from: classes3.dex */
public final class f extends e {

    /* renamed from: d, reason: collision with root package name */
    public final rf.x f2948d;

    public f(rf.x xVar) {
        this.f2948d = xVar;
    }

    @Override // bg.e
    public final Object a() {
        return this.f2948d;
    }

    @Override // bg.e
    public final boolean b() {
        return true;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof f) {
            return this.f2948d.equals(((f) obj).f2948d);
        }
        return false;
    }

    public final int hashCode() {
        return this.f2948d.hashCode() + 1502476572;
    }

    public final String toString() {
        return s4.h.f("Optional.of(", this.f2948d.toString(), ")");
    }
}
