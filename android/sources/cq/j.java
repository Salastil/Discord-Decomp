package cq;

/* loaded from: classes3.dex */
public enum j implements iq.o {
    CLASS(0),
    INTERFACE(1),
    ENUM_CLASS(2),
    /* JADX INFO: Fake field, exist only in values array */
    ENUM_ENTRY(3),
    ANNOTATION_CLASS(4),
    /* JADX INFO: Fake field, exist only in values array */
    OBJECT(5),
    COMPANION_OBJECT(6);


    /* renamed from: d, reason: collision with root package name */
    public final int f7133d;

    j(int i5) {
        this.f7133d = i5;
    }

    @Override // iq.o
    public final int a() {
        return this.f7133d;
    }
}
