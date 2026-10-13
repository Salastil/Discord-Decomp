package cq;

/* loaded from: classes3.dex */
public enum r implements iq.o {
    RETURNS_CONSTANT(0),
    CALLS(1),
    RETURNS_NOT_NULL(2);


    /* renamed from: d, reason: collision with root package name */
    public final int f7227d;

    r(int i5) {
        this.f7227d = i5;
    }

    @Override // iq.o
    public final int a() {
        return this.f7227d;
    }
}
