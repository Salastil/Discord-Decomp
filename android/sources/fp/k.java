package fp;

import java.util.Set;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class k {
    public static final k E;
    public static final k F;
    public static final k G;
    public static final k H;
    public static final k I;
    public static final k J;
    public static final /* synthetic */ k[] K;

    /* renamed from: w, reason: collision with root package name */
    public static final Set f8865w;

    /* renamed from: x, reason: collision with root package name */
    public static final k f8866x;

    /* renamed from: y, reason: collision with root package name */
    public static final k f8867y;

    /* renamed from: d, reason: collision with root package name */
    public final hq.e f8868d;

    /* renamed from: e, reason: collision with root package name */
    public final hq.e f8869e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f8870i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f8871v;

    static {
        k kVar = new k("BOOLEAN", 0, "Boolean");
        f8866x = kVar;
        k kVar2 = new k("CHAR", 1, "Char");
        f8867y = kVar2;
        k kVar3 = new k("BYTE", 2, "Byte");
        E = kVar3;
        k kVar4 = new k("SHORT", 3, "Short");
        F = kVar4;
        k kVar5 = new k("INT", 4, "Int");
        G = kVar5;
        k kVar6 = new k("FLOAT", 5, "Float");
        H = kVar6;
        k kVar7 = new k("LONG", 6, "Long");
        I = kVar7;
        k kVar8 = new k("DOUBLE", 7, "Double");
        J = kVar8;
        k[] kVarArr = {kVar, kVar2, kVar3, kVar4, kVar5, kVar6, kVar7, kVar8};
        K = kVarArr;
        ki.b.p(kVarArr);
        k[] elements = {kVar2, kVar3, kVar4, kVar5, kVar6, kVar7, kVar8};
        Intrinsics.checkNotNullParameter(elements, "elements");
        f8865w = x.J(elements);
    }

    public k(String str, int i5, String str2) {
        hq.e e9 = hq.e.e(str2);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        this.f8868d = e9;
        hq.e e10 = hq.e.e(str2.concat("Array"));
        Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
        this.f8869e = e10;
        fo.m mVar = fo.m.f8827e;
        this.f8870i = fo.l.b(mVar, new j(this, 0));
        this.f8871v = fo.l.b(mVar, new j(this, 1));
    }

    public static k valueOf(String str) {
        return (k) Enum.valueOf(k.class, str);
    }

    public static k[] values() {
        return (k[]) K.clone();
    }
}
