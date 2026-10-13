package m0;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class e {

    /* renamed from: d, reason: collision with root package name */
    public static final e f14313d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ e[] f14314e;

    static {
        e eVar = new e("Ltr", 0);
        f14313d = eVar;
        f14314e = new e[]{eVar, new e("Rtl", 1)};
    }

    public static e valueOf(String str) {
        return (e) Enum.valueOf(e.class, str);
    }

    public static e[] values() {
        return (e[]) f14314e.clone();
    }
}
