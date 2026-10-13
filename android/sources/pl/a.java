package pl;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: e, reason: collision with root package name */
    public static final r8.c f16424e;

    /* renamed from: i, reason: collision with root package name */
    public static final a f16425i;

    /* renamed from: v, reason: collision with root package name */
    public static final a f16426v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ a[] f16427w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ mo.a f16428x;

    /* renamed from: d, reason: collision with root package name */
    public final String f16429d;

    static {
        a aVar = new a("CACHES_DIRECTORY", 0, "cachesDirectory");
        f16425i = aVar;
        a aVar2 = new a("DOCUMENT_DIRECTORY", 1, "documentDirectory");
        f16426v = aVar2;
        a[] aVarArr = {aVar, aVar2};
        f16427w = aVarArr;
        f16428x = ki.b.p(aVarArr);
        f16424e = new r8.c(15);
    }

    public a(String str, int i5, String str2) {
        this.f16429d = str2;
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f16427w.clone();
    }
}
