package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class w {

    /* renamed from: d, reason: collision with root package name */
    public static final w f20750d;

    /* renamed from: e, reason: collision with root package name */
    public static final w f20751e;

    /* renamed from: i, reason: collision with root package name */
    public static final w f20752i;

    /* renamed from: v, reason: collision with root package name */
    public static final w f20753v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ w[] f20754w;

    static {
        w wVar = new w("DECIMAL", 0);
        f20750d = wVar;
        w wVar2 = new w("PERCENT", 1);
        f20751e = wVar2;
        w wVar3 = new w("CURRENCY", 2);
        f20752i = wVar3;
        w wVar4 = new w("UNIT", 3);
        f20753v = wVar4;
        f20754w = new w[]{wVar, wVar2, wVar3, wVar4};
    }

    public static w valueOf(String str) {
        return (w) Enum.valueOf(w.class, str);
    }

    public static w[] values() {
        return (w[]) f20754w.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "decimal";
        }
        if (ordinal == 1) {
            return "percent";
        }
        if (ordinal == 2) {
            return "currency";
        }
        if (ordinal == 3) {
            return "unit";
        }
        throw new IllegalArgumentException();
    }
}
