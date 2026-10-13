package iq;

/* JADX WARN: Enum visitor error
jadx.core.utils.exceptions.JadxRuntimeException: Init of enum field 'EF2' uses external variables
	at jadx.core.dex.visitors.EnumVisitor.createEnumFieldByConstructor(EnumVisitor.java:451)
	at jadx.core.dex.visitors.EnumVisitor.processEnumFieldByRegister(EnumVisitor.java:395)
	at jadx.core.dex.visitors.EnumVisitor.extractEnumFieldsFromFilledArray(EnumVisitor.java:324)
	at jadx.core.dex.visitors.EnumVisitor.extractEnumFieldsFromInsn(EnumVisitor.java:262)
	at jadx.core.dex.visitors.EnumVisitor.convertToEnum(EnumVisitor.java:151)
	at jadx.core.dex.visitors.EnumVisitor.visit(EnumVisitor.java:100)
 */
/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* loaded from: classes3.dex */
public class i0 {
    public static final /* synthetic */ i0[] E;

    /* renamed from: i, reason: collision with root package name */
    public static final i0 f12212i;

    /* renamed from: v, reason: collision with root package name */
    public static final i0 f12213v;

    /* renamed from: w, reason: collision with root package name */
    public static final f0 f12214w;

    /* renamed from: x, reason: collision with root package name */
    public static final g0 f12215x;

    /* renamed from: y, reason: collision with root package name */
    public static final i0 f12216y;

    /* renamed from: d, reason: collision with root package name */
    public final j0 f12217d;

    /* renamed from: e, reason: collision with root package name */
    public final int f12218e;

    /* JADX INFO: Fake field, exist only in values array */
    i0 EF0;

    /* JADX INFO: Fake field, exist only in values array */
    i0 EF1;

    /* JADX INFO: Fake field, exist only in values array */
    i0 EF2;

    static {
        i0 i0Var = new i0("DOUBLE", 0, j0.f12224w, 1);
        i0 i0Var2 = new i0("FLOAT", 1, j0.f12223v, 5);
        j0 j0Var = j0.f12222i;
        i0 i0Var3 = new i0("INT64", 2, j0Var, 0);
        i0 i0Var4 = new i0("UINT64", 3, j0Var, 0);
        j0 j0Var2 = j0.f12221e;
        i0 i0Var5 = new i0("INT32", 4, j0Var2, 0);
        f12212i = i0Var5;
        i0 i0Var6 = new i0("FIXED64", 5, j0Var, 1);
        i0 i0Var7 = new i0("FIXED32", 6, j0Var2, 5);
        i0 i0Var8 = new i0("BOOL", 7, j0.f12225x, 0);
        f12213v = i0Var8;
        e0 e0Var = new e0("STRING", 8, j0.f12226y, 2);
        j0 j0Var3 = j0.G;
        f0 f0Var = new f0("GROUP", 9, j0Var3, 3);
        f12214w = f0Var;
        g0 g0Var = new g0("MESSAGE", 10, j0Var3, 2);
        f12215x = g0Var;
        h0 h0Var = new h0("BYTES", 11, j0.E, 2);
        i0 i0Var9 = new i0("UINT32", 12, j0Var2, 0);
        i0 i0Var10 = new i0("ENUM", 13, j0.F, 0);
        f12216y = i0Var10;
        E = new i0[]{i0Var, i0Var2, i0Var3, i0Var4, i0Var5, i0Var6, i0Var7, i0Var8, e0Var, f0Var, g0Var, h0Var, i0Var9, i0Var10, new i0("SFIXED32", 14, j0Var2, 5), new i0("SFIXED64", 15, j0Var, 1), new i0("SINT32", 16, j0Var2, 0), new i0("SINT64", 17, j0Var, 0)};
    }

    public i0(String str, int i5, j0 j0Var, int i6) {
        this.f12217d = j0Var;
        this.f12218e = i6;
    }

    public static i0 valueOf(String str) {
        return (i0) Enum.valueOf(i0.class, str);
    }

    public static i0[] values() {
        return (i0[]) E.clone();
    }

    public boolean a() {
        return !(this instanceof e0);
    }
}
