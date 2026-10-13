package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class h {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ h[] f20713d = {new h("BESTFIT", 0), new h("BASIC", 1)};

    /* JADX INFO: Fake field, exist only in values array */
    h EF5;

    public static h valueOf(String str) {
        return (h) Enum.valueOf(h.class, str);
    }

    public static h[] values() {
        return (h[]) f20713d.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "best fit";
        }
        if (ordinal == 1) {
            return "basic";
        }
        throw new IllegalArgumentException();
    }
}
