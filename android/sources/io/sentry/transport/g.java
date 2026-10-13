package io.sentry.transport;

import io.sentry.Hint;
import java.io.Closeable;

/* loaded from: classes3.dex */
public interface g extends Closeable {
    void O(io.sentry.internal.debugmeta.c cVar, Hint hint);

    void a(boolean z5);

    void b(long j);

    p d();

    default boolean e() {
        return true;
    }
}
