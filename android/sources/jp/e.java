package jp;

import fp.o;
import kotlin.Pair;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import mq.x;

/* loaded from: classes3.dex */
public abstract class e {
    public static final hq.e a;

    /* renamed from: b, reason: collision with root package name */
    public static final hq.e f13004b;

    /* renamed from: c, reason: collision with root package name */
    public static final hq.e f13005c;

    /* renamed from: d, reason: collision with root package name */
    public static final hq.e f13006d;

    /* renamed from: e, reason: collision with root package name */
    public static final hq.e f13007e;

    static {
        hq.e e9 = hq.e.e("message");
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        a = e9;
        hq.e e10 = hq.e.e("replaceWith");
        Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
        f13004b = e10;
        hq.e e11 = hq.e.e("level");
        Intrinsics.checkNotNullExpressionValue(e11, "identifier(...)");
        f13005c = e11;
        hq.e e12 = hq.e.e("expression");
        Intrinsics.checkNotNullExpressionValue(e12, "identifier(...)");
        f13006d = e12;
        hq.e e13 = hq.e.e("imports");
        Intrinsics.checkNotNullExpressionValue(e13, "identifier(...)");
        f13007e = e13;
    }

    public static final j a(fp.i iVar, String message, String replaceWith, String level) {
        Intrinsics.checkNotNullParameter(iVar, "<this>");
        Intrinsics.checkNotNullParameter(message, "message");
        Intrinsics.checkNotNullParameter(replaceWith, "replaceWith");
        Intrinsics.checkNotNullParameter(level, "level");
        j value = new j(iVar, o.f8895o, v0.g(new Pair(f13006d, new x(replaceWith)), new Pair(f13007e, new mq.b(m0.f13512d, new fp.g(iVar, 1)))));
        hq.c cVar = o.f8893m;
        Pair pair = new Pair(a, new x(message));
        Intrinsics.checkNotNullParameter(value, "value");
        Pair pair2 = new Pair(f13004b, new mq.a((Object) value));
        hq.c topLevelFqName = o.f8894n;
        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
        hq.b bVar = new hq.b(topLevelFqName.b(), topLevelFqName.a.f());
        hq.e e9 = hq.e.e(level);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return new j(iVar, cVar, v0.g(pair, pair2, new Pair(f13005c, new mq.i(bVar, e9))));
    }
}
