package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class e {

    /* renamed from: d, reason: collision with root package name */
    public static final e f20707d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ e[] f20708e;

    /* JADX INFO: Fake field, exist only in values array */
    e EF0;

    static {
        e eVar = new e("FULL", 0);
        e eVar2 = new e("LONG", 1);
        e eVar3 = new e("MEDIUM", 2);
        e eVar4 = new e("SHORT", 3);
        e eVar5 = new e("UNDEFINED", 4);
        f20707d = eVar5;
        f20708e = new e[]{eVar, eVar2, eVar3, eVar4, eVar5};
    }

    public static e valueOf(String str) {
        return (e) Enum.valueOf(e.class, str);
    }

    public static e[] values() {
        return (e[]) f20708e.clone();
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
