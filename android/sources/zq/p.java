package zq;

import kotlin.jvm.internal.Intrinsics;
import yq.b1;

/* loaded from: classes3.dex */
public final class p extends t {
    public p() {
        super("ACCEPT_NULL", 1);
    }

    @Override // zq.t
    public final t a(b1 nextType) {
        Intrinsics.checkNotNullParameter(nextType, "nextType");
        return t.b(nextType);
    }
}
