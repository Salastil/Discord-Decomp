package io.sentry.transport;

import io.sentry.v5;
import java.io.Closeable;
import java.util.Date;
import java.util.Iterator;
import java.util.Timer;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public final class p implements Closeable {

    /* renamed from: e, reason: collision with root package name */
    public final v5 f12013e;

    /* renamed from: i, reason: collision with root package name */
    public final ConcurrentHashMap f12014i = new ConcurrentHashMap();

    /* renamed from: v, reason: collision with root package name */
    public final CopyOnWriteArrayList f12015v = new CopyOnWriteArrayList();

    /* renamed from: w, reason: collision with root package name */
    public Timer f12016w = null;

    /* renamed from: x, reason: collision with root package name */
    public final io.sentry.util.a f12017x = new io.sentry.util.a();

    /* renamed from: d, reason: collision with root package name */
    public final d f12012d = d.f11998d;

    public p(v5 v5Var) {
        this.f12013e = v5Var;
    }

    public final void c(io.sentry.l lVar, Date date) {
        ConcurrentHashMap concurrentHashMap = this.f12014i;
        Date date2 = (Date) concurrentHashMap.get(lVar);
        if (date2 == null || date.after(date2)) {
            concurrentHashMap.put(lVar, date);
            Iterator it = this.f12015v.iterator();
            while (it.hasNext()) {
                ((o) it.next()).onRateLimitChanged(this);
            }
            io.sentry.r a = this.f12017x.a();
            try {
                if (this.f12016w == null) {
                    this.f12016w = new Timer(true);
                }
                this.f12016w.schedule(new io.sentry.n(2, this), date);
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

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        io.sentry.r a = this.f12017x.a();
        try {
            Timer timer = this.f12016w;
            if (timer != null) {
                timer.cancel();
                this.f12016w = null;
            }
            a.close();
            this.f12015v.clear();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final boolean f(io.sentry.l lVar) {
        Date date;
        this.f12012d.getClass();
        Date date2 = new Date(System.currentTimeMillis());
        io.sentry.l lVar2 = io.sentry.l.All;
        ConcurrentHashMap concurrentHashMap = this.f12014i;
        Date date3 = (Date) concurrentHashMap.get(lVar2);
        if (date3 != null && !date2.after(date3)) {
            return true;
        }
        if (io.sentry.l.Unknown.equals(lVar) || (date = (Date) concurrentHashMap.get(lVar)) == null) {
            return false;
        }
        return !date2.after(date);
    }
}
