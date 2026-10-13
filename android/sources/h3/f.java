package h3;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class f {

    /* renamed from: d, reason: collision with root package name */
    public static final f f9492d;

    /* renamed from: e, reason: collision with root package name */
    public static final f f9493e;

    /* renamed from: i, reason: collision with root package name */
    public static final f f9494i;

    /* renamed from: v, reason: collision with root package name */
    public static final f f9495v;

    /* renamed from: w, reason: collision with root package name */
    public static final f f9496w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ f[] f9497x;

    static {
        f fVar = new f("ON_CONFIGURE", 0);
        f9492d = fVar;
        f fVar2 = new f("ON_CREATE", 1);
        f9493e = fVar2;
        f fVar3 = new f("ON_UPGRADE", 2);
        f9494i = fVar3;
        f fVar4 = new f("ON_DOWNGRADE", 3);
        f9495v = fVar4;
        f fVar5 = new f("ON_OPEN", 4);
        f9496w = fVar5;
        f9497x = new f[]{fVar, fVar2, fVar3, fVar4, fVar5};
    }

    public static f valueOf(String str) {
        return (f) Enum.valueOf(f.class, str);
    }

    public static f[] values() {
        return (f[]) f9497x.clone();
    }
}
