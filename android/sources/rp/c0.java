package rp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class c0 {

    /* renamed from: e, reason: collision with root package name */
    public static final c0 f17431e;

    /* renamed from: i, reason: collision with root package name */
    public static final c0 f17432i;

    /* renamed from: v, reason: collision with root package name */
    public static final c0 f17433v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ c0[] f17434w;

    /* renamed from: d, reason: collision with root package name */
    public final String f17435d;

    static {
        c0 c0Var = new c0("IGNORE", 0, "ignore");
        f17431e = c0Var;
        c0 c0Var2 = new c0("WARN", 1, "warn");
        f17432i = c0Var2;
        c0 c0Var3 = new c0("STRICT", 2, "strict");
        f17433v = c0Var3;
        c0[] c0VarArr = {c0Var, c0Var2, c0Var3};
        f17434w = c0VarArr;
        ki.b.p(c0VarArr);
    }

    public c0(String str, int i5, String str2) {
        this.f17435d = str2;
    }

    public static c0 valueOf(String str) {
        return (c0) Enum.valueOf(c0.class, str);
    }

    public static c0[] values() {
        return (c0[]) f17434w.clone();
    }
}
