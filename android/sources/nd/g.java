package nd;

import android.os.Handler;
import com.google.android.exoplayer2.Timeline;
import java.util.HashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public abstract class g extends a {
    public final HashMap E = new HashMap();
    public Handler F;
    public ie.u0 G;

    @Override // nd.a
    public final void d() {
        for (f fVar : this.E.values()) {
            fVar.a.c(fVar.f15093b);
        }
    }

    @Override // nd.a
    public final void f() {
        for (f fVar : this.E.values()) {
            fVar.a.e(fVar.f15093b);
        }
    }

    @Override // nd.a
    public void q() {
        HashMap hashMap = this.E;
        for (f fVar : hashMap.values()) {
            a aVar = fVar.a;
            e4.i iVar = fVar.f15094c;
            aVar.p(fVar.f15093b);
            aVar.s(iVar);
            aVar.r(iVar);
        }
        hashMap.clear();
    }

    public abstract s t(Object obj, s sVar);

    public abstract void x(Object obj, a aVar, Timeline timeline);

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v2, types: [nd.e, nd.t] */
    public final void y(final Integer num, a aVar) {
        HashMap hashMap = this.E;
        ke.b.g(!hashMap.containsKey(num));
        ?? r12 = new t() { // from class: nd.e
            @Override // nd.t
            public final void a(a aVar2, Timeline timeline) {
                g.this.x(num, aVar2, timeline);
            }
        };
        e4.i iVar = new e4.i();
        iVar.f7955v = this;
        iVar.f7953e = a(null);
        iVar.f7954i = new nc.n(this.f15057v.f15047c, 0, null);
        iVar.f7952d = num;
        hashMap.put(num, new f(aVar, r12, iVar));
        Handler handler = this.F;
        handler.getClass();
        aVar.getClass();
        a1.d dVar = aVar.f15056i;
        dVar.getClass();
        CopyOnWriteArrayList copyOnWriteArrayList = (CopyOnWriteArrayList) dVar.f16v;
        w wVar = new w();
        wVar.a = handler;
        wVar.f15191b = iVar;
        copyOnWriteArrayList.add(wVar);
        Handler handler2 = this.F;
        handler2.getClass();
        nc.n nVar = aVar.f15057v;
        nVar.getClass();
        CopyOnWriteArrayList copyOnWriteArrayList2 = nVar.f15047c;
        nc.m mVar = new nc.m();
        mVar.a = handler2;
        mVar.f15045b = iVar;
        copyOnWriteArrayList2.add(mVar);
        ie.u0 u0Var = this.G;
        ic.c0 c0Var = this.f15060y;
        ke.b.l(c0Var);
        aVar.k(r12, u0Var, c0Var);
        if (this.f15055e.isEmpty()) {
            aVar.c(r12);
        }
    }

    public long u(long j, Object obj) {
        return j;
    }

    public int w(int i5, Object obj) {
        return i5;
    }
}
