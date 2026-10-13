package rp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: e, reason: collision with root package name */
    public static final a f17419e;

    /* renamed from: i, reason: collision with root package name */
    public static final a f17420i;

    /* renamed from: v, reason: collision with root package name */
    public static final a f17421v;

    /* renamed from: w, reason: collision with root package name */
    public static final a f17422w;

    /* renamed from: x, reason: collision with root package name */
    public static final a f17423x;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ a[] f17424y;

    /* renamed from: d, reason: collision with root package name */
    public final String f17425d;

    static {
        a aVar = new a("METHOD_RETURN_TYPE", 0, "METHOD");
        f17419e = aVar;
        a aVar2 = new a("VALUE_PARAMETER", 1, "PARAMETER");
        f17420i = aVar2;
        a aVar3 = new a("FIELD", 2, "FIELD");
        f17421v = aVar3;
        a aVar4 = new a("TYPE_USE", 3, "TYPE_USE");
        f17422w = aVar4;
        a aVar5 = new a("TYPE_PARAMETER_BOUNDS", 4, "TYPE_USE");
        f17423x = aVar5;
        a[] aVarArr = {aVar, aVar2, aVar3, aVar4, aVar5, new a("TYPE_PARAMETER", 5, "TYPE_PARAMETER")};
        f17424y = aVarArr;
        ki.b.p(aVarArr);
    }

    public a(String str, int i5, String str2) {
        this.f17425d = str2;
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f17424y.clone();
    }
}
