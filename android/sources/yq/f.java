package yq;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f {
    public static final f a = new f();

    /* renamed from: b, reason: collision with root package name */
    public static final f f21033b = new f();

    public static final boolean a(zq.b bVar, cr.e eVar) {
        b1 r02;
        c0 L;
        return bVar.x0(eVar) || ((eVar instanceof cr.c) && (r02 = bVar.r0(bVar.V(bVar.Y((cr.c) eVar)))) != null && (L = bVar.L(r02)) != null && bVar.x0(L));
    }

    public static final boolean b(zq.b bVar, o0 o0Var, cr.e eVar, cr.e eVar2, boolean z5) {
        Collection<cr.d> k02 = bVar.k0(eVar);
        if ((k02 instanceof Collection) && k02.isEmpty()) {
            return false;
        }
        for (cr.d dVar : k02) {
            if (Intrinsics.areEqual(bVar.B0(dVar), bVar.w0(eVar2))) {
                return true;
            }
            if (z5 && k(a, o0Var, eVar2, dVar)) {
                return true;
            }
        }
        return false;
    }

    public static List c(o0 o0Var, cr.e eVar, cr.h hVar) {
        c v5;
        n0 n0Var = n0.f21052c;
        zq.b bVar = o0Var.f21057c;
        bVar.m0(eVar, hVar);
        if (!bVar.j(hVar) && bVar.P(eVar)) {
            return kotlin.collections.m0.f13512d;
        }
        if (bVar.k(hVar)) {
            if (!bVar.h0(bVar.w0(eVar), hVar)) {
                return kotlin.collections.m0.f13512d;
            }
            cr.b bVar2 = cr.b.f7316d;
            c0 t02 = bVar.t0(eVar);
            if (t02 != null) {
                eVar = t02;
            }
            return kotlin.collections.b0.c(eVar);
        }
        ir.h hVar2 = new ir.h();
        o0Var.c();
        ArrayDeque arrayDeque = o0Var.f21061g;
        Intrinsics.checkNotNull(arrayDeque);
        ir.k kVar = o0Var.f21062h;
        Intrinsics.checkNotNull(kVar);
        arrayDeque.push(eVar);
        while (!arrayDeque.isEmpty()) {
            cr.e eVar2 = (cr.e) arrayDeque.pop();
            Intrinsics.checkNotNull(eVar2);
            if (kVar.add(eVar2)) {
                cr.b bVar3 = cr.b.f7316d;
                c0 t03 = bVar.t0(eVar2);
                if (t03 == null) {
                    t03 = eVar2;
                }
                if (bVar.h0(bVar.w0(t03), hVar)) {
                    hVar2.add(t03);
                    v5 = n0Var;
                } else {
                    v5 = bVar.e0(t03) == 0 ? n0.f21051b : bVar.v(t03);
                }
                if (Intrinsics.areEqual(v5, n0Var)) {
                    v5 = null;
                }
                if (v5 != null) {
                    Iterator it = bVar.f(bVar.w0(eVar2)).iterator();
                    while (it.hasNext()) {
                        arrayDeque.add(v5.D(o0Var, (cr.d) it.next()));
                    }
                }
            }
        }
        o0Var.a();
        return hVar2;
    }

    public static List d(o0 o0Var, cr.e eVar, cr.h hVar) {
        int i5;
        List c6 = c(o0Var, eVar, hVar);
        zq.b bVar = o0Var.f21057c;
        if (c6.size() >= 2) {
            ArrayList arrayList = new ArrayList();
            for (Object obj : c6) {
                cr.g l02 = bVar.l0((cr.e) obj);
                int y02 = bVar.y0(l02);
                while (true) {
                    if (i5 >= y02) {
                        arrayList.add(obj);
                        break;
                    }
                    b1 r02 = bVar.r0(bVar.X(l02, i5));
                    i5 = (r02 != null ? bVar.J0(r02) : null) == null ? i5 + 1 : 0;
                }
            }
            if (!arrayList.isEmpty()) {
                return arrayList;
            }
        }
        return c6;
    }

    /* JADX WARN: Code restructure failed: missing block: B:249:0x0299, code lost:
    
        r10 = java.lang.Boolean.TRUE;
     */
    /* JADX WARN: Code restructure failed: missing block: B:253:0x0297, code lost:
    
        if (b(r1, r17, r3, r2, true) != false) goto L157;
     */
    /* JADX WARN: Removed duplicated region for block: B:78:0x029d  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x02a8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean e(o0 state, cr.d dVar, cr.d dVar2) {
        Boolean valueOf;
        Boolean bool;
        List<cr.e> list;
        n0 n0Var;
        boolean z5;
        b1 r02;
        boolean z6;
        zq.b context = state.f21057c;
        b1 subType = state.d(state.e(dVar));
        b1 superType = state.d(state.e(dVar2));
        c0 subType2 = context.i0(subType);
        c0 L = context.L(superType);
        boolean z7 = false;
        if (!context.I0(subType2) && !context.I0(L)) {
            context.K(subType2);
            context.c(subType2);
            context.c(L);
            cr.c superType2 = context.I(L);
            cr.d S = superType2 != null ? context.S(superType2) : null;
            f fVar = a;
            if (superType2 != null && S != null) {
                if (context.B(L)) {
                    S = context.U(S);
                } else if (context.E(L)) {
                    S = context.p(S);
                }
                Intrinsics.checkNotNullParameter(subType2, "subType");
                Intrinsics.checkNotNullParameter(superType2, "superType");
                m0[] m0VarArr = m0.f21050d;
                if (k(fVar, state, subType2, S)) {
                    valueOf = Boolean.TRUE;
                }
            }
            p0 w02 = context.w0(L);
            if (context.u(w02)) {
                context.B(L);
                Collection f2 = context.f(w02);
                if (!(f2 instanceof Collection) || !f2.isEmpty()) {
                    Iterator it = f2.iterator();
                    while (it.hasNext()) {
                        if (!k(fVar, state, subType2, (cr.d) it.next())) {
                            z6 = false;
                            break;
                        }
                    }
                }
                z6 = true;
                valueOf = Boolean.valueOf(z6);
            } else {
                p0 w03 = context.w0(subType2);
                if (!(subType2 instanceof cr.c)) {
                    if (context.u(w03)) {
                        Collection f10 = context.f(w03);
                        if (!(f10 instanceof Collection) || !f10.isEmpty()) {
                            Iterator it2 = f10.iterator();
                            while (it2.hasNext()) {
                                if (!(((cr.d) it2.next()) instanceof cr.c)) {
                                    break;
                                }
                            }
                        }
                    }
                    valueOf = null;
                }
                ip.s0 h6 = h(context, L, subType2);
                if (h6 != null && context.z0(h6, context.w0(L))) {
                    valueOf = Boolean.TRUE;
                }
                valueOf = null;
            }
        } else if (state.a) {
            valueOf = Boolean.TRUE;
        } else if (!context.B(subType2) || context.B(L)) {
            c0 a10 = context.i(subType2);
            c0 b10 = context.i(L);
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(a10, "a");
            Intrinsics.checkNotNullParameter(b10, "b");
            valueOf = Boolean.valueOf(c.z(context, a10, b10));
        } else {
            valueOf = Boolean.FALSE;
        }
        if (valueOf != null) {
            boolean booleanValue = valueOf.booleanValue();
            Intrinsics.checkNotNullParameter(subType, "subType");
            Intrinsics.checkNotNullParameter(superType, "superType");
            return booleanValue;
        }
        Intrinsics.checkNotNullParameter(subType, "subType");
        Intrinsics.checkNotNullParameter(superType, "superType");
        cr.e subType3 = context.i0(subType);
        c0 superType3 = context.L(superType);
        n0 n0Var2 = n0.f21052c;
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(subType3, "subType");
        Intrinsics.checkNotNullParameter(superType3, "superType");
        n0 n0Var3 = n0.f21051b;
        if (!context.B(superType3) && !context.E(subType3) && !context.K0(subType3) && ((!(subType3 instanceof cr.c) || !context.y((cr.c) subType3)) && !c.g(state, subType3, n0Var3))) {
            if (context.E(superType3) || c.g(state, superType3, n0.f21053d) || context.P(subType3)) {
                return false;
            }
            p0 end = context.w0(superType3);
            Intrinsics.checkNotNullParameter(state, "state");
            Intrinsics.checkNotNullParameter(subType3, "start");
            Intrinsics.checkNotNullParameter(end, "end");
            if (!c.i(state, subType3, end)) {
                state.c();
                ArrayDeque arrayDeque = state.f21061g;
                Intrinsics.checkNotNull(arrayDeque);
                ir.k kVar = state.f21062h;
                Intrinsics.checkNotNull(kVar);
                arrayDeque.push(subType3);
                while (!arrayDeque.isEmpty()) {
                    cr.e eVar = (cr.e) arrayDeque.pop();
                    Intrinsics.checkNotNull(eVar);
                    if (kVar.add(eVar)) {
                        n0 n0Var4 = context.B(eVar) ? n0Var2 : n0Var3;
                        if (Intrinsics.areEqual(n0Var4, n0Var2)) {
                            n0Var4 = null;
                        }
                        if (n0Var4 == null) {
                            continue;
                        } else {
                            Iterator it3 = context.f(context.w0(eVar)).iterator();
                            while (it3.hasNext()) {
                                cr.e D = n0Var4.D(state, (cr.d) it3.next());
                                if (c.i(state, D, end)) {
                                    state.a();
                                } else {
                                    arrayDeque.add(D);
                                }
                            }
                        }
                    }
                }
                state.a();
                return false;
            }
        }
        if (context.x0(subType3) || context.x0(superType3)) {
            if (a(context, subType3) && a(context, superType3)) {
                bool = Boolean.TRUE;
            } else if (!context.x0(subType3)) {
                if (context.x0(superType3)) {
                    p0 w04 = context.w0(subType3);
                    if (w04 instanceof x) {
                        Collection f11 = context.f(w04);
                        if (!(f11 instanceof Collection) || !f11.isEmpty()) {
                            Iterator it4 = f11.iterator();
                            while (it4.hasNext()) {
                                c0 A0 = context.A0((cr.d) it4.next());
                                if (A0 != null && context.x0(A0)) {
                                    break;
                                }
                            }
                        }
                    }
                }
            } else if (b(context, state, subType3, superType3, false)) {
                bool = Boolean.TRUE;
            }
            if (bool == null) {
                boolean booleanValue2 = bool.booleanValue();
                Intrinsics.checkNotNullParameter(subType3, "subType");
                Intrinsics.checkNotNullParameter(superType3, "superType");
                return booleanValue2;
            }
            p0 superConstructor = context.w0(superType3);
            if ((context.h0(context.w0(subType3), superConstructor) && context.u0(superConstructor) == 0) || context.Q(context.w0(superType3))) {
                return true;
            }
            Intrinsics.checkNotNullParameter(state, "state");
            Intrinsics.checkNotNullParameter(subType3, "subType");
            Intrinsics.checkNotNullParameter(superConstructor, "superConstructor");
            if (context.P(subType3)) {
                list = d(state, subType3, superConstructor);
            } else if (context.j(superConstructor) || context.o(superConstructor)) {
                ir.h hVar = new ir.h();
                state.c();
                ArrayDeque arrayDeque2 = state.f21061g;
                Intrinsics.checkNotNull(arrayDeque2);
                ir.k kVar2 = state.f21062h;
                Intrinsics.checkNotNull(kVar2);
                arrayDeque2.push(subType3);
                while (!arrayDeque2.isEmpty()) {
                    cr.e eVar2 = (cr.e) arrayDeque2.pop();
                    Intrinsics.checkNotNull(eVar2);
                    if (kVar2.add(eVar2)) {
                        if (context.P(eVar2)) {
                            hVar.add(eVar2);
                            n0Var = n0Var2;
                        } else {
                            n0Var = n0Var3;
                        }
                        if (Intrinsics.areEqual(n0Var, n0Var2)) {
                            n0Var = null;
                        }
                        if (n0Var != null) {
                            Iterator it5 = context.f(context.w0(eVar2)).iterator();
                            while (it5.hasNext()) {
                                arrayDeque2.add(n0Var.D(state, (cr.d) it5.next()));
                            }
                        }
                    }
                }
                state.a();
                ArrayList arrayList = new ArrayList();
                Iterator it6 = hVar.iterator();
                while (it6.hasNext()) {
                    cr.e eVar3 = (cr.e) it6.next();
                    Intrinsics.checkNotNull(eVar3);
                    kotlin.collections.h0.o(arrayList, d(state, eVar3, superConstructor));
                }
                list = arrayList;
            } else {
                list = c(state, subType3, superConstructor);
            }
            list.size();
            int i5 = 10;
            ArrayList<cr.e> arrayList2 = new ArrayList(kotlin.collections.d0.l(list, 10));
            for (cr.e eVar4 : list) {
                c0 A02 = context.A0(state.d(eVar4));
                if (A02 != null) {
                    eVar4 = A02;
                }
                arrayList2.add(eVar4);
            }
            int size = arrayList2.size();
            if (size == 0) {
                p0 w05 = context.w0(subType3);
                if (context.j(w05)) {
                    return context.w(w05);
                }
                if (context.w(context.w0(subType3))) {
                    return true;
                }
                state.c();
                ArrayDeque arrayDeque3 = state.f21061g;
                Intrinsics.checkNotNull(arrayDeque3);
                ir.k kVar3 = state.f21062h;
                Intrinsics.checkNotNull(kVar3);
                arrayDeque3.push(subType3);
                while (!arrayDeque3.isEmpty()) {
                    cr.e eVar5 = (cr.e) arrayDeque3.pop();
                    Intrinsics.checkNotNull(eVar5);
                    if (kVar3.add(eVar5)) {
                        n0 n0Var5 = context.P(eVar5) ? n0Var2 : n0Var3;
                        if (Intrinsics.areEqual(n0Var5, n0Var2)) {
                            n0Var5 = null;
                        }
                        if (n0Var5 == null) {
                            continue;
                        } else {
                            Iterator it7 = context.f(context.w0(eVar5)).iterator();
                            while (it7.hasNext()) {
                                cr.e D2 = n0Var5.D(state, (cr.d) it7.next());
                                if (context.w(context.w0(D2))) {
                                    state.a();
                                    return true;
                                }
                                arrayDeque3.add(D2);
                            }
                        }
                    }
                }
                state.a();
                return false;
            }
            if (size == 1) {
                return j(state, context.l0((cr.e) CollectionsKt.J(arrayList2)), superType3);
            }
            cr.a aVar = new cr.a(context.u0(superConstructor));
            int u02 = context.u0(superConstructor);
            int i6 = 0;
            boolean z8 = false;
            while (i6 < u02) {
                z8 = (z8 || context.A(context.W(superConstructor, i6)) != cr.i.f7319i) ? true : z7;
                if (z8) {
                    z5 = z7;
                } else {
                    ArrayList arrayList3 = new ArrayList(kotlin.collections.d0.l(arrayList2, i5));
                    for (cr.e eVar6 : arrayList2) {
                        s0 T = context.T(eVar6, i6);
                        if (T != null) {
                            boolean z10 = z7;
                            if (context.v0(T) != cr.i.f7320v) {
                                T = null;
                            }
                            if (T != null && (r02 = context.r0(T)) != null) {
                                arrayList3.add(r02);
                                z7 = z10;
                            }
                        }
                        throw new IllegalStateException(("Incorrect type: " + eVar6 + ", subType: " + subType3 + ", superType: " + superType3).toString());
                    }
                    z5 = z7;
                    aVar.add(context.b(context.c0(arrayList3)));
                }
                i6++;
                z7 = z5;
                i5 = 10;
            }
            if (!z8 && j(state, aVar, superType3)) {
                return true;
            }
            d block = new d(arrayList2, state, context, superType3);
            Intrinsics.checkNotNullParameter(block, "block");
            l0 l0Var = new l0();
            block.invoke(l0Var);
            return l0Var.a;
        }
        bool = null;
        if (bool == null) {
        }
    }

    public static boolean g(o0 state, cr.d a10, cr.d b10) {
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(a10, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        zq.b bVar = state.f21057c;
        if (a10 == b10) {
            return true;
        }
        if (i(bVar, a10) && i(bVar, b10)) {
            b1 d6 = state.d(state.e(a10));
            b1 d7 = state.d(state.e(b10));
            c0 i02 = bVar.i0(d6);
            if (!bVar.h0(bVar.B0(d6), bVar.B0(d7))) {
                return false;
            }
            if (bVar.e0(i02) == 0) {
                return bVar.L0(d6) || bVar.L0(d7) || bVar.B(i02) == bVar.B(bVar.i0(d7));
            }
        }
        f fVar = a;
        return k(fVar, state, a10, b10) && k(fVar, state, b10, a10);
    }

    public static ip.s0 h(zq.b bVar, cr.d dVar, cr.d dVar2) {
        b1 r02;
        int e02 = bVar.e0(dVar);
        int i5 = 0;
        while (true) {
            if (i5 >= e02) {
                return null;
            }
            s0 F = bVar.F(dVar, i5);
            s0 s0Var = bVar.t(F) ? null : F;
            if (s0Var != null && (r02 = bVar.r0(s0Var)) != null) {
                boolean z5 = bVar.M(bVar.i0(r02)) && bVar.M(bVar.i0(dVar2));
                if (Intrinsics.areEqual(r02, dVar2) || (z5 && Intrinsics.areEqual(bVar.B0(r02), bVar.B0(dVar2)))) {
                    break;
                }
                ip.s0 h6 = h(bVar, r02, dVar2);
                if (h6 != null) {
                    return h6;
                }
            }
            i5++;
        }
        return bVar.W(bVar.B0(dVar), i5);
    }

    public static boolean i(zq.b bVar, cr.d dVar) {
        if (!bVar.E0(bVar.B0(dVar))) {
            return false;
        }
        bVar.j0(dVar);
        return (bVar.l(dVar) || bVar.K0(dVar) || bVar.p0(dVar)) ? false : true;
    }

    public static boolean j(o0 o0Var, cr.g capturedSubArguments, cr.e superType) {
        boolean k;
        Intrinsics.checkNotNullParameter(o0Var, "<this>");
        Intrinsics.checkNotNullParameter(capturedSubArguments, "capturedSubArguments");
        Intrinsics.checkNotNullParameter(superType, "superType");
        zq.b bVar = o0Var.f21057c;
        p0 w02 = bVar.w0(superType);
        int y02 = bVar.y0(capturedSubArguments);
        int u02 = bVar.u0(w02);
        if (y02 == u02 && y02 == bVar.e0(superType)) {
            for (int i5 = 0; i5 < u02; i5++) {
                s0 F = bVar.F(superType, i5);
                b1 r02 = bVar.r0(F);
                if (r02 != null) {
                    s0 X = bVar.X(capturedSubArguments, i5);
                    bVar.v0(X);
                    cr.i iVar = cr.i.f7320v;
                    b1 r03 = bVar.r0(X);
                    Intrinsics.checkNotNull(r03);
                    cr.i declared = bVar.A(bVar.W(w02, i5));
                    cr.i useSite = bVar.v0(F);
                    Intrinsics.checkNotNullParameter(declared, "declared");
                    Intrinsics.checkNotNullParameter(useSite, "useSite");
                    if (declared == iVar) {
                        declared = useSite;
                    } else if (useSite != iVar && declared != useSite) {
                        declared = null;
                    }
                    if (declared == null) {
                        return o0Var.a;
                    }
                    if (declared == iVar) {
                        l(bVar, r03, r02);
                        l(bVar, r02, r03);
                    }
                    int i6 = o0Var.f21060f;
                    if (i6 > 100) {
                        throw new IllegalStateException(("Arguments depth is too high. Some related argument: " + r03).toString());
                    }
                    o0Var.f21060f = i6 + 1;
                    int ordinal = declared.ordinal();
                    f fVar = a;
                    if (ordinal == 0) {
                        k = k(fVar, o0Var, r02, r03);
                    } else if (ordinal == 1) {
                        k = k(fVar, o0Var, r03, r02);
                    } else {
                        if (ordinal != 2) {
                            throw new fo.n();
                        }
                        k = g(o0Var, r03, r02);
                    }
                    o0Var.f21060f--;
                    if (!k) {
                    }
                }
            }
            return true;
        }
        return false;
    }

    public static boolean k(f fVar, o0 state, cr.d subType, cr.d superType) {
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(subType, "subType");
        Intrinsics.checkNotNullParameter(superType, "superType");
        if (subType == superType) {
            return true;
        }
        if (state.b(subType, superType)) {
            return e(state, subType, superType);
        }
        return false;
    }

    public static void l(zq.b bVar, cr.d dVar, cr.d dVar2) {
        cr.g A0 = bVar.A0(dVar);
        if (A0 instanceof cr.c) {
            cr.c cVar = (cr.c) A0;
            if (!bVar.b0(cVar) && bVar.t(bVar.V(bVar.Y(cVar))) && bVar.G(cVar) == cr.b.f7316d) {
                bVar.B0(dVar2);
            }
        }
    }

    public static o m(b1 type, boolean z5) {
        boolean z6;
        Intrinsics.checkNotNullParameter(type, "type");
        if (type instanceof o) {
            return (o) type;
        }
        type.r0();
        if ((type.r0().a() instanceof ip.s0) || (type instanceof zq.h)) {
            ip.i a10 = type.r0().a();
            lp.p0 p0Var = a10 instanceof lp.p0 ? (lp.p0) a10 : null;
            z6 = true;
            if (p0Var == null || p0Var.J) {
                if (z5 && (type.r0().a() instanceof ip.s0)) {
                    z6 = z0.e(type);
                } else {
                    Intrinsics.checkNotNullParameter(type, "type");
                    z6 = true ^ c.g(zq.n.f21398d.m(), c.l(type), n0.f21051b);
                }
            }
        } else {
            z6 = false;
        }
        if (!z6) {
            return null;
        }
        if (type instanceof s) {
            s sVar = (s) type;
            Intrinsics.areEqual(sVar.f21068e.r0(), sVar.f21069i.r0());
        }
        return new o(c.l(type).x0(false), z5);
    }

    public u0 f(p0 typeConstructor, List argumentsList) {
        Intrinsics.checkNotNullParameter(typeConstructor, "typeConstructor");
        Intrinsics.checkNotNullParameter(argumentsList, "arguments");
        List parameters = typeConstructor.getParameters();
        Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
        ip.s0 s0Var = (ip.s0) CollectionsKt.S(parameters);
        if (s0Var == null || !s0Var.Y()) {
            Intrinsics.checkNotNullParameter(parameters, "parameters");
            Intrinsics.checkNotNullParameter(argumentsList, "argumentsList");
            return new v((ip.s0[]) parameters.toArray(new ip.s0[0]), (s0[]) argumentsList.toArray(new s0[0]), false);
        }
        List parameters2 = typeConstructor.getParameters();
        Intrinsics.checkNotNullExpressionValue(parameters2, "getParameters(...)");
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(parameters2, 10));
        Iterator it = parameters2.iterator();
        while (it.hasNext()) {
            arrayList.add(((ip.s0) it.next()).n());
        }
        Map map = kotlin.collections.v0.m(CollectionsKt.n0(arrayList, argumentsList));
        Intrinsics.checkNotNullParameter(map, "map");
        return new i0(1, map);
    }
}
