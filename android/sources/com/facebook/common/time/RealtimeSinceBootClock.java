package com.facebook.common.time;

import android.os.SystemClock;
import java.util.concurrent.TimeUnit;
import o8.c;
import v8.a;

@c
/* loaded from: classes3.dex */
public class RealtimeSinceBootClock implements a {
    public static final RealtimeSinceBootClock a = new RealtimeSinceBootClock();

    private RealtimeSinceBootClock() {
    }

    @c
    public static RealtimeSinceBootClock get() {
        return a;
    }

    @Override // v8.a
    public final long now() {
        return SystemClock.elapsedRealtime();
    }

    @Override // v8.a
    public final long nowNanos() {
        return TimeUnit.MILLISECONDS.toNanos(SystemClock.elapsedRealtime());
    }
}
