package fo;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class e {

    /* renamed from: d, reason: collision with root package name */
    public static final e f8812d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ e[] f8813e;

    static {
        e eVar = new e("WARNING", 0);
        f8812d = eVar;
        e[] eVarArr = {eVar, new e("ERROR", 1), new e("HIDDEN", 2)};
        f8813e = eVarArr;
        ki.b.p(eVarArr);
    }

    public static e valueOf(String str) {
        return (e) Enum.valueOf(e.class, str);
    }

    public static e[] values() {
        return (e[]) f8813e.clone();
    }
}
