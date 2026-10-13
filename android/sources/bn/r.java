package bn;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class r {

    /* renamed from: d, reason: collision with root package name */
    public static final r f3100d;

    /* renamed from: e, reason: collision with root package name */
    public static final r f3101e;

    /* renamed from: i, reason: collision with root package name */
    public static final r f3102i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ r[] f3103v;

    static {
        r rVar = new r("ACTION", 0);
        f3100d = rVar;
        r rVar2 = new r("TOGGLE", 1);
        f3101e = rVar2;
        r rVar3 = new r("AUTOMATIC", 2);
        f3102i = rVar3;
        r[] rVarArr = {rVar, rVar2, rVar3};
        f3103v = rVarArr;
        ki.b.p(rVarArr);
    }

    public static r valueOf(String str) {
        return (r) Enum.valueOf(r.class, str);
    }

    public static r[] values() {
        return (r[]) f3103v.clone();
    }
}
