package io.sentry.transport;

import a5.k0;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.h0;
import io.sentry.i4;
import io.sentry.j4;
import io.sentry.k4;
import io.sentry.o4;
import io.sentry.r6;
import io.sentry.u;
import io.sentry.v5;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.Future;
import java.util.concurrent.RejectedExecutionHandler;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class c implements g {

    /* renamed from: d, reason: collision with root package name */
    public final n f11991d;

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.cache.d f11992e;

    /* renamed from: i, reason: collision with root package name */
    public final v5 f11993i;

    /* renamed from: v, reason: collision with root package name */
    public final p f11994v;

    /* renamed from: w, reason: collision with root package name */
    public final h f11995w;

    /* renamed from: x, reason: collision with root package name */
    public final e f11996x;

    /* renamed from: y, reason: collision with root package name */
    public volatile b f11997y;

    /* JADX WARN: Type inference failed for: r3v0, types: [io.sentry.transport.a] */
    public c(v5 v5Var, p pVar, h hVar, e4.e eVar) {
        int maxQueueSize = v5Var.getMaxQueueSize();
        final io.sentry.cache.d envelopeDiskCache = v5Var.getEnvelopeDiskCache();
        final ILogger logger = v5Var.getLogger();
        j4 dateProvider = v5Var.getDateProvider();
        n nVar = new n(maxQueueSize, new h0(2), new RejectedExecutionHandler() { // from class: io.sentry.transport.a
            @Override // java.util.concurrent.RejectedExecutionHandler
            public final void rejectedExecution(Runnable runnable, ThreadPoolExecutor threadPoolExecutor) {
                if (runnable instanceof b) {
                    b bVar = (b) runnable;
                    Hint hint = bVar.f11987e;
                    if (!k0.B(hint, io.sentry.hints.d.class)) {
                        io.sentry.cache.d.this.t(bVar.f11986d, hint);
                    }
                    Object b10 = hint.b("sentry:typeCheckHint");
                    if (io.sentry.hints.k.class.isInstance(hint.b("sentry:typeCheckHint")) && b10 != null) {
                        ((io.sentry.hints.k) b10).b(false);
                    }
                    Object b11 = hint.b("sentry:typeCheckHint");
                    if (io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint")) && b11 != null) {
                        ((io.sentry.hints.h) b11).c(true);
                    }
                    logger.u(SentryLevel.WARNING, "Envelope rejected", new Object[0]);
                }
            }
        }, logger, dateProvider);
        e eVar2 = new e(v5Var, eVar, pVar);
        this.f11997y = null;
        this.f11991d = nVar;
        io.sentry.cache.d envelopeDiskCache2 = v5Var.getEnvelopeDiskCache();
        d9.a.L(envelopeDiskCache2, "envelopeCache is required");
        this.f11992e = envelopeDiskCache2;
        this.f11993i = v5Var;
        this.f11994v = pVar;
        d9.a.L(hVar, "transportGate is required");
        this.f11995w = hVar;
        this.f11996x = eVar2;
    }

    @Override // io.sentry.transport.g
    public final void O(io.sentry.internal.debugmeta.c cVar, Hint hint) {
        io.sentry.cache.d dVar;
        boolean z5;
        io.sentry.internal.debugmeta.c cVar2;
        List singletonList;
        Iterable<o4> iterable = (Iterable) cVar.f11623i;
        boolean B = k0.B(hint, io.sentry.hints.d.class);
        v5 v5Var = this.f11993i;
        io.sentry.cache.d dVar2 = this.f11992e;
        if (B) {
            v5Var.getLogger().u(SentryLevel.DEBUG, "Captured Envelope is already cached", new Object[0]);
            dVar = i.f12003d;
            z5 = true;
        } else {
            dVar = dVar2;
            z5 = false;
        }
        p pVar = this.f11994v;
        v5 v5Var2 = pVar.f12013e;
        ArrayList arrayList = null;
        for (o4 o4Var : iterable) {
            String itemType = o4Var.a.f11731w.getItemType();
            itemType.getClass();
            switch (itemType) {
                case "attachment":
                    singletonList = Collections.singletonList(io.sentry.l.Attachment);
                    break;
                case "replay_video":
                    singletonList = Collections.singletonList(io.sentry.l.Replay);
                    break;
                case "profile_chunk":
                    singletonList = Arrays.asList(io.sentry.l.ProfileChunkUi, io.sentry.l.ProfileChunk);
                    break;
                case "profile":
                    singletonList = Collections.singletonList(io.sentry.l.Profile);
                    break;
                case "feedback":
                    singletonList = Collections.singletonList(io.sentry.l.Feedback);
                    break;
                case "log":
                    singletonList = Collections.singletonList(io.sentry.l.LogItem);
                    break;
                case "span":
                    singletonList = Collections.singletonList(io.sentry.l.Span);
                    break;
                case "event":
                    singletonList = Collections.singletonList(io.sentry.l.Error);
                    break;
                case "trace_metric":
                    singletonList = Collections.singletonList(io.sentry.l.TraceMetric);
                    break;
                case "check_in":
                    singletonList = Collections.singletonList(io.sentry.l.Monitor);
                    break;
                case "session":
                    singletonList = Collections.singletonList(io.sentry.l.Session);
                    break;
                case "transaction":
                    singletonList = Collections.singletonList(io.sentry.l.Transaction);
                    break;
                default:
                    singletonList = Collections.singletonList(io.sentry.l.Unknown);
                    break;
            }
            Iterator it = singletonList.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                if (pVar.f((io.sentry.l) it.next())) {
                    if (arrayList == null) {
                        arrayList = new ArrayList();
                    }
                    arrayList.add(o4Var);
                    v5Var2.getClientReportRecorder().o(io.sentry.clientreport.d.RATELIMIT_BACKOFF, o4Var);
                }
            }
        }
        if (arrayList != null) {
            v5Var2.getLogger().u(SentryLevel.WARNING, "%d envelope items will be dropped due rate limiting.", Integer.valueOf(arrayList.size()));
            ArrayList arrayList2 = new ArrayList();
            for (o4 o4Var2 : iterable) {
                if (!arrayList.contains(o4Var2)) {
                    arrayList2.add(o4Var2);
                }
            }
            if (arrayList2.isEmpty()) {
                v5Var2.getLogger().u(SentryLevel.WARNING, "Envelope discarded due all items rate limited.", new Object[0]);
                Object b10 = hint.b("sentry:typeCheckHint");
                if (io.sentry.hints.k.class.isInstance(hint.b("sentry:typeCheckHint")) && b10 != null) {
                    ((io.sentry.hints.k) b10).b(false);
                }
                Object b11 = hint.b("sentry:typeCheckHint");
                if (io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint")) && b11 != null) {
                    ((io.sentry.hints.h) b11).c(false);
                }
                Object b12 = hint.b("sentry:typeCheckHint");
                if (io.sentry.hints.c.class.isInstance(hint.b("sentry:typeCheckHint")) && b12 != null) {
                    ((io.sentry.hints.c) b12).f11597d.countDown();
                    v5Var2.getLogger().u(SentryLevel.DEBUG, "Disk flush envelope fired due to rate limit", new Object[0]);
                }
                cVar2 = null;
            } else {
                cVar2 = new io.sentry.internal.debugmeta.c((k4) cVar.f11622e, arrayList2);
            }
        } else {
            cVar2 = cVar;
        }
        if (cVar2 == null) {
            if (z5) {
                dVar2.U(cVar);
                return;
            }
            return;
        }
        if (r6.class.isInstance(hint.b("sentry:typeCheckHint"))) {
            cVar2 = v5Var.getClientReportRecorder().s(cVar2);
        }
        Future submit = this.f11991d.submit(new b(this, cVar2, hint, dVar));
        if (submit != null && submit.isCancelled()) {
            v5Var.getClientReportRecorder().j(io.sentry.clientreport.d.QUEUE_OVERFLOW, cVar2);
            return;
        }
        Object b13 = hint.b("sentry:typeCheckHint");
        if (!u.class.isInstance(hint.b("sentry:typeCheckHint")) || b13 == null) {
            return;
        }
        u uVar = (u) b13;
        uVar.f12027y.add(uVar.f12026x);
        v5Var.getLogger().u(SentryLevel.DEBUG, "Envelope enqueued", new Object[0]);
    }

    @Override // io.sentry.transport.g
    public final void a(boolean z5) {
        this.f11994v.close();
        this.f11991d.shutdown();
        this.f11993i.getLogger().u(SentryLevel.DEBUG, "Shutting down", new Object[0]);
        if (z5) {
            return;
        }
        try {
            long flushTimeoutMillis = this.f11993i.getFlushTimeoutMillis();
            if (this.f11991d.awaitTermination(flushTimeoutMillis, TimeUnit.MILLISECONDS)) {
                return;
            }
            this.f11993i.getLogger().u(SentryLevel.WARNING, "Failed to shutdown the async connection async sender  within " + flushTimeoutMillis + " ms. Trying to force it now.", new Object[0]);
            this.f11991d.shutdownNow();
            if (this.f11997y != null) {
                this.f11991d.getRejectedExecutionHandler().rejectedExecution(this.f11997y, this.f11991d);
            }
        } catch (InterruptedException unused) {
            this.f11993i.getLogger().u(SentryLevel.DEBUG, "Thread interrupted while closing the connection.", new Object[0]);
            Thread.currentThread().interrupt();
        }
    }

    @Override // io.sentry.transport.g
    public final void b(long j) {
        n nVar = this.f11991d;
        nVar.getClass();
        try {
            u4.c cVar = nVar.f12011w;
            TimeUnit timeUnit = TimeUnit.MILLISECONDS;
            cVar.getClass();
            ((q) cVar.f18811d).tryAcquireSharedNanos(1, timeUnit.toNanos(j));
        } catch (InterruptedException e9) {
            nVar.f12009i.k(SentryLevel.ERROR, "Failed to wait till idle", e9);
            Thread.currentThread().interrupt();
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        a(false);
    }

    @Override // io.sentry.transport.g
    public final p d() {
        return this.f11994v;
    }

    @Override // io.sentry.transport.g
    public final boolean e() {
        boolean z5;
        p pVar = this.f11994v;
        pVar.getClass();
        pVar.f12012d.getClass();
        Date date = new Date(System.currentTimeMillis());
        ConcurrentHashMap concurrentHashMap = pVar.f12014i;
        Iterator it = concurrentHashMap.keySet().iterator();
        while (true) {
            if (!it.hasNext()) {
                z5 = false;
                break;
            }
            Date date2 = (Date) concurrentHashMap.get((io.sentry.l) it.next());
            if (date2 != null && !date.after(date2)) {
                z5 = true;
                break;
            }
        }
        n nVar = this.f11991d;
        i4 i4Var = nVar.f12008e;
        return (z5 || (i4Var != null && (nVar.f12010v.now().b(i4Var) > 2000000000L ? 1 : (nVar.f12010v.now().b(i4Var) == 2000000000L ? 0 : -1)) < 0)) ? false : true;
    }
}
