package jj;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class k {
    public static final k E;
    public static final k F;
    public static final k G;
    public static final /* synthetic */ k[] H;

    /* renamed from: d, reason: collision with root package name */
    public static final k f12803d;

    /* renamed from: e, reason: collision with root package name */
    public static final k f12804e;

    /* renamed from: i, reason: collision with root package name */
    public static final k f12805i;

    /* renamed from: v, reason: collision with root package name */
    public static final k f12806v;

    /* renamed from: w, reason: collision with root package name */
    public static final k f12807w;

    /* renamed from: x, reason: collision with root package name */
    public static final k f12808x;

    /* renamed from: y, reason: collision with root package name */
    public static final k f12809y;

    /* JADX INFO: Fake field, exist only in values array */
    k EF0;

    static {
        k kVar = new k("OTHER", 0);
        k kVar2 = new k("ORIENTATION", 1);
        f12803d = kVar2;
        k kVar3 = new k("BYTE_SEGMENTS", 2);
        f12804e = kVar3;
        k kVar4 = new k("ERROR_CORRECTION_LEVEL", 3);
        f12805i = kVar4;
        k kVar5 = new k("ISSUE_NUMBER", 4);
        f12806v = kVar5;
        k kVar6 = new k("SUGGESTED_PRICE", 5);
        f12807w = kVar6;
        k kVar7 = new k("POSSIBLE_COUNTRY", 6);
        f12808x = kVar7;
        k kVar8 = new k("UPC_EAN_EXTENSION", 7);
        f12809y = kVar8;
        k kVar9 = new k("PDF417_EXTRA_METADATA", 8);
        E = kVar9;
        k kVar10 = new k("STRUCTURED_APPEND_SEQUENCE", 9);
        F = kVar10;
        k kVar11 = new k("STRUCTURED_APPEND_PARITY", 10);
        G = kVar11;
        H = new k[]{kVar, kVar2, kVar3, kVar4, kVar5, kVar6, kVar7, kVar8, kVar9, kVar10, kVar11};
    }

    public static k valueOf(String str) {
        return (k) Enum.valueOf(k.class, str);
    }

    public static k[] values() {
        return (k[]) H.clone();
    }
}
