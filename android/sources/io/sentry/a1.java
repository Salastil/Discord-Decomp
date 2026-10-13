package io.sentry;

import java.util.concurrent.Future;

/* loaded from: classes3.dex */
public interface a1 {
    void a(long j);

    void e();

    boolean isClosed();

    Future l(Runnable runnable, long j);

    Future submit(Runnable runnable);
}
