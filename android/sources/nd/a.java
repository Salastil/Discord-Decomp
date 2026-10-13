package nd;

import android.os.Looper;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.Timeline;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public abstract class a {

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f15054d = new ArrayList(1);

    /* renamed from: e, reason: collision with root package name */
    public final HashSet f15055e = new HashSet(1);

    /* renamed from: i, reason: collision with root package name */
    public final a1.d f15056i = new a1.d(new CopyOnWriteArrayList(), 0, (s) null);

    /* renamed from: v, reason: collision with root package name */
    public final nc.n f15057v = new nc.n(new CopyOnWriteArrayList(), 0, null);

    /* renamed from: w, reason: collision with root package name */
    public Looper f15058w;

    /* renamed from: x, reason: collision with root package name */
    public Timeline f15059x;

    /* renamed from: y, reason: collision with root package name */
    public ic.c0 f15060y;

    public final a1.d a(s sVar) {
        return new a1.d((CopyOnWriteArrayList) this.f15056i.f16v, 0, sVar);
    }

    public abstract q b(s sVar, ie.q qVar, long j);

    public final void c(t tVar) {
        HashSet hashSet = this.f15055e;
        boolean isEmpty = hashSet.isEmpty();
        hashSet.remove(tVar);
        if (isEmpty || !hashSet.isEmpty()) {
            return;
        }
        d();
    }

    public final void e(t tVar) {
        this.f15058w.getClass();
        HashSet hashSet = this.f15055e;
        boolean isEmpty = hashSet.isEmpty();
        hashSet.add(tVar);
        if (isEmpty) {
            f();
        }
    }

    public Timeline g() {
        return null;
    }

    public abstract MediaItem h();

    public boolean i() {
        return true;
    }

    public abstract void j();

    public final void k(t tVar, ie.u0 u0Var, ic.c0 c0Var) {
        Looper myLooper = Looper.myLooper();
        Looper looper = this.f15058w;
        ke.b.g(looper == null || looper == myLooper);
        this.f15060y = c0Var;
        Timeline timeline = this.f15059x;
        this.f15054d.add(tVar);
        if (this.f15058w == null) {
            this.f15058w = myLooper;
            this.f15055e.add(tVar);
            m(u0Var);
        } else if (timeline != null) {
            e(tVar);
            tVar.a(this, timeline);
        }
    }

    public abstract void m(ie.u0 u0Var);

    public final void n(Timeline timeline) {
        this.f15059x = timeline;
        Iterator it = this.f15054d.iterator();
        while (it.hasNext()) {
            ((t) it.next()).a(this, timeline);
        }
    }

    public abstract void o(q qVar);

    public final void p(t tVar) {
        ArrayList arrayList = this.f15054d;
        arrayList.remove(tVar);
        if (!arrayList.isEmpty()) {
            c(tVar);
            return;
        }
        this.f15058w = null;
        this.f15059x = null;
        this.f15060y = null;
        this.f15055e.clear();
        q();
    }

    public abstract void q();

    public final void r(nc.o oVar) {
        CopyOnWriteArrayList copyOnWriteArrayList = this.f15057v.f15047c;
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            nc.m mVar = (nc.m) it.next();
            if (mVar.f15045b == oVar) {
                copyOnWriteArrayList.remove(mVar);
            }
        }
    }

    public final void s(x xVar) {
        CopyOnWriteArrayList copyOnWriteArrayList = (CopyOnWriteArrayList) this.f15056i.f16v;
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            w wVar = (w) it.next();
            if (wVar.f15191b == xVar) {
                copyOnWriteArrayList.remove(wVar);
            }
        }
    }

    public void d() {
    }

    public void f() {
    }
}
