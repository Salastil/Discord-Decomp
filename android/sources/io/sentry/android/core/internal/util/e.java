package io.sentry.android.core.internal.util;

import android.os.Handler;
import android.os.Looper;
import android.os.Process;

/* loaded from: classes3.dex */
public final class e implements io.sentry.util.thread.a {
    public static final e a;

    /* renamed from: b, reason: collision with root package name */
    public static volatile long f11222b;

    static {
        e eVar = new e();
        new Handler(Looper.getMainLooper()).post(new cc.a(13));
        a = eVar;
        f11222b = Process.myTid();
    }

    @Override // io.sentry.util.thread.a
    public final String a() {
        return c() ? "main" : Thread.currentThread().getName();
    }

    @Override // io.sentry.util.thread.a
    public final long b() {
        return Process.myTid();
    }

    @Override // io.sentry.util.thread.a
    public final boolean c() {
        return Looper.getMainLooper().getThread().getId() == Thread.currentThread().getId();
    }
}
