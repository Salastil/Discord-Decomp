package ko;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f13464d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f13465e;

    /* renamed from: i, reason: collision with root package name */
    public static final a f13466i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ a[] f13467v;

    static {
        a aVar = new a("COROUTINE_SUSPENDED", 0);
        f13464d = aVar;
        a aVar2 = new a("UNDECIDED", 1);
        f13465e = aVar2;
        a aVar3 = new a("RESUMED", 2);
        f13466i = aVar3;
        a[] aVarArr = {aVar, aVar2, aVar3};
        f13467v = aVarArr;
        ki.b.p(aVarArr);
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f13467v.clone();
    }
}
