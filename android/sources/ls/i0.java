package ls;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class i0 {

    /* renamed from: d, reason: collision with root package name */
    public static final i0 f14235d;

    /* renamed from: e, reason: collision with root package name */
    public static final i0 f14236e;

    /* renamed from: i, reason: collision with root package name */
    public static final i0 f14237i;

    /* renamed from: v, reason: collision with root package name */
    public static final i0 f14238v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ i0[] f14239w;

    static {
        i0 i0Var = new i0("WIDE", 0);
        f14235d = i0Var;
        i0 i0Var2 = new i0("ABBREVIATED", 1);
        f14236e = i0Var2;
        i0 i0Var3 = new i0("SHORT", 2);
        f14237i = i0Var3;
        i0 i0Var4 = new i0("NARROW", 3);
        f14238v = i0Var4;
        f14239w = new i0[]{i0Var, i0Var2, i0Var3, i0Var4};
    }

    public static i0 valueOf(String str) {
        return (i0) Enum.valueOf(i0.class, str);
    }

    public static i0[] values() {
        return (i0[]) f14239w.clone();
    }
}
