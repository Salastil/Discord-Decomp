package ui;

/* loaded from: classes3.dex */
public final class a implements e {

    /* renamed from: b, reason: collision with root package name */
    public final int f18931b;

    public a(int i5) {
        this.f18931b = i5;
    }

    @Override // java.lang.annotation.Annotation
    public final Class annotationType() {
        return e.class;
    }

    @Override // java.lang.annotation.Annotation
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        if (this.f18931b != ((a) ((e) obj)).f18931b) {
            return false;
        }
        Object obj2 = d.f18933d;
        return obj2.equals(obj2);
    }

    @Override // java.lang.annotation.Annotation
    public final int hashCode() {
        return (14552422 ^ this.f18931b) + (d.f18933d.hashCode() ^ 2041407134);
    }

    @Override // java.lang.annotation.Annotation
    public final String toString() {
        return "@com.google.firebase.encoders.proto.Protobuf(tag=" + this.f18931b + "intEncoding=" + d.f18933d + ')';
    }
}
