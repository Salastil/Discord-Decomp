package rp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class e0 {

    /* renamed from: d, reason: collision with root package name */
    public static final e0 f17448d;

    /* renamed from: e, reason: collision with root package name */
    public static final e0 f17449e;

    /* renamed from: i, reason: collision with root package name */
    public static final e0 f17450i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ e0[] f17451v;

    static {
        e0 e0Var = new e0("ONE_COLLECTION_PARAMETER", 0);
        f17448d = e0Var;
        e0 e0Var2 = new e0("OBJECT_PARAMETER_NON_GENERIC", 1);
        f17449e = e0Var2;
        e0 e0Var3 = new e0("OBJECT_PARAMETER_GENERIC", 2);
        f17450i = e0Var3;
        e0[] e0VarArr = {e0Var, e0Var2, e0Var3};
        f17451v = e0VarArr;
        ki.b.p(e0VarArr);
    }

    public static e0 valueOf(String str) {
        return (e0) Enum.valueOf(e0.class, str);
    }

    public static e0[] values() {
        return (e0[]) f17451v.clone();
    }
}
