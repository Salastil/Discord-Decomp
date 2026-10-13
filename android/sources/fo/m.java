package fo;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class m {

    /* renamed from: d, reason: collision with root package name */
    public static final m f8826d;

    /* renamed from: e, reason: collision with root package name */
    public static final m f8827e;

    /* renamed from: i, reason: collision with root package name */
    public static final m f8828i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ m[] f8829v;

    static {
        m mVar = new m("SYNCHRONIZED", 0);
        f8826d = mVar;
        m mVar2 = new m("PUBLICATION", 1);
        f8827e = mVar2;
        m mVar3 = new m("NONE", 2);
        f8828i = mVar3;
        m[] mVarArr = {mVar, mVar2, mVar3};
        f8829v = mVarArr;
        ki.b.p(mVarArr);
    }

    public static m valueOf(String str) {
        return (m) Enum.valueOf(m.class, str);
    }

    public static m[] values() {
        return (m[]) f8829v.clone();
    }
}
