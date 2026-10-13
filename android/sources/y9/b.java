package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ b[] f20687d = {new b("UPPER", 0), new b("LOWER", 1), new b("FALSE", 2)};

    /* JADX INFO: Fake field, exist only in values array */
    b EF5;

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f20687d.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "upper";
        }
        if (ordinal == 1) {
            return "lower";
        }
        if (ordinal == 2) {
            return "false";
        }
        throw new IllegalArgumentException();
    }
}
