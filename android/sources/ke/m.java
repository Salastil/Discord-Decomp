package ke;

import a5.h0;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import java.util.ArrayDeque;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArraySet;

/* loaded from: classes3.dex */
public final class m {
    public final y a;

    /* renamed from: b, reason: collision with root package name */
    public final a0 f13317b;

    /* renamed from: c, reason: collision with root package name */
    public final k f13318c;

    /* renamed from: d, reason: collision with root package name */
    public final CopyOnWriteArraySet f13319d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayDeque f13320e;

    /* renamed from: f, reason: collision with root package name */
    public final ArrayDeque f13321f;

    /* renamed from: g, reason: collision with root package name */
    public final Object f13322g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f13323h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f13324i;

    public m(Looper looper, y yVar, k kVar) {
        this(new CopyOnWriteArraySet(), looper, yVar, kVar, true);
    }

    public final void a(Object obj) {
        obj.getClass();
        synchronized (this.f13322g) {
            try {
                if (this.f13323h) {
                    return;
                }
                this.f13319d.add(new l(obj));
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void b() {
        f();
        ArrayDeque arrayDeque = this.f13321f;
        if (arrayDeque.isEmpty()) {
            return;
        }
        a0 a0Var = this.f13317b;
        if (!a0Var.a.hasMessages(0)) {
            a0Var.getClass();
            z b10 = a0.b();
            Message obtainMessage = a0Var.a.obtainMessage(0);
            b10.a = obtainMessage;
            Handler handler = a0Var.a;
            obtainMessage.getClass();
            handler.sendMessageAtFrontOfQueue(obtainMessage);
            b10.a();
        }
        ArrayDeque arrayDeque2 = this.f13320e;
        boolean isEmpty = arrayDeque2.isEmpty();
        arrayDeque2.addAll(arrayDeque);
        arrayDeque.clear();
        if (isEmpty) {
            while (!arrayDeque2.isEmpty()) {
                ((Runnable) arrayDeque2.peekFirst()).run();
                arrayDeque2.removeFirst();
            }
        }
    }

    public final void c(int i5, j jVar) {
        f();
        this.f13321f.add(new bb.a(new CopyOnWriteArraySet(this.f13319d), i5, jVar, 9));
    }

    public final void d() {
        f();
        synchronized (this.f13322g) {
            this.f13323h = true;
        }
        Iterator it = this.f13319d.iterator();
        while (it.hasNext()) {
            l lVar = (l) it.next();
            k kVar = this.f13318c;
            lVar.f13316d = true;
            if (lVar.f13315c) {
                lVar.f13315c = false;
                kVar.d(lVar.a, lVar.f13314b.k());
            }
        }
        this.f13319d.clear();
    }

    public final void e(int i5, j jVar) {
        c(i5, jVar);
        b();
    }

    public final void f() {
        if (this.f13324i) {
            b.k(Thread.currentThread() == this.f13317b.a.getLooper().getThread());
        }
    }

    public m(CopyOnWriteArraySet copyOnWriteArraySet, Looper looper, y yVar, k kVar, boolean z5) {
        this.a = yVar;
        this.f13319d = copyOnWriteArraySet;
        this.f13318c = kVar;
        this.f13322g = new Object();
        this.f13320e = new ArrayDeque();
        this.f13321f = new ArrayDeque();
        this.f13317b = yVar.a(looper, new Handler.Callback() { // from class: ke.i
            @Override // android.os.Handler.Callback
            public final boolean handleMessage(Message message) {
                m mVar = m.this;
                Iterator it = mVar.f13319d.iterator();
                while (it.hasNext()) {
                    l lVar = (l) it.next();
                    k kVar2 = mVar.f13318c;
                    if (!lVar.f13316d && lVar.f13315c) {
                        g k = lVar.f13314b.k();
                        lVar.f13314b = new h0(8, (byte) 0);
                        lVar.f13315c = false;
                        kVar2.d(lVar.a, k);
                    }
                    if (mVar.f13317b.a.hasMessages(0)) {
                        return true;
                    }
                }
                return true;
            }
        });
        this.f13324i = z5;
    }
}
