package rm;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f17407d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f17408e;

    /* renamed from: i, reason: collision with root package name */
    public static final a f17409i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ a[] f17410v;

    static {
        a aVar = new a("INHERIT", 0);
        f17407d = aVar;
        a aVar2 = new a("LIGHT", 1);
        f17408e = aVar2;
        a aVar3 = new a("DARK", 2);
        f17409i = aVar3;
        a[] aVarArr = {aVar, aVar2, aVar3};
        f17410v = aVarArr;
        ki.b.p(aVarArr);
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f17410v.clone();
    }
}
