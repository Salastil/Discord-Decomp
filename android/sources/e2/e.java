package e2;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class e extends a0 {
    public final Throwable a;

    public e(Throwable finalException) {
        Intrinsics.checkNotNullParameter(finalException, "finalException");
        this.a = finalException;
    }
}
