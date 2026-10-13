package xd;

import java.util.ArrayDeque;
import java.util.PriorityQueue;
import ke.d0;
import kotlin.jvm.internal.LongCompanionObject;
import wd.i;

/* loaded from: classes3.dex */
public abstract class h implements wd.f {
    public final ArrayDeque a = new ArrayDeque();

    /* renamed from: b, reason: collision with root package name */
    public final ArrayDeque f20393b;

    /* renamed from: c, reason: collision with root package name */
    public final PriorityQueue f20394c;

    /* renamed from: d, reason: collision with root package name */
    public g f20395d;

    /* renamed from: e, reason: collision with root package name */
    public long f20396e;

    /* renamed from: f, reason: collision with root package name */
    public long f20397f;

    public h() {
        for (int i5 = 0; i5 < 10; i5++) {
            this.a.add(new g(1));
        }
        this.f20393b = new ArrayDeque();
        for (int i6 = 0; i6 < 2; i6++) {
            ArrayDeque arrayDeque = this.f20393b;
            ni.a aVar = new ni.a(12, this);
            wd.c cVar = new wd.c();
            cVar.f19812y = aVar;
            arrayDeque.add(cVar);
        }
        this.f20394c = new PriorityQueue();
    }

    @Override // wd.f
    public final void a(long j) {
        this.f20396e = j;
    }

    @Override // mc.d
    public final Object c() {
        ke.b.k(this.f20395d == null);
        ArrayDeque arrayDeque = this.a;
        if (arrayDeque.isEmpty()) {
            return null;
        }
        g gVar = (g) arrayDeque.pollFirst();
        this.f20395d = gVar;
        return gVar;
    }

    @Override // mc.d
    public final void d(i iVar) {
        ke.b.g(iVar == this.f20395d);
        g gVar = (g) iVar;
        if (gVar.c(Integer.MIN_VALUE)) {
            gVar.f();
            this.a.add(gVar);
        } else {
            long j = this.f20397f;
            this.f20397f = 1 + j;
            gVar.G = j;
            this.f20394c.add(gVar);
        }
        this.f20395d = null;
    }

    public abstract a4.i e();

    public abstract void f(g gVar);

    @Override // mc.d
    public void flush() {
        ArrayDeque arrayDeque;
        this.f20397f = 0L;
        this.f20396e = 0L;
        while (true) {
            PriorityQueue priorityQueue = this.f20394c;
            boolean isEmpty = priorityQueue.isEmpty();
            arrayDeque = this.a;
            if (isEmpty) {
                break;
            }
            g gVar = (g) priorityQueue.poll();
            int i5 = d0.a;
            gVar.f();
            arrayDeque.add(gVar);
        }
        g gVar2 = this.f20395d;
        if (gVar2 != null) {
            gVar2.f();
            arrayDeque.add(gVar2);
            this.f20395d = null;
        }
    }

    @Override // mc.d
    /* renamed from: g, reason: merged with bridge method [inline-methods] */
    public wd.c b() {
        ArrayDeque arrayDeque = this.f20393b;
        if (arrayDeque.isEmpty()) {
            return null;
        }
        while (true) {
            PriorityQueue priorityQueue = this.f20394c;
            if (priorityQueue.isEmpty()) {
                return null;
            }
            g gVar = (g) priorityQueue.peek();
            int i5 = d0.a;
            if (gVar.f14438x > this.f20396e) {
                return null;
            }
            g gVar2 = (g) priorityQueue.poll();
            boolean c6 = gVar2.c(4);
            ArrayDeque arrayDeque2 = this.a;
            if (c6) {
                wd.c cVar = (wd.c) arrayDeque.pollFirst();
                cVar.a(4);
                gVar2.f();
                arrayDeque2.add(gVar2);
                return cVar;
            }
            f(gVar2);
            if (h()) {
                a4.i e9 = e();
                wd.c cVar2 = (wd.c) arrayDeque.pollFirst();
                cVar2.g(gVar2.f14438x, e9, LongCompanionObject.MAX_VALUE);
                gVar2.f();
                arrayDeque2.add(gVar2);
                return cVar2;
            }
            gVar2.f();
            arrayDeque2.add(gVar2);
        }
    }

    public abstract boolean h();

    @Override // mc.d
    public void release() {
    }
}
