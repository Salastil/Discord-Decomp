package hp;

import ip.o0;
import ip.p0;
import ip.z;
import java.util.List;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import lp.l0;
import lp.u;

/* loaded from: classes3.dex */
public final class a extends rq.h {

    /* renamed from: e, reason: collision with root package name */
    public static final hq.e f10144e;

    static {
        hq.e e9 = hq.e.e("clone");
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        f10144e = e9;
    }

    @Override // rq.h
    public final List h() {
        ip.c cVar = ip.c.f12123d;
        p0 p0Var = o0.f12151g;
        lp.b bVar = this.f17545b;
        l0 M0 = l0.M0(bVar, f10144e, cVar, p0Var);
        u u02 = bVar.u0();
        m0 m0Var = m0.f13512d;
        M0.G0(null, u02, m0Var, m0Var, m0Var, oq.e.e(bVar).e(), z.f12182v, ip.q.f12157c);
        return b0.c(M0);
    }
}
