package lt;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f14263d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f14264e;

    /* renamed from: i, reason: collision with root package name */
    public static final b f14265i;

    /* renamed from: v, reason: collision with root package name */
    public static final b f14266v;

    /* renamed from: w, reason: collision with root package name */
    public static final b f14267w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ b[] f14268x;

    static {
        b bVar = new b("CRONET_SOURCE_UNSPECIFIED", 0);
        f14263d = bVar;
        b bVar2 = new b("CRONET_SOURCE_STATICALLY_LINKED", 1);
        f14264e = bVar2;
        b bVar3 = new b("CRONET_SOURCE_PLAY_SERVICES", 2);
        f14265i = bVar3;
        b bVar4 = new b("CRONET_SOURCE_FALLBACK", 3);
        f14266v = bVar4;
        b bVar5 = new b("CRONET_SOURCE_PLATFORM", 4);
        f14267w = bVar5;
        f14268x = new b[]{bVar, bVar2, bVar3, bVar4, bVar5, new b("CRONET_SOURCE_FAKE", 5)};
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f14268x.clone();
    }
}
