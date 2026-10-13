package androidx.datastore.preferences.protobuf;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class y {
    public static final y E;
    public static final y F;
    public static final y G;
    public static final /* synthetic */ y[] H;

    /* renamed from: d, reason: collision with root package name */
    public static final y f1837d;

    /* renamed from: e, reason: collision with root package name */
    public static final y f1838e;

    /* renamed from: i, reason: collision with root package name */
    public static final y f1839i;

    /* renamed from: v, reason: collision with root package name */
    public static final y f1840v;

    /* renamed from: w, reason: collision with root package name */
    public static final y f1841w;

    /* renamed from: x, reason: collision with root package name */
    public static final y f1842x;

    /* renamed from: y, reason: collision with root package name */
    public static final y f1843y;

    static {
        y yVar = new y("VOID", 0);
        f1837d = yVar;
        y yVar2 = new y("INT", 1);
        f1838e = yVar2;
        y yVar3 = new y("LONG", 2);
        f1839i = yVar3;
        y yVar4 = new y("FLOAT", 3);
        f1840v = yVar4;
        y yVar5 = new y("DOUBLE", 4);
        f1841w = yVar5;
        y yVar6 = new y("BOOLEAN", 5);
        f1842x = yVar6;
        y yVar7 = new y("STRING", 6);
        f1843y = yVar7;
        f fVar = f.f1741i;
        y yVar8 = new y("BYTE_STRING", 7);
        E = yVar8;
        y yVar9 = new y("ENUM", 8);
        F = yVar9;
        y yVar10 = new y("MESSAGE", 9);
        G = yVar10;
        H = new y[]{yVar, yVar2, yVar3, yVar4, yVar5, yVar6, yVar7, yVar8, yVar9, yVar10};
    }

    public static y valueOf(String str) {
        return (y) Enum.valueOf(y.class, str);
    }

    public static y[] values() {
        return (y[]) H.clone();
    }
}
