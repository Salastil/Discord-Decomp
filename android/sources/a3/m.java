package a3;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class m {

    /* renamed from: d, reason: collision with root package name */
    public static final m f86d;

    /* renamed from: e, reason: collision with root package name */
    public static final m f87e;

    /* renamed from: i, reason: collision with root package name */
    public static final m f88i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ m[] f89v;

    static {
        m mVar = new m("AUTOMATIC", 0);
        f86d = mVar;
        m mVar2 = new m("TRUNCATE", 1);
        f87e = mVar2;
        m mVar3 = new m("WRITE_AHEAD_LOGGING", 2);
        f88i = mVar3;
        f89v = new m[]{mVar, mVar2, mVar3};
    }

    public static m valueOf(String str) {
        return (m) Enum.valueOf(m.class, str);
    }

    public static m[] values() {
        return (m[]) f89v.clone();
    }
}
