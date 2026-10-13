package an;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class d {

    /* renamed from: d, reason: collision with root package name */
    public static final d f689d;

    /* renamed from: e, reason: collision with root package name */
    public static final d f690e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ d[] f691i;

    static {
        d dVar = new d("OFF", 0);
        f689d = dVar;
        d dVar2 = new d("PARALLAX", 1);
        f690e = dVar2;
        d[] dVarArr = {dVar, dVar2};
        f691i = dVarArr;
        ki.b.p(dVarArr);
    }

    public static d valueOf(String str) {
        return (d) Enum.valueOf(d.class, str);
    }

    public static d[] values() {
        return (d[]) f691i.clone();
    }
}
