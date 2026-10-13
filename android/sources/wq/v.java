package wq;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v extends a {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v(xq.l storageManager, Function0 compute) {
        super(storageManager, compute);
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(compute, "compute");
    }

    @Override // wq.a, jp.h
    public final boolean isEmpty() {
        return false;
    }
}
