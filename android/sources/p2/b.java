package p2;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class b {
    public static final b E;
    public static final b F;
    public static final /* synthetic */ b[] G;

    /* renamed from: d, reason: collision with root package name */
    public static final b f16298d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f16299e;

    /* renamed from: i, reason: collision with root package name */
    public static final b f16300i;

    /* renamed from: v, reason: collision with root package name */
    public static final b f16301v;

    /* renamed from: w, reason: collision with root package name */
    public static final b f16302w;

    /* renamed from: x, reason: collision with root package name */
    public static final b f16303x;

    /* renamed from: y, reason: collision with root package name */
    public static final b f16304y;

    static {
        b bVar = new b("PENALTY_LOG", 0);
        f16298d = bVar;
        b bVar2 = new b("PENALTY_DEATH", 1);
        f16299e = bVar2;
        b bVar3 = new b("DETECT_FRAGMENT_REUSE", 2);
        f16300i = bVar3;
        b bVar4 = new b("DETECT_FRAGMENT_TAG_USAGE", 3);
        f16301v = bVar4;
        b bVar5 = new b("DETECT_WRONG_NESTED_HIERARCHY", 4);
        f16302w = bVar5;
        b bVar6 = new b("DETECT_RETAIN_INSTANCE_USAGE", 5);
        f16303x = bVar6;
        b bVar7 = new b("DETECT_SET_USER_VISIBLE_HINT", 6);
        f16304y = bVar7;
        b bVar8 = new b("DETECT_TARGET_FRAGMENT_USAGE", 7);
        E = bVar8;
        b bVar9 = new b("DETECT_WRONG_FRAGMENT_CONTAINER", 8);
        F = bVar9;
        G = new b[]{bVar, bVar2, bVar3, bVar4, bVar5, bVar6, bVar7, bVar8, bVar9};
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) G.clone();
    }
}
