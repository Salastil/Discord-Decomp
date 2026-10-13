package hc;

/* loaded from: classes3.dex */
public final class o1 {

    /* renamed from: b, reason: collision with root package name */
    public static final o1 f9830b = new o1(false);
    public final boolean a;

    public o1(boolean z5) {
        this.a = z5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return obj != null && o1.class == obj.getClass() && this.a == ((o1) obj).a;
    }

    public final int hashCode() {
        return !this.a ? 1 : 0;
    }
}
