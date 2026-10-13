package net.time4j;

import java.io.InvalidObjectException;

/* loaded from: classes3.dex */
public final class q1 extends a {
    private static final long serialVersionUID = -5936254509996557266L;
    private final int category;
    final /* synthetic */ t1 this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public q1(t1 t1Var, String str, int i5) {
        super(str);
        this.this$0 = t1Var;
        this.category = i5;
    }

    private Object readResolve() {
        t1 t1Var = this.this$0;
        int i5 = this.category;
        if (i5 == 0) {
            return t1Var.f15329w;
        }
        if (i5 == 1) {
            return t1Var.f15330x;
        }
        if (i5 == 2) {
            return t1Var.f15331y;
        }
        if (i5 == 3) {
            return t1Var.E;
        }
        throw new InvalidObjectException("Unknown category: " + this.category);
    }

    @Override // ks.d
    public final Object a() {
        return Integer.valueOf(m() ? 52 : 5);
    }

    @Override // ks.a
    public final ks.j f(ks.r rVar) {
        if (rVar.e(w0.J)) {
            return this.category >= 2 ? new p1(this, 0) : new p1(this, 1);
        }
        return null;
    }

    @Override // ks.a
    public final boolean g(ks.a aVar) {
        return this.this$0.equals(((q1) aVar).this$0);
    }

    @Override // ks.d
    public final Class getType() {
        return Integer.class;
    }

    @Override // ks.d
    public final boolean i() {
        return true;
    }

    @Override // ks.a
    public final ks.d j() {
        return w0.T;
    }

    public final boolean m() {
        return this.category % 2 == 0;
    }

    @Override // ks.d
    public final /* bridge */ /* synthetic */ Object v() {
        return 1;
    }

    @Override // ks.d
    public final boolean w() {
        return false;
    }
}
