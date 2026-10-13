package sn;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final a f18064d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f18065e;

    /* renamed from: i, reason: collision with root package name */
    public static final a f18066i;

    /* renamed from: v, reason: collision with root package name */
    public static final a f18067v;

    /* renamed from: w, reason: collision with root package name */
    public static final a f18068w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ a[] f18069x;

    static {
        a aVar = new a("LevelDebug", 0);
        f18064d = aVar;
        a aVar2 = new a("LevelInfo", 1);
        f18065e = aVar2;
        a aVar3 = new a("LevelWarning", 2);
        f18066i = aVar3;
        a aVar4 = new a("LevelError", 3);
        f18067v = aVar4;
        a aVar5 = new a("LevelNone", 4);
        f18068w = aVar5;
        f18069x = new a[]{aVar, aVar2, aVar3, aVar4, aVar5};
    }

    public static a valueOf(String str) {
        return (a) Enum.valueOf(a.class, str);
    }

    public static a[] values() {
        return (a[]) f18069x.clone();
    }
}
