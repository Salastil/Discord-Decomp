package com.facebook.common.time;

import o8.c;
import v8.b;

@c
/* loaded from: classes3.dex */
public class AwakeTimeSinceBootClock implements b {

    @c
    private static final AwakeTimeSinceBootClock INSTANCE = new AwakeTimeSinceBootClock();

    private AwakeTimeSinceBootClock() {
    }

    @c
    public static AwakeTimeSinceBootClock get() {
        return INSTANCE;
    }

    @Override // v8.b, v8.a
    @c
    public /* bridge */ /* synthetic */ long now() {
        return super.now();
    }

    @Override // v8.b, v8.a
    @c
    public long nowNanos() {
        return System.nanoTime();
    }
}
