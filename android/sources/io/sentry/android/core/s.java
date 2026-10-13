package io.sentry.android.core;

import android.os.Debug;
import android.os.Process;
import android.os.SystemClock;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.a3;
import java.io.File;
import java.util.ArrayDeque;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.Future;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class s {

    /* renamed from: b, reason: collision with root package name */
    public final File f11316b;

    /* renamed from: c, reason: collision with root package name */
    public final int f11317c;

    /* renamed from: f, reason: collision with root package name */
    public String f11320f;

    /* renamed from: g, reason: collision with root package name */
    public final io.sentry.android.core.internal.util.o f11321g;

    /* renamed from: l, reason: collision with root package name */
    public final io.sentry.a1 f11324l;

    /* renamed from: m, reason: collision with root package name */
    public final ILogger f11325m;
    public long a = 0;

    /* renamed from: d, reason: collision with root package name */
    public Future f11318d = null;

    /* renamed from: e, reason: collision with root package name */
    public File f11319e = null;

    /* renamed from: h, reason: collision with root package name */
    public final ArrayDeque f11322h = new ArrayDeque();

    /* renamed from: i, reason: collision with root package name */
    public final ArrayDeque f11323i = new ArrayDeque();
    public final ArrayDeque j = new ArrayDeque();
    public final HashMap k = new HashMap();

    /* renamed from: n, reason: collision with root package name */
    public volatile boolean f11326n = false;

    /* renamed from: o, reason: collision with root package name */
    public final io.sentry.util.a f11327o = new io.sentry.util.a();

    public s(String str, int i5, io.sentry.android.core.internal.util.o oVar, io.sentry.a1 a1Var, ILogger iLogger) {
        d9.a.L(str, "TracesFilesDirPath is required");
        this.f11316b = new File(str);
        this.f11317c = i5;
        d9.a.L(iLogger, "Logger is required");
        this.f11325m = iLogger;
        this.f11324l = a1Var;
        d9.a.L(oVar, "SentryFrameMetricsCollector is required");
        this.f11321g = oVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0043 A[Catch: all -> 0x001b, TRY_LEAVE, TryCatch #2 {all -> 0x001b, blocks: (B:3:0x0006, B:5:0x000c, B:11:0x0022, B:12:0x0030, B:14:0x0043, B:17:0x0052, B:20:0x005c, B:21:0x006a, B:23:0x0072, B:24:0x0080, B:26:0x0088, B:27:0x0098, B:29:0x009f, B:30:0x00a5, B:40:0x00b5, B:41:0x00b7, B:36:0x0026, B:10:0x001f), top: B:2:0x0006, inners: #0, #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0052 A[Catch: all -> 0x001b, TRY_ENTER, TRY_LEAVE, TryCatch #2 {all -> 0x001b, blocks: (B:3:0x0006, B:5:0x000c, B:11:0x0022, B:12:0x0030, B:14:0x0043, B:17:0x0052, B:20:0x005c, B:21:0x006a, B:23:0x0072, B:24:0x0080, B:26:0x0088, B:27:0x0098, B:29:0x009f, B:30:0x00a5, B:40:0x00b5, B:41:0x00b7, B:36:0x0026, B:10:0x001f), top: B:2:0x0006, inners: #0, #1 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final q a(List list, boolean z5) {
        io.sentry.r a = this.f11327o.a();
        try {
            if (!this.f11326n) {
                this.f11325m.u(SentryLevel.WARNING, "Profiler not running", new Object[0]);
                a.close();
                return null;
            }
            try {
                Debug.stopMethodTracing();
            } finally {
                try {
                    this.f11326n = false;
                    this.f11321g.b(this.f11320f);
                    long elapsedRealtimeNanos = SystemClock.elapsedRealtimeNanos();
                    long elapsedCpuTime = Process.getElapsedCpuTime();
                    if (this.f11319e != null) {
                    }
                } catch (Throwable th2) {
                }
            }
            this.f11326n = false;
            this.f11321g.b(this.f11320f);
            long elapsedRealtimeNanos2 = SystemClock.elapsedRealtimeNanos();
            long elapsedCpuTime2 = Process.getElapsedCpuTime();
            if (this.f11319e != null) {
                this.f11325m.u(SentryLevel.ERROR, "Trace file does not exists", new Object[0]);
                a.close();
                return null;
            }
            if (!this.f11323i.isEmpty()) {
                this.k.put("slow_frame_renders", new io.sentry.profilemeasurements.a("nanosecond", this.f11323i));
            }
            if (!this.j.isEmpty()) {
                this.k.put("frozen_frame_renders", new io.sentry.profilemeasurements.a("nanosecond", this.j));
            }
            if (!this.f11322h.isEmpty()) {
                this.k.put("screen_frame_rates", new io.sentry.profilemeasurements.a("hz", this.f11322h));
            }
            b(list);
            Future future = this.f11318d;
            if (future != null) {
                future.cancel(true);
                this.f11318d = null;
            }
            q qVar = new q(elapsedRealtimeNanos2, elapsedCpuTime2, z5, this.f11319e, this.k);
            a.close();
            return qVar;
        } finally {
        }
    }

    public final void b(List list) {
        long elapsedRealtimeNanos = (SystemClock.elapsedRealtimeNanos() - this.a) - TimeUnit.MILLISECONDS.toNanos(System.currentTimeMillis());
        if (list != null) {
            ArrayDeque arrayDeque = new ArrayDeque(list.size());
            ArrayDeque arrayDeque2 = new ArrayDeque(list.size());
            ArrayDeque arrayDeque3 = new ArrayDeque(list.size());
            synchronized (list) {
                try {
                    Iterator it = list.iterator();
                    while (it.hasNext()) {
                        a3 a3Var = (a3) it.next();
                        long j = a3Var.f11010d;
                        long j5 = j + elapsedRealtimeNanos;
                        Double d6 = a3Var.a;
                        Long l6 = a3Var.f11008b;
                        Long l7 = a3Var.f11009c;
                        if (d6 != null) {
                            arrayDeque3.add(new io.sentry.profilemeasurements.b(Long.valueOf(j5), d6, j));
                        }
                        if (l6 != null) {
                            arrayDeque.add(new io.sentry.profilemeasurements.b(Long.valueOf(j5), l6, j));
                        }
                        if (l7 != null) {
                            arrayDeque2.add(new io.sentry.profilemeasurements.b(Long.valueOf(j5), l7, j));
                        }
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            if (!arrayDeque3.isEmpty()) {
                this.k.put("cpu_usage", new io.sentry.profilemeasurements.a("percent", arrayDeque3));
            }
            if (!arrayDeque.isEmpty()) {
                this.k.put("memory_footprint", new io.sentry.profilemeasurements.a("byte", arrayDeque));
            }
            if (arrayDeque2.isEmpty()) {
                return;
            }
            this.k.put("memory_native_footprint", new io.sentry.profilemeasurements.a("byte", arrayDeque2));
        }
    }

    public final r c() {
        String q5;
        io.sentry.r a = this.f11327o.a();
        try {
            int i5 = this.f11317c;
            if (i5 == 0) {
                this.f11325m.u(SentryLevel.WARNING, "Disabling profiling because intervaUs is set to %d", Integer.valueOf(i5));
                a.close();
                return null;
            }
            if (this.f11326n) {
                this.f11325m.u(SentryLevel.WARNING, "Profiling has already started...", new Object[0]);
                a.close();
                return null;
            }
            this.f11319e = new File(this.f11316b, nt.a.q().concat(".trace"));
            this.k.clear();
            this.f11322h.clear();
            this.f11323i.clear();
            this.j.clear();
            io.sentry.android.core.internal.util.o oVar = this.f11321g;
            p pVar = new p(this);
            if (oVar.f11252y) {
                q5 = nt.a.q();
                oVar.f11251x.put(q5, pVar);
                oVar.c();
            } else {
                q5 = null;
            }
            this.f11320f = q5;
            try {
                io.sentry.a1 a1Var = this.f11324l;
                if (a1Var != null) {
                    this.f11318d = a1Var.l(new com.google.firebase.messaging.s(28, this), 30000L);
                }
            } catch (RejectedExecutionException e9) {
                this.f11325m.k(SentryLevel.ERROR, "Failed to call the executor. Profiling will not be automatically finished. Did you call Sentry.close()?", e9);
            }
            this.a = SystemClock.elapsedRealtimeNanos();
            Date r5 = ki.b.r();
            long elapsedCpuTime = Process.getElapsedCpuTime();
            try {
                Debug.startMethodTracingSampling(this.f11319e.getPath(), 3000000, this.f11317c);
                this.f11326n = true;
                r rVar = new r(this.a, elapsedCpuTime, r5);
                a.close();
                return rVar;
            } catch (Throwable th2) {
                a(null, false);
                this.f11325m.k(SentryLevel.ERROR, "Unable to start a profile: ", th2);
                this.f11326n = false;
                a.close();
                return null;
            }
        } finally {
        }
    }
}
