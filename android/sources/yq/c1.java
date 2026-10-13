package yq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class c1 {

    /* renamed from: i, reason: collision with root package name */
    public static final c1 f21013i;

    /* renamed from: v, reason: collision with root package name */
    public static final c1 f21014v;

    /* renamed from: w, reason: collision with root package name */
    public static final c1 f21015w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ c1[] f21016x;

    /* renamed from: d, reason: collision with root package name */
    public final String f21017d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f21018e;

    static {
        c1 c1Var = new c1("INVARIANT", 0, "", true);
        f21013i = c1Var;
        c1 c1Var2 = new c1("IN_VARIANCE", 1, "in", false);
        f21014v = c1Var2;
        c1 c1Var3 = new c1("OUT_VARIANCE", 2, "out", true);
        f21015w = c1Var3;
        c1[] c1VarArr = {c1Var, c1Var2, c1Var3};
        f21016x = c1VarArr;
        ki.b.p(c1VarArr);
    }

    public c1(String str, int i5, String str2, boolean z5) {
        this.f21017d = str2;
        this.f21018e = z5;
    }

    public static c1 valueOf(String str) {
        return (c1) Enum.valueOf(c1.class, str);
    }

    public static c1[] values() {
        return (c1[]) f21016x.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f21017d;
    }
}
