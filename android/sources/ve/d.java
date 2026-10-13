package ve;

import android.content.Context;
import android.os.AsyncTask;
import android.util.Log;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.Executor;
import java.util.concurrent.Semaphore;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class d {
    public v2.a a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f19393b = false;

    /* renamed from: c, reason: collision with root package name */
    public boolean f19394c = false;

    /* renamed from: d, reason: collision with root package name */
    public boolean f19395d = true;

    /* renamed from: e, reason: collision with root package name */
    public boolean f19396e = false;

    /* renamed from: f, reason: collision with root package name */
    public Executor f19397f;

    /* renamed from: g, reason: collision with root package name */
    public volatile w2.a f19398g;

    /* renamed from: h, reason: collision with root package name */
    public volatile w2.a f19399h;

    /* renamed from: i, reason: collision with root package name */
    public final Semaphore f19400i;
    public final Set j;

    public d(Context context, Set set) {
        context.getApplicationContext();
        this.f19400i = new Semaphore(0);
        this.j = set;
    }

    public final void a() {
        if (this.f19398g != null) {
            boolean z5 = this.f19393b;
            if (!z5) {
                if (z5) {
                    c();
                } else {
                    this.f19396e = true;
                }
            }
            if (this.f19399h != null) {
                this.f19398g.getClass();
                this.f19398g = null;
                return;
            }
            this.f19398g.getClass();
            w2.a aVar = this.f19398g;
            aVar.f19623i.set(true);
            if (aVar.f19621d.cancel(false)) {
                this.f19399h = this.f19398g;
            }
            this.f19398g = null;
        }
    }

    public final void b() {
        if (this.f19399h != null || this.f19398g == null) {
            return;
        }
        this.f19398g.getClass();
        if (this.f19397f == null) {
            this.f19397f = AsyncTask.THREAD_POOL_EXECUTOR;
        }
        w2.a aVar = this.f19398g;
        Executor executor = this.f19397f;
        if (aVar.f19622e == 1) {
            aVar.f19622e = 2;
            executor.execute(aVar.f19621d);
            return;
        }
        int b10 = f0.e.b(aVar.f19622e);
        if (b10 == 1) {
            throw new IllegalStateException("Cannot execute task: the task is already running.");
        }
        if (b10 == 2) {
            throw new IllegalStateException("Cannot execute task: the task has already been executed (a task can be executed only once)");
        }
        throw new IllegalStateException("We should never reach this state");
    }

    public final void c() {
        a();
        this.f19398g = new w2.a(this);
        b();
    }

    public final void d() {
        Iterator it = this.j.iterator();
        if (it.hasNext()) {
            ((ze.l) it.next()).getClass();
            throw new UnsupportedOperationException();
        }
        try {
            this.f19400i.tryAcquire(0, 5L, TimeUnit.SECONDS);
        } catch (InterruptedException e9) {
            Log.i("GACSignInLoader", "Unexpected InterruptedException", e9);
            Thread.currentThread().interrupt();
        }
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(64);
        Class<?> cls = getClass();
        sb2.append(cls.getSimpleName());
        sb2.append("{");
        sb2.append(Integer.toHexString(System.identityHashCode(cls)));
        sb2.append(" id=0}");
        return sb2.toString();
    }
}
