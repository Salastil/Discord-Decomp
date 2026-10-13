package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class k {

    /* renamed from: d, reason: collision with root package name */
    public static final k f20722d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ k[] f20723e;

    /* JADX INFO: Fake field, exist only in values array */
    k EF0;

    static {
        k kVar = new k("NUMERIC", 0);
        k kVar2 = new k("DIGIT2", 1);
        k kVar3 = new k("UNDEFINED", 2);
        f20722d = kVar3;
        f20723e = new k[]{kVar, kVar2, kVar3};
    }

    public static k valueOf(String str) {
        return (k) Enum.valueOf(k.class, str);
    }

    public static k[] values() {
        return (k[]) f20723e.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "numeric";
        }
        if (ordinal == 1) {
            return "2-digit";
        }
        if (ordinal == 2) {
            return "";
        }
        throw new IllegalArgumentException();
    }
}
