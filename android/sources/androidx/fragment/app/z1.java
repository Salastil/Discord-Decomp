package androidx.fragment.app;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class z1 {

    /* renamed from: d, reason: collision with root package name */
    public static final z1 f2133d;

    /* renamed from: e, reason: collision with root package name */
    public static final z1 f2134e;

    /* renamed from: i, reason: collision with root package name */
    public static final z1 f2135i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ z1[] f2136v;

    static {
        z1 z1Var = new z1("NONE", 0);
        f2133d = z1Var;
        z1 z1Var2 = new z1("ADDING", 1);
        f2134e = z1Var2;
        z1 z1Var3 = new z1("REMOVING", 2);
        f2135i = z1Var3;
        f2136v = new z1[]{z1Var, z1Var2, z1Var3};
    }

    public static z1 valueOf(String str) {
        return (z1) Enum.valueOf(z1.class, str);
    }

    public static z1[] values() {
        return (z1[]) f2136v.clone();
    }
}
