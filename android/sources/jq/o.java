package jq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class o {

    /* renamed from: d, reason: collision with root package name */
    public static final o f13087d;

    /* renamed from: e, reason: collision with root package name */
    public static final o f13088e;

    /* renamed from: i, reason: collision with root package name */
    public static final o f13089i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ o[] f13090v;

    static {
        o oVar = new o("ALL", 0);
        f13087d = oVar;
        o oVar2 = new o("ONLY_NON_SYNTHESIZED", 1);
        f13088e = oVar2;
        o oVar3 = new o("NONE", 2);
        f13089i = oVar3;
        o[] oVarArr = {oVar, oVar2, oVar3};
        f13090v = oVarArr;
        ki.b.p(oVarArr);
    }

    public static o valueOf(String str) {
        return (o) Enum.valueOf(o.class, str);
    }

    public static o[] values() {
        return (o[]) f13090v.clone();
    }
}
