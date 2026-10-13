package c5;

import android.os.Process;
import com.google.android.gms.internal.play_billing.v0;
import java.util.HashMap;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.PriorityBlockingQueue;

/* loaded from: classes.dex */
public final class c extends Thread {

    /* renamed from: y, reason: collision with root package name */
    public static final boolean f3321y = v.a;

    /* renamed from: d, reason: collision with root package name */
    public final BlockingQueue f3322d;

    /* renamed from: e, reason: collision with root package name */
    public final BlockingQueue f3323e;

    /* renamed from: i, reason: collision with root package name */
    public final d5.c f3324i;

    /* renamed from: v, reason: collision with root package name */
    public final ve.i f3325v;

    /* renamed from: w, reason: collision with root package name */
    public volatile boolean f3326w = false;

    /* renamed from: x, reason: collision with root package name */
    public final e4.i f3327x;

    public c(PriorityBlockingQueue priorityBlockingQueue, PriorityBlockingQueue priorityBlockingQueue2, d5.c cVar, ve.i iVar) {
        this.f3322d = priorityBlockingQueue;
        this.f3323e = priorityBlockingQueue2;
        this.f3324i = cVar;
        this.f3325v = iVar;
        e4.i iVar2 = new e4.i();
        iVar2.f7952d = new HashMap();
        iVar2.f7953e = iVar;
        iVar2.f7954i = this;
        iVar2.f7955v = priorityBlockingQueue2;
        this.f3327x = iVar2;
    }

    private void a() {
        m mVar = (m) this.f3322d.take();
        mVar.addMarker("cache-queue-take");
        mVar.sendEvent(1);
        try {
            if (mVar.isCanceled()) {
                mVar.finish("cache-discard-canceled");
                return;
            }
            b b10 = this.f3324i.b(mVar.getCacheKey());
            if (b10 == null) {
                mVar.addMarker("cache-miss");
                if (!this.f3327x.u(mVar)) {
                    this.f3323e.put(mVar);
                }
                return;
            }
            long currentTimeMillis = System.currentTimeMillis();
            if (b10.f3317e < currentTimeMillis) {
                mVar.addMarker("cache-hit-expired");
                mVar.setCacheEntry(b10);
                if (!this.f3327x.u(mVar)) {
                    this.f3323e.put(mVar);
                }
                return;
            }
            mVar.addMarker("cache-hit");
            q parseNetworkResponse = mVar.parseNetworkResponse(new h(b10.a, b10.f3319g));
            mVar.addMarker("cache-hit-parsed");
            if (parseNetworkResponse.f3353c == null) {
                if (b10.f3318f < currentTimeMillis) {
                    mVar.addMarker("cache-hit-refresh-needed");
                    mVar.setCacheEntry(b10);
                    parseNetworkResponse.f3354d = true;
                    if (this.f3327x.u(mVar)) {
                        this.f3325v.e(mVar, parseNetworkResponse, null);
                    } else {
                        this.f3325v.e(mVar, parseNetworkResponse, new v0(this, mVar, 6, false));
                    }
                } else {
                    this.f3325v.e(mVar, parseNetworkResponse, null);
                }
                return;
            }
            mVar.addMarker("cache-parsing-failed");
            d5.c cVar = this.f3324i;
            String cacheKey = mVar.getCacheKey();
            synchronized (cVar) {
                b b11 = cVar.b(cacheKey);
                if (b11 != null) {
                    b11.f3318f = 0L;
                    b11.f3317e = 0L;
                    cVar.g(cacheKey, b11);
                }
            }
            mVar.setCacheEntry(null);
            if (!this.f3327x.u(mVar)) {
                this.f3323e.put(mVar);
            }
        } finally {
            mVar.sendEvent(2);
        }
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        if (f3321y) {
            v.d("start new dispatcher", new Object[0]);
        }
        Process.setThreadPriority(10);
        this.f3324i.e();
        while (true) {
            try {
                a();
            } catch (InterruptedException unused) {
                if (this.f3326w) {
                    Thread.currentThread().interrupt();
                    return;
                }
                v.c("Ignoring spurious interrupt of CacheDispatcher thread; use quit() to terminate it", new Object[0]);
            }
        }
    }
}
