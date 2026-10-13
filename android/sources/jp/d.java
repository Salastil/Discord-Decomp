package jp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class d {
    public static final d E;
    public static final d F;
    public static final d G;
    public static final /* synthetic */ d[] H;

    /* renamed from: e, reason: collision with root package name */
    public static final d f12997e;

    /* renamed from: i, reason: collision with root package name */
    public static final d f12998i;

    /* renamed from: v, reason: collision with root package name */
    public static final d f12999v;

    /* renamed from: w, reason: collision with root package name */
    public static final d f13000w;

    /* renamed from: x, reason: collision with root package name */
    public static final d f13001x;

    /* renamed from: y, reason: collision with root package name */
    public static final d f13002y;

    /* renamed from: d, reason: collision with root package name */
    public final String f13003d;

    static {
        d dVar = new d("ALL", 0, null);
        d dVar2 = new d("FIELD", 1, null);
        f12997e = dVar2;
        d dVar3 = new d("FILE", 2, null);
        f12998i = dVar3;
        d dVar4 = new d("PROPERTY", 3, null);
        f12999v = dVar4;
        d dVar5 = new d("PROPERTY_GETTER", 4, "get");
        f13000w = dVar5;
        d dVar6 = new d("PROPERTY_SETTER", 5, "set");
        f13001x = dVar6;
        d dVar7 = new d("RECEIVER", 6, null);
        f13002y = dVar7;
        d dVar8 = new d("CONSTRUCTOR_PARAMETER", 7, "param");
        E = dVar8;
        d dVar9 = new d("SETTER_PARAMETER", 8, "setparam");
        F = dVar9;
        d dVar10 = new d("PROPERTY_DELEGATE_FIELD", 9, "delegate");
        G = dVar10;
        d[] dVarArr = {dVar, dVar2, dVar3, dVar4, dVar5, dVar6, dVar7, dVar8, dVar9, dVar10};
        H = dVarArr;
        ki.b.p(dVarArr);
    }

    public d(String str, int i5, String str2) {
        this.f13003d = str2 == null ? com.facebook.imagepipeline.nativecode.c.X(name()) : str2;
    }

    public static d valueOf(String str) {
        return (d) Enum.valueOf(d.class, str);
    }

    public static d[] values() {
        return (d[]) H.clone();
    }
}
