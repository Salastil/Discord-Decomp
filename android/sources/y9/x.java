package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class x {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ x[] f20755d = {new x("SHORT", 0), new x("NARROW", 1), new x("LONG", 2)};

    /* JADX INFO: Fake field, exist only in values array */
    x EF5;

    public static x valueOf(String str) {
        return (x) Enum.valueOf(x.class, str);
    }

    public static x[] values() {
        return (x[]) f20755d.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "short";
        }
        if (ordinal == 1) {
            return "narrow";
        }
        if (ordinal == 2) {
            return "long";
        }
        throw new IllegalArgumentException();
    }
}
