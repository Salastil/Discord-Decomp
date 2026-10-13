package v3;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f19180d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f19181e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ a[] f19182i;

    static {
        a aVar = new a("EXPONENTIAL", 0);
        f19180d = aVar;
        a aVar2 = new a("LINEAR", 1);
        f19181e = aVar2;
        f19182i = new a[]{aVar, aVar2};
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f19182i.clone();
    }
}
