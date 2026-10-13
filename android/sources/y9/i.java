package y9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class i {

    /* renamed from: d, reason: collision with root package name */
    public static final i f20714d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ i[] f20715e;

    /* JADX INFO: Fake field, exist only in values array */
    i EF0;

    static {
        i iVar = new i("NUMERIC", 0);
        i iVar2 = new i("DIGIT2", 1);
        i iVar3 = new i("UNDEFINED", 2);
        f20714d = iVar3;
        f20715e = new i[]{iVar, iVar2, iVar3};
    }

    public static i valueOf(String str) {
        return (i) Enum.valueOf(i.class, str);
    }

    public static i[] values() {
        return (i[]) f20715e.clone();
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
