package com.swmansion.rnscreens;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class l0 {

    /* renamed from: d, reason: collision with root package name */
    public static final l0 f6764d;

    /* renamed from: e, reason: collision with root package name */
    public static final l0 f6765e;

    /* renamed from: i, reason: collision with root package name */
    public static final l0 f6766i;

    /* renamed from: v, reason: collision with root package name */
    public static final l0 f6767v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ l0[] f6768w;

    static {
        l0 l0Var = new l0("NONE", 0);
        f6764d = l0Var;
        l0 l0Var2 = new l0("WORDS", 1);
        f6765e = l0Var2;
        l0 l0Var3 = new l0("SENTENCES", 2);
        f6766i = l0Var3;
        l0 l0Var4 = new l0("CHARACTERS", 3);
        f6767v = l0Var4;
        l0[] l0VarArr = {l0Var, l0Var2, l0Var3, l0Var4};
        f6768w = l0VarArr;
        ki.b.p(l0VarArr);
    }

    public static l0 valueOf(String str) {
        return (l0) Enum.valueOf(l0.class, str);
    }

    public static l0[] values() {
        return (l0[]) f6768w.clone();
    }
}
