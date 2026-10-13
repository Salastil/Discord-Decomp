package hc;

import android.os.Looper;
import android.os.SystemClock;
import com.google.android.exoplayer2.Timeline;
import java.util.concurrent.TimeoutException;

/* loaded from: classes3.dex */
public final class l1 {
    public final k1 a;

    /* renamed from: b, reason: collision with root package name */
    public final j1 f9775b;

    /* renamed from: c, reason: collision with root package name */
    public final ke.y f9776c;

    /* renamed from: d, reason: collision with root package name */
    public int f9777d;

    /* renamed from: e, reason: collision with root package name */
    public Object f9778e;

    /* renamed from: f, reason: collision with root package name */
    public final Looper f9779f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f9780g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f9781h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f9782i;

    public l1(j1 j1Var, k1 k1Var, Timeline timeline, int i5, ke.y yVar, Looper looper) {
        this.f9775b = j1Var;
        this.a = k1Var;
        this.f9779f = looper;
        this.f9776c = yVar;
    }

    public final synchronized void a(long j) {
        boolean z5;
        ke.b.k(this.f9780g);
        ke.b.k(this.f9779f.getThread() != Thread.currentThread());
        this.f9776c.getClass();
        long elapsedRealtime = SystemClock.elapsedRealtime() + j;
        while (true) {
            z5 = this.f9782i;
            if (z5 || j <= 0) {
                break;
            }
            this.f9776c.getClass();
            wait(j);
            this.f9776c.getClass();
            j = elapsedRealtime - SystemClock.elapsedRealtime();
        }
        if (!z5) {
            throw new TimeoutException("Message delivery timed out.");
        }
    }

    public final synchronized void b(boolean z5) {
        this.f9781h = z5 | this.f9781h;
        this.f9782i = true;
        notifyAll();
    }

    public final void c() {
        ke.b.k(!this.f9780g);
        this.f9780g = true;
        com.google.android.exoplayer2.e eVar = (com.google.android.exoplayer2.e) this.f9775b;
        synchronized (eVar) {
            if (!eVar.V && eVar.G.getThread().isAlive()) {
                eVar.E.a(14, this).b();
                return;
            }
            ke.b.N("ExoPlayerImplInternal", "Ignoring messages sent after release.");
            b(false);
        }
    }
}
