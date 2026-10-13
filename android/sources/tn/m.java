package tn;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class m {

    /* renamed from: d, reason: collision with root package name */
    public static final m f18680d;

    /* renamed from: e, reason: collision with root package name */
    public static final m f18681e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ m[] f18682i;

    static {
        m mVar = new m("PADDING", 0);
        f18680d = mVar;
        m mVar2 = new m("MARGIN", 1);
        f18681e = mVar2;
        m[] mVarArr = {mVar, mVar2};
        f18682i = mVarArr;
        ki.b.p(mVarArr);
    }

    public static m valueOf(String str) {
        return (m) Enum.valueOf(m.class, str);
    }

    public static m[] values() {
        return (m[]) f18682i.clone();
    }
}
