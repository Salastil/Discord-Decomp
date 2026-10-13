package cq;

/* loaded from: classes3.dex */
public enum s implements iq.o {
    AT_MOST_ONCE(0),
    EXACTLY_ONCE(1),
    AT_LEAST_ONCE(2);


    /* renamed from: d, reason: collision with root package name */
    public final int f7236d;

    s(int i5) {
        this.f7236d = i5;
    }

    @Override // iq.o
    public final int a() {
        return this.f7236d;
    }
}
