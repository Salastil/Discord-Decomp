package uq;

import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import cq.q0;
import cq.x0;
import ip.r0;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.g0;
import yq.h0;
import yq.j0;
import yq.k0;
import yq.p0;
import yq.s0;
import yq.z0;

/* loaded from: classes3.dex */
public final class c0 {
    public final cc.k a;

    /* renamed from: b, reason: collision with root package name */
    public final c0 f19004b;

    /* renamed from: c, reason: collision with root package name */
    public final String f19005c;

    /* renamed from: d, reason: collision with root package name */
    public final String f19006d;

    /* renamed from: e, reason: collision with root package name */
    public final xq.j f19007e;

    /* renamed from: f, reason: collision with root package name */
    public final xq.j f19008f;

    /* renamed from: g, reason: collision with root package name */
    public final Object f19009g;

    public c0(cc.k c6, c0 c0Var, List typeParameterProtos, String debugName, String containerPresentableName) {
        Map linkedHashMap;
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(typeParameterProtos, "typeParameterProtos");
        Intrinsics.checkNotNullParameter(debugName, "debugName");
        Intrinsics.checkNotNullParameter(containerPresentableName, "containerPresentableName");
        this.a = c6;
        this.f19004b = c0Var;
        this.f19005c = debugName;
        this.f19006d = containerPresentableName;
        j jVar = (j) c6.f3398e;
        this.f19007e = jVar.a.d(new z(this, 0));
        this.f19008f = jVar.a.d(new z(this, 1));
        if (typeParameterProtos.isEmpty()) {
            linkedHashMap = v0.d();
        } else {
            linkedHashMap = new LinkedHashMap();
            Iterator it = typeParameterProtos.iterator();
            int i5 = 0;
            while (it.hasNext()) {
                x0 x0Var = (x0) it.next();
                linkedHashMap.put(Integer.valueOf(x0Var.f7290v), new wq.u(this.a, x0Var, i5));
                i5++;
            }
        }
        this.f19009g = linkedHashMap;
    }

    public static yq.c0 a(yq.c0 c0Var, yq.y yVar) {
        fp.i v5 = com.facebook.imagepipeline.nativecode.c.v(c0Var);
        jp.h annotations = c0Var.getAnnotations();
        yq.y v6 = nt.a.v(c0Var);
        List s2 = nt.a.s(c0Var);
        List G = CollectionsKt.G(nt.a.w(c0Var));
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(G, 10));
        Iterator it = G.iterator();
        while (it.hasNext()) {
            arrayList.add(((s0) it.next()).b());
        }
        return nt.a.j(v5, annotations, v6, s2, arrayList, yVar, true).x0(c0Var.t0());
    }

    public static final ArrayList e(cq.s0 s0Var, c0 c0Var) {
        List list = s0Var.f7239v;
        Intrinsics.checkNotNullExpressionValue(list, "getArgumentList(...)");
        cq.s0 F = zo.c0.F(s0Var, (a4.i) c0Var.a.f3401w);
        Iterable e9 = F != null ? e(F, c0Var) : null;
        if (e9 == null) {
            e9 = m0.f13512d;
        }
        return CollectionsKt.V(list, e9);
    }

    public static k0 f(List list, jp.h annotations, p0 p0Var, ip.l lVar) {
        k0 g6;
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(list, 10));
        Iterator it = list.iterator();
        while (it.hasNext()) {
            ((yq.n) it.next()).getClass();
            Intrinsics.checkNotNullParameter(annotations, "annotations");
            if (annotations.isEmpty()) {
                k0.f21045e.getClass();
                g6 = k0.f21046i;
            } else {
                e4.r rVar = k0.f21045e;
                List c6 = kotlin.collections.b0.c(new yq.j(annotations));
                rVar.getClass();
                g6 = e4.r.g(c6);
            }
            arrayList.add(g6);
        }
        ArrayList m5 = kotlin.collections.d0.m(arrayList);
        k0.f21045e.getClass();
        return e4.r.g(m5);
    }

    public static final ip.f h(c0 c0Var, cq.s0 s0Var, int i5) {
        cc.k kVar = c0Var.a;
        hq.b r5 = nt.a.r((eq.g) kVar.f3399i, i5);
        kr.t n6 = kr.s.n(kr.o.c(new z(c0Var, 2), s0Var), a0.f19001e);
        Intrinsics.checkNotNullParameter(n6, "<this>");
        ArrayList destination = new ArrayList();
        Intrinsics.checkNotNullParameter(n6, "<this>");
        Intrinsics.checkNotNullParameter(destination, "destination");
        Iterator it = n6.a.iterator();
        while (it.hasNext()) {
            destination.add(n6.f13662b.invoke(it.next()));
        }
        int f2 = kr.s.f(kr.o.c(b0.f19003d, r5));
        while (destination.size() < f2) {
            destination.add(0);
        }
        return ((j) kVar.f3398e).f19024l.o(r5, destination);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, java.util.Map] */
    public final List b() {
        return CollectionsKt.i0(this.f19009g.values());
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, java.util.Map] */
    public final ip.s0 c(int i5) {
        ip.s0 s0Var = (ip.s0) this.f19009g.get(Integer.valueOf(i5));
        if (s0Var != null) {
            return s0Var;
        }
        c0 c0Var = this.f19004b;
        if (c0Var != null) {
            return c0Var.c(i5);
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:101:0x03e2  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x011c  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0144  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final yq.c0 d(cq.s0 proto, boolean z5) {
        p0 typeConstructor;
        ip.i iVar;
        Object obj;
        cq.s0 s0Var;
        yq.c0 t5;
        yq.c0 m5;
        s0 s0Var2;
        yq.y b10;
        int size;
        yq.c0 F;
        k0 k0Var;
        c1 c1Var;
        Object h0Var;
        cc.k kVar = this.a;
        a4.i typeTable = (a4.i) kVar.f3401w;
        j jVar = (j) kVar.f3398e;
        ip.l lVar = (ip.l) kVar.f3400v;
        Intrinsics.checkNotNullParameter(proto, "proto");
        int i5 = proto.f7238i;
        if ((i5 & 16) == 16) {
            if (nt.a.r((eq.g) kVar.f3399i, proto.F).f10202c) {
                ((j) kVar.f3398e).f19021g.getClass();
            }
        } else if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            if (nt.a.r((eq.g) kVar.f3399i, proto.I).f10202c) {
                ((j) kVar.f3398e).f19021g.getClass();
            }
        }
        int i6 = proto.f7238i;
        if ((i6 & 16) != 16) {
            if ((i6 & 32) == 32) {
                iVar = c(proto.G);
                if (iVar == null) {
                    ar.l lVar2 = ar.l.a;
                    typeConstructor = ar.l.d(ar.k.L, String.valueOf(proto.G), this.f19006d);
                }
            } else if ((i6 & 64) == 64) {
                String string = ((eq.g) kVar.f3399i).getString(proto.H);
                Iterator it = b().iterator();
                while (true) {
                    if (!it.hasNext()) {
                        obj = null;
                        break;
                    }
                    obj = it.next();
                    if (Intrinsics.areEqual(((ip.s0) obj).getName().b(), string)) {
                        break;
                    }
                }
                ip.s0 s0Var3 = (ip.s0) obj;
                if (s0Var3 == null) {
                    ar.l lVar3 = ar.l.a;
                    typeConstructor = ar.l.d(ar.k.M, string, lVar.toString());
                } else {
                    iVar = s0Var3;
                }
            } else if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
                iVar = (ip.i) this.f19008f.invoke(Integer.valueOf(proto.I));
                if (iVar == null) {
                    iVar = h(this, proto, proto.I);
                }
            } else {
                ar.l lVar4 = ar.l.a;
                typeConstructor = ar.l.d(ar.k.O, new String[0]);
            }
            if (!ar.l.f(typeConstructor.a())) {
                ar.l lVar5 = ar.l.a;
                ar.k kind = ar.k.T;
                String[] formatParams = {typeConstructor.toString()};
                Intrinsics.checkNotNullParameter(kind, "kind");
                Intrinsics.checkNotNullParameter(typeConstructor, "typeConstructor");
                Intrinsics.checkNotNullParameter(formatParams, "formatParams");
                return ar.l.e(kind, m0.f13512d, typeConstructor, (String[]) Arrays.copyOf(formatParams, 1));
            }
            wq.a aVar = new wq.a(jVar.a, new bs.q(15, this, proto));
            k0 f2 = f(jVar.f19030r, aVar, typeConstructor, lVar);
            ArrayList e9 = e(proto, this);
            ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(e9, 10));
            Iterator it2 = e9.iterator();
            int i10 = 0;
            while (it2.hasNext()) {
                Object next = it2.next();
                int i11 = i10 + 1;
                if (i10 < 0) {
                    kotlin.collections.c0.k();
                    throw null;
                }
                q0 q0Var = (q0) next;
                Iterator it3 = it2;
                List parameters = typeConstructor.getParameters();
                Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
                ip.s0 s0Var4 = (ip.s0) CollectionsKt.M(i10, parameters);
                cq.p0 projection = q0Var.f7218i;
                if (projection == cq.p0.STAR) {
                    h0Var = s0Var4 == null ? new g0(jVar.f19016b.g()) : new h0(s0Var4);
                    k0Var = f2;
                } else {
                    Intrinsics.checkNotNullExpressionValue(projection, "getProjection(...)");
                    Intrinsics.checkNotNullParameter(projection, "projection");
                    int ordinal = projection.ordinal();
                    if (ordinal != 0) {
                        k0Var = f2;
                        if (ordinal == 1) {
                            c1Var = c1.f21015w;
                        } else {
                            if (ordinal != 2) {
                                if (ordinal != 3) {
                                    throw new fo.n();
                                }
                                throw new IllegalArgumentException("Only IN, OUT and INV are supported. Actual argument: " + projection);
                            }
                            c1Var = c1.f21013i;
                        }
                    } else {
                        k0Var = f2;
                        c1Var = c1.f21014v;
                    }
                    Intrinsics.checkNotNullParameter(q0Var, "<this>");
                    Intrinsics.checkNotNullParameter(typeTable, "typeTable");
                    int i12 = q0Var.f7217e;
                    cq.s0 b11 = (i12 & 2) == 2 ? q0Var.f7219v : (i12 & 4) == 4 ? typeTable.b(q0Var.f7220w) : null;
                    h0Var = b11 == null ? new h0(ar.l.c(ar.k.Y, q0Var.toString())) : new h0(g(b11), c1Var);
                }
                arrayList.add(h0Var);
                it2 = it3;
                i10 = i11;
                f2 = k0Var;
            }
            k0 k0Var2 = f2;
            List arguments = CollectionsKt.i0(arrayList);
            ip.i a = typeConstructor.a();
            if (z5 && (a instanceof r0)) {
                r0 typeAliasDescriptor = (r0) a;
                Intrinsics.checkNotNullParameter(typeAliasDescriptor, "<this>");
                Intrinsics.checkNotNullParameter(arguments, "arguments");
                j0 j0Var = new j0();
                Intrinsics.checkNotNullParameter(typeAliasDescriptor, "typeAliasDescriptor");
                Intrinsics.checkNotNullParameter(arguments, "arguments");
                List parameters2 = ((lp.e) typeAliasDescriptor).F.getParameters();
                Intrinsics.checkNotNullExpressionValue(parameters2, "getParameters(...)");
                ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(parameters2, 10));
                Iterator it4 = parameters2.iterator();
                while (it4.hasNext()) {
                    arrayList2.add(((ip.s0) it4.next()).a());
                }
                s0Var = null;
                e4.i typeAliasExpansion = new e4.i(s0Var, typeAliasDescriptor, arguments, v0.m(CollectionsKt.n0(arrayList2, arguments)));
                k0.f21045e.getClass();
                k0 attributes = k0.f21046i;
                Intrinsics.checkNotNullParameter(typeAliasExpansion, "typeAliasExpansion");
                Intrinsics.checkNotNullParameter(attributes, "attributes");
                yq.c0 b12 = j0Var.b(typeAliasExpansion, attributes, false, 0, true);
                List list = jVar.f19030r;
                ArrayList annotations = CollectionsKt.T(aVar, b12.getAnnotations());
                Intrinsics.checkNotNullParameter(annotations, "annotations");
                k0 f10 = f(list, annotations.isEmpty() ? jp.g.a : new jp.i(annotations, 0), typeConstructor, lVar);
                Intrinsics.checkNotNullParameter(b12, "<this>");
                t5 = b12.x0(z0.e(b12) || proto.f7240w).z0(f10);
            } else {
                s0Var = null;
                if (eq.e.a.g(proto.N).booleanValue()) {
                    boolean z6 = proto.f7240w;
                    int size2 = typeConstructor.getParameters().size() - arguments.size();
                    if (size2 != 0) {
                        if (size2 == 1 && (size = arguments.size() - 1) >= 0) {
                            p0 n6 = typeConstructor.g().w(size).n();
                            Intrinsics.checkNotNullExpressionValue(n6, "getTypeConstructor(...)");
                            m5 = yq.c.t(arguments, k0Var2, n6, z6);
                            if (m5 == null) {
                                ar.l lVar6 = ar.l.a;
                                t5 = ar.l.e(ar.k.N, arguments, typeConstructor, new String[0]);
                            }
                            t5 = m5;
                        }
                        m5 = null;
                        if (m5 == null) {
                        }
                        t5 = m5;
                    } else {
                        m5 = yq.c.t(arguments, k0Var2, typeConstructor, z6);
                        Intrinsics.checkNotNullParameter(m5, "<this>");
                        Intrinsics.checkNotNullParameter(m5, "<this>");
                        ip.i a10 = m5.r0().a();
                        if (Intrinsics.areEqual(a10 != null ? nt.a.t(a10) : null, gp.g.f9428c) && (s0Var2 = (s0) CollectionsKt.S(nt.a.w(m5))) != null && (b10 = s0Var2.b()) != null) {
                            ip.i a11 = b10.r0().a();
                            hq.c g6 = a11 != null ? oq.e.g(a11) : null;
                            if (b10.l0().size() == 1 && (Intrinsics.areEqual(g6, fp.p.f8912g) || Intrinsics.areEqual(g6, d0.a))) {
                                yq.y b13 = ((s0) CollectionsKt.Z(b10.l0())).b();
                                Intrinsics.checkNotNullExpressionValue(b13, "getType(...)");
                                ip.b bVar = lVar instanceof ip.b ? (ip.b) lVar : null;
                                m5 = Intrinsics.areEqual(bVar != null ? oq.e.c(bVar) : null, y.a) ? a(m5, b13) : a(m5, b13);
                            }
                            if (m5 == null) {
                            }
                            t5 = m5;
                        }
                        m5 = null;
                        if (m5 == null) {
                        }
                        t5 = m5;
                    }
                } else {
                    t5 = yq.c.t(arguments, k0Var2, typeConstructor, proto.f7240w);
                    if (eq.e.f8193b.g(proto.N).booleanValue()) {
                        m5 = yq.f.m(t5, true);
                        if (m5 == null) {
                            throw new IllegalStateException(("null DefinitelyNotNullType for '" + t5 + '\'').toString());
                        }
                        t5 = m5;
                    }
                }
            }
            Intrinsics.checkNotNullParameter(proto, "<this>");
            Intrinsics.checkNotNullParameter(typeTable, "typeTable");
            int i13 = proto.f7238i;
            cq.s0 b14 = (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024 ? proto.L : (i13 & RecyclerView.ItemAnimator.FLAG_MOVED) == 2048 ? typeTable.b(proto.M) : s0Var;
            return (b14 == null || (F = yq.c.F(t5, d(b14, false))) == null) ? t5 : F;
        }
        iVar = (ip.i) this.f19007e.invoke(Integer.valueOf(proto.F));
        if (iVar == null) {
            iVar = h(this, proto, proto.F);
        }
        typeConstructor = iVar.n();
        Intrinsics.checkNotNullExpressionValue(typeConstructor, "getTypeConstructor(...)");
        if (!ar.l.f(typeConstructor.a())) {
        }
    }

    public final yq.y g(cq.s0 proto) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        if ((proto.f7238i & 2) != 2) {
            return d(proto, true);
        }
        cc.k kVar = this.a;
        String string = ((eq.g) kVar.f3399i).getString(proto.f7241x);
        yq.c0 d6 = d(proto, true);
        a4.i typeTable = (a4.i) kVar.f3401w;
        Intrinsics.checkNotNullParameter(proto, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        int i5 = proto.f7238i;
        cq.s0 b10 = (i5 & 4) == 4 ? proto.f7242y : (i5 & 8) == 8 ? typeTable.b(proto.E) : null;
        Intrinsics.checkNotNull(b10);
        return ((j) kVar.f3398e).j.b(proto, string, d6, d(b10, true));
    }

    public final String toString() {
        String str;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.f19005c);
        c0 c0Var = this.f19004b;
        if (c0Var == null) {
            str = "";
        } else {
            str = ". Child of " + c0Var.f19005c;
        }
        sb2.append(str);
        return sb2.toString();
    }
}
