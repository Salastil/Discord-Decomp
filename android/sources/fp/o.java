package fp;

import java.util.HashMap;
import java.util.HashSet;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class o {
    public static final hq.c A;
    public static final hq.c B;
    public static final hq.c C;
    public static final hq.c D;
    public static final hq.c E;
    public static final hq.c F;
    public static final hq.c G;
    public static final hq.c H;
    public static final hq.c I;
    public static final hq.c J;
    public static final hq.c K;
    public static final hq.c L;
    public static final hq.c M;
    public static final hq.c N;
    public static final hq.c O;
    public static final hq.c P;
    public static final hq.d Q;
    public static final hq.b R;
    public static final hq.b S;
    public static final hq.b T;
    public static final hq.b U;
    public static final hq.b V;
    public static final hq.c W;
    public static final hq.c X;
    public static final hq.c Y;
    public static final hq.c Z;
    public static final hq.c a0;

    /* renamed from: b0, reason: collision with root package name */
    public static final hq.c f8879b0;

    /* renamed from: c0, reason: collision with root package name */
    public static final hq.c f8881c0;

    /* renamed from: d, reason: collision with root package name */
    public static final hq.d f8882d;

    /* renamed from: d0, reason: collision with root package name */
    public static final HashSet f8883d0;

    /* renamed from: e, reason: collision with root package name */
    public static final hq.d f8884e;

    /* renamed from: e0, reason: collision with root package name */
    public static final HashSet f8885e0;

    /* renamed from: f, reason: collision with root package name */
    public static final hq.d f8886f;

    /* renamed from: f0, reason: collision with root package name */
    public static final HashMap f8887f0;

    /* renamed from: g, reason: collision with root package name */
    public static final hq.d f8888g;

    /* renamed from: g0, reason: collision with root package name */
    public static final HashMap f8889g0;

    /* renamed from: h, reason: collision with root package name */
    public static final hq.d f8890h;

    /* renamed from: i, reason: collision with root package name */
    public static final hq.d f8891i;
    public static final hq.d j;
    public static final hq.c k;

    /* renamed from: l, reason: collision with root package name */
    public static final hq.c f8892l;

    /* renamed from: m, reason: collision with root package name */
    public static final hq.c f8893m;

    /* renamed from: n, reason: collision with root package name */
    public static final hq.c f8894n;

    /* renamed from: o, reason: collision with root package name */
    public static final hq.c f8895o;

    /* renamed from: p, reason: collision with root package name */
    public static final hq.c f8896p;

    /* renamed from: q, reason: collision with root package name */
    public static final hq.c f8897q;

    /* renamed from: r, reason: collision with root package name */
    public static final hq.c f8898r;

    /* renamed from: s, reason: collision with root package name */
    public static final hq.c f8899s;

    /* renamed from: t, reason: collision with root package name */
    public static final hq.c f8900t;

    /* renamed from: u, reason: collision with root package name */
    public static final hq.c f8901u;

    /* renamed from: v, reason: collision with root package name */
    public static final hq.c f8902v;

    /* renamed from: w, reason: collision with root package name */
    public static final hq.c f8903w;

    /* renamed from: x, reason: collision with root package name */
    public static final hq.c f8904x;

    /* renamed from: y, reason: collision with root package name */
    public static final hq.c f8905y;

    /* renamed from: z, reason: collision with root package name */
    public static final hq.c f8906z;
    public static final hq.d a = d("Any").a;

    /* renamed from: b, reason: collision with root package name */
    public static final hq.d f8878b = d("Nothing").a;

    /* renamed from: c, reason: collision with root package name */
    public static final hq.d f8880c = d("Cloneable").a;

    static {
        d("Suppress");
        f8882d = d("Unit").a;
        f8884e = d("CharSequence").a;
        f8886f = d("String").a;
        f8888g = d("Array").a;
        f8890h = d("Boolean").a;
        d("Char");
        d("Byte");
        d("Short");
        d("Int");
        d("Long");
        d("Float");
        d("Double");
        f8891i = d("Number").a;
        j = d("Enum").a;
        d("Function");
        k = d("Throwable");
        f8892l = d("Comparable");
        hq.c cVar = p.f8918o;
        hq.e e9 = hq.e.e("IntRange");
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        cVar.a(e9);
        hq.e e10 = hq.e.e("LongRange");
        Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
        cVar.a(e10);
        f8893m = d("Deprecated");
        d("DeprecatedSinceKotlin");
        f8894n = d("DeprecationLevel");
        f8895o = d("ReplaceWith");
        f8896p = d("ExtensionFunctionType");
        f8897q = d("ContextFunctionTypeParams");
        hq.c d6 = d("ParameterName");
        f8898r = d6;
        ta.a.K(d6);
        f8899s = d("Annotation");
        hq.c a10 = a("Target");
        f8900t = a10;
        ta.a.K(a10);
        f8901u = a("AnnotationTarget");
        f8902v = a("AnnotationRetention");
        hq.c a11 = a("Retention");
        f8903w = a11;
        ta.a.K(a11);
        ta.a.K(a("Repeatable"));
        f8904x = a("MustBeDocumented");
        f8905y = d("UnsafeVariance");
        d("PublishedApi");
        hq.c cVar2 = p.f8919p;
        hq.e e11 = hq.e.e("AccessibleLateinitPropertyLiteral");
        Intrinsics.checkNotNullExpressionValue(e11, "identifier(...)");
        cVar2.a(e11);
        hq.c cVar3 = new hq.c("kotlin.internal.PlatformDependent");
        f8906z = cVar3;
        ta.a.K(cVar3);
        A = b("Iterator");
        B = b("Iterable");
        C = b("Collection");
        D = b("List");
        E = b("ListIterator");
        F = b("Set");
        hq.c b10 = b("Map");
        G = b10;
        hq.e e12 = hq.e.e("Entry");
        Intrinsics.checkNotNullExpressionValue(e12, "identifier(...)");
        H = b10.a(e12);
        I = b("MutableIterator");
        J = b("MutableIterable");
        K = b("MutableCollection");
        L = b("MutableList");
        M = b("MutableListIterator");
        N = b("MutableSet");
        hq.c b11 = b("MutableMap");
        O = b11;
        hq.e e13 = hq.e.e("MutableEntry");
        Intrinsics.checkNotNullExpressionValue(e13, "identifier(...)");
        P = b11.a(e13);
        Q = e("KClass");
        e("KType");
        e("KCallable");
        e("KProperty0");
        e("KProperty1");
        e("KProperty2");
        e("KMutableProperty0");
        e("KMutableProperty1");
        e("KMutableProperty2");
        hq.d e14 = e("KProperty");
        e("KMutableProperty");
        R = ta.a.K(e14.g());
        e("KDeclarationContainer");
        e("findAssociatedObject");
        hq.c d7 = d("UByte");
        hq.c d8 = d("UShort");
        hq.c d10 = d("UInt");
        hq.c d11 = d("ULong");
        S = ta.a.K(d7);
        T = ta.a.K(d8);
        U = ta.a.K(d10);
        V = ta.a.K(d11);
        W = d("UByteArray");
        X = d("UShortArray");
        Y = d("UIntArray");
        Z = d("ULongArray");
        c("AtomicInt");
        c("AtomicLong");
        c("AtomicBoolean");
        c("AtomicReference");
        a0 = c("AtomicIntArray");
        f8879b0 = c("AtomicLongArray");
        f8881c0 = c("AtomicArray");
        int length = k.values().length;
        HashSet hashSet = new HashSet(length < 3 ? 3 : (length / 3) + length + 1);
        for (k kVar : k.values()) {
            hashSet.add(kVar.f8868d);
        }
        f8883d0 = hashSet;
        int length2 = k.values().length;
        HashSet hashSet2 = new HashSet(length2 < 3 ? 3 : (length2 / 3) + length2 + 1);
        for (k kVar2 : k.values()) {
            hashSet2.add(kVar2.f8869e);
        }
        f8885e0 = hashSet2;
        int length3 = k.values().length;
        HashMap hashMap = new HashMap(length3 < 3 ? 3 : (length3 / 3) + length3 + 1);
        for (k kVar3 : k.values()) {
            String b12 = kVar3.f8868d.b();
            Intrinsics.checkNotNullExpressionValue(b12, "asString(...)");
            hashMap.put(d(b12).a, kVar3);
        }
        f8887f0 = hashMap;
        int length4 = k.values().length;
        HashMap hashMap2 = new HashMap(length4 >= 3 ? (length4 / 3) + length4 + 1 : 3);
        for (k kVar4 : k.values()) {
            String b13 = kVar4.f8869e.b();
            Intrinsics.checkNotNullExpressionValue(b13, "asString(...)");
            hashMap2.put(d(b13).a, kVar4);
        }
        f8889g0 = hashMap2;
    }

    public static hq.c a(String str) {
        hq.c cVar = p.f8916m;
        hq.e e9 = hq.e.e(str);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return cVar.a(e9);
    }

    public static hq.c b(String str) {
        hq.c cVar = p.f8917n;
        hq.e e9 = hq.e.e(str);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return cVar.a(e9);
    }

    public static hq.c c(String str) {
        hq.c cVar = p.f8920q;
        hq.e e9 = hq.e.e(str);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return cVar.a(e9);
    }

    public static hq.c d(String str) {
        hq.c cVar = p.f8915l;
        hq.e e9 = hq.e.e(str);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return cVar.a(e9);
    }

    public static final hq.d e(String simpleName) {
        Intrinsics.checkNotNullParameter(simpleName, "simpleName");
        hq.c cVar = p.f8914i;
        hq.e e9 = hq.e.e(simpleName);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return cVar.a(e9).a;
    }
}
