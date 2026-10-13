package pr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Reflection;
import nr.v1;

/* loaded from: classes3.dex */
public final class q extends h {
    public final a H;

    public q(int i5, a aVar) {
        super(i5);
        this.H = aVar;
        if (aVar != a.f16467d) {
            if (i5 < 1) {
                throw new IllegalArgumentException(s4.h.e(i5, "Buffered channel capacity must be at least 1, but ", " was specified").toString());
            }
        } else {
            throw new IllegalArgumentException(("This implementation does not support suspension for senders, use " + Reflection.getOrCreateKotlinClass(h.class).getSimpleName() + " instead").toString());
        }
    }

    @Override // pr.h
    public final boolean A() {
        return this.H == a.f16468e;
    }

    public final Object M(Object obj, boolean z5) {
        o oVar;
        q qVar;
        Object obj2;
        if (this.H == a.f16469i) {
            Object n6 = super.n(obj);
            return (!(n6 instanceof m) || (n6 instanceof l)) ? n6 : Unit.a;
        }
        Object obj3 = j.f16492d;
        o oVar2 = (o) h.f16486x.get(this);
        while (true) {
            long andIncrement = h.f16482e.getAndIncrement(this);
            long j = andIncrement & 1152921504606846975L;
            boolean y5 = y(andIncrement, false);
            int i5 = j.f16490b;
            long j5 = i5;
            long j7 = j / j5;
            int i6 = (int) (j % j5);
            if (oVar2.f18127i != j7) {
                o c6 = h.c(this, j7, oVar2);
                if (c6 != null) {
                    oVar = c6;
                    obj2 = obj;
                    qVar = this;
                } else if (y5) {
                    return new l(v());
                }
            } else {
                oVar = oVar2;
                qVar = this;
                obj2 = obj;
            }
            int i10 = h.i(qVar, oVar, i6, obj2, j, obj3, y5);
            oVar2 = oVar;
            if (i10 == 0) {
                oVar2.a();
                return Unit.a;
            }
            if (i10 == 1) {
                return Unit.a;
            }
            if (i10 == 2) {
                if (y5) {
                    oVar2.i();
                    return new l(v());
                }
                v1 v1Var = obj3 instanceof v1 ? (v1) obj3 : null;
                if (v1Var != null) {
                    v1Var.a(oVar2, i6 + i5);
                }
                o((oVar2.f18127i * j5) + i6);
                return Unit.a;
            }
            if (i10 == 3) {
                throw new IllegalStateException("unexpected");
            }
            if (i10 == 4) {
                if (j < h.f16483i.get(this)) {
                    oVar2.a();
                }
                return new l(v());
            }
            if (i10 == 5) {
                oVar2.a();
            }
            obj = obj2;
        }
    }

    @Override // pr.h, pr.v
    public final Object n(Object obj) {
        return M(obj, false);
    }

    @Override // pr.h, pr.v
    public final Object p(Object obj, Continuation continuation) {
        if (M(obj, true) instanceof l) {
            throw v();
        }
        return Unit.a;
    }
}
