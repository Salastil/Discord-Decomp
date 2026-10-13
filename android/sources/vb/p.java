package vb;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class p {

    /* renamed from: d, reason: collision with root package name */
    public static final p f19314d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ p[] f19315e;

    /* JADX INFO: Fake field, exist only in values array */
    p EF0;

    static {
        p pVar = new p("UNKNOWN", 0);
        p pVar2 = new p("ANDROID_FIREBASE", 1);
        f19314d = pVar2;
        f19315e = new p[]{pVar, pVar2};
    }

    public static p valueOf(String str) {
        return (p) Enum.valueOf(p.class, str);
    }

    public static p[] values() {
        return (p[]) f19315e.clone();
    }
}
