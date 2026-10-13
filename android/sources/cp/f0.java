package cp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class f0 {

    /* renamed from: d, reason: collision with root package name */
    public static final f0 f6897d;

    /* renamed from: e, reason: collision with root package name */
    public static final f0 f6898e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ f0[] f6899i;

    static {
        f0 f0Var = new f0("DECLARED", 0);
        f6897d = f0Var;
        f0 f0Var2 = new f0("INHERITED", 1);
        f6898e = f0Var2;
        f0[] f0VarArr = {f0Var, f0Var2};
        f6899i = f0VarArr;
        ki.b.p(f0VarArr);
    }

    public static f0 valueOf(String str) {
        return (f0) Enum.valueOf(f0.class, str);
    }

    public static f0[] values() {
        return (f0[]) f6899i.clone();
    }
}
