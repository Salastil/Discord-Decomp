package wp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f19979d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f19980e;

    /* renamed from: i, reason: collision with root package name */
    public static final b f19981i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ b[] f19982v;

    static {
        b bVar = new b("INFLEXIBLE", 0);
        f19979d = bVar;
        b bVar2 = new b("FLEXIBLE_UPPER_BOUND", 1);
        f19980e = bVar2;
        b bVar3 = new b("FLEXIBLE_LOWER_BOUND", 2);
        f19981i = bVar3;
        b[] bVarArr = {bVar, bVar2, bVar3};
        f19982v = bVarArr;
        ki.b.p(bVarArr);
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f19982v.clone();
    }
}
