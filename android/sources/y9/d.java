package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class d {

    /* renamed from: d, reason: collision with root package name */
    public static final d f20700d;

    /* renamed from: e, reason: collision with root package name */
    public static final d f20701e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ d[] f20702i;

    static {
        d dVar = new d("SORT", 0);
        f20700d = dVar;
        d dVar2 = new d("SEARCH", 1);
        f20701e = dVar2;
        f20702i = new d[]{dVar, dVar2};
    }

    public static d valueOf(String str) {
        return (d) Enum.valueOf(d.class, str);
    }

    public static d[] values() {
        return (d[]) f20702i.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "sort";
        }
        if (ordinal == 1) {
            return "search";
        }
        throw new IllegalArgumentException();
    }
}
