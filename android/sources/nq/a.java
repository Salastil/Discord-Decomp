package nq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f15588d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ a[] f15589e;

    static {
        a aVar = new a("WARNING", 0);
        a aVar2 = new a("ERROR", 1);
        f15588d = aVar2;
        a[] aVarArr = {aVar, aVar2, new a("HIDDEN", 2)};
        f15589e = aVarArr;
        ki.b.p(aVarArr);
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f15589e.clone();
    }
}
