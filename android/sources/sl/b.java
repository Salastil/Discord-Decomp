package sl;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: e, reason: collision with root package name */
    public static final b f18053e;

    /* renamed from: i, reason: collision with root package name */
    public static final b f18054i;

    /* renamed from: v, reason: collision with root package name */
    public static final b f18055v;

    /* renamed from: w, reason: collision with root package name */
    public static final b f18056w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ b[] f18057x;

    /* renamed from: d, reason: collision with root package name */
    public final String f18058d;

    static {
        b bVar = new b("Move", 0, "topKeyboardMove");
        f18053e = bVar;
        b bVar2 = new b("Start", 1, "topKeyboardMoveStart");
        f18054i = bVar2;
        b bVar3 = new b("End", 2, "topKeyboardMoveEnd");
        f18055v = bVar3;
        b bVar4 = new b("Interactive", 3, "topKeyboardMoveInteractive");
        f18056w = bVar4;
        b[] bVarArr = {bVar, bVar2, bVar3, bVar4};
        f18057x = bVarArr;
        ki.b.p(bVarArr);
    }

    public b(String str, int i5, String str2) {
        this.f18058d = str2;
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f18057x.clone();
    }
}
