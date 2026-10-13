package wq;

import cq.s0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.AdaptedFunctionReference;
import kotlin.jvm.internal.Intrinsics;
import uq.c0;

/* loaded from: classes3.dex */
public final /* synthetic */ class h extends AdaptedFunctionReference implements Function1 {
    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        s0 p02 = (s0) obj;
        Intrinsics.checkNotNullParameter(p02, "p0");
        return ((c0) this.receiver).d(p02, true);
    }
}
