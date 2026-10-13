package com.swmansion.rnscreens;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class f0 {

    /* renamed from: d, reason: collision with root package name */
    public static final f0 f6749d;

    /* renamed from: e, reason: collision with root package name */
    public static final f0 f6750e;

    /* renamed from: i, reason: collision with root package name */
    public static final f0 f6751i;

    /* renamed from: v, reason: collision with root package name */
    public static final f0 f6752v;

    /* renamed from: w, reason: collision with root package name */
    public static final f0 f6753w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ f0[] f6754x;

    static {
        f0 f0Var = new f0("LEFT", 0);
        f6749d = f0Var;
        f0 f0Var2 = new f0("CENTER", 1);
        f6750e = f0Var2;
        f0 f0Var3 = new f0("RIGHT", 2);
        f6751i = f0Var3;
        f0 f0Var4 = new f0("BACK", 3);
        f6752v = f0Var4;
        f0 f0Var5 = new f0("SEARCH_BAR", 4);
        f6753w = f0Var5;
        f0[] f0VarArr = {f0Var, f0Var2, f0Var3, f0Var4, f0Var5};
        f6754x = f0VarArr;
        ki.b.p(f0VarArr);
    }

    public static f0 valueOf(String str) {
        return (f0) Enum.valueOf(f0.class, str);
    }

    public static f0[] values() {
        return (f0[]) f6754x.clone();
    }
}
