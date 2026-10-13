package mq;

import ip.a0;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;

/* loaded from: classes3.dex */
public final class x extends g {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public x(String value) {
        super(value);
        Intrinsics.checkNotNullParameter(value, "value");
    }

    @Override // mq.g
    public final yq.y a(a0 module) {
        Intrinsics.checkNotNullParameter(module, "module");
        c0 v5 = module.g().v();
        Intrinsics.checkNotNullExpressionValue(v5, "getStringType(...)");
        return v5;
    }

    @Override // mq.g
    public final String toString() {
        return s4.h.h(new StringBuilder("\""), (String) this.a, '\"');
    }
}
