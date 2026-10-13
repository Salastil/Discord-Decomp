package net.time4j;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class r0 {

    /* renamed from: d, reason: collision with root package name */
    public static final r0 f15308d;

    /* renamed from: e, reason: collision with root package name */
    public static final r0 f15309e;

    /* renamed from: i, reason: collision with root package name */
    public static final r0[] f15310i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ r0[] f15311v;

    static {
        r0 r0Var = new r0("JANUARY", 0);
        f15308d = r0Var;
        r0 r0Var2 = new r0("FEBRUARY", 1);
        r0 r0Var3 = new r0("MARCH", 2);
        r0 r0Var4 = new r0("APRIL", 3);
        r0 r0Var5 = new r0("MAY", 4);
        r0 r0Var6 = new r0("JUNE", 5);
        r0 r0Var7 = new r0("JULY", 6);
        r0 r0Var8 = new r0("AUGUST", 7);
        r0 r0Var9 = new r0("SEPTEMBER", 8);
        r0 r0Var10 = new r0("OCTOBER", 9);
        r0 r0Var11 = new r0("NOVEMBER", 10);
        r0 r0Var12 = new r0("DECEMBER", 11);
        f15309e = r0Var12;
        f15311v = new r0[]{r0Var, r0Var2, r0Var3, r0Var4, r0Var5, r0Var6, r0Var7, r0Var8, r0Var9, r0Var10, r0Var11, r0Var12};
        f15310i = values();
    }

    public static r0 b(int i5) {
        if (i5 < 1 || i5 > 12) {
            throw new IllegalArgumentException(k0.d.i(i5, "Out of range: "));
        }
        return f15310i[i5 - 1];
    }

    public static r0 valueOf(String str) {
        return (r0) Enum.valueOf(r0.class, str);
    }

    public static r0[] values() {
        return (r0[]) f15311v.clone();
    }

    public final int a() {
        return ordinal() + 1;
    }
}
