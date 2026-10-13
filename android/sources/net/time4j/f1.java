package net.time4j;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class f1 {

    /* renamed from: d, reason: collision with root package name */
    public static final f1 f15249d;

    /* renamed from: e, reason: collision with root package name */
    public static final f1 f15250e;

    /* renamed from: i, reason: collision with root package name */
    public static final f1[] f15251i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ f1[] f15252v;

    static {
        f1 f1Var = new f1("Q1", 0);
        f15249d = f1Var;
        f1 f1Var2 = new f1("Q2", 1);
        f1 f1Var3 = new f1("Q3", 2);
        f1 f1Var4 = new f1("Q4", 3);
        f15250e = f1Var4;
        f15252v = new f1[]{f1Var, f1Var2, f1Var3, f1Var4};
        f15251i = values();
    }

    public static f1 valueOf(String str) {
        return (f1) Enum.valueOf(f1.class, str);
    }

    public static f1[] values() {
        return (f1[]) f15252v.clone();
    }
}
