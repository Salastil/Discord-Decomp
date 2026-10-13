package ip;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class z {

    /* renamed from: d, reason: collision with root package name */
    public static final p0 f12179d;

    /* renamed from: e, reason: collision with root package name */
    public static final z f12180e;

    /* renamed from: i, reason: collision with root package name */
    public static final z f12181i;

    /* renamed from: v, reason: collision with root package name */
    public static final z f12182v;

    /* renamed from: w, reason: collision with root package name */
    public static final z f12183w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ z[] f12184x;

    static {
        z zVar = new z("FINAL", 0);
        f12180e = zVar;
        z zVar2 = new z("SEALED", 1);
        f12181i = zVar2;
        z zVar3 = new z("OPEN", 2);
        f12182v = zVar3;
        z zVar4 = new z("ABSTRACT", 3);
        f12183w = zVar4;
        z[] zVarArr = {zVar, zVar2, zVar3, zVar4};
        f12184x = zVarArr;
        ki.b.p(zVarArr);
        f12179d = new p0(5);
    }

    public static z valueOf(String str) {
        return (z) Enum.valueOf(z.class, str);
    }

    public static z[] values() {
        return (z[]) f12184x.clone();
    }
}
