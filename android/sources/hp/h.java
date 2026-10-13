package hp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class h {

    /* renamed from: d, reason: collision with root package name */
    public static final h f10168d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ h[] f10169e;

    static {
        h hVar = new h("FROM_DEPENDENCIES", 0);
        f10168d = hVar;
        h[] hVarArr = {hVar, new h("FROM_CLASS_LOADER", 1), new h("FALLBACK", 2)};
        f10169e = hVarArr;
        ki.b.p(hVarArr);
    }

    public static h valueOf(String str) {
        return (h) Enum.valueOf(h.class, str);
    }

    public static h[] values() {
        return (h[]) f10169e.clone();
    }
}
