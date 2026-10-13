package af;

import android.content.Context;
import android.os.DeadObjectException;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import android.util.SparseIntArray;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import com.google.android.gms.common.api.Status;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Set;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class q implements ze.j, ze.k {

    /* renamed from: g, reason: collision with root package name */
    public final ze.c f583g;

    /* renamed from: h, reason: collision with root package name */
    public final a f584h;

    /* renamed from: i, reason: collision with root package name */
    public final e4.c f585i;

    /* renamed from: l, reason: collision with root package name */
    public final int f586l;

    /* renamed from: m, reason: collision with root package name */
    public final a0 f587m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f588n;

    /* renamed from: r, reason: collision with root package name */
    public final /* synthetic */ e f592r;

    /* renamed from: f, reason: collision with root package name */
    public final LinkedList f582f = new LinkedList();
    public final HashSet j = new HashSet();
    public final HashMap k = new HashMap();

    /* renamed from: o, reason: collision with root package name */
    public final ArrayList f589o = new ArrayList();

    /* renamed from: p, reason: collision with root package name */
    public ye.b f590p = null;

    /* renamed from: q, reason: collision with root package name */
    public int f591q = 0;

    public q(e eVar, ze.i iVar) {
        this.f592r = eVar;
        Looper looper = eVar.K.getLooper();
        e4.m a = iVar.a();
        androidx.appcompat.widget.w wVar = new androidx.appcompat.widget.w((String) a.f7964i, (String) a.f7965v, (s.f) a.f7963e);
        nt.a aVar = (nt.a) iVar.f21209c.f7943e;
        bf.t.g(aVar);
        ze.c c6 = aVar.c(iVar.a, looper, wVar, iVar.f21210d, this, this);
        String str = iVar.f21208b;
        if (str != null && (c6 instanceof bf.e)) {
            ((bf.e) c6).O = str;
        }
        if (str != null && (c6 instanceof h)) {
            a3.e.w(c6);
            throw null;
        }
        this.f583g = c6;
        this.f584h = iVar.f21211e;
        this.f585i = new e4.c(3, (byte) 0);
        this.f586l = iVar.f21213g;
        if (!c6.k()) {
            this.f587m = null;
            return;
        }
        Context context = eVar.f555w;
        fg.a aVar2 = eVar.K;
        e4.m a10 = iVar.a();
        this.f587m = new a0(context, aVar2, new androidx.appcompat.widget.w((String) a10.f7964i, (String) a10.f7965v, (s.f) a10.f7963e));
    }

    public final void a(ye.b bVar) {
        HashSet hashSet = this.j;
        Iterator it = hashSet.iterator();
        if (!it.hasNext()) {
            hashSet.clear();
        } else {
            if (it.next() != null) {
                throw new ClassCastException();
            }
            if (bf.t.j(bVar, ye.b.f20904x)) {
                this.f583g.d();
            }
            throw null;
        }
    }

    @Override // ze.k
    public final void b(ye.b bVar) {
        n(bVar, null);
    }

    public final void c(Status status) {
        bf.t.c(this.f592r.K);
        d(status, null, false);
    }

    public final void d(Status status, Exception exc, boolean z5) {
        bf.t.c(this.f592r.K);
        if ((status == null) == (exc == null)) {
            throw new IllegalArgumentException("Status XOR exception should be null");
        }
        Iterator it = this.f582f.iterator();
        while (it.hasNext()) {
            e0 e0Var = (e0) it.next();
            if (!z5 || e0Var.a == 2) {
                if (status != null) {
                    e0Var.a(status);
                } else {
                    e0Var.b(exc);
                }
                it.remove();
            }
        }
    }

    public final void e() {
        LinkedList linkedList = this.f582f;
        ArrayList arrayList = new ArrayList(linkedList);
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            e0 e0Var = (e0) arrayList.get(i5);
            if (!this.f583g.isConnected()) {
                return;
            }
            if (i(e0Var)) {
                linkedList.remove(e0Var);
            }
        }
    }

    public final void f() {
        e eVar = this.f592r;
        bf.t.c(eVar.K);
        this.f590p = null;
        a(ye.b.f20904x);
        fg.a aVar = eVar.K;
        if (this.f588n) {
            a aVar2 = this.f584h;
            aVar.removeMessages(11, aVar2);
            aVar.removeMessages(9, aVar2);
            this.f588n = false;
        }
        Iterator it = this.k.values().iterator();
        if (it.hasNext()) {
            throw s4.h.b(it);
        }
        e();
        h();
    }

    public final void g(int i5) {
        e eVar = this.f592r;
        fg.a aVar = eVar.K;
        bf.t.c(eVar.K);
        this.f590p = null;
        this.f588n = true;
        String j = this.f583g.j();
        e4.c cVar = this.f585i;
        cVar.getClass();
        StringBuilder sb2 = new StringBuilder("The connection to Google Play services was lost");
        if (i5 == 1) {
            sb2.append(" due to service disconnection.");
        } else if (i5 == 3) {
            sb2.append(" due to dead object exception.");
        }
        if (j != null) {
            sb2.append(" Last reason for disconnect: ");
            sb2.append(j);
        }
        cVar.e1(true, new Status(20, sb2.toString(), null, null));
        a aVar2 = this.f584h;
        aVar.sendMessageDelayed(Message.obtain(aVar, 9, aVar2), 5000L);
        aVar.sendMessageDelayed(Message.obtain(aVar, 11, aVar2), 120000L);
        ((SparseIntArray) eVar.f557y.f7939e).clear();
        Iterator it = this.k.values().iterator();
        if (it.hasNext()) {
            throw s4.h.b(it);
        }
    }

    public final void h() {
        e eVar = this.f592r;
        fg.a aVar = eVar.K;
        a aVar2 = this.f584h;
        aVar.removeMessages(12, aVar2);
        aVar.sendMessageDelayed(aVar.obtainMessage(12, aVar2), eVar.f551d);
    }

    public final boolean i(e0 e0Var) {
        ye.d dVar;
        if (!(e0Var instanceof w)) {
            e4.c cVar = this.f585i;
            ze.c cVar2 = this.f583g;
            e0Var.d(cVar, cVar2.k());
            try {
                e0Var.c(this);
                return true;
            } catch (DeadObjectException unused) {
                k(1);
                cVar2.b("DeadObjectException thrown while running ApiCallRunner.");
                return true;
            }
        }
        w wVar = (w) e0Var;
        ye.d[] g6 = wVar.g(this);
        if (g6 != null && g6.length != 0) {
            ye.d[] i5 = this.f583g.i();
            if (i5 == null) {
                i5 = new ye.d[0];
            }
            s.e eVar = new s.e(i5.length);
            for (ye.d dVar2 : i5) {
                eVar.put(dVar2.f20913d, Long.valueOf(dVar2.h()));
            }
            int length = g6.length;
            for (int i6 = 0; i6 < length; i6++) {
                dVar = g6[i6];
                Long l6 = (Long) eVar.get(dVar.f20913d);
                if (l6 == null || l6.longValue() < dVar.h()) {
                    break;
                }
            }
        }
        dVar = null;
        if (dVar == null) {
            e4.c cVar3 = this.f585i;
            ze.c cVar4 = this.f583g;
            e0Var.d(cVar3, cVar4.k());
            try {
                e0Var.c(this);
                return true;
            } catch (DeadObjectException unused2) {
                k(1);
                cVar4.b("DeadObjectException thrown while running ApiCallRunner.");
                return true;
            }
        }
        Log.w("GoogleApiManager", this.f583g.getClass().getName() + " could not execute call because it requires feature (" + dVar.f20913d + ", " + dVar.h() + ").");
        if (!this.f592r.L || !wVar.f(this)) {
            wVar.b(new ze.o(dVar));
            return true;
        }
        r rVar = new r(this.f584h, dVar);
        int indexOf = this.f589o.indexOf(rVar);
        if (indexOf >= 0) {
            r rVar2 = (r) this.f589o.get(indexOf);
            this.f592r.K.removeMessages(15, rVar2);
            fg.a aVar = this.f592r.K;
            aVar.sendMessageDelayed(Message.obtain(aVar, 15, rVar2), 5000L);
        } else {
            this.f589o.add(rVar);
            fg.a aVar2 = this.f592r.K;
            aVar2.sendMessageDelayed(Message.obtain(aVar2, 15, rVar), 5000L);
            fg.a aVar3 = this.f592r.K;
            aVar3.sendMessageDelayed(Message.obtain(aVar3, 16, rVar), 120000L);
            ye.b bVar = new ye.b(2, null, null);
            if (!j(bVar)) {
                this.f592r.d(bVar, this.f586l);
            }
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x0041, code lost:
    
        if (r7.get() == null) goto L30;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean j(ye.b bVar) {
        synchronized (e.O) {
            try {
                e eVar = this.f592r;
                if (eVar.H == null || !eVar.I.contains(this.f584h)) {
                    return false;
                }
                m mVar = this.f592r.H;
                int i5 = this.f586l;
                mVar.getClass();
                f0 f0Var = new f0(bVar, i5);
                loop0: while (true) {
                    AtomicReference atomicReference = mVar.f572i;
                    while (true) {
                        if (atomicReference.compareAndSet(null, f0Var)) {
                            mVar.f573v.post(new ii.o(mVar, f0Var, 4, false));
                            break loop0;
                        }
                        if (atomicReference.get() != null) {
                            break;
                        }
                    }
                }
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // ze.j
    public final void k(int i5) {
        Looper myLooper = Looper.myLooper();
        fg.a aVar = this.f592r.K;
        if (myLooper == aVar.getLooper()) {
            g(i5);
        } else {
            aVar.post(new p(i5, 0, this));
        }
    }

    public final void l() {
        e eVar = this.f592r;
        bf.t.c(eVar.K);
        ze.c cVar = this.f583g;
        if (cVar.isConnected() || cVar.c()) {
            return;
        }
        try {
            e4.c cVar2 = eVar.f557y;
            Context context = eVar.f555w;
            SparseIntArray sparseIntArray = (SparseIntArray) cVar2.f7939e;
            bf.t.g(context);
            int h6 = cVar.h();
            int i5 = ((SparseIntArray) cVar2.f7939e).get(h6, -1);
            if (i5 == -1) {
                i5 = 0;
                int i6 = 0;
                while (true) {
                    if (i6 >= sparseIntArray.size()) {
                        i5 = -1;
                        break;
                    }
                    int keyAt = sparseIntArray.keyAt(i6);
                    if (keyAt > h6 && sparseIntArray.get(keyAt) == 0) {
                        break;
                    } else {
                        i6++;
                    }
                }
                if (i5 == -1) {
                    i5 = ((ye.e) cVar2.f7940i).b(context, h6);
                }
                sparseIntArray.put(h6, i5);
            }
            if (i5 != 0) {
                ye.b bVar = new ye.b(i5, null, null);
                Log.w("GoogleApiManager", "The service for " + cVar.getClass().getName() + " is not available: " + bVar.toString());
                n(bVar, null);
                return;
            }
            s sVar = new s();
            sVar.f598f = eVar;
            sVar.f596d = null;
            sVar.f597e = null;
            sVar.a = false;
            sVar.f594b = cVar;
            sVar.f595c = this.f584h;
            if (cVar.k()) {
                a0 a0Var = this.f587m;
                bf.t.g(a0Var);
                Handler handler = a0Var.f537h;
                androidx.appcompat.widget.w wVar = a0Var.k;
                hg.a aVar = a0Var.f539l;
                if (aVar != null) {
                    aVar.disconnect();
                }
                wVar.f1146x = Integer.valueOf(System.identityHashCode(a0Var));
                a0Var.f539l = (hg.a) a0Var.f538i.c(a0Var.f536g, handler.getLooper(), wVar, (gg.a) wVar.f1145w, a0Var, a0Var);
                a0Var.f540m = sVar;
                Set set = a0Var.j;
                if (set == null || set.isEmpty()) {
                    handler.post(new a3.h(4, a0Var));
                } else {
                    hg.a aVar2 = a0Var.f539l;
                    aVar2.getClass();
                    aVar2.g(new bf.h(aVar2));
                }
            }
            try {
                cVar.g(sVar);
            } catch (SecurityException e9) {
                n(new ye.b(10, null, null), e9);
            }
        } catch (IllegalStateException e10) {
            n(new ye.b(10, null, null), e10);
        }
    }

    public final void m(e0 e0Var) {
        bf.t.c(this.f592r.K);
        boolean isConnected = this.f583g.isConnected();
        LinkedList linkedList = this.f582f;
        if (isConnected) {
            if (i(e0Var)) {
                h();
                return;
            } else {
                linkedList.add(e0Var);
                return;
            }
        }
        linkedList.add(e0Var);
        ye.b bVar = this.f590p;
        if (bVar == null || bVar.f20906e == 0 || bVar.f20907i == null) {
            l();
        } else {
            n(bVar, null);
        }
    }

    public final void n(ye.b bVar, RuntimeException runtimeException) {
        hg.a aVar;
        bf.t.c(this.f592r.K);
        a0 a0Var = this.f587m;
        if (a0Var != null && (aVar = a0Var.f539l) != null) {
            aVar.disconnect();
        }
        bf.t.c(this.f592r.K);
        this.f590p = null;
        ((SparseIntArray) this.f592r.f557y.f7939e).clear();
        a(bVar);
        if ((this.f583g instanceof df.c) && bVar.f20906e != 24) {
            e eVar = this.f592r;
            eVar.f552e = true;
            fg.a aVar2 = eVar.K;
            aVar2.sendMessageDelayed(aVar2.obtainMessage(19), LogThrottleSingleton.RATE_LIMIT_FIVE_MINUTES);
        }
        if (bVar.f20906e == 4) {
            c(e.N);
            return;
        }
        if (this.f582f.isEmpty()) {
            this.f590p = bVar;
            return;
        }
        if (runtimeException != null) {
            bf.t.c(this.f592r.K);
            d(null, runtimeException, false);
            return;
        }
        if (!this.f592r.L) {
            c(e.e(this.f584h, bVar));
            return;
        }
        d(e.e(this.f584h, bVar), null, true);
        if (this.f582f.isEmpty() || j(bVar) || this.f592r.d(bVar, this.f586l)) {
            return;
        }
        if (bVar.f20906e == 18) {
            this.f588n = true;
        }
        if (!this.f588n) {
            c(e.e(this.f584h, bVar));
            return;
        }
        e eVar2 = this.f592r;
        a aVar3 = this.f584h;
        fg.a aVar4 = eVar2.K;
        aVar4.sendMessageDelayed(Message.obtain(aVar4, 9, aVar3), 5000L);
    }

    public final void o(ye.b bVar) {
        bf.t.c(this.f592r.K);
        ze.c cVar = this.f583g;
        cVar.b("onSignInFailed for " + cVar.getClass().getName() + " with " + String.valueOf(bVar));
        n(bVar, null);
    }

    @Override // ze.j
    public final void onConnected() {
        Looper myLooper = Looper.myLooper();
        fg.a aVar = this.f592r.K;
        if (myLooper == aVar.getLooper()) {
            f();
        } else {
            aVar.post(new a3.h(2, this));
        }
    }

    public final void p() {
        bf.t.c(this.f592r.K);
        Status status = e.M;
        c(status);
        this.f585i.e1(false, status);
        for (g gVar : (g[]) this.k.keySet().toArray(new g[0])) {
            m(new d0(new jg.g()));
        }
        a(new ye.b(4, null, null));
        ze.c cVar = this.f583g;
        if (cVar.isConnected()) {
            cVar.f(new u4.b(2, this));
        }
    }
}
