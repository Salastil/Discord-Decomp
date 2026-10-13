package wp;

import ar.k;
import ar.l;
import fp.i;
import java.util.ArrayList;
import java.util.List;
import kotlin.Pair;
import kotlin.collections.b0;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import kq.j;
import rq.o;
import yq.c0;
import yq.c1;
import yq.h0;
import yq.k0;
import yq.p0;
import yq.s0;
import yq.u0;
import yq.x0;
import yq.y;

/* loaded from: classes3.dex */
public final class f extends u0 {

    /* renamed from: c, reason: collision with root package name */
    public static final a f19988c;

    /* renamed from: d, reason: collision with root package name */
    public static final a f19989d;

    /* renamed from: b, reason: collision with root package name */
    public final io.sentry.internal.debugmeta.c f19990b = new io.sentry.internal.debugmeta.c(new e());

    static {
        x0 x0Var = x0.f21081e;
        f19988c = nf.e.D(x0Var, false, null, 5).b(b.f19981i);
        f19989d = nf.e.D(x0Var, false, null, 5).b(b.f19980e);
    }

    @Override // yq.u0
    public final s0 e(y key) {
        Intrinsics.checkNotNullParameter(key, "key");
        return new h0(i(key, new a(x0.f21081e, false, false, null, 62)));
    }

    public final Pair h(c0 c0Var, ip.f fVar, a aVar) {
        if (c0Var.r0().getParameters().isEmpty()) {
            return new Pair(c0Var, Boolean.FALSE);
        }
        if (i.z(c0Var)) {
            s0 s0Var = (s0) c0Var.l0().get(0);
            c1 a = s0Var.a();
            y b10 = s0Var.b();
            Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
            return new Pair(yq.c.t(b0.c(new h0(i(b10, aVar), a)), c0Var.q0(), c0Var.r0(), c0Var.t0()), Boolean.FALSE);
        }
        if (yq.c.j(c0Var)) {
            return new Pair(l.c(k.K, c0Var.r0().toString()), Boolean.FALSE);
        }
        o y5 = fVar.y(this);
        Intrinsics.checkNotNullExpressionValue(y5, "getMemberScope(...)");
        k0 q02 = c0Var.q0();
        p0 n6 = fVar.n();
        Intrinsics.checkNotNullExpressionValue(n6, "getTypeConstructor(...)");
        List<ip.s0> parameters = fVar.n().getParameters();
        Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
        ArrayList arrayList = new ArrayList(d0.l(parameters, 10));
        for (ip.s0 s0Var2 : parameters) {
            Intrinsics.checkNotNull(s0Var2);
            io.sentry.internal.debugmeta.c cVar = this.f19990b;
            arrayList.add(e.a(s0Var2, aVar, cVar, cVar.K(s0Var2, aVar)));
        }
        return new Pair(yq.c.w(q02, n6, arrayList, c0Var.t0(), y5, new j(fVar, this, c0Var, aVar)), Boolean.TRUE);
    }

    public final y i(y yVar, a aVar) {
        ip.i a = yVar.r0().a();
        if (a instanceof ip.s0) {
            aVar.getClass();
            return i(this.f19990b.K((ip.s0) a, a.a(aVar, null, true, null, null, 59)), aVar);
        }
        if (!(a instanceof ip.f)) {
            throw new IllegalStateException(("Unexpected declaration kind: " + a).toString());
        }
        ip.i a10 = yq.c.E(yVar).r0().a();
        if (a10 instanceof ip.f) {
            Pair h6 = h(yq.c.l(yVar), (ip.f) a, f19988c);
            c0 c0Var = (c0) h6.f13474d;
            boolean booleanValue = ((Boolean) h6.f13475e).booleanValue();
            Pair h7 = h(yq.c.E(yVar), (ip.f) a10, f19989d);
            c0 c0Var2 = (c0) h7.f13474d;
            return (booleanValue || ((Boolean) h7.f13475e).booleanValue()) ? new h(c0Var, c0Var2) : yq.c.e(c0Var, c0Var2);
        }
        throw new IllegalStateException(("For some reason declaration for upper bound is not a class but \"" + a10 + "\" while for lower it's \"" + a + '\"').toString());
    }
}
