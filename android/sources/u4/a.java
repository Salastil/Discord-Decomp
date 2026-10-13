package u4;

/* loaded from: classes.dex */
public enum a {
    JSON(".json"),
    ZIP(".zip"),
    GZIP(".gz");


    /* renamed from: d, reason: collision with root package name */
    public final String f18808d;

    a(String str) {
        this.f18808d = str;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f18808d;
    }
}
