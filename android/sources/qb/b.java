package qb;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {
    public static final /* synthetic */ b[] E;

    /* renamed from: e, reason: collision with root package name */
    public static final b f16739e;

    /* renamed from: i, reason: collision with root package name */
    public static final b f16740i;

    /* renamed from: v, reason: collision with root package name */
    public static final b f16741v;

    /* renamed from: w, reason: collision with root package name */
    public static final b f16742w;

    /* renamed from: x, reason: collision with root package name */
    public static final b f16743x;

    /* renamed from: y, reason: collision with root package name */
    public static final b f16744y;

    /* renamed from: d, reason: collision with root package name */
    public final int f16745d;

    static {
        b bVar = new b("LOCKED_PORTRAIT", 0, 1);
        f16739e = bVar;
        b bVar2 = new b("LOCKED_LANDSCAPE", 1, 6);
        f16740i = bVar2;
        b bVar3 = new b("LOCKED_LANDSCAPE_LEFT", 2, 0);
        f16741v = bVar3;
        b bVar4 = new b("LOCKED_LANDSCAPE_RIGHT", 3, 8);
        f16742w = bVar4;
        b bVar5 = new b("UNLOCKED", 4, 4);
        f16743x = bVar5;
        b bVar6 = new b("UNSPECIFIED", 5, -1);
        f16744y = bVar6;
        b[] bVarArr = {bVar, bVar2, bVar3, bVar4, bVar5, bVar6};
        E = bVarArr;
        ki.b.p(bVarArr);
    }

    public b(String str, int i5, int i6) {
        this.f16745d = i6;
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) E.clone();
    }
}
