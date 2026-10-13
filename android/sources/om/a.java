package om;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f16129d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f16130e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ a[] f16131i;

    static {
        a aVar = new a("ENTER", 0);
        f16129d = aVar;
        a aVar2 = new a("EXIT", 1);
        f16130e = aVar2;
        a[] aVarArr = {aVar, aVar2};
        f16131i = aVarArr;
        ki.b.p(aVarArr);
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f16131i.clone();
    }
}
