package androidx.datastore.preferences.protobuf;

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
/* loaded from: classes.dex */
public final class p {

    /* renamed from: e, reason: collision with root package name */
    public static final p f1802e;

    /* renamed from: i, reason: collision with root package name */
    public static final p f1803i;

    /* renamed from: v, reason: collision with root package name */
    public static final p[] f1804v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ p[] f1805w;

    /* renamed from: d, reason: collision with root package name */
    public final int f1806d;

    /* JADX INFO: Fake field, exist only in values array */
    p EF0;

    static {
        y yVar = y.f1841w;
        p pVar = new p("DOUBLE", 0, 0, 1, yVar);
        y yVar2 = y.f1840v;
        p pVar2 = new p("FLOAT", 1, 1, 1, yVar2);
        y yVar3 = y.f1839i;
        p pVar3 = new p("INT64", 2, 2, 1, yVar3);
        p pVar4 = new p("UINT64", 3, 3, 1, yVar3);
        y yVar4 = y.f1838e;
        p pVar5 = new p("INT32", 4, 4, 1, yVar4);
        p pVar6 = new p("FIXED64", 5, 5, 1, yVar3);
        p pVar7 = new p("FIXED32", 6, 6, 1, yVar4);
        y yVar5 = y.f1842x;
        p pVar8 = new p("BOOL", 7, 7, 1, yVar5);
        y yVar6 = y.f1843y;
        p pVar9 = new p("STRING", 8, 8, 1, yVar6);
        y yVar7 = y.G;
        p pVar10 = new p("MESSAGE", 9, 9, 1, yVar7);
        y yVar8 = y.E;
        p pVar11 = new p("BYTES", 10, 10, 1, yVar8);
        p pVar12 = new p("UINT32", 11, 11, 1, yVar4);
        y yVar9 = y.F;
        p pVar13 = new p("ENUM", 12, 12, 1, yVar9);
        p pVar14 = new p("SFIXED32", 13, 13, 1, yVar4);
        p pVar15 = new p("SFIXED64", 14, 14, 1, yVar3);
        p pVar16 = new p("SINT32", 15, 15, 1, yVar4);
        p pVar17 = new p("SINT64", 16, 16, 1, yVar3);
        p pVar18 = new p("GROUP", 17, 17, 1, yVar7);
        p pVar19 = new p("DOUBLE_LIST", 18, 18, 2, yVar);
        p pVar20 = new p("FLOAT_LIST", 19, 19, 2, yVar2);
        p pVar21 = new p("INT64_LIST", 20, 20, 2, yVar3);
        p pVar22 = new p("UINT64_LIST", 21, 21, 2, yVar3);
        p pVar23 = new p("INT32_LIST", 22, 22, 2, yVar4);
        p pVar24 = new p("FIXED64_LIST", 23, 23, 2, yVar3);
        p pVar25 = new p("FIXED32_LIST", 24, 24, 2, yVar4);
        p pVar26 = new p("BOOL_LIST", 25, 25, 2, yVar5);
        p pVar27 = new p("STRING_LIST", 26, 26, 2, yVar6);
        p pVar28 = new p("MESSAGE_LIST", 27, 27, 2, yVar7);
        p pVar29 = new p("BYTES_LIST", 28, 28, 2, yVar8);
        p pVar30 = new p("UINT32_LIST", 29, 29, 2, yVar4);
        p pVar31 = new p("ENUM_LIST", 30, 30, 2, yVar9);
        p pVar32 = new p("SFIXED32_LIST", 31, 31, 2, yVar4);
        p pVar33 = new p("SFIXED64_LIST", 32, 32, 2, yVar3);
        p pVar34 = new p("SINT32_LIST", 33, 33, 2, yVar4);
        p pVar35 = new p("SINT64_LIST", 34, 34, 2, yVar3);
        p pVar36 = new p("DOUBLE_LIST_PACKED", 35, 35, 3, yVar);
        f1802e = pVar36;
        p pVar37 = new p("FLOAT_LIST_PACKED", 36, 36, 3, yVar2);
        p pVar38 = new p("INT64_LIST_PACKED", 37, 37, 3, yVar3);
        p pVar39 = new p("UINT64_LIST_PACKED", 38, 38, 3, yVar3);
        p pVar40 = new p("INT32_LIST_PACKED", 39, 39, 3, yVar4);
        p pVar41 = new p("FIXED64_LIST_PACKED", 40, 40, 3, yVar3);
        p pVar42 = new p("FIXED32_LIST_PACKED", 41, 41, 3, yVar4);
        p pVar43 = new p("BOOL_LIST_PACKED", 42, 42, 3, yVar5);
        p pVar44 = new p("UINT32_LIST_PACKED", 43, 43, 3, yVar4);
        p pVar45 = new p("ENUM_LIST_PACKED", 44, 44, 3, yVar9);
        p pVar46 = new p("SFIXED32_LIST_PACKED", 45, 45, 3, yVar4);
        p pVar47 = new p("SFIXED64_LIST_PACKED", 46, 46, 3, yVar3);
        p pVar48 = new p("SINT32_LIST_PACKED", 47, 47, 3, yVar4);
        p pVar49 = new p("SINT64_LIST_PACKED", 48, 48, 3, yVar3);
        f1803i = pVar49;
        f1805w = new p[]{pVar, pVar2, pVar3, pVar4, pVar5, pVar6, pVar7, pVar8, pVar9, pVar10, pVar11, pVar12, pVar13, pVar14, pVar15, pVar16, pVar17, pVar18, pVar19, pVar20, pVar21, pVar22, pVar23, pVar24, pVar25, pVar26, pVar27, pVar28, pVar29, pVar30, pVar31, pVar32, pVar33, pVar34, pVar35, pVar36, pVar37, pVar38, pVar39, pVar40, pVar41, pVar42, pVar43, pVar44, pVar45, pVar46, pVar47, pVar48, pVar49, new p("GROUP_LIST", 49, 49, 2, yVar7), new p("MAP", 50, 50, 4, y.f1837d)};
        p[] values = values();
        f1804v = new p[values.length];
        for (p pVar50 : values) {
            f1804v[pVar50.f1806d] = pVar50;
        }
    }

    public p(String str, int i5, int i6, int i10, y yVar) {
        this.f1806d = i6;
        int b10 = f0.e.b(i10);
        if (b10 == 1) {
            yVar.getClass();
        } else if (b10 == 3) {
            yVar.getClass();
        }
        if (i10 == 1) {
            yVar.ordinal();
        }
    }

    public static p valueOf(String str) {
        return (p) Enum.valueOf(p.class, str);
    }

    public static p[] values() {
        return (p[]) f1805w.clone();
    }
}
