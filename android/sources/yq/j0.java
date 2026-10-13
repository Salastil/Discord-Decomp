package yq;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j0 {
    static {
        new j0();
    }

    public j0() {
        f reportStrategy = f.f21033b;
        Intrinsics.checkNotNullParameter(reportStrategy, "reportStrategy");
    }

    public final void a(jp.h hVar, jp.h hVar2) {
        HashSet hashSet = new HashSet();
        Iterator it = hVar.iterator();
        while (it.hasNext()) {
            hashSet.add(((jp.b) it.next()).a());
        }
        Iterator it2 = hVar2.iterator();
        while (it2.hasNext()) {
            jp.b annotation = (jp.b) it2.next();
            if (hashSet.contains(annotation.a())) {
                Intrinsics.checkNotNullParameter(annotation, "annotation");
            }
        }
    }

    public final c0 b(e4.i iVar, k0 k0Var, boolean z5, int i5, boolean z6) {
        k0 g6;
        c1 c1Var = c1.f21013i;
        ip.r0 r0Var = (ip.r0) iVar.f7953e;
        s0 c6 = c(new h0(((wq.t) r0Var).D0(), c1Var), iVar, null, i5);
        y b10 = c6.b();
        Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
        c0 b11 = c.b(b10);
        if (c.j(b11)) {
            return b11;
        }
        c6.a();
        a(b11.getAnnotations(), k.a(k0Var));
        if (!c.j(b11)) {
            if (c.j(b11)) {
                g6 = b11.q0();
            } else {
                k0 other = b11.q0();
                e4.r rVar = k0.f21045e;
                Intrinsics.checkNotNullParameter(other, "other");
                if (k0Var.isEmpty() && other.isEmpty()) {
                    g6 = k0Var;
                } else {
                    ArrayList arrayList = new ArrayList();
                    Collection values = ((ConcurrentHashMap) rVar.f8000e).values();
                    Intrinsics.checkNotNullExpressionValue(values, "<get-values>(...)");
                    Iterator it = values.iterator();
                    while (it.hasNext()) {
                        int intValue = ((Number) it.next()).intValue();
                        j jVar = (j) k0Var.f9009d.get(intValue);
                        j jVar2 = (j) other.f9009d.get(intValue);
                        if (jVar != null) {
                            if (jVar2 != null) {
                                jVar = new j(ks.n.f(jVar.a, jVar2.a));
                            }
                            jVar2 = jVar;
                        } else if (jVar2 == null) {
                            jVar2 = null;
                        } else if (jVar != null) {
                            jVar2 = new j(ks.n.f(jVar2.a, jVar.a));
                        }
                        ir.n.b(arrayList, jVar2);
                    }
                    g6 = e4.r.g(arrayList);
                }
            }
            b11 = c.q(b11, null, g6, 1);
        }
        c0 i6 = z0.i(b11, z5);
        Intrinsics.checkNotNullExpressionValue(i6, "let(...)");
        if (!z6) {
            return i6;
        }
        lp.d dVar = ((lp.e) r0Var).F;
        Intrinsics.checkNotNullExpressionValue(dVar, "getTypeConstructor(...)");
        return c.F(i6, c.v((List) iVar.f7954i, rq.n.f17557b, k0Var, dVar, z5));
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final s0 c(s0 s0Var, e4.i iVar, ip.s0 s0Var2, int i5) {
        c1 c1Var;
        c1 c1Var2;
        c1 c1Var3;
        ip.l typeAlias = (ip.r0) iVar.f7953e;
        if (i5 > 100) {
            throw new AssertionError("Too deep recursion while expanding type alias " + ((lp.l) typeAlias).getName());
        }
        if (s0Var.c()) {
            Intrinsics.checkNotNull(s0Var2);
            h0 j = z0.j(s0Var2);
            Intrinsics.checkNotNullExpressionValue(j, "makeStarProjection(...)");
            return j;
        }
        y b10 = s0Var.b();
        Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
        p0 constructor = b10.r0();
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        ip.i a = constructor.a();
        s0 s0Var3 = a instanceof ip.s0 ? (s0) ((Map) iVar.f7955v).get(a) : null;
        if (s0Var3 != null) {
            if (s0Var3.c()) {
                Intrinsics.checkNotNull(s0Var2);
                h0 j5 = z0.j(s0Var2);
                Intrinsics.checkNotNullExpressionValue(j5, "makeStarProjection(...)");
                return j5;
            }
            b1 substitutedArgument = s0Var3.b().w0();
            c1 a10 = s0Var3.a();
            Intrinsics.checkNotNullExpressionValue(a10, "getProjectionKind(...)");
            c1 a11 = s0Var.a();
            Intrinsics.checkNotNullExpressionValue(a11, "getProjectionKind(...)");
            if (a11 != a10 && a11 != (c1Var3 = c1.f21013i)) {
                if (a10 == c1Var3) {
                    a10 = a11;
                } else {
                    Intrinsics.checkNotNullParameter(typeAlias, "typeAlias");
                    Intrinsics.checkNotNullParameter(substitutedArgument, "substitutedArgument");
                }
            }
            if (s0Var2 == null || (c1Var = s0Var2.getVariance()) == null) {
                c1Var = c1.f21013i;
            }
            if (c1Var != a10 && c1Var != (c1Var2 = c1.f21013i)) {
                if (a10 == c1Var2) {
                    a10 = c1Var2;
                } else {
                    Intrinsics.checkNotNullParameter(typeAlias, "typeAlias");
                    Intrinsics.checkNotNullParameter(substitutedArgument, "substitutedArgument");
                }
            }
            a(b10.getAnnotations(), substitutedArgument.getAnnotations());
            c0 i6 = z0.i(c.b(substitutedArgument), b10.t0());
            Intrinsics.checkNotNullExpressionValue(i6, "makeNullableIfNeeded(...)");
            k0 q02 = b10.q0();
            if (!c.j(i6)) {
                if (c.j(i6)) {
                    q02 = i6.q0();
                } else {
                    k0 other = i6.q0();
                    q02.getClass();
                    e4.r rVar = k0.f21045e;
                    Intrinsics.checkNotNullParameter(other, "other");
                    if (!q02.isEmpty() || !other.isEmpty()) {
                        ArrayList arrayList = new ArrayList();
                        Collection values = ((ConcurrentHashMap) rVar.f8000e).values();
                        Intrinsics.checkNotNullExpressionValue(values, "<get-values>(...)");
                        Iterator it = values.iterator();
                        while (it.hasNext()) {
                            int intValue = ((Number) it.next()).intValue();
                            j jVar = (j) q02.f9009d.get(intValue);
                            j jVar2 = (j) other.f9009d.get(intValue);
                            if (jVar != null) {
                                if (jVar2 != null) {
                                    jVar = new j(ks.n.f(jVar.a, jVar2.a));
                                }
                                jVar2 = jVar;
                            } else if (jVar2 == null) {
                                jVar2 = null;
                            } else if (jVar != null) {
                                jVar2 = new j(ks.n.f(jVar2.a, jVar.a));
                            }
                            ir.n.b(arrayList, jVar2);
                        }
                        q02 = e4.r.g(arrayList);
                    }
                }
                i6 = c.q(i6, null, q02, 1);
            }
            return new h0(i6, a10);
        }
        b1 w02 = s0Var.b().w0();
        Intrinsics.checkNotNullParameter(w02, "<this>");
        w02.w0();
        c0 b11 = c.b(w02);
        if (!c.j(b11)) {
            Intrinsics.checkNotNullParameter(b11, "<this>");
            dr.a predicate = dr.a.f7689i;
            Intrinsics.checkNotNullParameter(b11, "<this>");
            Intrinsics.checkNotNullParameter(predicate, "predicate");
            if (z0.c(b11, predicate, null)) {
                p0 r02 = b11.r0();
                ip.i a12 = r02.a();
                r02.getParameters().size();
                b11.l0().size();
                if (!(a12 instanceof ip.s0)) {
                    int i10 = 0;
                    if (!(a12 instanceof ip.r0)) {
                        c0 d6 = d(b11, iVar, i5);
                        Intrinsics.checkNotNullExpressionValue(w0.d(d6), "create(...)");
                        for (Object obj : d6.l0()) {
                            int i11 = i10 + 1;
                            if (i10 < 0) {
                                kotlin.collections.c0.k();
                                throw null;
                            }
                            s0 s0Var4 = (s0) obj;
                            if (!s0Var4.c()) {
                                y b12 = s0Var4.b();
                                Intrinsics.checkNotNullExpressionValue(b12, "getType(...)");
                                Intrinsics.checkNotNullParameter(b12, "<this>");
                                dr.a predicate2 = dr.a.f7688e;
                                Intrinsics.checkNotNullParameter(b12, "<this>");
                                Intrinsics.checkNotNullParameter(predicate2, "predicate");
                                if (!z0.c(b12, predicate2, null)) {
                                }
                            }
                            i10 = i11;
                        }
                        return new h0(d6, s0Var.a());
                    }
                    ip.r0 typeAliasDescriptor = (ip.r0) a12;
                    if (iVar.t(typeAliasDescriptor)) {
                        Intrinsics.checkNotNullParameter(typeAliasDescriptor, "typeAlias");
                        return new h0(ar.l.c(ar.k.f2688x, ((lp.l) typeAliasDescriptor).getName().f10209d), c1.f21013i);
                    }
                    List l02 = b11.l0();
                    ArrayList arguments = new ArrayList(kotlin.collections.d0.l(l02, 10));
                    for (Object obj2 : l02) {
                        int i12 = i10 + 1;
                        if (i10 < 0) {
                            kotlin.collections.c0.k();
                            throw null;
                        }
                        arguments.add(c((s0) obj2, iVar, (ip.s0) r02.getParameters().get(i10), i5 + 1));
                        i10 = i12;
                    }
                    Intrinsics.checkNotNullParameter(typeAliasDescriptor, "typeAliasDescriptor");
                    Intrinsics.checkNotNullParameter(arguments, "arguments");
                    List parameters = ((lp.e) typeAliasDescriptor).F.getParameters();
                    Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
                    ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(parameters, 10));
                    Iterator it2 = parameters.iterator();
                    while (it2.hasNext()) {
                        arrayList2.add(((ip.s0) it2.next()).a());
                    }
                    c0 b13 = b(new e4.i(iVar, typeAliasDescriptor, arguments, kotlin.collections.v0.m(CollectionsKt.n0(arrayList2, arguments))), b11.q0(), b11.t0(), i5 + 1, false);
                    c0 d7 = d(b11, iVar, i5);
                    Intrinsics.checkNotNullParameter(b13, "<this>");
                    b13.w0();
                    return new h0(c.F(b13, d7), s0Var.a());
                }
            }
        }
        return s0Var;
    }

    public final c0 d(c0 c0Var, e4.i iVar, int i5) {
        p0 r02 = c0Var.r0();
        List l02 = c0Var.l0();
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(l02, 10));
        int i6 = 0;
        for (Object obj : l02) {
            int i10 = i6 + 1;
            if (i6 < 0) {
                kotlin.collections.c0.k();
                throw null;
            }
            s0 s0Var = (s0) obj;
            s0 c6 = c(s0Var, iVar, (ip.s0) r02.getParameters().get(i6), i5 + 1);
            if (!c6.c()) {
                c6 = new h0(z0.h(c6.b(), s0Var.b().t0()), c6.a());
            }
            arrayList.add(c6);
            i6 = i10;
        }
        return c.q(c0Var, arrayList, null, 2);
    }
}
