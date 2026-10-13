package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class j {

    /* renamed from: d, reason: collision with root package name */
    public static final j f20716d;

    /* renamed from: e, reason: collision with root package name */
    public static final j f20717e;

    /* renamed from: i, reason: collision with root package name */
    public static final j f20718i;

    /* renamed from: v, reason: collision with root package name */
    public static final j f20719v;

    /* renamed from: w, reason: collision with root package name */
    public static final j f20720w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ j[] f20721x;

    static {
        j jVar = new j("H11", 0);
        f20716d = jVar;
        j jVar2 = new j("H12", 1);
        f20717e = jVar2;
        j jVar3 = new j("H23", 2);
        f20718i = jVar3;
        j jVar4 = new j("H24", 3);
        f20719v = jVar4;
        j jVar5 = new j("UNDEFINED", 4);
        f20720w = jVar5;
        f20721x = new j[]{jVar, jVar2, jVar3, jVar4, jVar5};
    }

    public static j valueOf(String str) {
        return (j) Enum.valueOf(j.class, str);
    }

    public static j[] values() {
        return (j[]) f20721x.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "h11";
        }
        if (ordinal == 1) {
            return "h12";
        }
        if (ordinal == 2) {
            return "h23";
        }
        if (ordinal == 3) {
            return "h24";
        }
        if (ordinal == 4) {
            return "";
        }
        throw new IllegalArgumentException();
    }
}
