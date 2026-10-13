package cs;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f7323d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f7324e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ a[] f7325i;

    static {
        a aVar = new a("NONE", 0);
        f7323d = aVar;
        a aVar2 = new a("ALL_JSON_OBJECTS", 1);
        a aVar3 = new a("POLYMORPHIC", 2);
        f7324e = aVar3;
        a[] aVarArr = {aVar, aVar2, aVar3};
        f7325i = aVarArr;
        ki.b.p(aVarArr);
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f7325i.clone();
    }
}
