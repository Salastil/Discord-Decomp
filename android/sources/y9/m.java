package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class m {

    /* renamed from: d, reason: collision with root package name */
    public static final m f20726d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ m[] f20727e;

    /* JADX INFO: Fake field, exist only in values array */
    m EF0;

    static {
        m mVar = new m("NUMERIC", 0);
        m mVar2 = new m("DIGIT2", 1);
        m mVar3 = new m("UNDEFINED", 2);
        f20726d = mVar3;
        f20727e = new m[]{mVar, mVar2, mVar3};
    }

    public static m valueOf(String str) {
        return (m) Enum.valueOf(m.class, str);
    }

    public static m[] values() {
        return (m[]) f20727e.clone();
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
