package fp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class r {

    /* renamed from: e, reason: collision with root package name */
    public static final r f8922e;

    /* renamed from: i, reason: collision with root package name */
    public static final r f8923i;

    /* renamed from: v, reason: collision with root package name */
    public static final r f8924v;

    /* renamed from: w, reason: collision with root package name */
    public static final r f8925w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ r[] f8926x;

    /* renamed from: d, reason: collision with root package name */
    public final hq.e f8927d;

    static {
        r rVar = new r("UBYTEARRAY", 0, ta.a.v("kotlin/UByteArray", false));
        f8922e = rVar;
        r rVar2 = new r("USHORTARRAY", 1, ta.a.v("kotlin/UShortArray", false));
        f8923i = rVar2;
        r rVar3 = new r("UINTARRAY", 2, ta.a.v("kotlin/UIntArray", false));
        f8924v = rVar3;
        r rVar4 = new r("ULONGARRAY", 3, ta.a.v("kotlin/ULongArray", false));
        f8925w = rVar4;
        r[] rVarArr = {rVar, rVar2, rVar3, rVar4};
        f8926x = rVarArr;
        ki.b.p(rVarArr);
    }

    public r(String str, int i5, hq.b bVar) {
        this.f8927d = bVar.f();
    }

    public static r valueOf(String str) {
        return (r) Enum.valueOf(r.class, str);
    }

    public static r[] values() {
        return (r[]) f8926x.clone();
    }
}
