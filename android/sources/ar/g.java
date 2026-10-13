package ar;

import ip.q;
import ip.z;
import java.util.Arrays;
import java.util.Collection;
import java.util.Set;
import kotlin.collections.c1;
import kotlin.collections.m0;
import kotlin.collections.o0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import rq.o;

/* loaded from: classes3.dex */
public class g implements o {

    /* renamed from: b, reason: collision with root package name */
    public final String f2667b;

    public g(h kind, String... formatParams) {
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(formatParams, "formatParams");
        String str = kind.f2674d;
        Object[] copyOf = Arrays.copyOf(formatParams, formatParams.length);
        String format = String.format(str, Arrays.copyOf(copyOf, copyOf.length));
        Intrinsics.checkNotNullExpressionValue(format, "format(...)");
        this.f2667b = format;
    }

    @Override // rq.q
    public ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        b[] bVarArr = b.f2660d;
        String format = String.format("<Error class: %s>", Arrays.copyOf(new Object[]{name}, 1));
        Intrinsics.checkNotNullExpressionValue(format, "format(...)");
        hq.e g6 = hq.e.g(format);
        Intrinsics.checkNotNullExpressionValue(g6, "special(...)");
        return new a(g6);
    }

    @Override // rq.o
    public Set b() {
        return o0.f13515d;
    }

    @Override // rq.o
    public Set d() {
        return o0.f13515d;
    }

    @Override // rq.q
    public Collection e(rq.f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        return m0.f13512d;
    }

    @Override // rq.o
    public Set g() {
        return o0.f13515d;
    }

    @Override // rq.o
    /* renamed from: h, reason: merged with bridge method [inline-methods] */
    public Set f(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        a containingDeclaration = l.f2693c;
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        b[] bVarArr = b.f2660d;
        c cVar = new c(containingDeclaration, null, jp.g.a, hq.e.g("<Error function>"), ip.c.f12123d, ip.o0.f12151g);
        m0 m0Var = m0.f13512d;
        cVar.G0(null, null, m0Var, m0Var, m0Var, l.c(k.f2687w, new String[0]), z.f12182v, q.f12159e);
        return c1.b(cVar);
    }

    @Override // rq.o
    /* renamed from: i, reason: merged with bridge method [inline-methods] */
    public Set c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return l.f2696f;
    }

    public String toString() {
        return s4.h.h(new StringBuilder("ErrorScope{"), this.f2667b, '}');
    }
}
