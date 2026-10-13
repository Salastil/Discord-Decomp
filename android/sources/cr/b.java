package cr;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f7316d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ b[] f7317e;

    static {
        b bVar = new b("FOR_SUBTYPING", 0);
        f7316d = bVar;
        b[] bVarArr = {bVar, new b("FOR_INCORPORATION", 1), new b("FROM_EXPRESSION", 2)};
        f7317e = bVarArr;
        ki.b.p(bVarArr);
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f7317e.clone();
    }
}
