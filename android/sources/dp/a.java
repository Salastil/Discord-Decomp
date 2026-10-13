package dp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f7632d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f7633e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ a[] f7634i;

    static {
        a aVar = new a("CALL_BY_NAME", 0);
        f7632d = aVar;
        a aVar2 = new a("POSITIONAL_CALL", 1);
        f7633e = aVar2;
        a[] aVarArr = {aVar, aVar2};
        f7634i = aVarArr;
        ki.b.p(aVarArr);
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f7634i.clone();
    }
}
