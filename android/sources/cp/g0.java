package cp;

import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g0 extends gj.c {
    @Override // gj.c, ip.n
    public final Object n(lp.h descriptor, Object obj) {
        Unit data = (Unit) obj;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(data, "data");
        throw new IllegalStateException("No constructors should appear here: " + descriptor);
    }
}
