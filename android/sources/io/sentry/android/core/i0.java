package io.sentry.android.core;

import android.app.ActivityManager;
import android.app.ApplicationExitInfo;
import android.content.Context;
import io.sentry.Hint;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.v3;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class i0 implements Runnable {

    /* renamed from: x, reason: collision with root package name */
    public static final long f11162x = TimeUnit.DAYS.toMillis(91);

    /* renamed from: d, reason: collision with root package name */
    public final Context f11163d;

    /* renamed from: e, reason: collision with root package name */
    public final v3 f11164e;

    /* renamed from: i, reason: collision with root package name */
    public final SentryAndroidOptions f11165i;

    /* renamed from: v, reason: collision with root package name */
    public final h0 f11166v;

    /* renamed from: w, reason: collision with root package name */
    public final long f11167w;

    public i0(Context context, SentryAndroidOptions sentryAndroidOptions, io.sentry.transport.d dVar, h0 h0Var) {
        Context applicationContext = context.getApplicationContext();
        this.f11163d = applicationContext != null ? applicationContext : context;
        this.f11164e = v3.a;
        this.f11165i = sentryAndroidOptions;
        this.f11166v = h0Var;
        dVar.getClass();
        this.f11167w = System.currentTimeMillis() - f11162x;
    }

    public final void a(ApplicationExitInfo applicationExitInfo, boolean z5) {
        h0 h0Var = this.f11166v;
        e4.m d6 = h0Var.d(applicationExitInfo, z5);
        if (d6 == null) {
            return;
        }
        SentryEvent sentryEvent = (SentryEvent) d6.f7963e;
        if (this.f11164e.x(sentryEvent, (Hint) d6.f7964i).equals(io.sentry.protocol.v.f11895e) || ((io.sentry.hints.c) d6.f7965v).d()) {
            return;
        }
        this.f11165i.getLogger().u(SentryLevel.WARNING, "Timed out waiting to flush %s event to disk. Event: %s", h0Var.getLabel(), sentryEvent.f11543d);
    }

    @Override // java.lang.Runnable
    public final void run() {
        ActivityManager activityManager = (ActivityManager) this.f11163d.getSystemService("activity");
        SentryAndroidOptions sentryAndroidOptions = this.f11165i;
        if (activityManager == null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.ERROR, "Failed to retrieve ActivityManager.", new Object[0]);
            return;
        }
        ApplicationExitInfo applicationExitInfo = null;
        List<ApplicationExitInfo> historicalProcessExitReasons = activityManager.getHistoricalProcessExitReasons(null, 0, 0);
        if (historicalProcessExitReasons.isEmpty()) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "No records in historical exit reasons.", new Object[0]);
            return;
        }
        io.sentry.cache.d envelopeDiskCache = sentryAndroidOptions.getEnvelopeDiskCache();
        if ((envelopeDiskCache instanceof io.sentry.cache.c) && sentryAndroidOptions.isEnableAutoSessionTracking()) {
            io.sentry.cache.c cVar = (io.sentry.cache.c) envelopeDiskCache;
            if (!cVar.i()) {
                sentryAndroidOptions.getLogger().u(SentryLevel.WARNING, "Timed out waiting to flush previous session to its own file.", new Object[0]);
                cVar.f11435w.countDown();
            }
        }
        ArrayList arrayList = new ArrayList(historicalProcessExitReasons);
        h0 h0Var = this.f11166v;
        Long b10 = h0Var.b();
        Iterator it = arrayList.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            ApplicationExitInfo b11 = com.google.firebase.messaging.m.b(it.next());
            if (b11.getReason() == h0Var.a()) {
                it.remove();
                applicationExitInfo = b11;
                break;
            }
        }
        if (applicationExitInfo == null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "No %ss have been found in the historical exit reasons list.", h0Var.getLabel());
            return;
        }
        long timestamp = applicationExitInfo.getTimestamp();
        long j = this.f11167w;
        if (timestamp < j) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Latest %s happened too long ago, returning early.", h0Var.getLabel());
            return;
        }
        if (b10 != null && applicationExitInfo.getTimestamp() <= b10.longValue()) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Latest %s has already been reported, returning early.", h0Var.getLabel());
            return;
        }
        if (h0Var.c()) {
            Collections.reverse(arrayList);
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                ApplicationExitInfo b12 = com.google.firebase.messaging.m.b(it2.next());
                if (b12.getReason() == h0Var.a()) {
                    if (b12.getTimestamp() < j) {
                        sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "%s happened too long ago %s.", h0Var.getLabel(), b12);
                    } else if (b10 == null || b12.getTimestamp() > b10.longValue()) {
                        a(b12, false);
                    } else {
                        sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "%s has already been reported %s.", h0Var.getLabel(), b12);
                    }
                }
            }
        }
        a(applicationExitInfo, true);
    }
}
