package c5;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class l {

    /* renamed from: d, reason: collision with root package name */
    public static final l f3342d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ l[] f3343e;

    /* JADX INFO: Fake field, exist only in values array */
    l EF0;

    static {
        l lVar = new l("LOW", 0);
        l lVar2 = new l("NORMAL", 1);
        f3342d = lVar2;
        f3343e = new l[]{lVar, lVar2, new l("HIGH", 2), new l("IMMEDIATE", 3)};
    }

    public static l valueOf(String str) {
        return (l) Enum.valueOf(l.class, str);
    }

    public static l[] values() {
        return (l[]) f3343e.clone();
    }
}
