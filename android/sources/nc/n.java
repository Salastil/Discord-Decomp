package nc;

import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public final class n {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final nd.s f15046b;

    /* renamed from: c, reason: collision with root package name */
    public final CopyOnWriteArrayList f15047c;

    public n(CopyOnWriteArrayList copyOnWriteArrayList, int i5, nd.s sVar) {
        this.f15047c = copyOnWriteArrayList;
        this.a = i5;
        this.f15046b = sVar;
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, nc.o] */
    public final void a() {
        Iterator it = this.f15047c.iterator();
        while (it.hasNext()) {
            m mVar = (m) it.next();
            ke.d0.M(mVar.a, new l(this, mVar.f15045b, 2));
        }
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, nc.o] */
    public final void b() {
        Iterator it = this.f15047c.iterator();
        while (it.hasNext()) {
            m mVar = (m) it.next();
            ke.d0.M(mVar.a, new l(this, mVar.f15045b, 1));
        }
    }

    public final void c(int i5) {
        Iterator it = this.f15047c.iterator();
        while (it.hasNext()) {
            m mVar = (m) it.next();
            ke.d0.M(mVar.a, new bb.a(this, mVar.f15045b, i5, 10));
        }
    }

    public final void d(Exception exc) {
        Iterator it = this.f15047c.iterator();
        while (it.hasNext()) {
            m mVar = (m) it.next();
            ke.d0.M(mVar.a, new androidx.fragment.app.e(this, mVar.f15045b, exc, 29));
        }
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, nc.o] */
    public final void e() {
        Iterator it = this.f15047c.iterator();
        while (it.hasNext()) {
            m mVar = (m) it.next();
            ke.d0.M(mVar.a, new l(this, mVar.f15045b, 0));
        }
    }
}
