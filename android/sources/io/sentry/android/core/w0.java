package io.sentry.android.core;

import com.facebook.react.modules.appstate.AppStateModule;
import io.sentry.Breadcrumb;
import io.sentry.SentryLevel;
import io.sentry.c4;
import io.sentry.v3;
import java.util.Timer;
import java.util.concurrent.atomic.AtomicLong;

/* loaded from: classes3.dex */
public final class w0 implements b0 {
    public final boolean E;

    /* renamed from: e, reason: collision with root package name */
    public final long f11348e;

    /* renamed from: i, reason: collision with root package name */
    public io.sentry.n f11349i;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f11353y;

    /* renamed from: d, reason: collision with root package name */
    public final AtomicLong f11347d = new AtomicLong(0);

    /* renamed from: v, reason: collision with root package name */
    public final io.sentry.util.e f11350v = new io.sentry.util.e(new i7.a(22));

    /* renamed from: w, reason: collision with root package name */
    public final io.sentry.util.a f11351w = new io.sentry.util.a();

    /* renamed from: x, reason: collision with root package name */
    public final v3 f11352x = v3.a;
    public final io.sentry.transport.d F = io.sentry.transport.d.f11998d;

    public w0(long j, boolean z5, boolean z6) {
        this.f11348e = j;
        this.f11353y = z5;
        this.E = z6;
    }

    public final void a(String str) {
        if (this.E) {
            Breadcrumb breadcrumb = new Breadcrumb();
            breadcrumb.f10976w = "navigation";
            breadcrumb.c(str, "state");
            breadcrumb.f10978y = "app.lifecycle";
            breadcrumb.F = SentryLevel.INFO;
            this.f11352x.c(breadcrumb);
        }
    }

    public final void b() {
        io.sentry.r a = this.f11351w.a();
        try {
            io.sentry.n nVar = this.f11349i;
            if (nVar != null) {
                nVar.cancel();
                this.f11349i = null;
            }
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.android.core.b0
    public final void c() {
        b();
        this.F.getClass();
        long currentTimeMillis = System.currentTimeMillis();
        hc.m mVar = new hc.m(15, this);
        v3 v3Var = this.f11352x;
        v3Var.getClass();
        c4.d(null, mVar);
        AtomicLong atomicLong = this.f11347d;
        long j = atomicLong.get();
        if (j == 0 || j + this.f11348e <= currentTimeMillis) {
            if (this.f11353y) {
                v3Var.p();
            }
            v3Var.l().getReplayController().start();
        }
        v3Var.l().getReplayController().resume();
        atomicLong.set(currentTimeMillis);
        a("foreground");
    }

    @Override // io.sentry.android.core.b0
    public final void f() {
        this.F.getClass();
        this.f11347d.set(System.currentTimeMillis());
        this.f11352x.l().getReplayController().pause();
        io.sentry.r a = this.f11351w.a();
        try {
            b();
            this.f11349i = new io.sentry.n(1, this);
            ((Timer) this.f11350v.a()).schedule(this.f11349i, this.f11348e);
            a.close();
            a(AppStateModule.APP_STATE_BACKGROUND);
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }
}
