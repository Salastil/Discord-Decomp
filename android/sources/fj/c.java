package fj;

/* loaded from: classes3.dex */
public enum c implements ui.c {
    /* JADX INFO: Fake field, exist only in values array */
    UNKNOWN_OS(0),
    ANDROID(1),
    /* JADX INFO: Fake field, exist only in values array */
    IOS(2),
    /* JADX INFO: Fake field, exist only in values array */
    WEB(3);


    /* renamed from: d, reason: collision with root package name */
    public final int f8756d;

    c(int i5) {
        this.f8756d = i5;
    }

    @Override // ui.c
    public final int a() {
        return this.f8756d;
    }
}
