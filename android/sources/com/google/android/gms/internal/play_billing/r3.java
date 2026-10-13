package com.google.android.gms.internal.play_billing;

/* JADX WARN: Enum visitor error
jadx.core.utils.exceptions.JadxRuntimeException: Init of enum field 'EF0' uses external variables
	at jadx.core.dex.visitors.EnumVisitor.createEnumFieldByConstructor(EnumVisitor.java:451)
	at jadx.core.dex.visitors.EnumVisitor.processEnumFieldByRegister(EnumVisitor.java:395)
	at jadx.core.dex.visitors.EnumVisitor.extractEnumFieldsFromFilledArray(EnumVisitor.java:324)
	at jadx.core.dex.visitors.EnumVisitor.extractEnumFieldsFromInsn(EnumVisitor.java:262)
	at jadx.core.dex.visitors.EnumVisitor.convertToEnum(EnumVisitor.java:151)
	at jadx.core.dex.visitors.EnumVisitor.visit(EnumVisitor.java:100)
 */
/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* loaded from: classes3.dex */
public final class r3 {

    /* renamed from: i, reason: collision with root package name */
    public static final r3 f5818i;

    /* renamed from: v, reason: collision with root package name */
    public static final r3 f5819v;

    /* renamed from: w, reason: collision with root package name */
    public static final r3 f5820w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ r3[] f5821x;

    /* renamed from: d, reason: collision with root package name */
    public final s3 f5822d;

    /* renamed from: e, reason: collision with root package name */
    public final int f5823e;

    /* JADX INFO: Fake field, exist only in values array */
    r3 EF1;

    /* JADX INFO: Fake field, exist only in values array */
    r3 EF2;

    /* JADX INFO: Fake field, exist only in values array */
    r3 EF0;

    static {
        r3 r3Var = new r3("DOUBLE", 0, s3.f5830v, 1);
        r3 r3Var2 = new r3("FLOAT", 1, s3.f5829i, 5);
        s3 s3Var = s3.f5828e;
        r3 r3Var3 = new r3("INT64", 2, s3Var, 0);
        r3 r3Var4 = new r3("UINT64", 3, s3Var, 0);
        s3 s3Var2 = s3.f5827d;
        r3 r3Var5 = new r3("INT32", 4, s3Var2, 0);
        r3 r3Var6 = new r3("FIXED64", 5, s3Var, 1);
        r3 r3Var7 = new r3("FIXED32", 6, s3Var2, 5);
        r3 r3Var8 = new r3("BOOL", 7, s3.f5831w, 0);
        r3 r3Var9 = new r3("STRING", 8, s3.f5832x, 2);
        f5818i = r3Var9;
        s3 s3Var3 = s3.F;
        r3 r3Var10 = new r3("GROUP", 9, s3Var3, 3);
        f5819v = r3Var10;
        r3 r3Var11 = new r3("MESSAGE", 10, s3Var3, 2);
        f5820w = r3Var11;
        f5821x = new r3[]{r3Var, r3Var2, r3Var3, r3Var4, r3Var5, r3Var6, r3Var7, r3Var8, r3Var9, r3Var10, r3Var11, new r3("BYTES", 11, s3.f5833y, 2), new r3("UINT32", 12, s3Var2, 0), new r3("ENUM", 13, s3.E, 0), new r3("SFIXED32", 14, s3Var2, 5), new r3("SFIXED64", 15, s3Var, 1), new r3("SINT32", 16, s3Var2, 0), new r3("SINT64", 17, s3Var, 0)};
    }

    public r3(String str, int i5, s3 s3Var, int i6) {
        this.f5822d = s3Var;
        this.f5823e = i6;
    }

    public static r3[] values() {
        return (r3[]) f5821x.clone();
    }
}
