package wm;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class x {

    /* renamed from: d, reason: collision with root package name */
    public static final x f19955d;

    /* renamed from: e, reason: collision with root package name */
    public static final x f19956e;

    /* renamed from: i, reason: collision with root package name */
    public static final x f19957i;

    /* renamed from: v, reason: collision with root package name */
    public static final x f19958v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ x[] f19959w;

    static {
        x xVar = new x("DISMISSED", 0);
        f19955d = xVar;
        x xVar2 = new x("DISMISSING", 1);
        f19956e = xVar2;
        x xVar3 = new x("PRESENTED", 2);
        f19957i = xVar3;
        x xVar4 = new x("PRESENTING", 3);
        f19958v = xVar4;
        x[] xVarArr = {xVar, xVar2, xVar3, xVar4};
        f19959w = xVarArr;
        ki.b.p(xVarArr);
    }

    public static x valueOf(String str) {
        return (x) Enum.valueOf(x.class, str);
    }

    public static x[] values() {
        return (x[]) f19959w.clone();
    }
}
