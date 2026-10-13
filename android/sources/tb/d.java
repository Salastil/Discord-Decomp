package tb;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class d {

    /* renamed from: d, reason: collision with root package name */
    public static final d f18249d;

    /* renamed from: e, reason: collision with root package name */
    public static final d f18250e;

    /* renamed from: i, reason: collision with root package name */
    public static final d f18251i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ d[] f18252v;

    static {
        d dVar = new d("DEFAULT", 0);
        f18249d = dVar;
        d dVar2 = new d("VERY_LOW", 1);
        f18250e = dVar2;
        d dVar3 = new d("HIGHEST", 2);
        f18251i = dVar3;
        f18252v = new d[]{dVar, dVar2, dVar3};
    }

    public static d valueOf(String str) {
        return (d) Enum.valueOf(d.class, str);
    }

    public static d[] values() {
        return (d[]) f18252v.clone();
    }
}
