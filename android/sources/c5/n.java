package c5;

import android.os.Handler;
import android.os.Looper;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.PriorityBlockingQueue;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes.dex */
public final class n {
    public final AtomicInteger a;

    /* renamed from: b, reason: collision with root package name */
    public final HashSet f3344b;

    /* renamed from: c, reason: collision with root package name */
    public final PriorityBlockingQueue f3345c;

    /* renamed from: d, reason: collision with root package name */
    public final PriorityBlockingQueue f3346d;

    /* renamed from: e, reason: collision with root package name */
    public final d5.c f3347e;

    /* renamed from: f, reason: collision with root package name */
    public final e4.l f3348f;

    /* renamed from: g, reason: collision with root package name */
    public final ve.i f3349g;

    /* renamed from: h, reason: collision with root package name */
    public final g[] f3350h;

    /* renamed from: i, reason: collision with root package name */
    public c f3351i;
    public final ArrayList j;
    public final ArrayList k;

    public n(d5.c cVar, e4.l lVar) {
        ve.i iVar = new ve.i(new Handler(Looper.getMainLooper()));
        this.a = new AtomicInteger();
        this.f3344b = new HashSet();
        this.f3345c = new PriorityBlockingQueue();
        this.f3346d = new PriorityBlockingQueue();
        this.j = new ArrayList();
        this.k = new ArrayList();
        this.f3347e = cVar;
        this.f3348f = lVar;
        this.f3350h = new g[4];
        this.f3349g = iVar;
    }

    public final void a(m mVar) {
        mVar.setRequestQueue(this);
        synchronized (this.f3344b) {
            this.f3344b.add(mVar);
        }
        mVar.setSequence(this.a.incrementAndGet());
        mVar.addMarker("add-to-queue");
        b();
        if (mVar.shouldCache()) {
            this.f3345c.add(mVar);
        } else {
            this.f3346d.add(mVar);
        }
    }

    public final void b() {
        synchronized (this.k) {
            try {
                Iterator it = this.k.iterator();
                if (it.hasNext()) {
                    if (it.next() != null) {
                        throw new ClassCastException();
                    }
                    throw null;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
