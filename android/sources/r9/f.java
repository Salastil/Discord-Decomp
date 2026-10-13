package r9;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class f {

    /* renamed from: d, reason: collision with root package name */
    public static final f f17170d;

    /* renamed from: e, reason: collision with root package name */
    public static final f f17171e;

    /* renamed from: i, reason: collision with root package name */
    public static final f f17172i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ f[] f17173v;

    static {
        f fVar = new f("SUCCESS", 0);
        f17170d = fVar;
        f fVar2 = new f("NEAREST", 1);
        f17171e = fVar2;
        f fVar3 = new f("MISSING", 2);
        f17172i = fVar3;
        f[] fVarArr = {fVar, fVar2, fVar3};
        f17173v = fVarArr;
        ki.b.p(fVarArr);
    }

    public static f valueOf(String str) {
        return (f) Enum.valueOf(f.class, str);
    }

    public static f[] values() {
        return (f[]) f17173v.clone();
    }
}
