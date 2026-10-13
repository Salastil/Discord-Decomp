package io.sentry.logger;

import a3.h;
import af.s;
import e4.i;
import io.sentry.SentryLevel;
import io.sentry.android.core.h1;
import io.sentry.b5;
import io.sentry.c5;
import io.sentry.r;
import io.sentry.transport.q;
import io.sentry.v5;
import io.sentry.x4;
import io.sentry.y4;
import java.io.IOException;
import java.util.ArrayList;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.Future;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public class c implements a, io.sentry.metrics.a {
    public final u4.c E;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11656d;

    /* renamed from: e, reason: collision with root package name */
    public final v5 f11657e;

    /* renamed from: i, reason: collision with root package name */
    public final s f11658i;

    /* renamed from: v, reason: collision with root package name */
    public final ConcurrentLinkedQueue f11659v;

    /* renamed from: w, reason: collision with root package name */
    public final i f11660w;

    /* renamed from: x, reason: collision with root package name */
    public volatile Future f11661x;

    /* renamed from: y, reason: collision with root package name */
    public final io.sentry.util.a f11662y;

    public c(v5 v5Var, s sVar, int i5) {
        this.f11656d = i5;
        switch (i5) {
            case 1:
                this.f11662y = new io.sentry.util.a();
                this.E = new u4.c(18);
                this.f11657e = v5Var;
                this.f11658i = sVar;
                this.f11659v = new ConcurrentLinkedQueue();
                this.f11660w = new i(v5Var);
                break;
            default:
                this.f11662y = new io.sentry.util.a();
                this.E = new u4.c(18);
                this.f11657e = v5Var;
                this.f11658i = sVar;
                this.f11659v = new ConcurrentLinkedQueue();
                this.f11660w = new i(v5Var);
                break;
        }
    }

    @Override // io.sentry.logger.a, io.sentry.metrics.a
    public void a(boolean z5) {
        switch (this.f11656d) {
            case 0:
                i iVar = this.f11660w;
                if (!z5) {
                    iVar.a(this.f11657e.getShutdownTimeoutMillis());
                    while (!this.f11659v.isEmpty()) {
                        e();
                    }
                    break;
                } else {
                    h(true);
                    iVar.submit(new h1(6, this));
                    break;
                }
            default:
                i iVar2 = this.f11660w;
                if (!z5) {
                    iVar2.a(this.f11657e.getShutdownTimeoutMillis());
                    while (!this.f11659v.isEmpty()) {
                        d();
                    }
                    break;
                } else {
                    g(true);
                    iVar2.submit(new h1(7, this));
                    break;
                }
        }
    }

    @Override // io.sentry.logger.a, io.sentry.metrics.a
    public final void b(long j) {
        switch (this.f11656d) {
            case 0:
                h(true);
                try {
                    u4.c cVar = this.E;
                    TimeUnit timeUnit = TimeUnit.MILLISECONDS;
                    cVar.getClass();
                    ((q) cVar.f18811d).tryAcquireSharedNanos(1, timeUnit.toNanos(j));
                    break;
                } catch (InterruptedException e9) {
                    this.f11657e.getLogger().k(SentryLevel.ERROR, "Failed to flush log events", e9);
                    Thread.currentThread().interrupt();
                    return;
                }
            default:
                g(true);
                try {
                    u4.c cVar2 = this.E;
                    TimeUnit timeUnit2 = TimeUnit.MILLISECONDS;
                    cVar2.getClass();
                    ((q) cVar2.f18811d).tryAcquireSharedNanos(1, timeUnit2.toNanos(j));
                    break;
                } catch (InterruptedException e10) {
                    this.f11657e.getLogger().k(SentryLevel.ERROR, "Failed to flush metrics events", e10);
                    Thread.currentThread().interrupt();
                }
        }
    }

    public void d() {
        ArrayList arrayList = new ArrayList(1000);
        do {
            ConcurrentLinkedQueue concurrentLinkedQueue = this.f11659v;
            b5 b5Var = (b5) concurrentLinkedQueue.poll();
            if (b5Var != null) {
                arrayList.add(b5Var);
            }
            if (concurrentLinkedQueue.isEmpty()) {
                break;
            }
        } while (arrayList.size() < 1000);
        if (arrayList.isEmpty()) {
            return;
        }
        c5 c5Var = new c5(arrayList);
        s sVar = this.f11658i;
        sVar.getClass();
        try {
            sVar.y(sVar.p(c5Var), null);
        } catch (IOException e9) {
            ((v5) sVar.f594b).getLogger().i(SentryLevel.WARNING, e9, "Capturing metrics failed.", new Object[0]);
        }
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            q qVar = (q) this.E.f18811d;
            int i6 = q.f12018d;
            qVar.releaseShared(1);
        }
    }

    public void e() {
        ArrayList arrayList = new ArrayList(100);
        do {
            ConcurrentLinkedQueue concurrentLinkedQueue = this.f11659v;
            x4 x4Var = (x4) concurrentLinkedQueue.poll();
            if (x4Var != null) {
                arrayList.add(x4Var);
            }
            if (concurrentLinkedQueue.isEmpty()) {
                break;
            }
        } while (arrayList.size() < 100);
        if (arrayList.isEmpty()) {
            return;
        }
        y4 y4Var = new y4(arrayList);
        s sVar = this.f11658i;
        sVar.getClass();
        try {
            sVar.y(sVar.o(y4Var), null);
        } catch (IOException e9) {
            ((v5) sVar.f594b).getLogger().i(SentryLevel.WARNING, e9, "Capturing logs failed.", new Object[0]);
        }
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            q qVar = (q) this.E.f18811d;
            int i6 = q.f12018d;
            qVar.releaseShared(1);
        }
    }

    public void g(boolean z5) {
        r a = this.f11662y.a();
        try {
            try {
                this.f11661x = this.f11660w.l(new h(24, this), z5 ? 0 : 5000);
            } catch (RejectedExecutionException e9) {
                this.f11657e.getLogger().k(SentryLevel.WARNING, "Metrics batch processor flush task rejected", e9);
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

    public void h(boolean z5) {
        r a = this.f11662y.a();
        try {
            try {
                this.f11661x = this.f11660w.l(new h(23, this), z5 ? 0 : 5000);
            } catch (RejectedExecutionException e9) {
                this.f11657e.getLogger().k(SentryLevel.WARNING, "Logs batch processor flush task rejected", e9);
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
}
