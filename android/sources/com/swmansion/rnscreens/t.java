package com.swmansion.rnscreens;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class t {

    /* renamed from: d, reason: collision with root package name */
    public static final t f6790d;

    /* renamed from: e, reason: collision with root package name */
    public static final t f6791e;

    /* renamed from: i, reason: collision with root package name */
    public static final t f6792i;

    /* renamed from: v, reason: collision with root package name */
    public static final t f6793v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ t[] f6794w;

    static {
        t tVar = new t("DID_APPEAR", 0);
        f6790d = tVar;
        t tVar2 = new t("WILL_APPEAR", 1);
        f6791e = tVar2;
        t tVar3 = new t("DID_DISAPPEAR", 2);
        f6792i = tVar3;
        t tVar4 = new t("WILL_DISAPPEAR", 3);
        f6793v = tVar4;
        t[] tVarArr = {tVar, tVar2, tVar3, tVar4};
        f6794w = tVarArr;
        ki.b.p(tVarArr);
    }

    public static t valueOf(String str) {
        return (t) Enum.valueOf(t.class, str);
    }

    public static t[] values() {
        return (t[]) f6794w.clone();
    }
}
