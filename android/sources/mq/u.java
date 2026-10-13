package mq;

import ip.a0;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;

/* loaded from: classes3.dex */
public final class u extends p {
    public u(long j) {
        super(Long.valueOf(j));
    }

    @Override // mq.g
    public final yq.y a(a0 module) {
        Intrinsics.checkNotNullParameter(module, "module");
        fp.i g6 = module.g();
        g6.getClass();
        c0 t5 = g6.t(fp.k.I);
        Intrinsics.checkNotNullExpressionValue(t5, "getLongType(...)");
        return t5;
    }

    @Override // mq.g
    public final String toString() {
        return ((Number) this.a).longValue() + ".toLong()";
    }
}
