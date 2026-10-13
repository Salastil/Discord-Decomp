package fj;

/* loaded from: classes3.dex */
public enum b implements ui.c {
    /* JADX INFO: Fake field, exist only in values array */
    UNKNOWN(0),
    DATA_MESSAGE(1),
    /* JADX INFO: Fake field, exist only in values array */
    TOPIC(2),
    DISPLAY_NOTIFICATION(3);


    /* renamed from: d, reason: collision with root package name */
    public final int f8753d;

    b(int i5) {
        this.f8753d = i5;
    }

    @Override // ui.c
    public final int a() {
        return this.f8753d;
    }
}
