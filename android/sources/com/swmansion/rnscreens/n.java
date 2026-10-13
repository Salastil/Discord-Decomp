package com.swmansion.rnscreens;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class n {

    /* renamed from: d, reason: collision with root package name */
    public static final n f6771d;

    /* renamed from: e, reason: collision with root package name */
    public static final n f6772e;

    /* renamed from: i, reason: collision with root package name */
    public static final n f6773i;

    /* renamed from: v, reason: collision with root package name */
    public static final n f6774v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ n[] f6775w;

    static {
        n nVar = new n("ORIENTATION", 0);
        f6771d = nVar;
        n nVar2 = new n("STYLE", 1);
        f6772e = nVar2;
        n nVar3 = new n("HIDDEN", 2);
        f6773i = nVar3;
        n nVar4 = new n("ANIMATED", 3);
        n nVar5 = new n("NAVIGATION_BAR_HIDDEN", 4);
        f6774v = nVar5;
        n[] nVarArr = {nVar, nVar2, nVar3, nVar4, nVar5};
        f6775w = nVarArr;
        ki.b.p(nVarArr);
    }

    public static n valueOf(String str) {
        return (n) Enum.valueOf(n.class, str);
    }

    public static n[] values() {
        return (n[]) f6775w.clone();
    }
}
