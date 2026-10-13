package ip;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class g {

    /* renamed from: d, reason: collision with root package name */
    public static final g f12138d;

    /* renamed from: e, reason: collision with root package name */
    public static final g f12139e;

    /* renamed from: i, reason: collision with root package name */
    public static final g f12140i;

    /* renamed from: v, reason: collision with root package name */
    public static final g f12141v;

    /* renamed from: w, reason: collision with root package name */
    public static final g f12142w;

    /* renamed from: x, reason: collision with root package name */
    public static final g f12143x;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ g[] f12144y;

    static {
        g gVar = new g("CLASS", 0);
        f12138d = gVar;
        g gVar2 = new g("INTERFACE", 1);
        f12139e = gVar2;
        g gVar3 = new g("ENUM_CLASS", 2);
        f12140i = gVar3;
        g gVar4 = new g("ENUM_ENTRY", 3);
        f12141v = gVar4;
        g gVar5 = new g("ANNOTATION_CLASS", 4);
        f12142w = gVar5;
        g gVar6 = new g("OBJECT", 5);
        f12143x = gVar6;
        g[] gVarArr = {gVar, gVar2, gVar3, gVar4, gVar5, gVar6};
        f12144y = gVarArr;
        ki.b.p(gVarArr);
    }

    public static g valueOf(String str) {
        return (g) Enum.valueOf(g.class, str);
    }

    public static g[] values() {
        return (g[]) f12144y.clone();
    }

    public final boolean a() {
        return this == f12143x || this == f12141v;
    }
}
