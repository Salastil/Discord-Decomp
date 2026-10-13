package uq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f18996d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f18997e;

    /* renamed from: i, reason: collision with root package name */
    public static final a f18998i;

    /* renamed from: v, reason: collision with root package name */
    public static final a f18999v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ a[] f19000w;

    static {
        a aVar = new a("FUNCTION", 0);
        f18996d = aVar;
        a aVar2 = new a("PROPERTY", 1);
        f18997e = aVar2;
        a aVar3 = new a("PROPERTY_GETTER", 2);
        f18998i = aVar3;
        a aVar4 = new a("PROPERTY_SETTER", 3);
        f18999v = aVar4;
        f19000w = new a[]{aVar, aVar2, aVar3, aVar4};
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f19000w.clone();
    }
}
