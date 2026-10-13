package l4;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class f0 {

    /* renamed from: d, reason: collision with root package name */
    public static final f0 f13728d;

    /* renamed from: e, reason: collision with root package name */
    public static final f0 f13729e;

    /* renamed from: i, reason: collision with root package name */
    public static final f0 f13730i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ f0[] f13731v;

    static {
        f0 f0Var = new f0("AUTOMATIC", 0);
        f13728d = f0Var;
        f0 f0Var2 = new f0("HARDWARE", 1);
        f13729e = f0Var2;
        f0 f0Var3 = new f0("SOFTWARE", 2);
        f13730i = f0Var3;
        f13731v = new f0[]{f0Var, f0Var2, f0Var3};
    }

    public static f0 valueOf(String str) {
        return (f0) Enum.valueOf(f0.class, str);
    }

    public static f0[] values() {
        return (f0[]) f13731v.clone();
    }
}
