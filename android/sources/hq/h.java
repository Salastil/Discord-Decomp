package hq;

import io.sentry.protocol.DebugImage;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.collections.d0;
import kotlin.collections.e1;
import kotlin.collections.u0;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h {
    public static final c a;

    /* renamed from: b, reason: collision with root package name */
    public static final c f10218b;

    /* renamed from: c, reason: collision with root package name */
    public static final c f10219c;

    /* renamed from: d, reason: collision with root package name */
    public static final c f10220d;

    /* renamed from: e, reason: collision with root package name */
    public static final c f10221e;

    /* renamed from: f, reason: collision with root package name */
    public static final c f10222f;

    /* renamed from: g, reason: collision with root package name */
    public static final c f10223g;

    /* renamed from: h, reason: collision with root package name */
    public static final b f10224h;

    /* renamed from: i, reason: collision with root package name */
    public static final b f10225i;
    public static final b j;
    public static final b k;

    /* renamed from: l, reason: collision with root package name */
    public static final b f10226l;

    /* renamed from: m, reason: collision with root package name */
    public static final b f10227m;

    /* renamed from: n, reason: collision with root package name */
    public static final b f10228n;

    /* renamed from: o, reason: collision with root package name */
    public static final b f10229o;

    /* renamed from: p, reason: collision with root package name */
    public static final b f10230p;

    /* renamed from: q, reason: collision with root package name */
    public static final b f10231q;

    /* renamed from: r, reason: collision with root package name */
    public static final Set f10232r;

    /* renamed from: s, reason: collision with root package name */
    public static final Set f10233s;

    /* renamed from: t, reason: collision with root package name */
    public static final b f10234t;

    /* renamed from: u, reason: collision with root package name */
    public static final b f10235u;

    /* renamed from: v, reason: collision with root package name */
    public static final b f10236v;

    /* renamed from: w, reason: collision with root package name */
    public static final b f10237w;

    static {
        c cVar = new c("kotlin");
        a = cVar;
        e e9 = e.e("reflect");
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        c a10 = cVar.a(e9);
        f10218b = a10;
        e e10 = e.e("collections");
        Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
        c a11 = cVar.a(e10);
        f10219c = a11;
        e e11 = e.e("sequences");
        Intrinsics.checkNotNullExpressionValue(e11, "identifier(...)");
        cVar.a(e11);
        e e12 = e.e("ranges");
        Intrinsics.checkNotNullExpressionValue(e12, "identifier(...)");
        c a12 = cVar.a(e12);
        f10220d = a12;
        e e13 = e.e(DebugImage.JVM);
        Intrinsics.checkNotNullExpressionValue(e13, "identifier(...)");
        c a13 = cVar.a(e13);
        e e14 = e.e("annotations");
        Intrinsics.checkNotNullExpressionValue(e14, "identifier(...)");
        c a14 = cVar.a(e14);
        e e15 = e.e(DebugImage.JVM);
        Intrinsics.checkNotNullExpressionValue(e15, "identifier(...)");
        a14.a(e15);
        e e16 = e.e("internal");
        Intrinsics.checkNotNullExpressionValue(e16, "identifier(...)");
        a13.a(e16);
        e e17 = e.e("functions");
        Intrinsics.checkNotNullExpressionValue(e17, "identifier(...)");
        a13.a(e17);
        e e18 = e.e("annotation");
        Intrinsics.checkNotNullExpressionValue(e18, "identifier(...)");
        c a15 = cVar.a(e18);
        f10221e = a15;
        e e19 = e.e("internal");
        Intrinsics.checkNotNullExpressionValue(e19, "identifier(...)");
        c a16 = cVar.a(e19);
        e e20 = e.e("ir");
        Intrinsics.checkNotNullExpressionValue(e20, "identifier(...)");
        a16.a(e20);
        e e21 = e.e("coroutines");
        Intrinsics.checkNotNullExpressionValue(e21, "identifier(...)");
        c a17 = cVar.a(e21);
        f10222f = a17;
        e e22 = e.e("intrinsics");
        Intrinsics.checkNotNullExpressionValue(e22, "identifier(...)");
        a17.a(e22);
        e e23 = e.e("enums");
        Intrinsics.checkNotNullExpressionValue(e23, "identifier(...)");
        f10223g = cVar.a(e23);
        e e24 = e.e("contracts");
        Intrinsics.checkNotNullExpressionValue(e24, "identifier(...)");
        cVar.a(e24);
        e e25 = e.e("concurrent");
        Intrinsics.checkNotNullExpressionValue(e25, "identifier(...)");
        c a18 = cVar.a(e25);
        e e26 = e.e("atomics");
        Intrinsics.checkNotNullExpressionValue(e26, "identifier(...)");
        c a19 = a18.a(e26);
        e e27 = e.e("test");
        Intrinsics.checkNotNullExpressionValue(e27, "identifier(...)");
        cVar.a(e27);
        e e28 = e.e("text");
        Intrinsics.checkNotNullExpressionValue(e28, "identifier(...)");
        cVar.a(e28);
        c[] elements = {cVar, a11, a12, a15};
        Intrinsics.checkNotNullParameter(elements, "elements");
        x.J(elements);
        c[] elements2 = {cVar, a11, a12, a15, a10, a16, a17, a19};
        Intrinsics.checkNotNullParameter(elements2, "elements");
        x.J(elements2);
        ys.d.d("Nothing");
        f10224h = ys.d.d("Unit");
        f10225i = ys.d.d("Any");
        j = ys.d.d("Enum");
        ys.d.d("Annotation");
        k = ys.d.d("Array");
        b d6 = ys.d.d("Boolean");
        b d7 = ys.d.d("Char");
        b d8 = ys.d.d("Byte");
        b d10 = ys.d.d("Short");
        b d11 = ys.d.d("Int");
        b d12 = ys.d.d("Long");
        b d13 = ys.d.d("Float");
        b d14 = ys.d.d("Double");
        f10226l = ys.d.j(d8);
        f10227m = ys.d.j(d10);
        f10228n = ys.d.j(d11);
        f10229o = ys.d.j(d12);
        ys.d.d("CharSequence");
        f10230p = ys.d.d("String");
        ys.d.d("Throwable");
        ys.d.d("Cloneable");
        ys.d.i("KProperty");
        ys.d.i("KMutableProperty");
        ys.d.i("KProperty0");
        ys.d.i("KMutableProperty0");
        ys.d.i("KProperty1");
        ys.d.i("KMutableProperty1");
        ys.d.i("KProperty2");
        ys.d.i("KMutableProperty2");
        f10231q = ys.d.i("KFunction");
        ys.d.i("KClass");
        ys.d.i("KCallable");
        ys.d.i("KType");
        ys.d.d("Comparable");
        ys.d.d("Number");
        ys.d.d("Function");
        b[] elements3 = {d6, d7, d8, d10, d11, d12, d13, d14};
        Intrinsics.checkNotNullParameter(elements3, "elements");
        Set J = x.J(elements3);
        f10232r = J;
        b[] elements4 = {d8, d10, d11, d12};
        Intrinsics.checkNotNullParameter(elements4, "elements");
        x.J(elements4);
        Set set = J;
        int a20 = u0.a(d0.l(set, 10));
        if (a20 < 16) {
            a20 = 16;
        }
        LinkedHashMap linkedHashMap = new LinkedHashMap(a20);
        for (Object obj : set) {
            linkedHashMap.put(obj, ys.d.g(((b) obj).f()));
        }
        ys.d.f(linkedHashMap);
        b[] elements5 = {f10226l, f10227m, f10228n, f10229o};
        Intrinsics.checkNotNullParameter(elements5, "elements");
        Set J2 = x.J(elements5);
        f10233s = J2;
        Set set2 = J2;
        int a21 = u0.a(d0.l(set2, 10));
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(a21 >= 16 ? a21 : 16);
        for (Object obj2 : set2) {
            linkedHashMap2.put(obj2, ys.d.g(((b) obj2).f()));
        }
        ys.d.f(linkedHashMap2);
        Set set3 = f10232r;
        Set set4 = f10233s;
        LinkedHashSet d15 = e1.d(set3, set4);
        b bVar = f10230p;
        e1.e(d15, bVar);
        c packageFqName = f10222f;
        e topLevelName = e.e("Continuation");
        Intrinsics.checkNotNullExpressionValue(topLevelName, "identifier(...)");
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(topLevelName, "topLevelName");
        c cVar2 = c.f10203c;
        c relativeClassName = tn.g.C(topLevelName);
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(relativeClassName, "relativeClassName");
        relativeClassName.a.c();
        ys.d.e("Iterator");
        ys.d.e("Iterable");
        ys.d.e("Collection");
        ys.d.e("List");
        ys.d.e("ListIterator");
        ys.d.e("Set");
        b e29 = ys.d.e("Map");
        ys.d.e("AbstractMap");
        ys.d.e("MutableIterator");
        ys.d.e("CharIterator");
        ys.d.e("MutableIterable");
        ys.d.e("MutableCollection");
        f10234t = ys.d.e("MutableList");
        ys.d.e("MutableListIterator");
        f10235u = ys.d.e("MutableSet");
        b e30 = ys.d.e("MutableMap");
        f10236v = e30;
        e e31 = e.e("Entry");
        Intrinsics.checkNotNullExpressionValue(e31, "identifier(...)");
        e29.d(e31);
        e e32 = e.e("MutableEntry");
        Intrinsics.checkNotNullExpressionValue(e32, "identifier(...)");
        e30.d(e32);
        ys.d.d("Result");
        ys.d.h("IntRange");
        ys.d.h("LongRange");
        ys.d.h("CharRange");
        c packageFqName2 = f10221e;
        e topLevelName2 = e.e("AnnotationRetention");
        Intrinsics.checkNotNullExpressionValue(topLevelName2, "identifier(...)");
        Intrinsics.checkNotNullParameter(packageFqName2, "packageFqName");
        Intrinsics.checkNotNullParameter(topLevelName2, "topLevelName");
        c relativeClassName2 = tn.g.C(topLevelName2);
        Intrinsics.checkNotNullParameter(packageFqName2, "packageFqName");
        Intrinsics.checkNotNullParameter(relativeClassName2, "relativeClassName");
        relativeClassName2.a.c();
        e topLevelName3 = e.e("AnnotationTarget");
        Intrinsics.checkNotNullExpressionValue(topLevelName3, "identifier(...)");
        Intrinsics.checkNotNullParameter(packageFqName2, "packageFqName");
        Intrinsics.checkNotNullParameter(topLevelName3, "topLevelName");
        c relativeClassName3 = tn.g.C(topLevelName3);
        Intrinsics.checkNotNullParameter(packageFqName2, "packageFqName");
        Intrinsics.checkNotNullParameter(relativeClassName3, "relativeClassName");
        relativeClassName3.a.c();
        ys.d.d("DeprecationLevel");
        c cVar3 = f10223g;
        e e33 = e.e("EnumEntries");
        Intrinsics.checkNotNullExpressionValue(e33, "identifier(...)");
        f10237w = new b(cVar3, e33);
        e1.e(e1.e(e1.e(e1.e(e1.d(set3, set4), bVar), f10224h), f10225i), j);
    }
}
