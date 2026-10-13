package com.swmansion.rnscreens;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public abstract class q0 {

    /* renamed from: d, reason: collision with root package name */
    public static final p0 f6776d;

    /* renamed from: e, reason: collision with root package name */
    public static final o0 f6777e;

    /* renamed from: i, reason: collision with root package name */
    public static final n0 f6778i;

    /* renamed from: v, reason: collision with root package name */
    public static final m0 f6779v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ q0[] f6780w;

    static {
        p0 p0Var = new p0();
        f6776d = p0Var;
        o0 o0Var = new o0();
        f6777e = o0Var;
        n0 n0Var = new n0();
        f6778i = n0Var;
        m0 m0Var = new m0();
        f6779v = m0Var;
        q0[] q0VarArr = {p0Var, o0Var, n0Var, m0Var};
        f6780w = q0VarArr;
        ki.b.p(q0VarArr);
    }

    public static q0 valueOf(String str) {
        return (q0) Enum.valueOf(q0.class, str);
    }

    public static q0[] values() {
        return (q0[]) f6780w.clone();
    }

    public abstract int a(l0 l0Var);
}
