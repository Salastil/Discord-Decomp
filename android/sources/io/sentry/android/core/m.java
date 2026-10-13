package io.sentry.android.core;

import android.os.Debug;
import io.sentry.a3;

/* loaded from: classes3.dex */
public final class m implements io.sentry.u0 {
    @Override // io.sentry.u0
    public final void a(a3 a3Var) {
        long freeMemory = Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory();
        long nativeHeapSize = Debug.getNativeHeapSize() - Debug.getNativeHeapFreeSize();
        a3Var.f11008b = Long.valueOf(freeMemory);
        a3Var.f11009c = Long.valueOf(nativeHeapSize);
    }

    @Override // io.sentry.u0
    public final void c() {
    }
}
