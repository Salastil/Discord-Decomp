package fj;

/* loaded from: classes3.dex */
public enum a implements ui.c {
    /* JADX INFO: Fake field, exist only in values array */
    UNKNOWN_EVENT(0),
    MESSAGE_DELIVERED(1),
    /* JADX INFO: Fake field, exist only in values array */
    MESSAGE_OPEN(2);


    /* renamed from: d, reason: collision with root package name */
    public final int f8749d;

    a(int i5) {
        this.f8749d = i5;
    }

    @Override // ui.c
    public final int a() {
        return this.f8749d;
    }
}
