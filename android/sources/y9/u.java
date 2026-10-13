package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class u {

    /* renamed from: d, reason: collision with root package name */
    public static final u f20744d;

    /* renamed from: e, reason: collision with root package name */
    public static final u f20745e;

    /* renamed from: i, reason: collision with root package name */
    public static final u f20746i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ u[] f20747v;

    /* JADX INFO: Fake field, exist only in values array */
    u EF0;

    static {
        u uVar = new u("STANDARD", 0);
        u uVar2 = new u("SCIENTIFIC", 1);
        f20744d = uVar2;
        u uVar3 = new u("ENGINEERING", 2);
        f20745e = uVar3;
        u uVar4 = new u("COMPACT", 3);
        f20746i = uVar4;
        f20747v = new u[]{uVar, uVar2, uVar3, uVar4};
    }

    public static u valueOf(String str) {
        return (u) Enum.valueOf(u.class, str);
    }

    public static u[] values() {
        return (u[]) f20747v.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "standard";
        }
        if (ordinal == 1) {
            return "scientific";
        }
        if (ordinal == 2) {
            return "engineering";
        }
        if (ordinal == 3) {
            return "compact";
        }
        throw new IllegalArgumentException();
    }
}
