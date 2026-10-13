package hn;

import fo.n;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class k {

    /* renamed from: d, reason: collision with root package name */
    public static final k f10137d;

    /* renamed from: e, reason: collision with root package name */
    public static final k f10138e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ k[] f10139i;

    static {
        k kVar = new k("STALE", 0);
        f10137d = kVar;
        k kVar2 = new k("REPEATED", 1);
        f10138e = kVar2;
        k[] kVarArr = {kVar, kVar2};
        f10139i = kVarArr;
        ki.b.p(kVarArr);
    }

    public static k valueOf(String str) {
        return (k) Enum.valueOf(k.class, str);
    }

    public static k[] values() {
        return (k[]) f10139i.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "stale";
        }
        if (ordinal == 1) {
            return "repeated";
        }
        throw new n();
    }
}
