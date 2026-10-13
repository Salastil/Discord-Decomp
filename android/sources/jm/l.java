package jm;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class l {

    /* renamed from: d, reason: collision with root package name */
    public static final l f12914d;

    /* renamed from: e, reason: collision with root package name */
    public static final l f12915e;

    /* renamed from: i, reason: collision with root package name */
    public static final l f12916i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ l[] f12917v;

    static {
        l lVar = new l("UP", 0);
        f12914d = lVar;
        l lVar2 = new l("DOWN", 1);
        f12915e = lVar2;
        l lVar3 = new l("NONE", 2);
        f12916i = lVar3;
        l[] lVarArr = {lVar, lVar2, lVar3};
        f12917v = lVarArr;
        ki.b.p(lVarArr);
    }

    public static l valueOf(String str) {
        return (l) Enum.valueOf(l.class, str);
    }

    public static l[] values() {
        return (l[]) f12917v.clone();
    }
}
