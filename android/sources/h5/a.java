package h5;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f9519d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f9520e;

    /* renamed from: i, reason: collision with root package name */
    public static final a f9521i;

    /* renamed from: v, reason: collision with root package name */
    public static final a f9522v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ a[] f9523w;

    static {
        a aVar = new a("TOP_START", 0);
        f9519d = aVar;
        a aVar2 = new a("TOP_END", 1);
        f9520e = aVar2;
        a aVar3 = new a("BOTTOM_START", 2);
        f9521i = aVar3;
        a aVar4 = new a("BOTTOM_END", 3);
        f9522v = aVar4;
        f9523w = new a[]{aVar, aVar2, aVar3, aVar4};
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f9523w.clone();
    }
}
