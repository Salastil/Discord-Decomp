package vp;

import java.util.ArrayList;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class e0 extends a0 {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e0(e4.i c6) {
        super(c6, null);
        Intrinsics.checkNotNullParameter(c6, "c");
    }

    @Override // vp.a0
    public void n(hq.e name, ArrayList result) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(result, "result");
    }

    @Override // vp.a0
    public final lp.u p() {
        return null;
    }

    @Override // vp.a0
    public final z s(op.w method, ArrayList methodTypeParameters, yq.y returnType, List valueParameters) {
        Intrinsics.checkNotNullParameter(method, "method");
        Intrinsics.checkNotNullParameter(methodTypeParameters, "methodTypeParameters");
        Intrinsics.checkNotNullParameter(returnType, "returnType");
        Intrinsics.checkNotNullParameter(valueParameters, "valueParameters");
        return new z(returnType, valueParameters, methodTypeParameters, m0.f13512d);
    }
}
