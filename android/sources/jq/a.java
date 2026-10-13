package jq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: i, reason: collision with root package name */
    public static final a f13033i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ a[] f13034v;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f13035d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f13036e;

    static {
        a aVar = new a("NO_ARGUMENTS", 0, 3);
        f13033i = aVar;
        a[] aVarArr = {aVar, new a("UNLESS_EMPTY", 1, 2), new a(true, true, "ALWAYS_PARENTHESIZED", 2)};
        f13034v = aVarArr;
        ki.b.p(aVarArr);
    }

    public /* synthetic */ a(String str, int i5, int i6) {
        this((i6 & 1) == 0, false, str, i5);
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f13034v.clone();
    }

    public a(boolean z5, boolean z6, String str, int i5) {
        this.f13035d = z5;
        this.f13036e = z6;
    }
}
