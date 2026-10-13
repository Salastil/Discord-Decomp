package net.time4j;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class k0 {

    /* renamed from: d, reason: collision with root package name */
    public static final k0 f15265d;

    /* renamed from: e, reason: collision with root package name */
    public static final k0 f15266e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ k0[] f15267i;

    static {
        k0 k0Var = new k0("AM", 0);
        f15265d = k0Var;
        k0 k0Var2 = new k0("PM", 1);
        f15266e = k0Var2;
        f15267i = new k0[]{k0Var, k0Var2};
    }

    public static k0 valueOf(String str) {
        return (k0) Enum.valueOf(k0.class, str);
    }

    public static k0[] values() {
        return (k0[]) f15267i.clone();
    }
}
