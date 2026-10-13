package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class u0 {
    public static final t0 a = new t0();

    public boolean a() {
        return false;
    }

    public boolean b() {
        return false;
    }

    public final w0 c() {
        w0 e9 = w0.e(this);
        Intrinsics.checkNotNullExpressionValue(e9, "create(...)");
        return e9;
    }

    public jp.h d(jp.h annotations) {
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        return annotations;
    }

    public abstract s0 e(y yVar);

    public boolean f() {
        return this instanceof t0;
    }

    public y g(y topLevelType, c1 position) {
        Intrinsics.checkNotNullParameter(topLevelType, "topLevelType");
        Intrinsics.checkNotNullParameter(position, "position");
        return topLevelType;
    }
}
