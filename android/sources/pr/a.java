package pr;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f16467d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f16468e;

    /* renamed from: i, reason: collision with root package name */
    public static final a f16469i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ a[] f16470v;

    static {
        a aVar = new a("SUSPEND", 0);
        f16467d = aVar;
        a aVar2 = new a("DROP_OLDEST", 1);
        f16468e = aVar2;
        a aVar3 = new a("DROP_LATEST", 2);
        f16469i = aVar3;
        a[] aVarArr = {aVar, aVar2, aVar3};
        f16470v = aVarArr;
        ki.b.p(aVarArr);
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f16470v.clone();
    }
}
