package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class g {

    /* renamed from: d, reason: collision with root package name */
    public static final g f20711d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ g[] f20712e;

    /* JADX INFO: Fake field, exist only in values array */
    g EF0;

    static {
        g gVar = new g("LONG", 0);
        g gVar2 = new g("SHORT", 1);
        g gVar3 = new g("NARROW", 2);
        g gVar4 = new g("UNDEFINED", 3);
        f20711d = gVar4;
        f20712e = new g[]{gVar, gVar2, gVar3, gVar4};
    }

    public static g valueOf(String str) {
        return (g) Enum.valueOf(g.class, str);
    }

    public static g[] values() {
        return (g[]) f20712e.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "long";
        }
        if (ordinal == 1) {
            return "short";
        }
        if (ordinal == 2) {
            return "narrow";
        }
        if (ordinal == 3) {
            return "";
        }
        throw new IllegalArgumentException();
    }
}
