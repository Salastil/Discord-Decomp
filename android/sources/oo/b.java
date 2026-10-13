package oo;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class b extends no.b {
    @Override // no.b
    public final void a(Throwable cause, Throwable exception) {
        Intrinsics.checkNotNullParameter(cause, "cause");
        Intrinsics.checkNotNullParameter(exception, "exception");
        Integer num = a.f16146b;
        if (num == null || num.intValue() >= 19) {
            cause.addSuppressed(exception);
        } else {
            super.a(cause, exception);
        }
    }
}
