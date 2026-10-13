package an;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class f {

    /* renamed from: d, reason: collision with root package name */
    public static final f f692d;

    /* renamed from: e, reason: collision with root package name */
    public static final f f693e;

    /* renamed from: i, reason: collision with root package name */
    public static final f f694i;

    /* renamed from: v, reason: collision with root package name */
    public static final f f695v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ f[] f696w;

    static {
        f fVar = new f("BACKGROUND", 0);
        f692d = fVar;
        f fVar2 = new f("LEADING", 1);
        f693e = fVar2;
        f fVar3 = new f("CENTER", 2);
        f694i = fVar3;
        f fVar4 = new f("TRAILING", 3);
        f695v = fVar4;
        f[] fVarArr = {fVar, fVar2, fVar3, fVar4};
        f696w = fVarArr;
        ki.b.p(fVarArr);
    }

    public static f valueOf(String str) {
        return (f) Enum.valueOf(f.class, str);
    }

    public static f[] values() {
        return (f[]) f696w.clone();
    }
}
