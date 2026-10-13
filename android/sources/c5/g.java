package c5;

import android.net.TrafficStats;
import android.os.Process;
import android.os.SystemClock;
import android.util.Log;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.PriorityBlockingQueue;

/* loaded from: classes.dex */
public final class g extends Thread {

    /* renamed from: d, reason: collision with root package name */
    public final BlockingQueue f3331d;

    /* renamed from: e, reason: collision with root package name */
    public final e4.l f3332e;

    /* renamed from: i, reason: collision with root package name */
    public final d5.c f3333i;

    /* renamed from: v, reason: collision with root package name */
    public final ve.i f3334v;

    /* renamed from: w, reason: collision with root package name */
    public volatile boolean f3335w = false;

    public g(PriorityBlockingQueue priorityBlockingQueue, e4.l lVar, d5.c cVar, ve.i iVar) {
        this.f3331d = priorityBlockingQueue;
        this.f3332e = lVar;
        this.f3333i = cVar;
        this.f3334v = iVar;
    }

    private void a() {
        m mVar = (m) this.f3331d.take();
        ve.i iVar = this.f3334v;
        SystemClock.elapsedRealtime();
        mVar.sendEvent(3);
        Object obj = null;
        try {
            try {
                mVar.addMarker("network-queue-take");
                if (mVar.isCanceled()) {
                    mVar.finish("network-discard-cancelled");
                    mVar.notifyListenerResponseNotUsable();
                    return;
                }
                TrafficStats.setThreadStatsTag(mVar.getTrafficStatsTag());
                h H = this.f3332e.H(mVar);
                mVar.addMarker("network-http-complete");
                if (H.f3338d && mVar.hasHadResponseDelivered()) {
                    mVar.finish("not-modified");
                    mVar.notifyListenerResponseNotUsable();
                    return;
                }
                q parseNetworkResponse = mVar.parseNetworkResponse(H);
                mVar.addMarker("network-parse-complete");
                if (mVar.shouldCache() && parseNetworkResponse.f3352b != null) {
                    this.f3333i.g(mVar.getCacheKey(), parseNetworkResponse.f3352b);
                    mVar.addMarker("network-cache-written");
                }
                mVar.markDelivered();
                iVar.e(mVar, parseNetworkResponse, null);
                mVar.notifyListenerResponseReceived(parseNetworkResponse);
            } catch (s e9) {
                SystemClock.elapsedRealtime();
                s parseNetworkError = mVar.parseNetworkError(e9);
                iVar.getClass();
                mVar.addMarker("post-error");
                ((af.n) iVar.f19405d).execute(new a5.s(mVar, new q(parseNetworkError), obj, 3));
                mVar.notifyListenerResponseNotUsable();
            } catch (Exception e10) {
                Log.e("Volley", v.a("Unhandled exception %s", e10.toString()), e10);
                s sVar = new s(e10);
                SystemClock.elapsedRealtime();
                iVar.getClass();
                mVar.addMarker("post-error");
                ((af.n) iVar.f19405d).execute(new a5.s(mVar, new q(sVar), obj, 3));
                mVar.notifyListenerResponseNotUsable();
            }
        } finally {
            mVar.sendEvent(4);
        }
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        Process.setThreadPriority(10);
        while (true) {
            try {
                a();
            } catch (InterruptedException unused) {
                if (this.f3335w) {
                    Thread.currentThread().interrupt();
                    return;
                }
                v.c("Ignoring spurious interrupt of NetworkDispatcher thread; use quit() to terminate it", new Object[0]);
            }
        }
    }
}
