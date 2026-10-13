package et;

import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import okio.Timeout;

/* loaded from: classes.dex */
public final class w extends Timeout {
    @Override // okio.Timeout
    public final Timeout g(long j, TimeUnit unit) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        return this;
    }

    @Override // okio.Timeout
    public final void f() {
    }

    @Override // okio.Timeout
    public final Timeout d(long j) {
        return this;
    }
}
