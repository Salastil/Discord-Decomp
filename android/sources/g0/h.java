package g0;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class h {

    /* renamed from: d, reason: collision with root package name */
    public static final h f9073d;

    /* renamed from: e, reason: collision with root package name */
    public static final h f9074e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ h[] f9075i;

    static {
        h hVar = new h("Min", 0);
        f9073d = hVar;
        h hVar2 = new h("Max", 1);
        f9074e = hVar2;
        f9075i = new h[]{hVar, hVar2};
    }

    public static h valueOf(String str) {
        return (h) Enum.valueOf(h.class, str);
    }

    public static h[] values() {
        return (h[]) f9075i.clone();
    }
}
