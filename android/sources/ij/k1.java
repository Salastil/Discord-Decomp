package ij;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class k1 {
    public static final k1 E;
    public static final k1 F;
    public static final /* synthetic */ k1[] G;

    /* renamed from: d, reason: collision with root package name */
    public static final k1 f10897d;

    /* renamed from: e, reason: collision with root package name */
    public static final k1 f10898e;

    /* renamed from: i, reason: collision with root package name */
    public static final k1 f10899i;

    /* renamed from: v, reason: collision with root package name */
    public static final k1 f10900v;

    /* renamed from: w, reason: collision with root package name */
    public static final k1 f10901w;

    /* renamed from: x, reason: collision with root package name */
    public static final k1 f10902x;

    /* renamed from: y, reason: collision with root package name */
    public static final k1 f10903y;

    static {
        k1 k1Var = new k1("INT", 0);
        f10897d = k1Var;
        k1 k1Var2 = new k1("LONG", 1);
        f10898e = k1Var2;
        k1 k1Var3 = new k1("FLOAT", 2);
        f10899i = k1Var3;
        k1 k1Var4 = new k1("DOUBLE", 3);
        f10900v = k1Var4;
        k1 k1Var5 = new k1("BOOLEAN", 4);
        f10901w = k1Var5;
        k1 k1Var6 = new k1("STRING", 5);
        f10902x = k1Var6;
        g gVar = g.f10858i;
        k1 k1Var7 = new k1("BYTE_STRING", 6);
        f10903y = k1Var7;
        k1 k1Var8 = new k1("ENUM", 7);
        E = k1Var8;
        k1 k1Var9 = new k1("MESSAGE", 8);
        F = k1Var9;
        G = new k1[]{k1Var, k1Var2, k1Var3, k1Var4, k1Var5, k1Var6, k1Var7, k1Var8, k1Var9};
    }

    public static k1 valueOf(String str) {
        return (k1) Enum.valueOf(k1.class, str);
    }

    public static k1[] values() {
        return (k1[]) G.clone();
    }
}
