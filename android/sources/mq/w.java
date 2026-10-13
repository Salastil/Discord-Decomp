package mq;

import ip.a0;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;

/* loaded from: classes3.dex */
public final class w extends p {
    public w(short s2) {
        super(Short.valueOf(s2));
    }

    @Override // mq.g
    public final yq.y a(a0 module) {
        Intrinsics.checkNotNullParameter(module, "module");
        fp.i g6 = module.g();
        g6.getClass();
        c0 t5 = g6.t(fp.k.F);
        Intrinsics.checkNotNullExpressionValue(t5, "getShortType(...)");
        return t5;
    }

    @Override // mq.g
    public final String toString() {
        return ((Number) this.a).intValue() + ".toShort()";
    }
}
