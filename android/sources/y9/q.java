package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class q {

    /* renamed from: d, reason: collision with root package name */
    public static final q f20734d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ q[] f20735e;

    /* JADX INFO: Fake field, exist only in values array */
    q EF0;

    static {
        q qVar = new q("NUMERIC", 0);
        q qVar2 = new q("DIGIT2", 1);
        q qVar3 = new q("UNDEFINED", 2);
        f20734d = qVar3;
        f20735e = new q[]{qVar, qVar2, qVar3};
    }

    public static q valueOf(String str) {
        return (q) Enum.valueOf(q.class, str);
    }

    public static q[] values() {
        return (q[]) f20735e.clone();
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
