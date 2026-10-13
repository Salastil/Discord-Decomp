package xq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class k {

    /* renamed from: d, reason: collision with root package name */
    public static final k f20546d;

    /* renamed from: e, reason: collision with root package name */
    public static final k f20547e;

    /* renamed from: i, reason: collision with root package name */
    public static final k f20548i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ k[] f20549v;

    static {
        k kVar = new k("NOT_COMPUTED", 0);
        f20546d = kVar;
        k kVar2 = new k("COMPUTING", 1);
        f20547e = kVar2;
        k kVar3 = new k("RECURSION_WAS_DETECTED", 2);
        f20548i = kVar3;
        f20549v = new k[]{kVar, kVar2, kVar3};
    }

    public static k valueOf(String str) {
        return (k) Enum.valueOf(k.class, str);
    }

    public static k[] values() {
        return (k[]) f20549v.clone();
    }
}
