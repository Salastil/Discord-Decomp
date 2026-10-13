package kq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class l {

    /* renamed from: d, reason: collision with root package name */
    public static final l f13626d;

    /* renamed from: e, reason: collision with root package name */
    public static final l f13627e;

    /* renamed from: i, reason: collision with root package name */
    public static final l f13628i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ l[] f13629v;

    static {
        l lVar = new l("OVERRIDABLE", 0);
        f13626d = lVar;
        l lVar2 = new l("INCOMPATIBLE", 1);
        f13627e = lVar2;
        l lVar3 = new l("CONFLICT", 2);
        f13628i = lVar3;
        f13629v = new l[]{lVar, lVar2, lVar3};
    }

    public static l valueOf(String str) {
        return (l) Enum.valueOf(l.class, str);
    }

    public static l[] values() {
        return (l[]) f13629v.clone();
    }
}
