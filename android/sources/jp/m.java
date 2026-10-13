package jp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class m {

    /* renamed from: d, reason: collision with root package name */
    public static final m f13016d;

    /* renamed from: e, reason: collision with root package name */
    public static final m f13017e;

    /* renamed from: i, reason: collision with root package name */
    public static final m f13018i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ m[] f13019v;

    static {
        m mVar = new m("RUNTIME", 0);
        f13016d = mVar;
        m mVar2 = new m("BINARY", 1);
        f13017e = mVar2;
        m mVar3 = new m("SOURCE", 2);
        f13018i = mVar3;
        m[] mVarArr = {mVar, mVar2, mVar3};
        f13019v = mVarArr;
        ki.b.p(mVarArr);
    }

    public static m valueOf(String str) {
        return (m) Enum.valueOf(m.class, str);
    }

    public static m[] values() {
        return (m[]) f13019v.clone();
    }
}
