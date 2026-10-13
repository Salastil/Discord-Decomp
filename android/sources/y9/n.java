package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class n {

    /* renamed from: d, reason: collision with root package name */
    public static final n f20728d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ n[] f20729e;

    /* JADX INFO: Fake field, exist only in values array */
    n EF0;

    static {
        n nVar = new n("FULL", 0);
        n nVar2 = new n("LONG", 1);
        n nVar3 = new n("MEDIUM", 2);
        n nVar4 = new n("SHORT", 3);
        n nVar5 = new n("UNDEFINED", 4);
        f20728d = nVar5;
        f20729e = new n[]{nVar, nVar2, nVar3, nVar4, nVar5};
    }

    public static n valueOf(String str) {
        return (n) Enum.valueOf(n.class, str);
    }

    public static n[] values() {
        return (n[]) f20729e.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "full";
        }
        if (ordinal == 1) {
            return "long";
        }
        if (ordinal == 2) {
            return "medium";
        }
        if (ordinal == 3) {
            return "short";
        }
        if (ordinal == 4) {
            return "";
        }
        throw new IllegalArgumentException();
    }
}
