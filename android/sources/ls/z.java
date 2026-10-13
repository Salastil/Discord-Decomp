package ls;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class z {

    /* renamed from: d, reason: collision with root package name */
    public static final z f14253d;

    /* renamed from: e, reason: collision with root package name */
    public static final z f14254e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ z[] f14255i;

    /* JADX INFO: Fake field, exist only in values array */
    z EF0;

    static {
        z zVar = new z("ZERO", 0);
        z zVar2 = new z("ONE", 1);
        f14253d = zVar2;
        z zVar3 = new z("TWO", 2);
        z zVar4 = new z("FEW", 3);
        z zVar5 = new z("MANY", 4);
        z zVar6 = new z("OTHER", 5);
        f14254e = zVar6;
        f14255i = new z[]{zVar, zVar2, zVar3, zVar4, zVar5, zVar6};
    }

    public static z valueOf(String str) {
        return (z) Enum.valueOf(z.class, str);
    }

    public static z[] values() {
        return (z[]) f14255i.clone();
    }
}
