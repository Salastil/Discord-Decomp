package sp;

import fp.o;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import rp.y;

/* loaded from: classes3.dex */
public abstract class c {
    public static final hq.e a;

    /* renamed from: b, reason: collision with root package name */
    public static final hq.e f18080b;

    /* renamed from: c, reason: collision with root package name */
    public static final hq.e f18081c;

    /* renamed from: d, reason: collision with root package name */
    public static final Object f18082d;

    static {
        hq.e e9 = hq.e.e("message");
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        a = e9;
        hq.e e10 = hq.e.e("allowedTargets");
        Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
        f18080b = e10;
        hq.e e11 = hq.e.e("value");
        Intrinsics.checkNotNullExpressionValue(e11, "identifier(...)");
        f18081c = e11;
        f18082d = v0.g(new Pair(o.f8900t, y.f17496c), new Pair(o.f8903w, y.f17497d), new Pair(o.f8904x, y.f17499f));
    }

    /* JADX WARN: Type inference failed for: r0v5, types: [java.lang.Object, java.util.Map] */
    public static tp.g a(hq.c kotlinName, yp.b annotationOwner, e4.i c6) {
        op.d a10;
        Intrinsics.checkNotNullParameter(kotlinName, "kotlinName");
        Intrinsics.checkNotNullParameter(annotationOwner, "annotationOwner");
        Intrinsics.checkNotNullParameter(c6, "c");
        if (Intrinsics.areEqual(kotlinName, o.f8893m)) {
            hq.c DEPRECATED_ANNOTATION = y.f17498e;
            Intrinsics.checkNotNullExpressionValue(DEPRECATED_ANNOTATION, "DEPRECATED_ANNOTATION");
            op.d a11 = annotationOwner.a(DEPRECATED_ANNOTATION);
            if (a11 != null) {
                return new g(a11, c6);
            }
        }
        hq.c cVar = (hq.c) f18082d.get(kotlinName);
        if (cVar == null || (a10 = annotationOwner.a(cVar)) == null) {
            return null;
        }
        return b(c6, a10, false);
    }

    public static tp.g b(e4.i c6, op.d annotation, boolean z5) {
        Intrinsics.checkNotNullParameter(annotation, "annotation");
        Intrinsics.checkNotNullParameter(c6, "c");
        hq.b a10 = op.c.a(com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(annotation.a)));
        hq.c TARGET_ANNOTATION = y.f17496c;
        Intrinsics.checkNotNullExpressionValue(TARGET_ANNOTATION, "TARGET_ANNOTATION");
        if (Intrinsics.areEqual(a10, ta.a.K(TARGET_ANNOTATION))) {
            return new j(annotation, c6);
        }
        hq.c RETENTION_ANNOTATION = y.f17497d;
        Intrinsics.checkNotNullExpressionValue(RETENTION_ANNOTATION, "RETENTION_ANNOTATION");
        if (Intrinsics.areEqual(a10, ta.a.K(RETENTION_ANNOTATION))) {
            return new i(annotation, c6);
        }
        hq.c DOCUMENTED_ANNOTATION = y.f17499f;
        Intrinsics.checkNotNullExpressionValue(DOCUMENTED_ANNOTATION, "DOCUMENTED_ANNOTATION");
        if (Intrinsics.areEqual(a10, ta.a.K(DOCUMENTED_ANNOTATION))) {
            return new b(c6, annotation, o.f8904x);
        }
        hq.c DEPRECATED_ANNOTATION = y.f17498e;
        Intrinsics.checkNotNullExpressionValue(DEPRECATED_ANNOTATION, "DEPRECATED_ANNOTATION");
        if (Intrinsics.areEqual(a10, ta.a.K(DEPRECATED_ANNOTATION))) {
            return null;
        }
        return new vp.f(c6, annotation, z5);
    }
}
