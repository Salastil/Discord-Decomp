package l4;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f13702d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f13703e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ a[] f13704i;

    static {
        a aVar = new a("AUTOMATIC", 0);
        f13702d = aVar;
        a aVar2 = new a("ENABLED", 1);
        f13703e = aVar2;
        f13704i = new a[]{aVar, aVar2, new a("DISABLED", 2)};
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f13704i.clone();
    }
}
