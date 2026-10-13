package l4;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class f {

    /* renamed from: d, reason: collision with root package name */
    public static final f f13721d;

    /* renamed from: e, reason: collision with root package name */
    public static final f f13722e;

    /* renamed from: i, reason: collision with root package name */
    public static final f f13723i;

    /* renamed from: v, reason: collision with root package name */
    public static final f f13724v;

    /* renamed from: w, reason: collision with root package name */
    public static final f f13725w;

    /* renamed from: x, reason: collision with root package name */
    public static final f f13726x;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ f[] f13727y;

    static {
        f fVar = new f("SET_ANIMATION", 0);
        f13721d = fVar;
        f fVar2 = new f("SET_PROGRESS", 1);
        f13722e = fVar2;
        f fVar3 = new f("SET_REPEAT_MODE", 2);
        f13723i = fVar3;
        f fVar4 = new f("SET_REPEAT_COUNT", 3);
        f13724v = fVar4;
        f fVar5 = new f("SET_IMAGE_ASSETS", 4);
        f13725w = fVar5;
        f fVar6 = new f("PLAY_OPTION", 5);
        f13726x = fVar6;
        f13727y = new f[]{fVar, fVar2, fVar3, fVar4, fVar5, fVar6};
    }

    public static f valueOf(String str) {
        return (f) Enum.valueOf(f.class, str);
    }

    public static f[] values() {
        return (f[]) f13727y.clone();
    }
}
