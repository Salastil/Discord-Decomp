package ds;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class g0 {
    public static final /* synthetic */ mo.a E;

    /* renamed from: i, reason: collision with root package name */
    public static final g0 f7723i;

    /* renamed from: v, reason: collision with root package name */
    public static final g0 f7724v;

    /* renamed from: w, reason: collision with root package name */
    public static final g0 f7725w;

    /* renamed from: x, reason: collision with root package name */
    public static final g0 f7726x;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ g0[] f7727y;

    /* renamed from: d, reason: collision with root package name */
    public final char f7728d;

    /* renamed from: e, reason: collision with root package name */
    public final char f7729e;

    static {
        g0 g0Var = new g0("OBJ", 0, '{', '}');
        f7723i = g0Var;
        g0 g0Var2 = new g0("LIST", 1, '[', ']');
        f7724v = g0Var2;
        g0 g0Var3 = new g0("MAP", 2, '{', '}');
        f7725w = g0Var3;
        g0 g0Var4 = new g0("POLY_OBJ", 3, '[', ']');
        f7726x = g0Var4;
        g0[] g0VarArr = {g0Var, g0Var2, g0Var3, g0Var4};
        f7727y = g0VarArr;
        E = ki.b.p(g0VarArr);
    }

    public g0(String str, int i5, char c6, char c8) {
        this.f7728d = c6;
        this.f7729e = c8;
    }

    public static g0 valueOf(String str) {
        return (g0) Enum.valueOf(g0.class, str);
    }

    public static g0[] values() {
        return (g0[]) f7727y.clone();
    }
}
