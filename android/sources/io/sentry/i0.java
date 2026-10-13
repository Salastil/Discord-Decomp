package io.sentry;

import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final class i0 {

    /* renamed from: i, reason: collision with root package name */
    public static volatile i0 f11603i;
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public volatile String f11604b;

    /* renamed from: c, reason: collision with root package name */
    public volatile long f11605c;

    /* renamed from: d, reason: collision with root package name */
    public final AtomicBoolean f11606d;

    /* renamed from: e, reason: collision with root package name */
    public final g0 f11607e;

    /* renamed from: f, reason: collision with root package name */
    public final ExecutorService f11608f;

    /* renamed from: g, reason: collision with root package name */
    public static final long f11601g = TimeUnit.HOURS.toMillis(5);

    /* renamed from: h, reason: collision with root package name */
    public static final long f11602h = TimeUnit.SECONDS.toMillis(1);
    public static final io.sentry.util.a j = new io.sentry.util.a();

    public i0() {
        g0 g0Var = new g0(0);
        this.f11606d = new AtomicBoolean(false);
        this.f11608f = Executors.newSingleThreadExecutor(new h0(0));
        this.a = f11601g;
        this.f11607e = g0Var;
        a();
    }

    public final void a() {
        try {
            this.f11608f.submit(new f4.e(2, this)).get(f11602h, TimeUnit.MILLISECONDS);
        } catch (InterruptedException unused) {
            Thread.currentThread().interrupt();
            this.f11605c = TimeUnit.SECONDS.toMillis(1L) + System.currentTimeMillis();
        } catch (RuntimeException | ExecutionException | TimeoutException unused2) {
            this.f11605c = TimeUnit.SECONDS.toMillis(1L) + System.currentTimeMillis();
        }
    }
}
