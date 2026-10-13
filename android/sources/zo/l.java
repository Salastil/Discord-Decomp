package zo;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class l {

    /* renamed from: d, reason: collision with root package name */
    public static final l f21329d;

    /* renamed from: e, reason: collision with root package name */
    public static final l f21330e;

    /* renamed from: i, reason: collision with root package name */
    public static final l f21331i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ l[] f21332v;

    static {
        l lVar = new l("INSTANCE", 0);
        f21329d = lVar;
        l lVar2 = new l("EXTENSION_RECEIVER", 1);
        f21330e = lVar2;
        l lVar3 = new l("VALUE", 2);
        f21331i = lVar3;
        l[] lVarArr = {lVar, lVar2, lVar3};
        f21332v = lVarArr;
        ki.b.p(lVarArr);
    }

    public static l valueOf(String str) {
        return (l) Enum.valueOf(l.class, str);
    }

    public static l[] values() {
        return (l[]) f21332v.clone();
    }
}
