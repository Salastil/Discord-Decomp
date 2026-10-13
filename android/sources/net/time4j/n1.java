package net.time4j;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class n1 {
    public static final n1[] E;
    public static final /* synthetic */ n1[] F;

    /* renamed from: d, reason: collision with root package name */
    public static final n1 f15289d;

    /* renamed from: e, reason: collision with root package name */
    public static final n1 f15290e;

    /* renamed from: i, reason: collision with root package name */
    public static final n1 f15291i;

    /* renamed from: v, reason: collision with root package name */
    public static final n1 f15292v;

    /* renamed from: w, reason: collision with root package name */
    public static final n1 f15293w;

    /* renamed from: x, reason: collision with root package name */
    public static final n1 f15294x;

    /* renamed from: y, reason: collision with root package name */
    public static final n1 f15295y;

    static {
        n1 n1Var = new n1("MONDAY", 0);
        f15289d = n1Var;
        n1 n1Var2 = new n1("TUESDAY", 1);
        f15290e = n1Var2;
        n1 n1Var3 = new n1("WEDNESDAY", 2);
        f15291i = n1Var3;
        n1 n1Var4 = new n1("THURSDAY", 3);
        f15292v = n1Var4;
        n1 n1Var5 = new n1("FRIDAY", 4);
        f15293w = n1Var5;
        n1 n1Var6 = new n1("SATURDAY", 5);
        f15294x = n1Var6;
        n1 n1Var7 = new n1("SUNDAY", 6);
        f15295y = n1Var7;
        F = new n1[]{n1Var, n1Var2, n1Var3, n1Var4, n1Var5, n1Var6, n1Var7};
        E = values();
    }

    public static n1 d(int i5) {
        if (i5 < 1 || i5 > 7) {
            throw new IllegalArgumentException(k0.d.i(i5, "Out of range: "));
        }
        return E[i5 - 1];
    }

    public static n1 valueOf(String str) {
        return (n1) Enum.valueOf(n1.class, str);
    }

    public static n1[] values() {
        return (n1[]) F.clone();
    }

    public final int a() {
        return ordinal() + 1;
    }

    public final int b(t1 t1Var) {
        return (((ordinal() + 7) - t1Var.f15325d.ordinal()) % 7) + 1;
    }

    public final n1 c() {
        return d(((ordinal() + 13) % 7) + 1);
    }
}
