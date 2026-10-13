package ar;

import ip.o0;
import ip.q;
import ip.z;
import java.util.List;
import kotlin.collections.c1;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import rq.o;
import yq.u0;
import yq.w0;

/* loaded from: classes3.dex */
public final class a extends lp.j {
    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public a(hq.e name) {
        super(r2, name, r4, r5, r6, xq.l.f20551e);
        Intrinsics.checkNotNullParameter(name, "name");
        l lVar = l.a;
        e eVar = l.f2692b;
        z zVar = z.f12182v;
        ip.g gVar = ip.g.f12138d;
        List list = m0.f13512d;
        lp.h hVar = new lp.h(this, null, jp.g.a, true, ip.c.f12123d, o0.f12151g);
        hVar.P0(list, q.f12158d);
        Intrinsics.checkNotNullExpressionValue(hVar, "apply(...)");
        g b10 = l.b(h.f2672x, hVar.getName().f10209d, "");
        k kVar = k.S;
        hVar.E = new i(l.d(kVar, new String[0]), b10, kVar, list, false, new String[0]);
        l0(b10, c1.b(hVar), hVar);
    }

    @Override // lp.b
    /* renamed from: O */
    public final ip.f c(w0 substitutor) {
        Intrinsics.checkNotNullParameter(substitutor, "substitutor");
        return this;
    }

    @Override // lp.b, ip.q0
    public final ip.m c(w0 substitutor) {
        Intrinsics.checkNotNullParameter(substitutor, "substitutor");
        return this;
    }

    @Override // lp.b, lp.z
    public final o j(u0 typeSubstitution, zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(typeSubstitution, "typeSubstitution");
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return l.b(h.f2672x, getName().f10209d, typeSubstitution.toString());
    }

    @Override // lp.j
    public final String toString() {
        String b10 = getName().b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        return b10;
    }
}
