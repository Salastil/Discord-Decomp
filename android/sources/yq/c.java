package yq;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;

/* loaded from: classes3.dex */
public abstract class c {
    public static w0 A(List list, u0 u0Var, ip.l lVar, ArrayList arrayList) {
        if (u0Var == null) {
            a(1);
            throw null;
        }
        if (lVar == null) {
            a(2);
            throw null;
        }
        if (arrayList == null) {
            a(3);
            throw null;
        }
        w0 B = B(list, u0Var, lVar, arrayList, null);
        if (B != null) {
            return B;
        }
        throw new AssertionError("Substitution failed");
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x00cc  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00cb A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static w0 B(List list, u0 u0Var, ip.l lVar, List list2, boolean[] zArr) {
        w0 w0Var;
        y j;
        if (u0Var == null) {
            a(6);
            throw null;
        }
        if (lVar == null) {
            a(7);
            throw null;
        }
        if (list2 == null) {
            a(8);
            throw null;
        }
        HashMap map = new HashMap();
        HashMap hashMap = new HashMap();
        Iterator it = list.iterator();
        int i5 = 0;
        while (it.hasNext()) {
            ip.s0 s0Var = (ip.s0) it.next();
            lp.p0 E0 = lp.p0.E0(lVar, s0Var.getAnnotations(), s0Var.v(), s0Var.getVariance(), s0Var.getName(), i5, s0Var.U());
            map.put(s0Var.n(), new h0(E0.k()));
            hashMap.put(s0Var, E0);
            list2.add(E0);
            i5++;
        }
        Intrinsics.checkNotNullParameter(map, "map");
        Intrinsics.checkNotNullParameter(map, "map");
        i0 i0Var = new i0(1, map);
        w0 f2 = w0.f(u0Var, i0Var);
        w0 f10 = w0.f(new lq.d(u0Var, 1), i0Var);
        Iterator it2 = list.iterator();
        while (it2.hasNext()) {
            ip.s0 s0Var2 = (ip.s0) it2.next();
            lp.p0 p0Var = (lp.p0) hashMap.get(s0Var2);
            for (y yVar : s0Var2.getUpperBounds()) {
                ip.i a = yVar.r0().a();
                if (a instanceof ip.s0) {
                    ip.s0 typeParameter = (ip.s0) a;
                    Intrinsics.checkNotNullParameter(typeParameter, "typeParameter");
                    if (com.facebook.imagepipeline.nativecode.c.K(typeParameter, null, 6)) {
                        w0Var = f2;
                        j = w0Var.j(yVar, c1.f21015w);
                        if (j != null) {
                            return null;
                        }
                        if (j != yVar && zArr != null) {
                            zArr[0] = true;
                        }
                        if (p0Var.J) {
                            throw new IllegalStateException("Type parameter descriptor is already initialized: " + p0Var.G0());
                        }
                        if (!j(j)) {
                            p0Var.I.add(j);
                        }
                    }
                }
                w0Var = f10;
                j = w0Var.j(yVar, c1.f21015w);
                if (j != null) {
                }
            }
            if (p0Var.J) {
                throw new IllegalStateException("Type parameter descriptor is already initialized: " + p0Var.G0());
            }
            p0Var.J = true;
        }
        return f2;
    }

    public static final k0 C(jp.h annotations) {
        Intrinsics.checkNotNullParameter(annotations, "<this>");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        if (annotations.isEmpty()) {
            k0.f21045e.getClass();
            return k0.f21046i;
        }
        e4.r rVar = k0.f21045e;
        List c6 = kotlin.collections.b0.c(new j(annotations));
        rVar.getClass();
        return e4.r.g(c6);
    }

    public static final c0 E(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        b1 w02 = yVar.w0();
        if (w02 instanceof s) {
            return ((s) w02).f21069i;
        }
        if (w02 instanceof c0) {
            return (c0) w02;
        }
        throw new fo.n();
    }

    public static final c0 F(c0 c0Var, c0 abbreviatedType) {
        Intrinsics.checkNotNullParameter(c0Var, "<this>");
        Intrinsics.checkNotNullParameter(abbreviatedType, "abbreviatedType");
        return j(c0Var) ? c0Var : new a(c0Var, abbreviatedType);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static final b1 G(b1 b1Var, y yVar) {
        Intrinsics.checkNotNullParameter(b1Var, "<this>");
        if (b1Var instanceof a1) {
            return G(((a1) b1Var).O(), yVar);
        }
        if (yVar == null || Intrinsics.areEqual(yVar, b1Var)) {
            return b1Var;
        }
        if (b1Var instanceof c0) {
            return new f0((c0) b1Var, yVar);
        }
        if (b1Var instanceof s) {
            return new u((s) b1Var, yVar);
        }
        throw new fo.n();
    }

    public static /* synthetic */ void a(int i5) {
        String str = i5 != 4 ? "Argument for @NotNull parameter '%s' of %s.%s must not be null" : "@NotNull method %s.%s must not return null";
        Object[] objArr = new Object[i5 != 4 ? 3 : 2];
        switch (i5) {
            case 1:
            case 6:
                objArr[0] = "originalSubstitution";
                break;
            case 2:
            case 7:
                objArr[0] = "newContainingDeclaration";
                break;
            case 3:
            case 8:
                objArr[0] = "result";
                break;
            case 4:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/types/DescriptorSubstitutor";
                break;
            case 5:
            default:
                objArr[0] = "typeParameters";
                break;
        }
        if (i5 != 4) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/types/DescriptorSubstitutor";
        } else {
            objArr[1] = "substituteTypeParameters";
        }
        if (i5 != 4) {
            objArr[2] = "substituteTypeParameters";
        }
        String format = String.format(str, objArr);
        if (i5 == 4) {
            throw new IllegalStateException(format);
        }
    }

    public static final c0 b(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        b1 w02 = yVar.w0();
        c0 c0Var = w02 instanceof c0 ? (c0) w02 : null;
        if (c0Var != null) {
            return c0Var;
        }
        throw new IllegalStateException(("This is should be simple type: " + yVar).toString());
    }

    public static final y c(ArrayList arrayList, List list, fp.i iVar) {
        y j = w0.e(new i0(0, arrayList)).j((y) CollectionsKt.K(list), c1.f21015w);
        if (j != null) {
            return j;
        }
        c0 n6 = iVar.n();
        Intrinsics.checkNotNullExpressionValue(n6, "getDefaultBound(...)");
        return n6;
    }

    public static final cr.d d(cr.d receiver, HashSet hashSet) {
        cr.d d6;
        zq.n nVar = zq.n.f21398d;
        p0 B0 = nVar.B0(receiver);
        if (!hashSet.add(B0)) {
            return null;
        }
        ip.s0 receiver2 = m3.n.Q(B0);
        if (receiver2 != null) {
            Intrinsics.checkNotNullParameter(receiver2, "$receiver");
            cr.d F = com.facebook.imagepipeline.nativecode.c.F(receiver2);
            cr.d d7 = d(F, hashSet);
            if (d7 != null) {
                return ((d7 instanceof cr.f) && m3.n.k0((cr.f) d7) && m3.n.j0(receiver) && (m3.n.e0(nVar.B0(F)) || ((F instanceof cr.f) && m3.n.k0((cr.f) F)))) ? nVar.g(F) : (m3.n.j0(d7) || !m3.n.h0(receiver)) ? d7 : nVar.g(d7);
            }
            return null;
        }
        if (m3.n.e0(B0)) {
            Intrinsics.checkNotNullParameter(receiver, "$receiver");
            if (!(receiver instanceof y)) {
                throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
            }
            c0 i5 = kq.g.i((y) receiver);
            if (i5 == null || (d6 = d(i5, hashSet)) == null) {
                return null;
            }
            if (!m3.n.j0(receiver)) {
                return d6;
            }
            if (!m3.n.j0(d6) && (!(d6 instanceof cr.f) || !m3.n.k0((cr.f) d6))) {
                return nVar.g(d6);
            }
        }
        return receiver;
    }

    public static final b1 e(c0 lowerBound, c0 upperBound) {
        Intrinsics.checkNotNullParameter(lowerBound, "lowerBound");
        Intrinsics.checkNotNullParameter(upperBound, "upperBound");
        return Intrinsics.areEqual(lowerBound, upperBound) ? lowerBound : new t(lowerBound, upperBound);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static final y f(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        if (yVar instanceof a1) {
            return ((a1) yVar).j();
        }
        return null;
    }

    public static boolean g(o0 o0Var, cr.e type, c supertypesPolicy) {
        n0 n0Var = n0.f21052c;
        Intrinsics.checkNotNullParameter(o0Var, "<this>");
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(supertypesPolicy, "supertypesPolicy");
        zq.b bVar = o0Var.f21057c;
        if ((bVar.P(type) && !bVar.B(type)) || bVar.E(type)) {
            return true;
        }
        o0Var.c();
        ArrayDeque arrayDeque = o0Var.f21061g;
        Intrinsics.checkNotNull(arrayDeque);
        ir.k kVar = o0Var.f21062h;
        Intrinsics.checkNotNull(kVar);
        arrayDeque.push(type);
        while (!arrayDeque.isEmpty()) {
            cr.e eVar = (cr.e) arrayDeque.pop();
            Intrinsics.checkNotNull(eVar);
            if (kVar.add(eVar)) {
                c cVar = bVar.B(eVar) ? n0Var : supertypesPolicy;
                if (Intrinsics.areEqual(cVar, n0Var)) {
                    cVar = null;
                }
                if (cVar == null) {
                    continue;
                } else {
                    zq.b bVar2 = o0Var.f21057c;
                    Iterator it = bVar2.f(bVar2.w0(eVar)).iterator();
                    while (it.hasNext()) {
                        cr.e D = cVar.D(o0Var, (cr.d) it.next());
                        if ((bVar.P(D) && !bVar.B(D)) || bVar.E(D)) {
                            o0Var.a();
                            return true;
                        }
                        arrayDeque.add(D);
                    }
                }
            }
        }
        o0Var.a();
        return false;
    }

    public static final b1 h(b1 b1Var, y origin) {
        Intrinsics.checkNotNullParameter(b1Var, "<this>");
        Intrinsics.checkNotNullParameter(origin, "origin");
        return G(b1Var, f(origin));
    }

    public static boolean i(o0 o0Var, cr.e eVar, cr.h hVar) {
        zq.b bVar = o0Var.f21057c;
        if (bVar.z(eVar)) {
            return true;
        }
        if (bVar.B(eVar)) {
            return false;
        }
        if (o0Var.f21056b) {
            bVar.c(eVar);
        }
        return bVar.h0(bVar.w0(eVar), hVar);
    }

    public static final boolean j(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        b1 w02 = yVar.w0();
        if (w02 instanceof ar.i) {
            return true;
        }
        return (w02 instanceof s) && (((s) w02).A0() instanceof ar.i);
    }

    public static final boolean k(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        return yVar.w0() instanceof s;
    }

    public static final c0 l(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        b1 w02 = yVar.w0();
        if (w02 instanceof s) {
            return ((s) w02).f21068e;
        }
        if (w02 instanceof c0) {
            return (c0) w02;
        }
        throw new fo.n();
    }

    public static final b1 m(b1 b1Var, boolean z5) {
        Intrinsics.checkNotNullParameter(b1Var, "<this>");
        o m5 = f.m(b1Var, z5);
        if (m5 != null) {
            return m5;
        }
        c0 n6 = n(b1Var);
        return n6 != null ? n6 : b1Var.x0(false);
    }

    public static final c0 n(b1 b1Var) {
        x xVar;
        p0 r02 = b1Var.r0();
        x xVar2 = r02 instanceof x ? (x) r02 : null;
        if (xVar2 != null) {
            LinkedHashSet<y> linkedHashSet = xVar2.f21078b;
            ArrayList typesToIntersect = new ArrayList(kotlin.collections.d0.l(linkedHashSet, 10));
            boolean z5 = false;
            for (y yVar : linkedHashSet) {
                if (z0.e(yVar)) {
                    yVar = m(yVar.w0(), false);
                    z5 = true;
                }
                typesToIntersect.add(yVar);
            }
            if (z5) {
                y yVar2 = xVar2.a;
                if (yVar2 == null) {
                    yVar2 = null;
                } else if (z0.e(yVar2)) {
                    yVar2 = m(yVar2.w0(), false);
                }
                Intrinsics.checkNotNullParameter(typesToIntersect, "typesToIntersect");
                typesToIntersect.isEmpty();
                LinkedHashSet linkedHashSet2 = new LinkedHashSet(typesToIntersect);
                linkedHashSet2.hashCode();
                xVar = new x(linkedHashSet2);
                xVar.a = yVar2;
            } else {
                xVar = null;
            }
            if (xVar != null) {
                return xVar.e();
            }
        }
        return null;
    }

    public static final c0 o(c0 c0Var, List newArguments, k0 newAttributes) {
        Intrinsics.checkNotNullParameter(c0Var, "<this>");
        Intrinsics.checkNotNullParameter(newArguments, "newArguments");
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        if (newArguments.isEmpty() && newAttributes == c0Var.q0()) {
            return c0Var;
        }
        if (newArguments.isEmpty()) {
            return c0Var.z0(newAttributes);
        }
        if (!(c0Var instanceof ar.i)) {
            return t(newArguments, newAttributes, c0Var.r0(), c0Var.t0());
        }
        ar.i iVar = (ar.i) c0Var;
        Intrinsics.checkNotNullParameter(newArguments, "newArguments");
        p0 p0Var = iVar.f2675e;
        ar.g gVar = iVar.f2676i;
        ar.k kVar = iVar.f2677v;
        boolean z5 = iVar.f2679x;
        String[] strArr = iVar.f2680y;
        return new ar.i(p0Var, gVar, kVar, newArguments, z5, (String[]) Arrays.copyOf(strArr, strArr.length));
    }

    public static y p(y yVar, List newArgumentsForUpperBound, jp.h newAnnotations, int i5) {
        if ((i5 & 2) != 0) {
            newAnnotations = yVar.getAnnotations();
        }
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        Intrinsics.checkNotNullParameter(newArgumentsForUpperBound, "newArguments");
        Intrinsics.checkNotNullParameter(newAnnotations, "newAnnotations");
        Intrinsics.checkNotNullParameter(newArgumentsForUpperBound, "newArgumentsForUpperBound");
        if ((newArgumentsForUpperBound.isEmpty() || newArgumentsForUpperBound == yVar.l0()) && newAnnotations == yVar.getAnnotations()) {
            return yVar;
        }
        k0 q02 = yVar.q0();
        if ((newAnnotations instanceof jp.l) && ((jp.l) newAnnotations).isEmpty()) {
            newAnnotations = jp.g.a;
        }
        k0 r5 = r(q02, newAnnotations);
        b1 w02 = yVar.w0();
        if (w02 instanceof s) {
            s sVar = (s) w02;
            return e(o(sVar.f21068e, newArgumentsForUpperBound, r5), o(sVar.f21069i, newArgumentsForUpperBound, r5));
        }
        if (w02 instanceof c0) {
            return o((c0) w02, newArgumentsForUpperBound, r5);
        }
        throw new fo.n();
    }

    public static /* synthetic */ c0 q(c0 c0Var, List list, k0 k0Var, int i5) {
        if ((i5 & 1) != 0) {
            list = c0Var.l0();
        }
        if ((i5 & 2) != 0) {
            k0Var = c0Var.q0();
        }
        return o(c0Var, list, k0Var);
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x006b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final k0 r(k0 k0Var, jp.h newAnnotations) {
        k0 k0Var2;
        Intrinsics.checkNotNullParameter(k0Var, "<this>");
        Intrinsics.checkNotNullParameter(newAnnotations, "newAnnotations");
        if (k.a(k0Var) == newAnnotations) {
            return k0Var;
        }
        Intrinsics.checkNotNullParameter(k0Var, "<this>");
        j attribute = (j) k.f21044b.getValue(k0Var, k.a[0]);
        if (attribute != null) {
            Intrinsics.checkNotNullParameter(attribute, "attribute");
            if (!k0Var.isEmpty()) {
                fr.a aVar = k0Var.f9009d;
                ArrayList arrayList = new ArrayList();
                for (Object obj : aVar) {
                    if (!Intrinsics.areEqual((j) obj, attribute)) {
                        arrayList.add(obj);
                    }
                }
                if (arrayList.size() != k0Var.f9009d.a()) {
                    k0.f21045e.getClass();
                    k0Var2 = e4.r.g(arrayList);
                    if (k0Var2 != null) {
                        k0Var = k0Var2;
                    }
                }
            }
            k0Var2 = k0Var;
            if (k0Var2 != null) {
            }
        }
        if (newAnnotations.iterator().hasNext() || !newAnnotations.isEmpty()) {
            j attribute2 = new j(newAnnotations);
            Intrinsics.checkNotNullParameter(attribute2, "attribute");
            Intrinsics.checkNotNullParameter(attribute2, "attribute");
            e4.r rVar = k0.f21045e;
            KClass kClass = Reflection.getOrCreateKotlinClass(j.class);
            rVar.getClass();
            Intrinsics.checkNotNullParameter(kClass, "kClass");
            String qualifiedName = kClass.getQualifiedName();
            Intrinsics.checkNotNull(qualifiedName);
            if (k0Var.f9009d.get(rVar.l(qualifiedName)) == null) {
                return k0Var.isEmpty() ? new k0(kotlin.collections.b0.c(attribute2)) : e4.r.g(CollectionsKt.W(CollectionsKt.i0(k0Var), attribute2));
            }
        }
        return k0Var;
    }

    public static final c0 s(k0 attributes, ip.f descriptor, List arguments) {
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        p0 n6 = descriptor.n();
        Intrinsics.checkNotNullExpressionValue(n6, "getTypeConstructor(...)");
        return t(arguments, attributes, n6, false);
    }

    public static c0 t(List arguments, k0 attributes, p0 constructor, boolean z5) {
        rq.o p3;
        lp.z zVar;
        rq.o j;
        rq.o oVar;
        rq.o p5;
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        if (attributes.isEmpty() && arguments.isEmpty() && !z5 && constructor.a() != null) {
            ip.i a = constructor.a();
            Intrinsics.checkNotNull(a);
            c0 k = a.k();
            Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
            return k;
        }
        ip.l a10 = constructor.a();
        if (a10 instanceof ip.s0) {
            p3 = ((ip.s0) a10).k().N();
        } else if (a10 instanceof ip.f) {
            oq.e.i(oq.e.j(a10));
            boolean isEmpty = arguments.isEmpty();
            zq.f kotlinTypeRefiner = zq.f.a;
            if (isEmpty) {
                ip.f fVar = (ip.f) a10;
                Intrinsics.checkNotNullParameter(fVar, "<this>");
                Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
                Intrinsics.checkNotNullParameter(fVar, "<this>");
                Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
                zVar = fVar instanceof lp.z ? (lp.z) fVar : null;
                if (zVar != null && (p5 = zVar.p(kotlinTypeRefiner)) != null) {
                    oVar = p5;
                    return w(attributes, constructor, arguments, z5, oVar, new z(arguments, attributes, constructor, z5));
                }
                p3 = fVar.n0();
                Intrinsics.checkNotNullExpressionValue(p3, "getUnsubstitutedMemberScope(...)");
            } else {
                ip.f fVar2 = (ip.f) a10;
                u0 typeSubstitution = q0.f21064b.f(constructor, arguments);
                Intrinsics.checkNotNullParameter(fVar2, "<this>");
                Intrinsics.checkNotNullParameter(typeSubstitution, "typeSubstitution");
                Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
                Intrinsics.checkNotNullParameter(fVar2, "<this>");
                Intrinsics.checkNotNullParameter(typeSubstitution, "typeSubstitution");
                Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
                zVar = fVar2 instanceof lp.z ? (lp.z) fVar2 : null;
                if (zVar != null && (j = zVar.j(typeSubstitution, kotlinTypeRefiner)) != null) {
                    oVar = j;
                    return w(attributes, constructor, arguments, z5, oVar, new z(arguments, attributes, constructor, z5));
                }
                p3 = fVar2.y(typeSubstitution);
                Intrinsics.checkNotNullExpressionValue(p3, "getMemberScope(...)");
            }
        } else if (a10 instanceof ip.r0) {
            p3 = ar.l.a(ar.h.f2670v, true, ((lp.l) ((ip.r0) a10)).getName().f10209d);
        } else {
            if (!(constructor instanceof x)) {
                throw new IllegalStateException("Unsupported classifier: " + a10 + " for constructor: " + constructor);
            }
            p3 = a5.k0.p("member scope for intersection type", ((x) constructor).f21078b);
        }
        oVar = p3;
        return w(attributes, constructor, arguments, z5, oVar, new z(arguments, attributes, constructor, z5));
    }

    public static c0 u(c0 baseType, p0 constructor) {
        k0 annotations = baseType.q0();
        List arguments = baseType.l0();
        boolean t02 = baseType.t0();
        Intrinsics.checkNotNullParameter(baseType, "baseType");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        return t(arguments, annotations, constructor, t02);
    }

    public static final c0 v(List arguments, rq.o memberScope, k0 attributes, p0 constructor, boolean z5) {
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        Intrinsics.checkNotNullParameter(memberScope, "memberScope");
        d0 d0Var = new d0(constructor, arguments, z5, memberScope, new z(arguments, memberScope, attributes, constructor, z5));
        return attributes.isEmpty() ? d0Var : new e0(d0Var, attributes);
    }

    public static final c0 w(k0 attributes, p0 constructor, List arguments, boolean z5, rq.o memberScope, Function1 refinedTypeFactory) {
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        Intrinsics.checkNotNullParameter(memberScope, "memberScope");
        Intrinsics.checkNotNullParameter(refinedTypeFactory, "refinedTypeFactory");
        d0 d0Var = new d0(constructor, arguments, z5, memberScope, refinedTypeFactory);
        return attributes.isEmpty() ? d0Var : new e0(d0Var, attributes);
    }

    public static final y x(ip.s0 s0Var) {
        Intrinsics.checkNotNullParameter(s0Var, "<this>");
        ip.l h6 = s0Var.h();
        Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
        if (h6 instanceof ip.j) {
            List parameters = ((ip.j) h6).n().getParameters();
            Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
            ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(parameters, 10));
            Iterator it = parameters.iterator();
            while (it.hasNext()) {
                p0 n6 = ((ip.s0) it.next()).n();
                Intrinsics.checkNotNullExpressionValue(n6, "getTypeConstructor(...)");
                arrayList.add(n6);
            }
            List upperBounds = s0Var.getUpperBounds();
            Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
            return c(arrayList, upperBounds, oq.e.e(s0Var));
        }
        if (!(h6 instanceof ip.v)) {
            throw new IllegalArgumentException("Unsupported descriptor type to build star projection type based on type parameters of it");
        }
        List typeParameters = ((ip.v) h6).getTypeParameters();
        Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(typeParameters, 10));
        Iterator it2 = typeParameters.iterator();
        while (it2.hasNext()) {
            p0 n10 = ((ip.s0) it2.next()).n();
            Intrinsics.checkNotNullExpressionValue(n10, "getTypeConstructor(...)");
            arrayList2.add(n10);
        }
        List upperBounds2 = s0Var.getUpperBounds();
        Intrinsics.checkNotNullExpressionValue(upperBounds2, "getUpperBounds(...)");
        return c(arrayList2, upperBounds2, oq.e.e(s0Var));
    }

    public static boolean y(zq.b bVar, cr.e eVar, cr.e eVar2) {
        if (bVar.e0(eVar) == bVar.e0(eVar2) && bVar.B(eVar) == bVar.B(eVar2) && bVar.E(eVar) == bVar.E(eVar2) && bVar.h0(bVar.w0(eVar), bVar.w0(eVar2))) {
            if (bVar.s0(eVar, eVar2)) {
                return true;
            }
            int e02 = bVar.e0(eVar);
            for (int i5 = 0; i5 < e02; i5++) {
                s0 F = bVar.F(eVar, i5);
                s0 F2 = bVar.F(eVar2, i5);
                if (bVar.t(F) == bVar.t(F2)) {
                    if (!bVar.t(F)) {
                        if (bVar.v0(F) == bVar.v0(F2)) {
                            b1 r02 = bVar.r0(F);
                            Intrinsics.checkNotNull(r02);
                            b1 r03 = bVar.r0(F2);
                            Intrinsics.checkNotNull(r03);
                            if (!z(bVar, r02, r03)) {
                            }
                        }
                    }
                }
            }
            return true;
        }
        return false;
    }

    public static boolean z(zq.b bVar, cr.d dVar, cr.d dVar2) {
        if (dVar == dVar2) {
            return true;
        }
        c0 A0 = bVar.A0(dVar);
        c0 A02 = bVar.A0(dVar2);
        if (A0 != null && A02 != null) {
            return y(bVar, A0, A02);
        }
        s J0 = bVar.J0(dVar);
        s J02 = bVar.J0(dVar2);
        return J0 != null && J02 != null && y(bVar, bVar.D0(J0), bVar.D0(J02)) && y(bVar, bVar.F0(J0), bVar.F0(J02));
    }

    public abstract cr.e D(o0 o0Var, cr.d dVar);
}
