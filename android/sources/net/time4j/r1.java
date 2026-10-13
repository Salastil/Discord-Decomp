package net.time4j;

/* loaded from: classes3.dex */
public class r1 implements ks.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15312d;

    /* renamed from: e, reason: collision with root package name */
    public final ks.d f15313e;

    public /* synthetic */ r1(int i5, ks.d dVar) {
        this.f15312d = i5;
        this.f15313e = dVar;
    }

    public static long e(Object obj) {
        return ((Number) Number.class.cast(obj)).longValue();
    }

    public Object a(c1 c1Var) {
        ks.d dVar = this.f15313e;
        if (dVar.i()) {
            return c1Var.f15234d.d(dVar);
        }
        if (dVar.w()) {
            return c1Var.f15235e.d(dVar);
        }
        throw new ks.f("Missing rule for: " + dVar.name());
    }

    @Override // ks.j
    public Object b(ks.e eVar, Object obj, boolean z5) {
        switch (this.f15312d) {
            case 0:
                n1 n1Var = (n1) obj;
                s1 s1Var = (s1) this.f15313e;
                if (n1Var == null) {
                    throw new IllegalArgumentException("Missing weekday.");
                }
                u uVar = w0.J;
                w0 w0Var = (w0) eVar.d(uVar);
                w0Var.getClass();
                l8.a aVar = w0.V;
                long n6 = aVar.n(w0Var);
                t1 t1Var = t1.G;
                if (n1Var == n1.d(w3.q.o(7, 5 + n6) + 1)) {
                    return eVar;
                }
                return eVar.h(uVar, (w0) aVar.o((n6 + n1Var.b(s1Var.this$0)) - r1.b(s1Var.this$0)));
            default:
                return f((c1) eVar, obj, z5);
        }
    }

    @Override // ks.j
    public final Object c(ks.e eVar) {
        switch (this.f15312d) {
            case 0:
                return ((w0) eVar.d(w0.J)).w();
            default:
                return a((c1) eVar);
        }
    }

    @Override // ks.j
    public final Object d(ks.e eVar) {
        switch (this.f15312d) {
            case 0:
                w0 w0Var = (w0) eVar.d(w0.J);
                n1 w5 = w0Var.w();
                s1 s1Var = (s1) this.f15313e;
                return (w0Var.o() + 7) - ((long) w5.b(s1Var.this$0)) > w0.W.c().j() ? n1.f15293w : s1Var.this$0.f15325d.c();
            default:
                c1 c1Var = (c1) eVar;
                ks.d dVar = this.f15313e;
                if (dVar.i()) {
                    return c1Var.f15234d.g(dVar);
                }
                if (dVar.w()) {
                    return dVar.a();
                }
                throw new ks.f("Missing rule for: " + dVar.name());
        }
    }

    public c1 f(c1 c1Var, Object obj, boolean z5) {
        if (obj == null) {
            throw new IllegalArgumentException("Missing element value.");
        }
        Object a = a(c1Var);
        z0 z0Var = c1Var.f15235e;
        w0 w0Var = c1Var.f15234d;
        if (obj.equals(a)) {
            return c1Var;
        }
        ks.d dVar = this.f15313e;
        if (z5) {
            return (c1) c1Var.l(w3.q.D(e(obj), e(a(c1Var))), (h0) c1.f15233i.b(dVar));
        }
        if (dVar.i()) {
            return new c1((w0) w0Var.h(dVar, obj), z0Var);
        }
        if (!dVar.w()) {
            throw new ks.f("Missing rule for: " + dVar.name());
        }
        if (Number.class.isAssignableFrom(dVar.getType())) {
            long e9 = e(dVar.v());
            long e10 = e(dVar.a());
            long e11 = e(obj);
            if (e9 > e11 || e10 < e11) {
                throw new IllegalArgumentException("Out of range: " + obj);
            }
        } else if (dVar.equals(z0.L) && obj.equals(z0.K)) {
            throw new IllegalArgumentException("Out of range: " + obj);
        }
        return new c1(w0Var, (z0) z0Var.h(dVar, obj));
    }
}
