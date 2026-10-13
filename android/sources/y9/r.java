package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class r {

    /* renamed from: d, reason: collision with root package name */
    public static final r f20736d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ r[] f20737e;

    static {
        r rVar = new r("SHORT", 0);
        f20736d = rVar;
        f20737e = new r[]{rVar, new r("LONG", 1)};
    }

    public static r valueOf(String str) {
        return (r) Enum.valueOf(r.class, str);
    }

    public static r[] values() {
        return (r[]) f20737e.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "short";
        }
        if (ordinal == 1) {
            return "long";
        }
        throw new IllegalArgumentException();
    }
}
