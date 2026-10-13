package hp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class l {

    /* renamed from: d, reason: collision with root package name */
    public static final l f10175d;

    /* renamed from: e, reason: collision with root package name */
    public static final l f10176e;

    /* renamed from: i, reason: collision with root package name */
    public static final l f10177i;

    /* renamed from: v, reason: collision with root package name */
    public static final l f10178v;

    /* renamed from: w, reason: collision with root package name */
    public static final l f10179w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ l[] f10180x;

    static {
        l lVar = new l("HIDDEN", 0);
        f10175d = lVar;
        l lVar2 = new l("VISIBLE", 1);
        f10176e = lVar2;
        l lVar3 = new l("DEPRECATED_LIST_METHODS", 2);
        f10177i = lVar3;
        l lVar4 = new l("NOT_CONSIDERED", 3);
        f10178v = lVar4;
        l lVar5 = new l("DROP", 4);
        f10179w = lVar5;
        l[] lVarArr = {lVar, lVar2, lVar3, lVar4, lVar5};
        f10180x = lVarArr;
        ki.b.p(lVarArr);
    }

    public static l valueOf(String str) {
        return (l) Enum.valueOf(l.class, str);
    }

    public static l[] values() {
        return (l[]) f10180x.clone();
    }
}
