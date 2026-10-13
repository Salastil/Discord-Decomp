package yq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class x0 {

    /* renamed from: d, reason: collision with root package name */
    public static final x0 f21080d;

    /* renamed from: e, reason: collision with root package name */
    public static final x0 f21081e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ x0[] f21082i;

    static {
        x0 x0Var = new x0("SUPERTYPE", 0);
        f21080d = x0Var;
        x0 x0Var2 = new x0("COMMON", 1);
        f21081e = x0Var2;
        x0[] x0VarArr = {x0Var, x0Var2};
        f21082i = x0VarArr;
        ki.b.p(x0VarArr);
    }

    public static x0 valueOf(String str) {
        return (x0) Enum.valueOf(x0.class, str);
    }

    public static x0[] values() {
        return (x0[]) f21082i.clone();
    }
}
