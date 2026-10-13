package bg;

/* loaded from: classes3.dex */
public final class c extends e {

    /* renamed from: d, reason: collision with root package name */
    public static final c f2937d = new c();

    @Override // bg.e
    public final Object a() {
        throw new IllegalStateException("Optional.get() cannot be called on an absent value");
    }

    @Override // bg.e
    public final boolean b() {
        return false;
    }

    public final boolean equals(Object obj) {
        return obj == this;
    }

    public final int hashCode() {
        return 2040732332;
    }

    public final String toString() {
        return "Optional.absent()";
    }
}
