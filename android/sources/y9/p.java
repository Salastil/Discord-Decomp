package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class p {

    /* renamed from: d, reason: collision with root package name */
    public static final p f20732d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ p[] f20733e;

    /* JADX INFO: Fake field, exist only in values array */
    p EF0;

    static {
        p pVar = new p("LONG", 0);
        p pVar2 = new p("SHORT", 1);
        p pVar3 = new p("NARROW", 2);
        p pVar4 = new p("UNDEFINED", 3);
        f20732d = pVar4;
        f20733e = new p[]{pVar, pVar2, pVar3, pVar4};
    }

    public static p valueOf(String str) {
        return (p) Enum.valueOf(p.class, str);
    }

    public static p[] values() {
        return (p[]) f20733e.clone();
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
