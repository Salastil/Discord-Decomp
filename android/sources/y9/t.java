package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class t {

    /* renamed from: d, reason: collision with root package name */
    public static final t f20741d;

    /* renamed from: e, reason: collision with root package name */
    public static final t f20742e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ t[] f20743i;

    static {
        t tVar = new t("STANDARD", 0);
        f20741d = tVar;
        t tVar2 = new t("ACCOUNTING", 1);
        f20742e = tVar2;
        f20743i = new t[]{tVar, tVar2};
    }

    public static t valueOf(String str) {
        return (t) Enum.valueOf(t.class, str);
    }

    public static t[] values() {
        return (t[]) f20743i.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "standard";
        }
        if (ordinal == 1) {
            return "accounting";
        }
        throw new IllegalArgumentException();
    }
}
