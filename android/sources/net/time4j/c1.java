package net.time4j;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.util.Collections;
import java.util.EnumSet;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class c1 extends ks.s implements is.a {

    /* renamed from: i, reason: collision with root package name */
    public static final ks.r f15233i;
    private static final long serialVersionUID = 7458380065762437714L;

    /* renamed from: d, reason: collision with root package name */
    public final transient w0 f15234d;

    /* renamed from: e, reason: collision with root package name */
    public final transient z0 f15235e;

    static {
        c1 c1Var = new c1(w0.f15384v, z0.J);
        w0 w0Var = w0.f15385w;
        j1 j1Var = z0.L;
        c1 c1Var2 = new c1(w0Var, (z0) j1Var.a());
        HashMap hashMap = new HashMap();
        u uVar = w0.J;
        hashMap.put(uVar, j1Var);
        d0 d0Var = w0.K;
        d0 d0Var2 = w0.O;
        hashMap.put(d0Var, d0Var2);
        v1 v1Var = w0.L;
        hashMap.put(v1Var, t1.G.f15329w);
        c0 c0Var = w0.M;
        d0 d0Var3 = w0.S;
        hashMap.put(c0Var, d0Var3);
        c0 c0Var2 = w0.N;
        d0 d0Var4 = w0.P;
        hashMap.put(c0Var2, d0Var4);
        hashMap.put(d0Var2, d0Var4);
        hashMap.put(d0Var4, j1Var);
        c0 c0Var3 = w0.Q;
        hashMap.put(c0Var3, j1Var);
        d0 d0Var5 = w0.R;
        hashMap.put(d0Var5, j1Var);
        hashMap.put(d0Var3, j1Var);
        o1 o1Var = w0.T;
        hashMap.put(o1Var, j1Var);
        c cVar = z0.N;
        e0 e0Var = z0.Q;
        hashMap.put(cVar, e0Var);
        e0 e0Var2 = z0.O;
        e0 e0Var3 = z0.T;
        hashMap.put(e0Var2, e0Var3);
        e0 e0Var4 = z0.P;
        hashMap.put(e0Var4, e0Var3);
        hashMap.put(e0Var, e0Var3);
        e0 e0Var5 = z0.R;
        hashMap.put(e0Var5, e0Var3);
        e0 e0Var6 = z0.S;
        hashMap.put(e0Var6, e0Var3);
        e0 e0Var7 = z0.V;
        hashMap.put(e0Var3, e0Var7);
        e0 e0Var8 = z0.U;
        hashMap.put(e0Var8, e0Var7);
        e0 e0Var9 = z0.Z;
        hashMap.put(e0Var7, e0Var9);
        e0 e0Var10 = z0.W;
        hashMap.put(e0Var10, e0Var9);
        Collections.unmodifiableMap(hashMap);
        ks.p pVar = new ks.p(h0.class, c1.class, new qa.s(), c1Var, c1Var2, null);
        int i5 = 1;
        r1 r1Var = new r1(i5, uVar);
        k kVar = m.E;
        pVar.a(uVar, r1Var, kVar);
        pVar.a(d0Var, new r1(i5, d0Var), m.f15278v);
        pVar.a(v1Var, new r1(i5, v1Var), m1.f15286d);
        pVar.a(c0Var, new r1(i5, c0Var), m.f15279w);
        r1 r1Var2 = new r1(i5, c0Var2);
        i iVar = m.f15280x;
        pVar.a(c0Var2, r1Var2, iVar);
        pVar.a(d0Var2, new r1(i5, d0Var2), iVar);
        pVar.a(d0Var4, new r1(i5, d0Var4), kVar);
        pVar.a(c0Var3, new r1(i5, c0Var3), kVar);
        pVar.a(d0Var5, new r1(i5, d0Var5), kVar);
        pVar.a(d0Var3, new r1(i5, d0Var3), kVar);
        r1 r1Var3 = new r1(i5, o1Var);
        j jVar = m.f15281y;
        pVar.a(o1Var, r1Var3, jVar);
        pVar.b(j1Var, new r1(i5, j1Var));
        pVar.b(cVar, new r1(i5, cVar));
        r1 r1Var4 = new r1(i5, e0Var2);
        n nVar = t.f15314d;
        pVar.a(e0Var2, r1Var4, nVar);
        pVar.a(e0Var4, new r1(i5, e0Var4), nVar);
        pVar.a(e0Var, new r1(i5, e0Var), nVar);
        pVar.a(e0Var5, new r1(i5, e0Var5), nVar);
        pVar.a(e0Var6, new r1(i5, e0Var6), nVar);
        r1 r1Var5 = new r1(i5, e0Var3);
        o oVar = t.f15315e;
        pVar.a(e0Var3, r1Var5, oVar);
        pVar.a(e0Var8, new r1(i5, e0Var8), oVar);
        r1 r1Var6 = new r1(i5, e0Var7);
        p pVar2 = t.f15316i;
        pVar.a(e0Var7, r1Var6, pVar2);
        pVar.a(e0Var10, new r1(i5, e0Var10), pVar2);
        e0 e0Var11 = z0.X;
        r1 r1Var7 = new r1(i5, e0Var11);
        q qVar = t.f15317v;
        pVar.a(e0Var11, r1Var7, qVar);
        e0 e0Var12 = z0.Y;
        r1 r1Var8 = new r1(i5, e0Var12);
        r rVar = t.f15318w;
        pVar.a(e0Var12, r1Var8, rVar);
        r1 r1Var9 = new r1(i5, e0Var9);
        s sVar = t.f15319x;
        pVar.a(e0Var9, r1Var9, sVar);
        e0 e0Var13 = z0.a0;
        pVar.a(e0Var13, new r1(i5, e0Var13), qVar);
        i0 i0Var = z0.f15401b0;
        pVar.a(i0Var, new r1(i5, i0Var), rVar);
        i0 i0Var2 = z0.f15402c0;
        pVar.a(i0Var2, new r1(i5, i0Var2), sVar);
        y yVar = z0.f15403d0;
        pVar.b(yVar, new b1(i5, yVar));
        y yVar2 = z0.f15404e0;
        pVar.b(yVar2, new b1(i5, yVar2));
        y yVar3 = z0.f15405f0;
        pVar.b(yVar3, new b1(i5, yVar3));
        d1 d1Var = z0.f15406g0;
        pVar.b(d1Var, new r1(i5, d1Var));
        EnumSet range = EnumSet.range(m.f15275d, iVar);
        EnumSet range2 = EnumSet.range(jVar, kVar);
        for (m mVar : m.values()) {
            ks.p pVar3 = pVar;
            pVar3.d(mVar, new a1(mVar), mVar.getLength(), mVar.compareTo((m) m.f15281y) < 0 ? range : range2);
            pVar = pVar3;
        }
        for (t tVar : t.values()) {
            pVar.d(tVar, new a1(tVar), tVar.getLength(), EnumSet.allOf(t.class));
        }
        Iterator it = w0.W.f13684i.iterator();
        while (it.hasNext()) {
            pVar.c((js.b) it.next());
        }
        Iterator it2 = z0.f15407i0.f13684i.iterator();
        while (it2.hasNext()) {
            pVar.c((js.b) it2.next());
        }
        f15233i = pVar.e();
        h0[] h0VarArr = {m.f15278v, m.f15280x, m.E, nVar, oVar, pVar2, sVar};
        char c6 = b0.f15223x;
        new a0(h0VarArr);
    }

    public c1(w0 w0Var, z0 z0Var) {
        if (z0Var.f15411d == 24) {
            this.f15234d = (w0) w0Var.l(1L, m.E);
            this.f15235e = z0.J;
        } else {
            if (w0Var == null) {
                throw new NullPointerException("Missing date.");
            }
            this.f15234d = w0Var;
            this.f15235e = z0Var;
        }
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(8, this);
    }

    @Override // is.a
    public final int a() {
        return this.f15234d.f15388d;
    }

    @Override // is.a
    public final int b() {
        return this.f15234d.f15389e;
    }

    @Override // is.a
    public final int c() {
        return this.f15234d.f15390i;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        c1 c1Var = (c1) obj;
        w0 w0Var = c1Var.f15234d;
        w0 w0Var2 = this.f15234d;
        if (w0Var2.p(w0Var)) {
            return 1;
        }
        if (w0Var2.m(c1Var.f15234d) < 0) {
            return -1;
        }
        return this.f15235e.compareTo(c1Var.f15235e);
    }

    @Override // ks.e
    public final ks.r e() {
        return f15233i;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof c1) {
            c1 c1Var = (c1) obj;
            if (this.f15234d.equals(c1Var.f15234d) && this.f15235e.equals(c1Var.f15235e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (this.f15235e.hashCode() * 37) + (this.f15234d.hashCode() * 13);
    }

    @Override // ks.s
    public final int i(ks.s sVar) {
        c1 c1Var = (c1) sVar;
        w0 w0Var = c1Var.f15234d;
        w0 w0Var2 = this.f15234d;
        if (w0Var2.p(w0Var)) {
            return 1;
        }
        if (w0Var2.m(c1Var.f15234d) < 0) {
            return -1;
        }
        return this.f15235e.compareTo(c1Var.f15235e);
    }

    @Override // ks.s
    public final ks.r j() {
        return f15233i;
    }

    public final String toString() {
        return this.f15234d.toString() + this.f15235e.toString();
    }

    @Override // ks.e
    public final ks.e f() {
        return this;
    }
}
