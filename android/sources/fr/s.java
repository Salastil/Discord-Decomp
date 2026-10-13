package fr;

import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.c1;
import kotlin.collections.e1;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;

/* loaded from: classes3.dex */
public abstract class s {
    public static final hq.e a;

    /* renamed from: b, reason: collision with root package name */
    public static final hq.e f9035b;

    /* renamed from: c, reason: collision with root package name */
    public static final hq.e f9036c;

    /* renamed from: d, reason: collision with root package name */
    public static final hq.e f9037d;

    /* renamed from: e, reason: collision with root package name */
    public static final hq.e f9038e;

    /* renamed from: f, reason: collision with root package name */
    public static final hq.e f9039f;

    /* renamed from: g, reason: collision with root package name */
    public static final hq.e f9040g;

    /* renamed from: h, reason: collision with root package name */
    public static final hq.e f9041h;

    /* renamed from: i, reason: collision with root package name */
    public static final hq.e f9042i;
    public static final hq.e j;
    public static final hq.e k;

    /* renamed from: l, reason: collision with root package name */
    public static final hq.e f9043l;

    /* renamed from: m, reason: collision with root package name */
    public static final Regex f9044m;

    /* renamed from: n, reason: collision with root package name */
    public static final hq.e f9045n;

    /* renamed from: o, reason: collision with root package name */
    public static final hq.e f9046o;

    /* renamed from: p, reason: collision with root package name */
    public static final hq.e f9047p;

    /* renamed from: q, reason: collision with root package name */
    public static final hq.e f9048q;

    /* renamed from: r, reason: collision with root package name */
    public static final Set f9049r;

    /* renamed from: s, reason: collision with root package name */
    public static final Set f9050s;

    /* renamed from: t, reason: collision with root package name */
    public static final Set f9051t;

    static {
        hq.e e9 = hq.e.e("getValue");
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        a = e9;
        hq.e e10 = hq.e.e("setValue");
        Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
        f9035b = e10;
        hq.e e11 = hq.e.e("provideDelegate");
        Intrinsics.checkNotNullExpressionValue(e11, "identifier(...)");
        f9036c = e11;
        hq.e e12 = hq.e.e("equals");
        Intrinsics.checkNotNullExpressionValue(e12, "identifier(...)");
        f9037d = e12;
        Intrinsics.checkNotNullExpressionValue(hq.e.e("hashCode"), "identifier(...)");
        hq.e e13 = hq.e.e("compareTo");
        Intrinsics.checkNotNullExpressionValue(e13, "identifier(...)");
        f9038e = e13;
        hq.e e14 = hq.e.e("contains");
        Intrinsics.checkNotNullExpressionValue(e14, "identifier(...)");
        f9039f = e14;
        hq.e e15 = hq.e.e("invoke");
        Intrinsics.checkNotNullExpressionValue(e15, "identifier(...)");
        f9040g = e15;
        hq.e e16 = hq.e.e("iterator");
        Intrinsics.checkNotNullExpressionValue(e16, "identifier(...)");
        f9041h = e16;
        hq.e e17 = hq.e.e("get");
        Intrinsics.checkNotNullExpressionValue(e17, "identifier(...)");
        f9042i = e17;
        hq.e e18 = hq.e.e("set");
        Intrinsics.checkNotNullExpressionValue(e18, "identifier(...)");
        j = e18;
        hq.e e19 = hq.e.e("next");
        Intrinsics.checkNotNullExpressionValue(e19, "identifier(...)");
        k = e19;
        hq.e e20 = hq.e.e("hasNext");
        Intrinsics.checkNotNullExpressionValue(e20, "identifier(...)");
        f9043l = e20;
        Intrinsics.checkNotNullExpressionValue(hq.e.e("toString"), "identifier(...)");
        f9044m = new Regex("component\\d+");
        hq.e e21 = hq.e.e("and");
        Intrinsics.checkNotNullExpressionValue(e21, "identifier(...)");
        hq.e e22 = hq.e.e("or");
        Intrinsics.checkNotNullExpressionValue(e22, "identifier(...)");
        hq.e e23 = hq.e.e("xor");
        Intrinsics.checkNotNullExpressionValue(e23, "identifier(...)");
        hq.e e24 = hq.e.e("inv");
        Intrinsics.checkNotNullExpressionValue(e24, "identifier(...)");
        hq.e e25 = hq.e.e("shl");
        Intrinsics.checkNotNullExpressionValue(e25, "identifier(...)");
        hq.e e26 = hq.e.e("shr");
        Intrinsics.checkNotNullExpressionValue(e26, "identifier(...)");
        hq.e e27 = hq.e.e("ushr");
        Intrinsics.checkNotNullExpressionValue(e27, "identifier(...)");
        hq.e e28 = hq.e.e("inc");
        Intrinsics.checkNotNullExpressionValue(e28, "identifier(...)");
        f9045n = e28;
        hq.e e29 = hq.e.e("dec");
        Intrinsics.checkNotNullExpressionValue(e29, "identifier(...)");
        f9046o = e29;
        hq.e e30 = hq.e.e("plus");
        Intrinsics.checkNotNullExpressionValue(e30, "identifier(...)");
        hq.e e31 = hq.e.e("minus");
        Intrinsics.checkNotNullExpressionValue(e31, "identifier(...)");
        hq.e e32 = hq.e.e("not");
        Intrinsics.checkNotNullExpressionValue(e32, "identifier(...)");
        hq.e e33 = hq.e.e("unaryMinus");
        Intrinsics.checkNotNullExpressionValue(e33, "identifier(...)");
        hq.e e34 = hq.e.e("unaryPlus");
        Intrinsics.checkNotNullExpressionValue(e34, "identifier(...)");
        hq.e e35 = hq.e.e("times");
        Intrinsics.checkNotNullExpressionValue(e35, "identifier(...)");
        hq.e e36 = hq.e.e("div");
        Intrinsics.checkNotNullExpressionValue(e36, "identifier(...)");
        hq.e e37 = hq.e.e("rem");
        Intrinsics.checkNotNullExpressionValue(e37, "identifier(...)");
        hq.e e38 = hq.e.e("rangeTo");
        Intrinsics.checkNotNullExpressionValue(e38, "identifier(...)");
        f9047p = e38;
        hq.e e39 = hq.e.e("rangeUntil");
        Intrinsics.checkNotNullExpressionValue(e39, "identifier(...)");
        f9048q = e39;
        hq.e e40 = hq.e.e("timesAssign");
        Intrinsics.checkNotNullExpressionValue(e40, "identifier(...)");
        hq.e e41 = hq.e.e("divAssign");
        Intrinsics.checkNotNullExpressionValue(e41, "identifier(...)");
        hq.e e42 = hq.e.e("remAssign");
        Intrinsics.checkNotNullExpressionValue(e42, "identifier(...)");
        hq.e e43 = hq.e.e("plusAssign");
        Intrinsics.checkNotNullExpressionValue(e43, "identifier(...)");
        hq.e e44 = hq.e.e("minusAssign");
        Intrinsics.checkNotNullExpressionValue(e44, "identifier(...)");
        hq.e e45 = hq.e.e("toDouble");
        Intrinsics.checkNotNullExpressionValue(e45, "identifier(...)");
        hq.e e46 = hq.e.e("toFloat");
        Intrinsics.checkNotNullExpressionValue(e46, "identifier(...)");
        hq.e e47 = hq.e.e("toLong");
        Intrinsics.checkNotNullExpressionValue(e47, "identifier(...)");
        hq.e e48 = hq.e.e("toInt");
        Intrinsics.checkNotNullExpressionValue(e48, "identifier(...)");
        hq.e e49 = hq.e.e("toChar");
        Intrinsics.checkNotNullExpressionValue(e49, "identifier(...)");
        hq.e e50 = hq.e.e("toShort");
        Intrinsics.checkNotNullExpressionValue(e50, "identifier(...)");
        hq.e e51 = hq.e.e("toByte");
        Intrinsics.checkNotNullExpressionValue(e51, "identifier(...)");
        hq.e[] elements = {e28, e29, e34, e33, e32, e24};
        Intrinsics.checkNotNullParameter(elements, "elements");
        kotlin.collections.x.J(elements);
        hq.e[] elements2 = {e34, e33, e32, e24};
        Intrinsics.checkNotNullParameter(elements2, "elements");
        f9049r = kotlin.collections.x.J(elements2);
        hq.e[] elements3 = {e35, e30, e31, e36, e37, e38, e39};
        Intrinsics.checkNotNullParameter(elements3, "elements");
        Set J = kotlin.collections.x.J(elements3);
        f9050s = J;
        hq.e[] elements4 = {e35, e30, e31, e36, e37};
        Intrinsics.checkNotNullParameter(elements4, "elements");
        kotlin.collections.x.J(elements4);
        hq.e[] elements5 = {e21, e22, e23, e24, e25, e26, e27};
        Intrinsics.checkNotNullParameter(elements5, "elements");
        Set J2 = kotlin.collections.x.J(elements5);
        hq.e[] elements6 = {e21, e22, e23, e25, e26, e27};
        Intrinsics.checkNotNullParameter(elements6, "elements");
        kotlin.collections.x.J(elements6);
        LinkedHashSet d6 = e1.d(J, J2);
        hq.e[] elements7 = {e12, e14, e13};
        Intrinsics.checkNotNullParameter(elements7, "elements");
        e1.d(d6, kotlin.collections.x.J(elements7));
        hq.e[] elements8 = {e40, e41, e42, e43, e44};
        Intrinsics.checkNotNullParameter(elements8, "elements");
        Set J3 = kotlin.collections.x.J(elements8);
        f9051t = J3;
        hq.e[] elements9 = {e9, e10, e11};
        Intrinsics.checkNotNullParameter(elements9, "elements");
        kotlin.collections.x.J(elements9);
        e1.d(c1.b(e18), J3);
        hq.e[] elements10 = {e45, e46, e47, e48, e50, e51, e49};
        Intrinsics.checkNotNullParameter(elements10, "elements");
        kotlin.collections.x.J(elements10);
        v0.g(new Pair(e28, "++"), new Pair(e29, "--"), new Pair(e34, "+"), new Pair(e33, "-"), new Pair(e32, "!"), new Pair(e35, "*"), new Pair(e30, "+"), new Pair(e31, "-"), new Pair(e36, "/"), new Pair(e37, "%"), new Pair(e38, ".."), new Pair(e39, "..<"));
    }
}
