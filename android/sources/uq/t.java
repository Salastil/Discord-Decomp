package uq;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import cq.a1;
import cq.g1;
import cq.i0;
import cq.s0;
import ip.f0;
import ip.o0;
import ip.p0;
import java.util.ArrayList;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import lp.j0;
import lp.k0;
import lp.r0;

/* loaded from: classes3.dex */
public final class t {
    public final cc.k a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.c f19062b;

    public t(cc.k c6) {
        Intrinsics.checkNotNullParameter(c6, "c");
        this.a = c6;
        j jVar = (j) c6.f3398e;
        this.f19062b = new e4.c(jVar.f19016b, jVar.f19024l);
    }

    public final a3.r a(ip.l lVar) {
        if (lVar instanceof f0) {
            hq.c cVar = ((lp.c0) ((f0) lVar)).f14132x;
            cc.k kVar = this.a;
            return new v(cVar, (eq.g) kVar.f3399i, (a4.i) kVar.f3401w, (wq.k) kVar.E);
        }
        if (lVar instanceof wq.i) {
            return ((wq.i) lVar).T;
        }
        return null;
    }

    public final jp.h b(iq.k kVar, int i5, a aVar) {
        return !eq.e.f8194c.g(i5).booleanValue() ? jp.g.a : new wq.v(((j) this.a.f3398e).a, new q(this, kVar, aVar, 0));
    }

    public final jp.h c(i0 i0Var, boolean z5) {
        return !eq.e.f8194c.g(i0Var.f7123v).booleanValue() ? jp.g.a : new wq.v(((j) this.a.f3398e).a, new r(this, z5, i0Var));
    }

    public final wq.c d(cq.n proto, boolean z5) {
        cc.k b10;
        Intrinsics.checkNotNullParameter(proto, "proto");
        cc.k kVar = this.a;
        ip.l lVar = (ip.l) kVar.f3400v;
        Intrinsics.checkNotNull(lVar, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
        ip.f fVar = (ip.f) lVar;
        int i5 = proto.f7182v;
        a aVar = a.f18996d;
        wq.c cVar = new wq.c(fVar, null, b(proto, i5, aVar), z5, ip.c.f12123d, proto, (eq.g) kVar.f3399i, (a4.i) kVar.f3401w, (eq.h) kVar.f3402x, (wq.k) kVar.E, null);
        b10 = kVar.b(cVar, m0.f13512d, (eq.g) kVar.f3399i, (a4.i) kVar.f3401w, (eq.h) kVar.f3402x, (eq.a) kVar.f3403y);
        t tVar = (t) b10.G;
        List list = proto.f7183w;
        Intrinsics.checkNotNullExpressionValue(list, "getValueParameterList(...)");
        cVar.P0(tVar.g(list, proto, aVar), ta.a.r((g1) eq.e.f8195d.g(proto.f7182v)));
        cVar.L0(fVar.k());
        cVar.P = fVar.z();
        cVar.T = !eq.e.f8204o.g(proto.f7182v).booleanValue();
        return cVar;
    }

    public final wq.s e(cq.a0 proto) {
        int i5;
        cc.k b10;
        yq.y g6;
        cc.k kVar = this.a;
        eq.g gVar = (eq.g) kVar.f3399i;
        a4.i typeTable = (a4.i) kVar.f3401w;
        Intrinsics.checkNotNullParameter(proto, "proto");
        if ((proto.f7005i & 1) == 1) {
            i5 = proto.f7006v;
        } else {
            int i6 = proto.f7007w;
            i5 = ((i6 >> 8) << 6) + (i6 & 63);
        }
        a aVar = a.f18996d;
        jp.h b11 = b(proto, i5, aVar);
        Intrinsics.checkNotNullParameter(proto, "<this>");
        int i10 = proto.f7005i;
        int i11 = i10 & 32;
        jp.f fVar = jp.g.a;
        jp.h aVar2 = (i11 == 32 || (i10 & 64) == 64) ? new wq.a(((j) kVar.f3398e).a, new q(this, proto, aVar, 1)) : fVar;
        int i12 = i5;
        wq.s ownerFunction = new wq.s((ip.l) kVar.f3400v, null, b11, nt.a.u(gVar, proto.f7008x), ta.a.E((cq.b0) eq.e.f8205p.g(i5)), proto, (eq.g) kVar.f3399i, typeTable, Intrinsics.areEqual(oq.e.g((ip.l) kVar.f3400v).a(nt.a.u(gVar, proto.f7008x)), y.a) ? eq.h.f8219b : (eq.h) kVar.f3402x, (wq.k) kVar.E, null);
        List list = proto.F;
        Intrinsics.checkNotNullExpressionValue(list, "getTypeParameterList(...)");
        b10 = kVar.b(ownerFunction, list, (eq.g) kVar.f3399i, (a4.i) kVar.f3401w, (eq.h) kVar.f3402x, (eq.a) kVar.f3403y);
        c0 typeDeserializer = (c0) b10.F;
        s0 H = zo.c0.H(proto, typeTable);
        lp.u C = (H == null || (g6 = typeDeserializer.g(H)) == null) ? null : m3.n.C(ownerFunction, g6, aVar2);
        ip.l lVar = (ip.l) kVar.f3400v;
        ip.f fVar2 = lVar instanceof ip.f ? (ip.f) lVar : null;
        lp.u u02 = fVar2 != null ? fVar2.u0() : null;
        Intrinsics.checkNotNullParameter(proto, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        List list2 = proto.I;
        if (list2.isEmpty()) {
            list2 = null;
        }
        if (list2 == null) {
            List<Integer> list3 = proto.J;
            Intrinsics.checkNotNullExpressionValue(list3, "getContextReceiverTypeIdList(...)");
            ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(list3, 10));
            for (Integer num : list3) {
                Intrinsics.checkNotNull(num);
                arrayList.add(typeTable.b(num.intValue()));
            }
            list2 = arrayList;
        }
        ArrayList arrayList2 = new ArrayList();
        int i13 = 0;
        for (Object obj : list2) {
            int i14 = i13 + 1;
            if (i13 < 0) {
                kotlin.collections.c0.k();
                throw null;
            }
            lp.u w5 = m3.n.w(ownerFunction, typeDeserializer.g((s0) obj), null, fVar, i13);
            if (w5 != null) {
                arrayList2.add(w5);
            }
            i13 = i14;
        }
        List b12 = typeDeserializer.b();
        t tVar = (t) b10.G;
        List list4 = proto.L;
        Intrinsics.checkNotNullExpressionValue(list4, "getValueParameterList(...)");
        ownerFunction.P0(C, u02, arrayList2, b12, tVar.g(list4, proto, aVar), typeDeserializer.g(zo.c0.J(proto, typeTable)), k.e((cq.c0) eq.e.f8196e.g(i12)), ta.a.r((g1) eq.e.f8195d.g(i12)), v0.d());
        ownerFunction.K = s4.h.m(eq.e.f8206q, i12, "get(...)");
        ownerFunction.L = s4.h.m(eq.e.f8207r, i12, "get(...)");
        ownerFunction.M = s4.h.m(eq.e.f8210u, i12, "get(...)");
        ownerFunction.N = s4.h.m(eq.e.f8208s, i12, "get(...)");
        ownerFunction.O = s4.h.m(eq.e.f8209t, i12, "get(...)");
        ownerFunction.S = s4.h.m(eq.e.f8211v, i12, "get(...)");
        ownerFunction.P = s4.h.m(eq.e.f8212w, i12, "get(...)");
        ownerFunction.T = !eq.e.f8213x.g(i12).booleanValue();
        ((j) kVar.f3398e).f19025m.getClass();
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(ownerFunction, "ownerFunction");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        Intrinsics.checkNotNullParameter(typeDeserializer, "typeDeserializer");
        return ownerFunction;
    }

    /* JADX WARN: Removed duplicated region for block: B:102:0x0130  */
    /* JADX WARN: Removed duplicated region for block: B:103:0x0128  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0125  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x012b  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0145  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0173  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0178  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x01bc  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0205  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x03ab  */
    /* JADX WARN: Removed duplicated region for block: B:98:0x0148  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final wq.r f(i0 proto) {
        int i5;
        cc.k b10;
        cc.k kVar;
        int i6;
        t tVar;
        jp.h hVar;
        List list;
        g1 g1Var;
        boolean z5;
        int i10;
        int i11;
        boolean z6;
        eq.c cVar;
        eq.b bVar;
        eq.c cVar2;
        eq.b bVar2;
        eq.b bVar3;
        int i12;
        String str;
        j0 j0Var;
        t tVar2;
        j0 j0Var2;
        k0 k0Var;
        cc.k b11;
        yq.y g6;
        cc.k kVar2 = this.a;
        a4.i typeTable = (a4.i) kVar2.f3401w;
        Intrinsics.checkNotNullParameter(proto, "proto");
        if ((proto.f7122i & 1) == 1) {
            i5 = proto.f7123v;
        } else {
            int i13 = proto.f7124w;
            i5 = ((i13 >> 8) << 6) + (i13 & 63);
        }
        int i14 = i5;
        wq.r rVar = new wq.r((ip.l) kVar2.f3400v, null, b(proto, i5, a.f18997e), k.e((cq.c0) eq.e.f8196e.g(i5)), ta.a.r((g1) eq.e.f8195d.g(i5)), s4.h.m(eq.e.f8214y, i5, "get(...)"), nt.a.u((eq.g) kVar2.f3399i, proto.f7125x), ta.a.E((cq.b0) eq.e.f8205p.g(i5)), s4.h.m(eq.e.C, i5, "get(...)"), s4.h.m(eq.e.B, i5, "get(...)"), s4.h.m(eq.e.E, i5, "get(...)"), s4.h.m(eq.e.F, i5, "get(...)"), s4.h.m(eq.e.G, i5, "get(...)"), proto, (eq.g) kVar2.f3399i, typeTable, (eq.h) kVar2.f3402x, (wq.k) kVar2.E);
        List list2 = proto.F;
        Intrinsics.checkNotNullExpressionValue(list2, "getTypeParameterList(...)");
        b10 = kVar2.b(rVar, list2, (eq.g) kVar2.f3399i, (a4.i) kVar2.f3401w, (eq.h) kVar2.f3402x, (eq.a) kVar2.f3403y);
        c0 c0Var = (c0) b10.F;
        boolean m5 = s4.h.m(eq.e.f8215z, i14, "get(...)");
        jp.f fVar = jp.g.a;
        a aVar = a.f18998i;
        if (m5) {
            Intrinsics.checkNotNullParameter(proto, "<this>");
            int i15 = proto.f7122i;
            if ((i15 & 32) == 32 || (i15 & 64) == 64) {
                xq.l lVar = ((j) kVar2.f3398e).a;
                i6 = 64;
                kVar = b10;
                tVar = this;
                hVar = new wq.a(lVar, new q(tVar, proto, aVar, 1));
                yq.y g10 = c0Var.g(zo.c0.K(proto, typeTable));
                List b12 = c0Var.b();
                ip.l lVar2 = (ip.l) kVar2.f3400v;
                ip.f fVar2 = !(lVar2 instanceof ip.f) ? (ip.f) lVar2 : null;
                lp.u u02 = fVar2 == null ? fVar2.u0() : null;
                Intrinsics.checkNotNullParameter(proto, "<this>");
                Intrinsics.checkNotNullParameter(typeTable, "typeTable");
                int i16 = proto.f7122i;
                lp.u uVar = u02;
                s0 b13 = (i16 & 32) != 32 ? proto.G : (i16 & 64) == i6 ? typeTable.b(proto.H) : null;
                lp.u C = (b13 != null || (g6 = c0Var.g(b13)) == null) ? null : m3.n.C(rVar, g6, hVar);
                Intrinsics.checkNotNullParameter(proto, "<this>");
                Intrinsics.checkNotNullParameter(typeTable, "typeTable");
                list = proto.I;
                if (list.isEmpty()) {
                    list = null;
                }
                int i17 = 10;
                if (list == null) {
                    List<Integer> list3 = proto.J;
                    Intrinsics.checkNotNullExpressionValue(list3, "getContextReceiverTypeIdList(...)");
                    ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(list3, 10));
                    for (Integer num : list3) {
                        Intrinsics.checkNotNull(num);
                        arrayList.add(typeTable.b(num.intValue()));
                    }
                    list = arrayList;
                }
                ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(list, 10));
                int i18 = 0;
                for (Object obj : list) {
                    int i19 = i18 + 1;
                    if (i18 < 0) {
                        kotlin.collections.c0.k();
                        throw null;
                    }
                    arrayList2.add(m3.n.w(rVar, c0Var.g((s0) obj), null, fVar, i18));
                    i17 = i17;
                    i18 = i19;
                }
                int i20 = i17;
                rVar.I0(g10, b12, uVar, C, arrayList2);
                eq.b bVar4 = eq.e.f8194c;
                boolean m6 = s4.h.m(bVar4, i14, "get(...)");
                eq.c cVar3 = eq.e.f8195d;
                g1Var = (g1) cVar3.g(i14);
                eq.c cVar4 = eq.e.f8196e;
                cq.c0 c0Var2 = (cq.c0) cVar4.g(i14);
                if (g1Var != null) {
                    eq.e.a(i20);
                    throw null;
                }
                if (c0Var2 == null) {
                    eq.e.a(11);
                    throw null;
                }
                if (m6) {
                    z5 = true;
                    i10 = 1 << bVar4.f8191b;
                } else {
                    z5 = true;
                    i10 = 0;
                }
                int a = i10 | (c0Var2.a() << cVar4.f8191b) | (g1Var.a() << cVar3.f8191b);
                eq.b bVar5 = eq.e.K;
                bVar5.getClass();
                eq.b bVar6 = eq.e.L;
                bVar6.getClass();
                eq.b bVar7 = eq.e.M;
                bVar7.getClass();
                p0 p0Var = o0.f12151g;
                if (m5) {
                    z6 = z5;
                    int i21 = (proto.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256 ? proto.M : a;
                    boolean m7 = s4.h.m(bVar5, i21, "get(...)");
                    boolean m10 = s4.h.m(bVar6, i21, "get(...)");
                    boolean m11 = s4.h.m(bVar7, i21, "get(...)");
                    jp.h b14 = tVar.b(proto, i21, aVar);
                    if (m7) {
                        bVar3 = bVar7;
                        cVar = cVar3;
                        cVar2 = cVar4;
                        str = "get(...)";
                        i12 = i14;
                        i11 = a;
                        bVar2 = bVar6;
                        bVar = bVar5;
                        j0Var = new j0(rVar, b14, k.e((cq.c0) cVar4.g(i21)), ta.a.r((g1) cVar3.g(i21)), !m7, m10, m11, rVar.b(), null, p0Var);
                    } else {
                        str = "get(...)";
                        cVar = cVar3;
                        bVar = bVar5;
                        cVar2 = cVar4;
                        bVar3 = bVar7;
                        i12 = i14;
                        i11 = a;
                        bVar2 = bVar6;
                        j0Var = m3.n.x(rVar, b14);
                        Intrinsics.checkNotNull(j0Var);
                    }
                    j0Var.E0(rVar.getReturnType());
                } else {
                    i11 = a;
                    z6 = z5;
                    cVar = cVar3;
                    bVar = bVar5;
                    cVar2 = cVar4;
                    bVar2 = bVar6;
                    bVar3 = bVar7;
                    i12 = i14;
                    str = "get(...)";
                    j0Var = null;
                }
                if (eq.e.A.g(i12).booleanValue()) {
                    int i22 = (proto.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512 ? proto.N : i11;
                    boolean m12 = s4.h.m(bVar, i22, str);
                    boolean m13 = s4.h.m(bVar2, i22, str);
                    boolean m14 = s4.h.m(bVar3, i22, str);
                    a aVar2 = a.f18999v;
                    tVar2 = this;
                    jp.h b15 = tVar2.b(proto, i22, aVar2);
                    if (m12) {
                        j0Var2 = j0Var;
                        k0 k0Var2 = new k0(rVar, b15, k.e((cq.c0) cVar2.g(i22)), ta.a.r((g1) cVar.g(i22)), !m12, m13, m14, rVar.b(), null, p0Var);
                        b11 = r7.b(k0Var2, m0.f13512d, (eq.g) r7.f3399i, (a4.i) r7.f3401w, (eq.h) r7.f3402x, (eq.a) kVar.f3403y);
                        r0 r0Var = (r0) CollectionsKt.Z(((t) b11.G).g(kotlin.collections.b0.c(proto.L), proto, aVar2));
                        if (r0Var == null) {
                            k0.v0(6);
                            throw null;
                        }
                        k0Var2.K = r0Var;
                        k0Var = k0Var2;
                    } else {
                        j0Var2 = j0Var;
                        k0Var = m3.n.y(rVar, b15);
                        Intrinsics.checkNotNull(k0Var);
                    }
                } else {
                    tVar2 = this;
                    j0Var2 = j0Var;
                    k0Var = null;
                }
                if (eq.e.D.g(i12).booleanValue()) {
                    rVar.G0(null, new p(tVar2, proto, rVar, 0));
                }
                ip.l lVar3 = (ip.l) kVar2.f3400v;
                ip.f fVar3 = lVar3 instanceof ip.f ? (ip.f) lVar3 : null;
                if ((fVar3 != null ? fVar3.b() : null) == ip.g.f12142w) {
                    rVar.G0(null, new p(tVar2, proto, rVar, 1));
                }
                rVar.F0(j0Var2, k0Var, new lp.r(tVar2.c(proto, false), rVar), new lp.r(tVar2.c(proto, z6), rVar));
                return rVar;
            }
        }
        kVar = b10;
        i6 = 64;
        tVar = this;
        hVar = fVar;
        yq.y g102 = c0Var.g(zo.c0.K(proto, typeTable));
        List b122 = c0Var.b();
        ip.l lVar22 = (ip.l) kVar2.f3400v;
        if (!(lVar22 instanceof ip.f)) {
        }
        if (fVar2 == null) {
        }
        Intrinsics.checkNotNullParameter(proto, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        int i162 = proto.f7122i;
        lp.u uVar2 = u02;
        if ((i162 & 32) != 32) {
        }
        if (b13 != null) {
        }
        Intrinsics.checkNotNullParameter(proto, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        list = proto.I;
        if (list.isEmpty()) {
        }
        int i172 = 10;
        if (list == null) {
        }
        ArrayList arrayList22 = new ArrayList(kotlin.collections.d0.l(list, 10));
        int i182 = 0;
        while (r2.hasNext()) {
        }
        int i202 = i172;
        rVar.I0(g102, b122, uVar2, C, arrayList22);
        eq.b bVar42 = eq.e.f8194c;
        boolean m62 = s4.h.m(bVar42, i14, "get(...)");
        eq.c cVar32 = eq.e.f8195d;
        g1Var = (g1) cVar32.g(i14);
        eq.c cVar42 = eq.e.f8196e;
        cq.c0 c0Var22 = (cq.c0) cVar42.g(i14);
        if (g1Var != null) {
        }
    }

    public final List g(List list, iq.k kVar, a aVar) {
        int i5;
        jp.h hVar;
        t tVar = this;
        cc.k kVar2 = tVar.a;
        a4.i typeTable = (a4.i) kVar2.f3401w;
        c0 c0Var = (c0) kVar2.F;
        ip.l lVar = (ip.l) kVar2.f3400v;
        Intrinsics.checkNotNull(lVar, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.CallableDescriptor");
        ip.b bVar = (ip.b) lVar;
        ip.l h6 = bVar.h();
        Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
        a3.r a = tVar.a(h6);
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(list, 10));
        int i6 = 0;
        for (Object obj : list) {
            int i10 = i6 + 1;
            yq.y yVar = null;
            if (i6 < 0) {
                kotlin.collections.c0.k();
                throw null;
            }
            a1 a1Var = (a1) obj;
            int i11 = (a1Var.f7011i & 1) == 1 ? a1Var.f7012v : 0;
            if (a == null || !eq.e.f8194c.g(i11).booleanValue()) {
                i5 = i6;
                hVar = jp.g.a;
            } else {
                i5 = i6;
                hVar = new wq.v(((j) kVar2.f3398e).a, new s(tVar, a, kVar, aVar, i5, a1Var));
            }
            hq.e u5 = nt.a.u((eq.g) kVar2.f3399i, a1Var.f7013w);
            yq.y g6 = c0Var.g(zo.c0.Q(a1Var, typeTable));
            boolean m5 = s4.h.m(eq.e.H, i11, "get(...)");
            boolean m6 = s4.h.m(eq.e.I, i11, "get(...)");
            Boolean g10 = eq.e.J.g(i11);
            Intrinsics.checkNotNullExpressionValue(g10, "get(...)");
            boolean booleanValue = g10.booleanValue();
            Intrinsics.checkNotNullParameter(a1Var, "<this>");
            Intrinsics.checkNotNullParameter(typeTable, "typeTable");
            int i12 = a1Var.f7011i;
            s0 b10 = (i12 & 16) == 16 ? a1Var.E : (i12 & 32) == 32 ? typeTable.b(a1Var.F) : null;
            if (b10 != null) {
                yVar = c0Var.g(b10);
            }
            p0 NO_SOURCE = o0.f12151g;
            Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
            ArrayList arrayList2 = arrayList;
            arrayList2.add(new r0(bVar, null, i5, hVar, u5, g6, m5, m6, booleanValue, yVar, NO_SOURCE));
            arrayList = arrayList2;
            i6 = i10;
            tVar = this;
        }
        return CollectionsKt.i0(arrayList);
    }
}
