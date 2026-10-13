package vp;

import ip.o0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class q extends lp.c0 {
    public static final /* synthetic */ KProperty[] K = {com.discord.chat.bridge.botuikit.a.o(q.class, "binaryClasses", "getBinaryClasses$descriptors_jvm()Ljava/util/Map;", 0), com.discord.chat.bridge.botuikit.a.o(q.class, "partToFacade", "getPartToFacade()Ljava/util/HashMap;", 0)};
    public final op.x E;
    public final e4.i F;
    public final xq.i G;
    public final d H;
    public final xq.c I;
    public final jp.h J;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public q(e4.i outerContext, op.x jPackage) {
        super(((up.a) outerContext.f7952d).f18979o, jPackage.a);
        Intrinsics.checkNotNullParameter(outerContext, "outerContext");
        Intrinsics.checkNotNullParameter(jPackage, "jPackage");
        this.E = jPackage;
        e4.i d6 = ks.n.d(outerContext, this, null, 6);
        this.F = d6;
        ((up.a) outerContext.f7952d).f18970d.c().f19017c.getClass();
        eq.f fVar = eq.f.f8216g;
        up.a aVar = (up.a) d6.f7952d;
        xq.o oVar = aVar.a;
        p pVar = new p(this, 0);
        xq.l lVar = (xq.l) oVar;
        lVar.getClass();
        this.G = new xq.i(lVar, pVar);
        this.H = new d(d6, jPackage, this);
        p pVar2 = new p(this, 1);
        m0 m0Var = m0.f13512d;
        xq.l lVar2 = (xq.l) oVar;
        lVar2.getClass();
        if (m0Var == null) {
            xq.l.a(27);
            throw null;
        }
        this.I = new xq.c(lVar2, pVar2, m0Var);
        this.J = aVar.f18986v.f17490c ? jp.g.a : nf.e.y(d6, jPackage);
        ((xq.l) oVar).b(new p(this, 2));
    }

    @Override // ip.f0
    public final rq.o N() {
        return this.H;
    }

    @Override // lp.c0, lp.m, ip.m
    public final o0 d() {
        return new gj.c(this);
    }

    @Override // bq.b, jp.a
    public final jp.h getAnnotations() {
        return this.J;
    }

    @Override // lp.c0, lp.l, bq.b
    public final String toString() {
        return "Lazy Java package fragment: " + this.f14132x + " of module " + ((up.a) this.F.f7952d).f18979o;
    }
}
