package lm;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f14092d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f14093e;

    /* renamed from: i, reason: collision with root package name */
    public static final a f14094i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ a[] f14095v;

    static {
        a aVar = new a("ForJS", 0);
        f14092d = aVar;
        a aVar2 = new a("ForReanimated", 1);
        f14093e = aVar2;
        a aVar3 = new a("ForAnimated", 2);
        f14094i = aVar3;
        a[] aVarArr = {aVar, aVar2, aVar3};
        f14095v = aVarArr;
        ki.b.p(aVarArr);
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f14095v.clone();
    }
}
