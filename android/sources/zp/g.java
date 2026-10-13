package zp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class g {

    /* renamed from: d, reason: collision with root package name */
    public static final g f21352d;

    /* renamed from: e, reason: collision with root package name */
    public static final g f21353e;

    /* renamed from: i, reason: collision with root package name */
    public static final g f21354i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ g[] f21355v;

    static {
        g gVar = new g("FORCE_FLEXIBILITY", 0);
        f21352d = gVar;
        g gVar2 = new g("NULLABLE", 1);
        f21353e = gVar2;
        g gVar3 = new g("NOT_NULL", 2);
        f21354i = gVar3;
        g[] gVarArr = {gVar, gVar2, gVar3};
        f21355v = gVarArr;
        ki.b.p(gVarArr);
    }

    public static g valueOf(String str) {
        return (g) Enum.valueOf(g.class, str);
    }

    public static g[] values() {
        return (g[]) f21355v.clone();
    }
}
