package jq;

import cp.d0;
import fo.u;
import ip.e0;
import ip.f0;
import ip.m0;
import ip.v0;
import ip.z;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import kotlin.text.CharsKt;
import kotlin.text.StringsKt;
import kotlin.text.b0;
import kotlin.text.x;
import lp.j0;
import lp.k0;
import lp.r0;
import mq.t;
import yq.a0;
import yq.b1;
import yq.p0;
import yq.s0;
import yq.y;
import yq.z0;

/* loaded from: classes3.dex */
public final class h extends f implements j {

    /* renamed from: f, reason: collision with root package name */
    public static final /* synthetic */ int f13051f = 0;

    /* renamed from: d, reason: collision with root package name */
    public final k f13052d;

    /* renamed from: e, reason: collision with root package name */
    public final u f13053e;

    public h(k options) {
        Intrinsics.checkNotNullParameter(options, "options");
        this.f13052d = options;
        this.f13053e = fo.l.a(new d0(9, this));
    }

    public static void W(StringBuilder sb2) {
        int length = sb2.length();
        if (length == 0 || sb2.charAt(length - 1) != ' ') {
            sb2.append(' ');
        }
    }

    public static boolean i0(y yVar) {
        if (!nt.a.y(yVar)) {
            return false;
        }
        List l02 = yVar.l0();
        if (l02 != null && l02.isEmpty()) {
            return true;
        }
        Iterator it = l02.iterator();
        while (it.hasNext()) {
            if (((s0) it.next()).c()) {
                return false;
            }
        }
        return true;
    }

    public static final void n(h hVar, m0 m0Var, StringBuilder sb2) {
        boolean q5 = hVar.q();
        k kVar = hVar.f13052d;
        if (!q5) {
            an.b bVar = kVar.f13066g;
            KProperty[] kPropertyArr = k.Y;
            if (!((Boolean) bVar.getValue(kVar, kPropertyArr[5])).booleanValue()) {
                List a0 = m0Var.a0();
                Intrinsics.checkNotNullExpressionValue(a0, "getContextReceiverParameters(...)");
                hVar.B(sb2, a0);
                if (hVar.p().contains(i.f13059y)) {
                    hVar.x(sb2, m0Var, null);
                    lp.r Z = m0Var.Z();
                    if (Z != null) {
                        hVar.x(sb2, Z, jp.d.f12997e);
                    }
                    lp.r X = m0Var.X();
                    if (X != null) {
                        hVar.x(sb2, X, jp.d.G);
                    }
                    if (((p) kVar.H.getValue(kVar, kPropertyArr[32])) == p.f13092e) {
                        j0 getter = m0Var.getGetter();
                        if (getter != null) {
                            hVar.x(sb2, getter, jp.d.f13000w);
                        }
                        k0 setter = m0Var.getSetter();
                        if (setter != null) {
                            hVar.x(sb2, setter, jp.d.f13001x);
                            List P = setter.P();
                            Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                            r0 r0Var = (r0) CollectionsKt.Z(P);
                            Intrinsics.checkNotNull(r0Var);
                            hVar.x(sb2, r0Var, jp.d.F);
                        }
                    }
                }
                ip.p visibility = m0Var.getVisibility();
                Intrinsics.checkNotNullExpressionValue(visibility, "getVisibility(...)");
                hVar.g0(visibility, sb2);
                hVar.N(sb2, hVar.p().contains(i.K) && m0Var.isConst(), "const");
                hVar.K(m0Var, sb2);
                hVar.M(m0Var, sb2);
                hVar.S(m0Var, sb2);
                hVar.N(sb2, hVar.p().contains(i.L) && m0Var.b0(), "lateinit");
                hVar.J(m0Var, sb2);
            }
            hVar.d0(m0Var, sb2, false);
            List typeParameters = m0Var.getTypeParameters();
            Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
            hVar.c0(sb2, typeParameters, true);
            hVar.U(m0Var, sb2);
        }
        hVar.P(m0Var, sb2, true);
        sb2.append(": ");
        y type = m0Var.getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        sb2.append(hVar.X(type));
        hVar.V(m0Var, sb2);
        hVar.H(m0Var, sb2);
        List typeParameters2 = m0Var.getTypeParameters();
        Intrinsics.checkNotNullExpressionValue(typeParameters2, "getTypeParameters(...)");
        hVar.h0(sb2, typeParameters2);
    }

    public static z u(ip.y yVar) {
        if (yVar instanceof ip.f) {
            return ((ip.f) yVar).b() == ip.g.f12139e ? z.f12183w : z.f12180e;
        }
        ip.l h6 = yVar.h();
        ip.f fVar = h6 instanceof ip.f ? (ip.f) h6 : null;
        if (fVar == null) {
            return z.f12180e;
        }
        if (!(yVar instanceof ip.d)) {
            return z.f12180e;
        }
        ip.d dVar = (ip.d) yVar;
        Collection i5 = dVar.i();
        Intrinsics.checkNotNullExpressionValue(i5, "getOverriddenDescriptors(...)");
        if (!i5.isEmpty() && fVar.e() != z.f12180e) {
            return z.f12182v;
        }
        if (fVar.b() != ip.g.f12139e || Intrinsics.areEqual(dVar.getVisibility(), ip.q.a)) {
            return z.f12180e;
        }
        z e9 = dVar.e();
        z zVar = z.f12183w;
        return e9 == zVar ? zVar : z.f12182v;
    }

    public final String A(mq.g gVar) {
        k kVar = this.f13052d;
        Function1 function1 = (Function1) kVar.f13079v.getValue(kVar, k.Y[20]);
        if (function1 != null) {
            return (String) function1.invoke(gVar);
        }
        if (gVar instanceof mq.b) {
            Iterable iterable = (Iterable) ((mq.b) gVar).a;
            ArrayList arrayList = new ArrayList();
            Iterator it = iterable.iterator();
            while (it.hasNext()) {
                String A = A((mq.g) it.next());
                if (A != null) {
                    arrayList.add(A);
                }
            }
            return CollectionsKt.O(arrayList, ", ", "{", "}", null, 56);
        }
        if (gVar instanceof mq.a) {
            return StringsKt.N(w((jp.b) ((mq.a) gVar).a, null), "@");
        }
        if (!(gVar instanceof t)) {
            return gVar.toString();
        }
        mq.s sVar = (mq.s) ((t) gVar).a;
        if (sVar instanceof mq.q) {
            return ((mq.q) sVar).a + "::class";
        }
        if (!(sVar instanceof mq.r)) {
            throw new fo.n();
        }
        mq.f fVar = ((mq.r) sVar).a;
        String str = fVar.a.a().a.a;
        int i5 = fVar.f14575b;
        for (int i6 = 0; i6 < i5; i6++) {
            str = k0.d.h('>', "kotlin.Array<", str);
        }
        return k0.d.k(str, "::class");
    }

    public final void B(StringBuilder sb2, List list) {
        if (list.isEmpty()) {
            return;
        }
        sb2.append("context(");
        Iterator it = list.iterator();
        int i5 = 0;
        while (it.hasNext()) {
            int i6 = i5 + 1;
            lp.u uVar = (lp.u) it.next();
            x(sb2, uVar, jp.d.f13002y);
            y type = uVar.getType();
            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
            sb2.append(F(type));
            if (i5 == c0.f(list)) {
                sb2.append(") ");
            } else {
                sb2.append(", ");
            }
            i5 = i6;
        }
    }

    public final void C(StringBuilder sb2, yq.c0 type) {
        x(sb2, type, null);
        if (yq.c.j(type)) {
            Intrinsics.checkNotNullParameter(type, "type");
            boolean z5 = type instanceof ar.i;
            k kVar = this.f13052d;
            if (z5 && ((ar.i) type).f2677v.f2691e && ((Boolean) kVar.V.getValue(kVar, k.Y[47])).booleanValue()) {
                ar.l lVar = ar.l.a;
                Intrinsics.checkNotNullParameter(type, "type");
                Intrinsics.checkNotNullParameter(type, "type");
                if (z5) {
                    boolean z6 = ((ar.i) type).f2677v.f2691e;
                }
                p0 r02 = type.r0();
                Intrinsics.checkNotNull(r02, "null cannot be cast to non-null type org.jetbrains.kotlin.types.error.ErrorTypeConstructor");
                sb2.append(D(((ar.j) r02).f2681b[0]));
            } else {
                if (!z5 || ((Boolean) kVar.X.getValue(kVar, k.Y[49])).booleanValue()) {
                    sb2.append(type.r0().toString());
                } else {
                    sb2.append(((ar.i) type).E);
                }
                sb2.append(Y(type.l0()));
            }
        } else {
            p0 r03 = type.r0();
            Intrinsics.checkNotNullParameter(type, "<this>");
            ip.i a = type.r0().a();
            e4.m g6 = ta.a.g(type, a instanceof ip.j ? (ip.j) a : null, 0);
            if (g6 == null) {
                sb2.append(Z(r03));
                sb2.append(Y(type.l0()));
            } else {
                T(sb2, g6);
            }
            Unit unit = Unit.a;
        }
        if (type.t0()) {
            sb2.append("?");
        }
        Intrinsics.checkNotNullParameter(type, "<this>");
        if (type instanceof yq.o) {
            sb2.append(" & Any");
        }
    }

    public final String D(String str) {
        int ordinal = r().ordinal();
        if (ordinal == 0) {
            return str;
        }
        if (ordinal == 1) {
            return s4.h.f("<font color=red><b>", str, "</b></font>");
        }
        throw new fo.n();
    }

    public final String E(String lowerRendered, String upperRendered, fp.i builtIns) {
        Intrinsics.checkNotNullParameter(lowerRendered, "lowerRendered");
        Intrinsics.checkNotNullParameter(upperRendered, "upperRendered");
        Intrinsics.checkNotNullParameter(builtIns, "builtIns");
        if (nt.a.K(lowerRendered, upperRendered)) {
            return x.o(upperRendered, "(", false) ? s4.h.f("(", lowerRendered, ")!") : lowerRendered.concat("!");
        }
        k kVar = this.f13052d;
        an.b bVar = kVar.f13061b;
        KProperty[] kPropertyArr = k.Y;
        c cVar = (c) bVar.getValue(kVar, kPropertyArr[0]);
        builtIns.getClass();
        ip.f j = builtIns.j(fp.o.C);
        Intrinsics.checkNotNullExpressionValue(j, "getCollection(...)");
        String Y = StringsKt.Y(cVar.a(j, this), "Collection");
        String G = nt.a.G(lowerRendered, k0.d.k(Y, "Mutable"), upperRendered, Y, k0.d.k(Y, "(Mutable)"));
        if (G != null) {
            return G;
        }
        String G2 = nt.a.G(lowerRendered, k0.d.k(Y, "MutableMap.MutableEntry"), upperRendered, k0.d.k(Y, "Map.Entry"), k0.d.k(Y, "(Mutable)Map.(Mutable)Entry"));
        if (G2 != null) {
            return G2;
        }
        c cVar2 = (c) kVar.f13061b.getValue(kVar, kPropertyArr[0]);
        ip.f k = builtIns.k("Array");
        Intrinsics.checkNotNullExpressionValue(k, "getArray(...)");
        String Y2 = StringsKt.Y(cVar2.a(k, this), "Array");
        StringBuilder o6 = k0.d.o(Y2);
        o6.append(o("Array<"));
        String sb2 = o6.toString();
        StringBuilder o7 = k0.d.o(Y2);
        o7.append(o("Array<out "));
        String sb3 = o7.toString();
        StringBuilder o10 = k0.d.o(Y2);
        o10.append(o("Array<(out) "));
        String G3 = nt.a.G(lowerRendered, sb2, upperRendered, sb3, o10.toString());
        if (G3 != null) {
            return G3;
        }
        return "(" + lowerRendered + ".." + upperRendered + ')';
    }

    public final String F(y yVar) {
        String X = X(yVar);
        return ((!i0(yVar) || z0.e(yVar)) && !(yVar instanceof yq.o)) ? X : k0.d.h(')', "(", X);
    }

    public final String G(hq.d fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        fqName.getClass();
        return o(nt.a.F(hq.d.e(fqName)));
    }

    public final void H(v0 v0Var, StringBuilder sb2) {
        mq.g M;
        String A;
        k kVar = this.f13052d;
        if (!((Boolean) kVar.f13078u.getValue(kVar, k.Y[19])).booleanValue() || (M = v0Var.M()) == null || (A = A(M)) == null) {
            return;
        }
        sb2.append(" = ");
        sb2.append(o(A));
    }

    public final String I(String str) {
        int ordinal = r().ordinal();
        if (ordinal != 0) {
            if (ordinal != 1) {
                throw new fo.n();
            }
            k kVar = this.f13052d;
            if (!((Boolean) kVar.W.getValue(kVar, k.Y[48])).booleanValue()) {
                return s4.h.f("<b>", str, "</b>");
            }
        }
        return str;
    }

    public final void J(ip.d dVar, StringBuilder sb2) {
        if (p().contains(i.F) && t() && dVar.b() != ip.c.f12123d) {
            sb2.append("/*");
            sb2.append(com.facebook.imagepipeline.nativecode.c.X(dVar.b().name()));
            sb2.append("*/ ");
        }
    }

    public final void K(ip.y yVar, StringBuilder sb2) {
        N(sb2, yVar.isExternal(), "external");
        boolean z5 = false;
        N(sb2, p().contains(i.I) && yVar.z(), "expect");
        if (p().contains(i.J) && yVar.o0()) {
            z5 = true;
        }
        N(sb2, z5, "actual");
    }

    public final void L(z zVar, StringBuilder sb2, z zVar2) {
        k kVar = this.f13052d;
        if (((Boolean) kVar.f13073p.getValue(kVar, k.Y[14])).booleanValue() || zVar != zVar2) {
            N(sb2, p().contains(i.f13057w), com.facebook.imagepipeline.nativecode.c.X(zVar.name()));
        }
    }

    public final void M(ip.d dVar, StringBuilder sb2) {
        if (kq.e.s(dVar) && dVar.e() == z.f12180e) {
            return;
        }
        k kVar = this.f13052d;
        if (((n) kVar.B.getValue(kVar, k.Y[26])) == n.f13084d && dVar.e() == z.f12182v && !dVar.i().isEmpty()) {
            return;
        }
        z e9 = dVar.e();
        Intrinsics.checkNotNullExpressionValue(e9, "getModality(...)");
        L(e9, sb2, u(dVar));
    }

    public final void N(StringBuilder sb2, boolean z5, String str) {
        if (z5) {
            sb2.append(I(str));
            sb2.append(" ");
        }
    }

    public final String O(hq.e name, boolean z5) {
        Intrinsics.checkNotNullParameter(name, "name");
        String o6 = o(nt.a.E(name));
        k kVar = this.f13052d;
        return (((Boolean) kVar.W.getValue(kVar, k.Y[48])).booleanValue() && r() == s.f13095e && z5) ? s4.h.f("<b>", o6, "</b>") : o6;
    }

    public final void P(ip.l lVar, StringBuilder sb2, boolean z5) {
        hq.e name = lVar.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        sb2.append(O(name, z5));
    }

    public final void Q(StringBuilder sb2, y yVar) {
        b1 w02 = yVar.w0();
        yq.a aVar = w02 instanceof yq.a ? (yq.a) w02 : null;
        if (aVar == null) {
            R(sb2, yVar);
            return;
        }
        yq.c0 c0Var = aVar.f21008i;
        yq.c0 c0Var2 = aVar.f21007e;
        k kVar = this.f13052d;
        an.b bVar = kVar.R;
        KProperty[] kPropertyArr = k.Y;
        if (((Boolean) bVar.getValue(kVar, kPropertyArr[42])).booleanValue()) {
            R(sb2, c0Var2);
            if (((Boolean) kVar.S.getValue(kVar, kPropertyArr[43])).booleanValue()) {
                s r5 = r();
                q qVar = s.f13095e;
                if (r5 == qVar) {
                    sb2.append("<font color=\"808080\"><i>");
                }
                sb2.append(" /* ");
                sb2.append("from: ");
                R(sb2, c0Var);
                sb2.append(" */");
                if (r() == qVar) {
                    sb2.append("</i></font>");
                    return;
                }
                return;
            }
            return;
        }
        R(sb2, c0Var);
        if (((Boolean) kVar.Q.getValue(kVar, kPropertyArr[41])).booleanValue()) {
            s r7 = r();
            q qVar2 = s.f13095e;
            if (r7 == qVar2) {
                sb2.append("<font color=\"808080\"><i>");
            }
            sb2.append(" /* ");
            sb2.append("= ");
            R(sb2, c0Var2);
            sb2.append(" */");
            if (r() == qVar2) {
                sb2.append("</i></font>");
            }
        }
    }

    public final void R(StringBuilder sb2, y yVar) {
        hq.e eVar;
        String o6;
        k kVar = this.f13052d;
        if ((yVar instanceof a0) && kVar.n()) {
            xq.i iVar = ((a0) yVar).f21011v;
            if (iVar.f20542i == xq.k.f20546d || iVar.f20542i == xq.k.f20547e) {
                sb2.append("<Not computed yet>");
                return;
            }
        }
        b1 w02 = yVar.w0();
        if (w02 instanceof yq.s) {
            sb2.append(((yq.s) w02).B0(this, this));
            return;
        }
        if (!(w02 instanceof yq.c0)) {
            throw new fo.n();
        }
        yq.c0 c0Var = (yq.c0) w02;
        if (Intrinsics.areEqual(c0Var, z0.f21088b) || c0Var.r0() == z0.a.f2675e) {
            sb2.append("???");
            return;
        }
        p0 r02 = c0Var.r0();
        if ((r02 instanceof ar.j) && ((ar.j) r02).a == ar.k.G) {
            if (!((Boolean) kVar.f13077t.getValue(kVar, k.Y[18])).booleanValue()) {
                sb2.append("???");
                return;
            }
            p0 r03 = c0Var.r0();
            Intrinsics.checkNotNull(r03, "null cannot be cast to non-null type org.jetbrains.kotlin.types.error.ErrorTypeConstructor");
            sb2.append(D(((ar.j) r03).f2681b[0]));
            return;
        }
        if (yq.c.j(c0Var)) {
            C(sb2, c0Var);
            return;
        }
        if (!i0(c0Var)) {
            C(sb2, c0Var);
            return;
        }
        int length = sb2.length();
        ((h) this.f13053e.getValue()).x(sb2, c0Var, null);
        boolean z5 = sb2.length() != length;
        y v5 = nt.a.v(c0Var);
        List s2 = nt.a.s(c0Var);
        boolean B = nt.a.B(c0Var);
        boolean t02 = c0Var.t0();
        boolean z6 = t02 || (z5 && v5 != null);
        if (z6) {
            if (B) {
                sb2.insert(length, '(');
            } else {
                if (z5) {
                    CharsKt.b(b0.z(sb2));
                    if (sb2.charAt(StringsKt.H(sb2) - 1) != ')') {
                        sb2.insert(StringsKt.H(sb2), "()");
                    }
                }
                sb2.append("(");
            }
        }
        if (!s2.isEmpty()) {
            sb2.append("context(");
            Iterator it = s2.subList(0, c0.f(s2)).iterator();
            while (it.hasNext()) {
                Q(sb2, (y) it.next());
                sb2.append(", ");
            }
            Q(sb2, (y) CollectionsKt.Q(s2));
            sb2.append(") ");
        }
        N(sb2, B, "suspend");
        if (v5 != null) {
            boolean z7 = (i0(v5) && !v5.t0()) || nt.a.B(v5) || !v5.getAnnotations().isEmpty() || (v5 instanceof yq.o);
            if (z7) {
                sb2.append("(");
            }
            Q(sb2, v5);
            if (z7) {
                sb2.append(")");
            }
            sb2.append(".");
        }
        sb2.append("(");
        Intrinsics.checkNotNullParameter(c0Var, "<this>");
        if (!nt.a.y(c0Var) || c0Var.getAnnotations().Q(fp.o.f8896p) == null || c0Var.l0().size() > 1) {
            int i5 = 0;
            for (s0 typeProjection : nt.a.w(c0Var)) {
                int i6 = i5 + 1;
                if (i5 > 0) {
                    sb2.append(", ");
                }
                if (((Boolean) kVar.U.getValue(kVar, k.Y[45])).booleanValue()) {
                    y b10 = typeProjection.b();
                    Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
                    eVar = nt.a.o(b10);
                } else {
                    eVar = null;
                }
                if (eVar != null) {
                    sb2.append(O(eVar, false));
                    sb2.append(": ");
                }
                Intrinsics.checkNotNullParameter(typeProjection, "typeProjection");
                StringBuilder sb3 = new StringBuilder();
                CollectionsKt.N(kotlin.collections.b0.c(typeProjection), sb3, ", ", null, null, new g(this, 0), 60);
                sb2.append(sb3.toString());
                i5 = i6;
            }
        } else {
            sb2.append("???");
        }
        sb2.append(") ");
        int ordinal = r().ordinal();
        if (ordinal == 0) {
            o6 = o("->");
        } else {
            if (ordinal != 1) {
                throw new fo.n();
            }
            o6 = "&rarr;";
        }
        sb2.append(o6);
        sb2.append(" ");
        Intrinsics.checkNotNullParameter(c0Var, "<this>");
        nt.a.y(c0Var);
        y b11 = ((s0) CollectionsKt.Q(c0Var.l0())).b();
        Intrinsics.checkNotNullExpressionValue(b11, "getType(...)");
        Q(sb2, b11);
        if (z6) {
            sb2.append(")");
        }
        if (t02) {
            sb2.append("?");
        }
    }

    public final void S(ip.d dVar, StringBuilder sb2) {
        if (p().contains(i.f13058x) && !dVar.i().isEmpty()) {
            k kVar = this.f13052d;
            if (((n) kVar.B.getValue(kVar, k.Y[26])) != n.f13085e) {
                N(sb2, true, "override");
                if (t()) {
                    sb2.append("/*");
                    sb2.append(dVar.i().size());
                    sb2.append("*/ ");
                }
            }
        }
    }

    public final void T(StringBuilder sb2, e4.m mVar) {
        e4.m mVar2 = (e4.m) mVar.f7965v;
        ip.j jVar = (ip.j) mVar.f7963e;
        if (mVar2 != null) {
            T(sb2, mVar2);
            sb2.append('.');
            hq.e name = jVar.getName();
            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
            sb2.append(O(name, false));
        } else {
            p0 n6 = jVar.n();
            Intrinsics.checkNotNullExpressionValue(n6, "getTypeConstructor(...)");
            sb2.append(Z(n6));
        }
        sb2.append(Y((List) mVar.f7964i));
    }

    public final void U(ip.d dVar, StringBuilder sb2) {
        lp.u W = dVar.W();
        if (W != null) {
            x(sb2, W, jp.d.f13002y);
            y type = W.getType();
            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
            sb2.append(F(type));
            sb2.append(".");
        }
    }

    public final void V(ip.d dVar, StringBuilder sb2) {
        lp.u W;
        k kVar = this.f13052d;
        if (((Boolean) kVar.F.getValue(kVar, k.Y[30])).booleanValue() && (W = dVar.W()) != null) {
            sb2.append(" on ");
            y type = W.getType();
            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
            sb2.append(X(type));
        }
    }

    public final String X(y type) {
        Intrinsics.checkNotNullParameter(type, "type");
        StringBuilder sb2 = new StringBuilder();
        k kVar = this.f13052d;
        Q(sb2, (y) ((Function1) kVar.f13082y.getValue(kVar, k.Y[23])).invoke(type));
        return sb2.toString();
    }

    public final String Y(List typeArguments) {
        Intrinsics.checkNotNullParameter(typeArguments, "typeArguments");
        if (typeArguments.isEmpty()) {
            return "";
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(o("<"));
        CollectionsKt.N(typeArguments, sb2, ", ", null, null, new g(this, 0), 60);
        sb2.append(o(">"));
        return sb2.toString();
    }

    public final String Z(p0 typeConstructor) {
        Intrinsics.checkNotNullParameter(typeConstructor, "typeConstructor");
        ip.i klass = typeConstructor.a();
        if ((klass instanceof ip.s0) || (klass instanceof ip.f) || (klass instanceof ip.r0)) {
            Intrinsics.checkNotNullParameter(klass, "klass");
            if (ar.l.f(klass)) {
                return klass.n().toString();
            }
            k kVar = this.f13052d;
            return ((c) kVar.f13061b.getValue(kVar, k.Y[0])).a(klass, this);
        }
        if (klass == null) {
            return typeConstructor instanceof yq.x ? ((yq.x) typeConstructor).f(d.J) : typeConstructor.toString();
        }
        throw new IllegalStateException(("Unexpected classifier: " + klass.getClass()).toString());
    }

    @Override // jq.j
    public final void a() {
        this.f13052d.a();
    }

    public final void a0(ip.s0 s0Var, StringBuilder sb2, boolean z5) {
        if (z5) {
            sb2.append(o("<"));
        }
        if (t()) {
            sb2.append("/*");
            sb2.append(s0Var.getIndex());
            sb2.append("*/ ");
        }
        N(sb2, s0Var.v(), "reified");
        String str = s0Var.getVariance().f21017d;
        boolean z6 = true;
        N(sb2, str.length() > 0, str);
        x(sb2, s0Var, null);
        P(s0Var, sb2, z5);
        int size = s0Var.getUpperBounds().size();
        if ((size > 1 && !z5) || size == 1) {
            y yVar = (y) s0Var.getUpperBounds().iterator().next();
            if (yVar == null) {
                fp.i.a(141);
                throw null;
            }
            if (!fp.i.y(yVar) || !yVar.t0()) {
                sb2.append(" : ");
                Intrinsics.checkNotNull(yVar);
                sb2.append(X(yVar));
            }
        } else if (z5) {
            for (y yVar2 : s0Var.getUpperBounds()) {
                if (yVar2 == null) {
                    fp.i.a(141);
                    throw null;
                }
                if (!fp.i.y(yVar2) || !yVar2.t0()) {
                    if (z6) {
                        sb2.append(" : ");
                    } else {
                        sb2.append(" & ");
                    }
                    Intrinsics.checkNotNull(yVar2);
                    sb2.append(X(yVar2));
                    z6 = false;
                }
            }
        }
        if (z5) {
            sb2.append(o(">"));
        }
    }

    @Override // jq.j
    public final void b() {
        this.f13052d.b();
    }

    public final void b0(StringBuilder sb2, List list) {
        Iterator it = list.iterator();
        while (it.hasNext()) {
            a0((ip.s0) it.next(), sb2, false);
            if (it.hasNext()) {
                sb2.append(", ");
            }
        }
    }

    @Override // jq.j
    public final void c() {
        this.f13052d.c();
    }

    public final void c0(StringBuilder sb2, List list, boolean z5) {
        k kVar = this.f13052d;
        if (((Boolean) kVar.f13080w.getValue(kVar, k.Y[21])).booleanValue() || list.isEmpty()) {
            return;
        }
        sb2.append(o("<"));
        b0(sb2, list);
        sb2.append(o(">"));
        if (z5) {
            sb2.append(" ");
        }
    }

    @Override // jq.j
    public final void d(Set set) {
        Intrinsics.checkNotNullParameter(set, "<set-?>");
        this.f13052d.d(set);
    }

    public final void d0(v0 v0Var, StringBuilder sb2, boolean z5) {
        if (z5 || !(v0Var instanceof r0)) {
            sb2.append(I(v0Var.V() ? "var" : "val"));
            sb2.append(" ");
        }
    }

    @Override // jq.j
    public final void e(LinkedHashSet linkedHashSet) {
        Intrinsics.checkNotNullParameter(linkedHashSet, "<set-?>");
        this.f13052d.e(linkedHashSet);
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0065  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x008f  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x00a6  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x00df  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00f3  */
    /* JADX WARN: Removed duplicated region for block: B:45:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0091  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x008c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e0(r0 r0Var, boolean z5, StringBuilder sb2, boolean z6) {
        boolean z7;
        y type;
        if (z6) {
            sb2.append(I("value-parameter"));
            sb2.append(" ");
        }
        if (t()) {
            sb2.append("/*");
            sb2.append(r0Var.f14177y);
            sb2.append("*/ ");
        }
        x(sb2, r0Var, null);
        N(sb2, r0Var.F, "crossinline");
        N(sb2, r0Var.G, "noinline");
        k kVar = this.f13052d;
        an.b bVar = kVar.f13075r;
        KProperty[] kPropertyArr = k.Y;
        boolean z8 = false;
        if (((Boolean) bVar.getValue(kVar, kPropertyArr[16])).booleanValue()) {
            ip.b h6 = r0Var.h();
            lp.h hVar = h6 instanceof lp.h ? (lp.h) h6 : null;
            if (hVar != null && hVar.f14144b0) {
                z7 = true;
                if (z7) {
                    N(sb2, ((Boolean) kVar.f13076s.getValue(kVar, kPropertyArr[17])).booleanValue(), "actual");
                }
                type = r0Var.getType();
                Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                y yVar = r0Var.H;
                y yVar2 = yVar != null ? type : yVar;
                N(sb2, yVar == null, "vararg");
                if (!z7 || (z6 && !q())) {
                    d0(r0Var, sb2, z7);
                }
                if (z5) {
                    P(r0Var, sb2, z6);
                    sb2.append(": ");
                }
                sb2.append(X(yVar2));
                H(r0Var, sb2);
                if (t() && yVar != null) {
                    sb2.append(" /*");
                    sb2.append(X(type));
                    sb2.append("*/");
                }
                if (((Function1) kVar.f13083z.getValue(kVar, kPropertyArr[24])) != null) {
                    if (kVar.n() ? r0Var.C0() : oq.e.a(r0Var)) {
                        z8 = true;
                    }
                }
                if (z8) {
                    return;
                }
                StringBuilder sb3 = new StringBuilder(" = ");
                Function1 function1 = (Function1) kVar.f13083z.getValue(kVar, kPropertyArr[24]);
                Intrinsics.checkNotNull(function1);
                sb3.append((String) function1.invoke(r0Var));
                sb2.append(sb3.toString());
                return;
            }
        }
        z7 = false;
        if (z7) {
        }
        type = r0Var.getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        y yVar3 = r0Var.H;
        if (yVar3 != null) {
        }
        N(sb2, yVar3 == null, "vararg");
        if (!z7) {
        }
        d0(r0Var, sb2, z7);
        if (z5) {
        }
        sb2.append(X(yVar2));
        H(r0Var, sb2);
        if (t()) {
            sb2.append(" /*");
            sb2.append(X(type));
            sb2.append("*/");
        }
        if (((Function1) kVar.f13083z.getValue(kVar, kPropertyArr[24])) != null) {
        }
        if (z8) {
        }
    }

    @Override // jq.j
    public final void f() {
        this.f13052d.f();
    }

    /* JADX WARN: Code restructure failed: missing block: B:22:0x0025, code lost:
    
        if (r12 == false) goto L11;
     */
    /* JADX WARN: Removed duplicated region for block: B:10:0x0048  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void f0(StringBuilder builder, List list, boolean z5) {
        boolean z6;
        Iterator it;
        k kVar = this.f13052d;
        int ordinal = ((o) kVar.E.getValue(kVar, k.Y[29])).ordinal();
        if (ordinal != 0) {
            if (ordinal != 1) {
                if (ordinal != 2) {
                    throw new fo.n();
                }
            }
            z6 = false;
            int size = list.size();
            s().getClass();
            Intrinsics.checkNotNullParameter(builder, "builder");
            builder.append("(");
            it = list.iterator();
            int i5 = 0;
            while (it.hasNext()) {
                int i6 = i5 + 1;
                r0 parameter = (r0) it.next();
                s().getClass();
                Intrinsics.checkNotNullParameter(parameter, "parameter");
                Intrinsics.checkNotNullParameter(builder, "builder");
                e0(parameter, z6, builder, false);
                s().getClass();
                Intrinsics.checkNotNullParameter(parameter, "parameter");
                Intrinsics.checkNotNullParameter(builder, "builder");
                if (i5 != size - 1) {
                    builder.append(", ");
                }
                i5 = i6;
            }
            s().getClass();
            Intrinsics.checkNotNullParameter(builder, "builder");
            builder.append(")");
        }
        z6 = true;
        int size2 = list.size();
        s().getClass();
        Intrinsics.checkNotNullParameter(builder, "builder");
        builder.append("(");
        it = list.iterator();
        int i52 = 0;
        while (it.hasNext()) {
        }
        s().getClass();
        Intrinsics.checkNotNullParameter(builder, "builder");
        builder.append(")");
    }

    @Override // jq.j
    public final void g(c cVar) {
        Intrinsics.checkNotNullParameter(cVar, "<set-?>");
        this.f13052d.g(cVar);
    }

    public final boolean g0(ip.p pVar, StringBuilder sb2) {
        if (!p().contains(i.f13056v)) {
            return false;
        }
        k kVar = this.f13052d;
        an.b bVar = kVar.f13071n;
        KProperty[] kPropertyArr = k.Y;
        if (((Boolean) bVar.getValue(kVar, kPropertyArr[12])).booleanValue()) {
            pVar = ip.q.f(pVar.a.u());
            Intrinsics.checkNotNullExpressionValue(pVar, "toDescriptorVisibility(...)");
        }
        if (!((Boolean) kVar.f13072o.getValue(kVar, kPropertyArr[13])).booleanValue() && Intrinsics.areEqual(pVar, ip.q.j)) {
            return false;
        }
        sb2.append(I(pVar.a.s()));
        sb2.append(" ");
        return true;
    }

    @Override // jq.j
    public final void h(o oVar) {
        Intrinsics.checkNotNullParameter(oVar, "<set-?>");
        this.f13052d.h(oVar);
    }

    public final void h0(StringBuilder sb2, List list) {
        k kVar = this.f13052d;
        if (((Boolean) kVar.f13080w.getValue(kVar, k.Y[21])).booleanValue()) {
            return;
        }
        ArrayList arrayList = new ArrayList(0);
        Iterator it = list.iterator();
        while (it.hasNext()) {
            ip.s0 s0Var = (ip.s0) it.next();
            List upperBounds = s0Var.getUpperBounds();
            Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
            for (y yVar : CollectionsKt.F(1, upperBounds)) {
                StringBuilder sb3 = new StringBuilder();
                hq.e name = s0Var.getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                sb3.append(O(name, false));
                sb3.append(" : ");
                Intrinsics.checkNotNull(yVar);
                sb3.append(X(yVar));
                arrayList.add(sb3.toString());
            }
        }
        if (arrayList.isEmpty()) {
            return;
        }
        sb2.append(" ");
        sb2.append(I("where"));
        sb2.append(" ");
        CollectionsKt.N(arrayList, sb2, ", ", null, null, null, 124);
    }

    @Override // jq.j
    public final void i() {
        this.f13052d.i();
    }

    @Override // jq.j
    public final void j() {
        this.f13052d.j();
    }

    @Override // jq.j
    public final Set k() {
        return this.f13052d.k();
    }

    @Override // jq.j
    public final void l() {
        Intrinsics.checkNotNullParameter(s.f13095e, "<set-?>");
        this.f13052d.l();
    }

    @Override // jq.j
    public final void m() {
        this.f13052d.m();
    }

    public final String o(String str) {
        return r().a(str);
    }

    public final Set p() {
        k kVar = this.f13052d;
        return (Set) kVar.f13064e.getValue(kVar, k.Y[3]);
    }

    public final boolean q() {
        k kVar = this.f13052d;
        return ((Boolean) kVar.f13065f.getValue(kVar, k.Y[4])).booleanValue();
    }

    public final s r() {
        k kVar = this.f13052d;
        return (s) kVar.D.getValue(kVar, k.Y[28]);
    }

    public final e s() {
        k kVar = this.f13052d;
        return (e) kVar.C.getValue(kVar, k.Y[27]);
    }

    public final boolean t() {
        k kVar = this.f13052d;
        return ((Boolean) kVar.j.getValue(kVar, k.Y[8])).booleanValue();
    }

    public final String v(ip.l declarationDescriptor) {
        ip.l h6;
        Intrinsics.checkNotNullParameter(declarationDescriptor, "declarationDescriptor");
        StringBuilder sb2 = new StringBuilder();
        declarationDescriptor.e0(new ha.l(this), sb2);
        k kVar = this.f13052d;
        an.b bVar = kVar.f13062c;
        KProperty[] kPropertyArr = k.Y;
        if (((Boolean) bVar.getValue(kVar, kPropertyArr[1])).booleanValue() && !(declarationDescriptor instanceof f0) && !(declarationDescriptor instanceof ip.j0) && (h6 = declarationDescriptor.h()) != null && !(h6 instanceof ip.a0)) {
            sb2.append(" ");
            String str = "defined in";
            Intrinsics.checkNotNullParameter("defined in", "message");
            int ordinal = r().ordinal();
            if (ordinal != 0) {
                if (ordinal != 1) {
                    throw new fo.n();
                }
                str = "<i>defined in</i>";
            }
            sb2.append(str);
            sb2.append(" ");
            hq.d g6 = kq.e.g(h6);
            Intrinsics.checkNotNullExpressionValue(g6, "getFqName(...)");
            sb2.append(g6.c() ? "root package" : G(g6));
            if (((Boolean) kVar.f13063d.getValue(kVar, kPropertyArr[2])).booleanValue() && (h6 instanceof f0) && (declarationDescriptor instanceof ip.m)) {
                ((ip.m) declarationDescriptor).d().c();
            }
        }
        return sb2.toString();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final String w(jp.b annotation, jp.d dVar) {
        lp.h G;
        List P;
        k kVar = this.f13052d;
        an.b bVar = kVar.N;
        Intrinsics.checkNotNullParameter(annotation, "annotation");
        StringBuilder sb2 = new StringBuilder();
        sb2.append('@');
        if (dVar != null) {
            sb2.append(dVar.f13003d + ':');
        }
        y type = annotation.getType();
        sb2.append(X(type));
        KProperty[] kPropertyArr = k.Y;
        if (((a) bVar.getValue(kVar, kPropertyArr[38])).f13035d) {
            Map b10 = annotation.b();
            kotlin.collections.m0 m0Var = null;
            ip.f d6 = ((Boolean) kVar.I.getValue(kVar, kPropertyArr[33])).booleanValue() ? oq.e.d(annotation) : null;
            if (d6 != null && (G = d6.G()) != null && (P = G.P()) != null) {
                ArrayList arrayList = new ArrayList();
                for (Object obj : P) {
                    if (((r0) obj).C0()) {
                        arrayList.add(obj);
                    }
                }
                ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(arrayList, 10));
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    arrayList2.add(((r0) it.next()).getName());
                }
                m0Var = arrayList2;
            }
            if (m0Var == null) {
                m0Var = kotlin.collections.m0.f13512d;
            }
            ArrayList arrayList3 = new ArrayList();
            for (Object obj2 : m0Var) {
                if (!b10.containsKey((hq.e) obj2)) {
                    arrayList3.add(obj2);
                }
            }
            ArrayList arrayList4 = new ArrayList(kotlin.collections.d0.l(arrayList3, 10));
            Iterator it2 = arrayList3.iterator();
            while (it2.hasNext()) {
                arrayList4.add(((hq.e) it2.next()).b() + " = ...");
            }
            Set<Map.Entry> entrySet = b10.entrySet();
            ArrayList arrayList5 = new ArrayList(kotlin.collections.d0.l(entrySet, 10));
            for (Map.Entry entry : entrySet) {
                hq.e eVar = (hq.e) entry.getKey();
                mq.g gVar = (mq.g) entry.getValue();
                StringBuilder sb3 = new StringBuilder();
                sb3.append(eVar.b());
                sb3.append(" = ");
                sb3.append(!m0Var.contains(eVar) ? A(gVar) : "...");
                arrayList5.add(sb3.toString());
            }
            List d02 = CollectionsKt.d0(CollectionsKt.V(arrayList4, arrayList5));
            if (((a) bVar.getValue(kVar, k.Y[38])).f13036e || !d02.isEmpty()) {
                CollectionsKt.N(d02, sb2, ", ", "(", ")", null, 112);
            }
        }
        if (t() && (yq.c.j(type) || (type.r0().a() instanceof e0))) {
            sb2.append(" /* annotation class not found */");
        }
        return sb2.toString();
    }

    public final void x(StringBuilder sb2, jp.a aVar, jp.d dVar) {
        if (p().contains(i.f13059y)) {
            boolean z5 = aVar instanceof y;
            k kVar = this.f13052d;
            Set k = z5 ? kVar.k() : (Set) kVar.K.getValue(kVar, k.Y[35]);
            Function1 function1 = (Function1) kVar.M.getValue(kVar, k.Y[37]);
            for (jp.b bVar : aVar.getAnnotations()) {
                if (!CollectionsKt.E(k, bVar.a()) && !Intrinsics.areEqual(bVar.a(), fp.o.f8898r) && (function1 == null || ((Boolean) function1.invoke(bVar)).booleanValue())) {
                    sb2.append(w(bVar, dVar));
                    if (((Boolean) kVar.J.getValue(kVar, k.Y[34])).booleanValue()) {
                        sb2.append('\n');
                    } else {
                        sb2.append(" ");
                    }
                }
            }
        }
    }

    public final void z(ip.j jVar, StringBuilder sb2) {
        List l6 = jVar.l();
        Intrinsics.checkNotNullExpressionValue(l6, "getDeclaredTypeParameters(...)");
        List parameters = jVar.n().getParameters();
        Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
        if (t() && jVar.A() && parameters.size() > l6.size()) {
            sb2.append(" /*captured type parameters: ");
            b0(sb2, parameters.subList(l6.size(), parameters.size()));
            sb2.append("*/");
        }
    }
}
