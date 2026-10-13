package fp;

import kotlin.jvm.internal.Intrinsics;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class s {

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ s[] f8928v;

    /* renamed from: d, reason: collision with root package name */
    public final hq.b f8929d;

    /* renamed from: e, reason: collision with root package name */
    public final hq.e f8930e;

    /* renamed from: i, reason: collision with root package name */
    public final hq.b f8931i;

    static {
        s[] sVarArr = {new s("UBYTE", 0, ta.a.v("kotlin/UByte", false)), new s("USHORT", 1, ta.a.v("kotlin/UShort", false)), new s("UINT", 2, ta.a.v("kotlin/UInt", false)), new s("ULONG", 3, ta.a.v("kotlin/ULong", false))};
        f8928v = sVarArr;
        ki.b.p(sVarArr);
    }

    public s(String str, int i5, hq.b bVar) {
        this.f8929d = bVar;
        hq.e f2 = bVar.f();
        this.f8930e = f2;
        hq.c cVar = bVar.a;
        hq.e e9 = hq.e.e(f2.b() + "Array");
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        this.f8931i = new hq.b(cVar, e9);
    }

    public static s valueOf(String str) {
        return (s) Enum.valueOf(s.class, str);
    }

    public static s[] values() {
        return (s[]) f8928v.clone();
    }
}
