package zp;

import ip.s0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;
import lp.i0;
import lp.j0;
import lp.r0;
import rp.c0;
import rp.u;
import rp.v;
import rp.z;
import yq.c1;
import yq.p0;
import yq.y;
import yq.z0;

/* loaded from: classes3.dex */
public final class o {
    /* JADX WARN: Code restructure failed: missing block: B:242:0x0292, code lost:
    
        if (r13 == false) goto L176;
     */
    /* JADX WARN: Code restructure failed: missing block: B:244:0x0297, code lost:
    
        if (r13 == false) goto L170;
     */
    /* JADX WARN: Code restructure failed: missing block: B:248:0x02a5, code lost:
    
        if (r5.compareTo(r11) <= 0) goto L176;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:111:0x03fd  */
    /* JADX WARN: Removed duplicated region for block: B:130:0x0433  */
    /* JADX WARN: Removed duplicated region for block: B:155:0x03ed  */
    /* JADX WARN: Removed duplicated region for block: B:156:0x03a8  */
    /* JADX WARN: Removed duplicated region for block: B:191:0x01e7  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x02d4  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0349  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x034b  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x038c  */
    /* JADX WARN: Removed duplicated region for block: B:89:0x03a6  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x03ae  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x03bb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final y a(g3.a aVar, y yVar, List overrides, r rVar, boolean z5) {
        int size;
        boolean z6;
        Iterable annotations;
        boolean z7;
        Iterable iterable;
        ArrayList arrayList;
        ArrayList arrayList2;
        s0 s0Var;
        e4.i iVar;
        rp.a aVar2;
        h hVar;
        h hVar2;
        boolean z8;
        d dVar;
        rp.b bVar;
        boolean z10;
        e eVar;
        p0 B0;
        Iterator it;
        Iterator it2;
        g gVar;
        g gVar2;
        g gVar3;
        Iterator it3;
        boolean z11;
        Iterator it4;
        d dVar2;
        cr.d dVar3;
        g gVar4;
        boolean z12;
        cr.i iVar2;
        jp.a aVar3 = (jp.a) aVar.f9087c;
        e4.i iVar3 = (e4.i) aVar.f9088d;
        boolean z13 = aVar.a;
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        Intrinsics.checkNotNullParameter(overrides, "overrides");
        ArrayList e9 = aVar.e(yVar);
        ArrayList arrayList3 = new ArrayList(d0.l(overrides, 10));
        Iterator it5 = overrides.iterator();
        while (it5.hasNext()) {
            arrayList3.add(aVar.e((cr.d) it5.next()));
        }
        if (z13 && !overrides.isEmpty()) {
            Iterator it6 = overrides.iterator();
            while (it6.hasNext()) {
                cr.d other = (cr.d) it6.next();
                Intrinsics.checkNotNullParameter(yVar, "<this>");
                Intrinsics.checkNotNullParameter(other, "other");
                if (!((zq.m) ((up.a) iVar3.f7952d).f18985u).a(yVar, (y) other)) {
                    size = 1;
                    break;
                }
            }
        }
        size = e9.size();
        d[] dVarArr = new d[size];
        int i5 = 0;
        while (i5 < size) {
            a aVar4 = (a) e9.get(i5);
            rp.a aVar5 = (rp.a) aVar.f9089e;
            cr.d dVar4 = aVar4.a;
            s0 receiver = aVar4.f21343c;
            zq.n nVar = zq.n.f21398d;
            int i6 = size;
            if (dVar4 == null) {
                if (receiver != null) {
                    Intrinsics.checkNotNullParameter(receiver, "$receiver");
                    c1 variance = receiver.getVariance();
                    z6 = z13;
                    Intrinsics.checkNotNullExpressionValue(variance, "getVariance(...)");
                    iVar2 = android.support.v4.media.session.b.d(variance);
                } else {
                    z6 = z13;
                    iVar2 = null;
                }
                if (iVar2 == cr.i.f7318e) {
                    dVar = d.f21344e;
                    iVar = iVar3;
                    arrayList = e9;
                    arrayList2 = arrayList3;
                    hVar = null;
                    g gVar5 = dVar.a;
                    boolean z14 = dVar.f21347d;
                    ArrayList superQualifiers = new ArrayList();
                    it = arrayList2.iterator();
                    while (it.hasNext()) {
                        a aVar6 = (a) CollectionsKt.M(i5, (List) it.next());
                        if (aVar6 == null || (dVar3 = aVar6.a) == null) {
                            it4 = it;
                            dVar2 = null;
                        } else {
                            g d6 = g3.a.d(dVar3);
                            if (d6 == null) {
                                Intrinsics.checkNotNullParameter(dVar3, "<this>");
                                y f2 = yq.c.f((y) dVar3);
                                gVar4 = f2 != null ? g3.a.d(f2) : hVar;
                            } else {
                                gVar4 = d6;
                            }
                            String str = hp.d.a;
                            it4 = it;
                            e eVar2 = hp.d.k.containsKey(g3.a.c(nVar.i0(dVar3))) ? e.f21348d : hp.d.j.containsKey(g3.a.c(nVar.L(dVar3))) ? e.f21349e : null;
                            if (!nVar.l(dVar3)) {
                                Intrinsics.checkNotNullParameter(dVar3, "<this>");
                                if (!(((y) dVar3).w0() instanceof f)) {
                                    z12 = false;
                                    dVar2 = new d(gVar4, eVar2, z12, gVar4 == d6);
                                }
                            }
                            z12 = true;
                            dVar2 = new d(gVar4, eVar2, z12, gVar4 == d6);
                        }
                        if (dVar2 != null) {
                            superQualifiers.add(dVar2);
                        }
                        it = it4;
                        hVar = null;
                    }
                    boolean z15 = i5 != 0 && z6;
                    boolean z16 = (i5 == 0 || !(aVar3 instanceof r0) || ((r0) aVar3).H == null) ? false : true;
                    Intrinsics.checkNotNullParameter(dVar, "<this>");
                    Intrinsics.checkNotNullParameter(superQualifiers, "superQualifiers");
                    ArrayList arrayList4 = new ArrayList();
                    it2 = superQualifiers.iterator();
                    while (it2.hasNext()) {
                        d dVar5 = (d) it2.next();
                        g gVar6 = dVar5.f21347d ? null : dVar5.a;
                        if (gVar6 != null) {
                            arrayList4.add(gVar6);
                        }
                    }
                    Set l02 = CollectionsKt.l0(arrayList4);
                    gVar = !z14 ? null : gVar5;
                    gVar2 = g.f21352d;
                    if (gVar != gVar2) {
                        gVar2 = (g) zk.a.A(l02, g.f21354i, g.f21353e, gVar, z15);
                    }
                    if (gVar2 != null) {
                        ArrayList arrayList5 = new ArrayList();
                        Iterator it7 = superQualifiers.iterator();
                        while (it7.hasNext()) {
                            g gVar7 = ((d) it7.next()).a;
                            if (gVar7 != null) {
                                arrayList5.add(gVar7);
                            }
                        }
                        Set l03 = CollectionsKt.l0(arrayList5);
                        gVar3 = g.f21352d;
                        if (gVar5 != gVar3) {
                            gVar3 = (g) zk.a.A(l03, g.f21354i, g.f21353e, gVar5, z15);
                        }
                    } else {
                        gVar3 = gVar2;
                    }
                    ArrayList arrayList6 = new ArrayList();
                    it3 = superQualifiers.iterator();
                    while (it3.hasNext()) {
                        e eVar3 = ((d) it3.next()).f21345b;
                        if (eVar3 != null) {
                            arrayList6.add(eVar3);
                        }
                    }
                    jp.a aVar7 = aVar3;
                    e eVar4 = (e) zk.a.A(CollectionsKt.l0(arrayList6), e.f21349e, e.f21348d, dVar.f21345b, z15);
                    if (gVar3 != null || z5 || (z16 && gVar3 == g.f21353e)) {
                        gVar3 = null;
                    }
                    boolean z17 = gVar3 == null && gVar2 == null;
                    if (gVar3 == g.f21354i) {
                        if (z14 != z17 || !dVar.f21346c) {
                            if (!superQualifiers.isEmpty()) {
                                Iterator it8 = superQualifiers.iterator();
                                while (it8.hasNext()) {
                                    d dVar6 = (d) it8.next();
                                    if (dVar6.f21347d != z17 || !dVar6.f21346c) {
                                    }
                                }
                            }
                        }
                        z11 = true;
                        dVarArr[i5] = new d(gVar3, eVar4, z11, z17);
                        i5++;
                        size = i6;
                        aVar3 = aVar7;
                        z13 = z6;
                        iVar3 = iVar;
                        e9 = arrayList;
                        arrayList3 = arrayList2;
                    }
                    z11 = false;
                    dVarArr[i5] = new d(gVar3, eVar4, z11, z17);
                    i5++;
                    size = i6;
                    aVar3 = aVar7;
                    z13 = z6;
                    iVar3 = iVar;
                    e9 = arrayList;
                    arrayList3 = arrayList2;
                }
            } else {
                z6 = z13;
            }
            boolean z18 = receiver == null;
            if (dVar4 != null) {
                Intrinsics.checkNotNullParameter(dVar4, "<this>");
                annotations = ((y) dVar4).getAnnotations();
            } else {
                annotations = m0.f13512d;
            }
            s0 Q = (dVar4 == null || (B0 = nVar.B0(dVar4)) == null) ? null : m3.n.Q(B0);
            boolean z19 = z18;
            boolean z20 = aVar5 == rp.a.f17423x;
            if (z19) {
                z7 = z20;
                if (!z20) {
                    ((up.a) iVar3.f7952d).f18984t.getClass();
                }
                if (aVar3 == null || (iterable = aVar3.getAnnotations()) == null) {
                    iterable = m0.f13512d;
                }
                annotations = CollectionsKt.T(iterable, annotations);
            } else {
                z7 = z20;
            }
            ((up.a) iVar3.f7952d).f18981q.getClass();
            Intrinsics.checkNotNullParameter(annotations, "annotations");
            Iterator it9 = annotations.iterator();
            arrayList = e9;
            e eVar5 = null;
            while (true) {
                if (!it9.hasNext()) {
                    arrayList2 = arrayList3;
                    s0Var = receiver;
                    break;
                }
                arrayList2 = arrayList3;
                hq.c d7 = rp.b.d(it9.next());
                s0Var = receiver;
                if (CollectionsKt.E(z.f17519n, d7)) {
                    eVar = e.f21348d;
                } else if (CollectionsKt.E(z.f17520o, d7)) {
                    eVar = e.f21349e;
                } else {
                    continue;
                    arrayList3 = arrayList2;
                    receiver = s0Var;
                }
                if (eVar5 != null && eVar5 != eVar) {
                    eVar5 = null;
                    break;
                }
                eVar5 = eVar;
                arrayList3 = arrayList2;
                receiver = s0Var;
            }
            rp.b bVar2 = ((up.a) iVar3.f7952d).f18981q;
            iVar = iVar3;
            kq.k forceWarning = new kq.k(5, aVar, aVar4);
            bVar2.getClass();
            Intrinsics.checkNotNullParameter(annotations, "annotations");
            Intrinsics.checkNotNullParameter(forceWarning, "forceWarning");
            Iterator it10 = annotations.iterator();
            h hVar3 = null;
            while (it10.hasNext()) {
                Object next = it10.next();
                Iterator it11 = it10;
                h g6 = bVar2.g(next, ((Boolean) forceWarning.invoke(next)).booleanValue());
                if (g6 != null) {
                    bVar = bVar2;
                    aVar2 = aVar5;
                } else {
                    Object i10 = bVar2.i(next);
                    if (i10 == null) {
                        aVar2 = aVar5;
                    } else {
                        c0 h6 = bVar2.h(next);
                        if (h6 == null) {
                            h6 = bVar2.a.a.a;
                        }
                        h6.getClass();
                        aVar2 = aVar5;
                        if (h6 == c0.f17431e) {
                            bVar = bVar2;
                            g6 = null;
                        } else {
                            h g10 = bVar2.g(i10, ((Boolean) forceWarning.invoke(i10)).booleanValue());
                            if (g10 != null) {
                                bVar = bVar2;
                                hVar = null;
                                g6 = h.a(g10, null, h6 == c0.f17432i, 1);
                                if (hVar3 != null) {
                                    boolean z21 = hVar3.f21356b;
                                    if (g6 != null && !Intrinsics.areEqual(g6, hVar3) && (!(z10 = g6.f21356b) || z21)) {
                                        if (z10 || !z21) {
                                            hVar3 = hVar;
                                            break;
                                        }
                                    }
                                    bVar2 = bVar;
                                    aVar5 = aVar2;
                                    it10 = it11;
                                }
                                hVar3 = g6;
                                bVar2 = bVar;
                                aVar5 = aVar2;
                                it10 = it11;
                            }
                        }
                    }
                    bVar = bVar2;
                    hVar = null;
                    g6 = null;
                    if (hVar3 != null) {
                    }
                    hVar3 = g6;
                    bVar2 = bVar;
                    aVar5 = aVar2;
                    it10 = it11;
                }
                hVar = null;
                if (hVar3 != null) {
                }
                hVar3 = g6;
                bVar2 = bVar;
                aVar5 = aVar2;
                it10 = it11;
            }
            aVar2 = aVar5;
            hVar = null;
            if (hVar3 != null) {
                g gVar8 = hVar3.a;
                dVar = new d(gVar8, eVar5, gVar8 == g.f21354i && Q != null, hVar3.f21356b);
            } else {
                rp.a aVar8 = (z19 || z7) ? aVar2 : rp.a.f17422w;
                v vVar = aVar4.f21342b;
                rp.n nVar2 = vVar != null ? (rp.n) vVar.a.get(aVar8) : hVar;
                h b10 = Q != null ? g3.a.b(Q) : hVar;
                h a = b10 != null ? h.a(b10, g.f21354i, false, 2) : nVar2 != 0 ? nVar2.a : hVar;
                boolean z22 = (b10 != null ? b10.a : hVar) == g.f21354i || !(Q == null || nVar2 == 0 || !nVar2.f17473c);
                if (s0Var == null || (hVar2 = g3.a.b(s0Var)) == null) {
                    hVar2 = hVar;
                } else if (hVar2.a == g.f21353e) {
                    hVar2 = h.a(hVar2, g.f21352d, false, 2);
                }
                if (hVar2 != null) {
                    g gVar9 = hVar2.a;
                    if (a != null) {
                        g gVar10 = a.a;
                        boolean z23 = a.f21356b;
                        boolean z24 = hVar2.f21356b;
                        if (z24) {
                        }
                        if (!z24) {
                        }
                        if (gVar9.compareTo(gVar10) >= 0) {
                        }
                    }
                    a = hVar2;
                }
                g gVar11 = a != null ? a.a : hVar;
                if (a != null && a.f21356b) {
                    z8 = true;
                    dVar = new d(gVar11, eVar5, z22, z8);
                }
                z8 = false;
                dVar = new d(gVar11, eVar5, z22, z8);
            }
            g gVar52 = dVar.a;
            boolean z142 = dVar.f21347d;
            ArrayList superQualifiers2 = new ArrayList();
            it = arrayList2.iterator();
            while (it.hasNext()) {
            }
            if (i5 != 0) {
            }
            if (i5 == 0) {
            }
            Intrinsics.checkNotNullParameter(dVar, "<this>");
            Intrinsics.checkNotNullParameter(superQualifiers2, "superQualifiers");
            ArrayList arrayList42 = new ArrayList();
            it2 = superQualifiers2.iterator();
            while (it2.hasNext()) {
            }
            Set l022 = CollectionsKt.l0(arrayList42);
            if (!z142) {
            }
            gVar2 = g.f21352d;
            if (gVar != gVar2) {
            }
            if (gVar2 != null) {
            }
            ArrayList arrayList62 = new ArrayList();
            it3 = superQualifiers2.iterator();
            while (it3.hasNext()) {
            }
            jp.a aVar72 = aVar3;
            e eVar42 = (e) zk.a.A(CollectionsKt.l0(arrayList62), e.f21349e, e.f21348d, dVar.f21345b, z15);
            if (gVar3 != null) {
            }
            gVar3 = null;
            if (gVar3 == null) {
            }
            if (gVar3 == g.f21354i) {
            }
            z11 = false;
            dVarArr[i5] = new d(gVar3, eVar42, z11, z17);
            i5++;
            size = i6;
            aVar3 = aVar72;
            z13 = z6;
            iVar3 = iVar;
            e9 = arrayList;
            arrayList3 = arrayList2;
        }
        kq.k qualifiers = new kq.k(6, rVar, dVarArr);
        boolean z25 = aVar.f9086b;
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        Intrinsics.checkNotNullParameter(qualifiers, "qualifiers");
        return (y) c.b(yVar.w0(), qualifiers, 0, z25).f125i;
    }

    public final y b(tp.a aVar, ip.b bVar, boolean z5, e4.i iVar, rp.a aVar2, r rVar, boolean z6, Function1 function1) {
        g3.a aVar3 = new g3.a((jp.a) bVar, z5, iVar, aVar2, false);
        y yVar = (y) function1.invoke(aVar);
        Collection i5 = aVar.i();
        Intrinsics.checkNotNullExpressionValue(i5, "getOverriddenDescriptors(...)");
        Collection<ip.d> collection = i5;
        ArrayList arrayList = new ArrayList(d0.l(collection, 10));
        for (ip.d dVar : collection) {
            Intrinsics.checkNotNull(dVar);
            arrayList.add((y) function1.invoke(dVar));
        }
        return a(aVar3, yVar, arrayList, rVar, z6);
    }

    /* JADX WARN: Code restructure failed: missing block: B:114:0x02f1, code lost:
    
        if (r12 == null) goto L164;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:107:0x02b7  */
    /* JADX WARN: Removed duplicated region for block: B:109:0x02cc A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:114:0x02f1  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x02d7  */
    /* JADX WARN: Removed duplicated region for block: B:129:0x02f9  */
    /* JADX WARN: Removed duplicated region for block: B:136:0x031a  */
    /* JADX WARN: Removed duplicated region for block: B:149:0x0346  */
    /* JADX WARN: Removed duplicated region for block: B:152:0x02c9  */
    /* JADX WARN: Removed duplicated region for block: B:164:0x0247  */
    /* JADX WARN: Removed duplicated region for block: B:166:0x023d  */
    /* JADX WARN: Removed duplicated region for block: B:167:0x022f  */
    /* JADX WARN: Removed duplicated region for block: B:169:0x01ae  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x016e  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0194  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x01d5  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x022b  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x0232  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x0243  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x0269  */
    /* JADX WARN: Type inference failed for: r25v0, types: [zp.o] */
    /* JADX WARN: Type inference failed for: r5v3, types: [ip.b, ip.d, ip.l, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r5v4, types: [java.lang.Object, tp.a] */
    /* JADX WARN: Type inference failed for: r5v5, types: [java.lang.Object] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final ArrayList c(e4.i c6, Collection platformSignatures) {
        jp.h annotations;
        j0 j0Var;
        y yVar;
        m mVar;
        u javaTypeEnhancementState;
        boolean z5;
        ip.m0 m0Var;
        boolean z6;
        rp.a aVar;
        y b10;
        y returnType;
        boolean z7;
        Pair pair;
        int i5;
        Iterator it;
        boolean z8;
        e4.i i6;
        e4.i i10;
        j0 j0Var2;
        n nVar = n.f21373w;
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(platformSignatures, "platformSignatures");
        Collection<??> collection = platformSignatures;
        int i11 = 10;
        ArrayList arrayList = new ArrayList(d0.l(collection, 10));
        for (?? target : collection) {
            if (target instanceof tp.a) {
                if (target.b() != ip.c.f12124e || target.a().i().size() != 1) {
                    ip.i o6 = ks.n.o(target);
                    if (o6 == null) {
                        annotations = ((bq.b) target).getAnnotations();
                    } else {
                        vp.j jVar = o6 instanceof vp.j ? (vp.j) o6 : null;
                        List list = jVar != null ? (List) jVar.H.getValue() : null;
                        if (list == null || list.isEmpty()) {
                            annotations = ((bq.b) target).getAnnotations();
                        } else {
                            ArrayList arrayList2 = new ArrayList(d0.l(list, i11));
                            Iterator it2 = list.iterator();
                            while (it2.hasNext()) {
                                arrayList2.add(new vp.f(c6, (op.d) it2.next(), true));
                            }
                            ArrayList annotations2 = CollectionsKt.T(((bq.b) target).getAnnotations(), arrayList2);
                            Intrinsics.checkNotNullParameter(annotations2, "annotations");
                            annotations = annotations2.isEmpty() ? jp.g.a : new jp.i(annotations2, 0);
                        }
                    }
                    e4.i i12 = ks.n.i(c6, annotations);
                    if (!(target instanceof tp.f) || (j0Var2 = ((i0) target).U) == null || j0Var2.f14142x) {
                        j0Var = target;
                    } else {
                        Intrinsics.checkNotNull(j0Var2);
                        j0Var = j0Var2;
                    }
                    if (target.W() != null) {
                        j0 j0Var3 = j0Var instanceof ip.v ? j0Var : null;
                        r0 r0Var = j0Var3 != null ? (r0) j0Var3.K(tp.e.f18688d0) : null;
                        yVar = b((tp.a) target, r0Var, false, (r0Var == null || (i10 = ks.n.i(i12, r0Var.getAnnotations())) == null) ? i12 : i10, rp.a.f17420i, null, false, n.f21370e);
                    } else {
                        yVar = null;
                    }
                    tp.e eVar = target instanceof tp.e ? (tp.e) target : null;
                    if (eVar != null) {
                        ip.l h6 = eVar.h();
                        Intrinsics.checkNotNull(h6, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                        String Q = ki.b.Q((ip.f) h6, ks.n.g(eVar, 3));
                        if (Q != null && (mVar = (m) l.f21366d.get(Q)) != null) {
                            String str = mVar.f21368c;
                            if (str != null && !x.o(str, "2.", false)) {
                                throw new IllegalStateException("Check failed.");
                            }
                            if (str != null) {
                                mVar = mVar.f21369d;
                            }
                            if (mVar != null) {
                                mVar.f21367b.size();
                                ((tp.e) target).P().size();
                            }
                            javaTypeEnhancementState = ((up.a) c6.f7952d).f18986v;
                            Intrinsics.checkNotNullParameter(javaTypeEnhancementState, "javaTypeEnhancementState");
                            if (javaTypeEnhancementState.f17489b.invoke(rp.r.a) != c0.f17433v) {
                                Intrinsics.checkNotNullParameter(target, "memberDescriptor");
                                if ((target instanceof ip.v) && Intrinsics.areEqual(target.K(tp.e.f18689e0), Boolean.TRUE)) {
                                    z5 = true;
                                    List<r0> P = j0Var.P();
                                    String str2 = "getValueParameters(...)";
                                    Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                                    ArrayList arrayList3 = new ArrayList(d0.l(P, i11));
                                    for (r0 r0Var2 : P) {
                                        ArrayList arrayList4 = arrayList3;
                                        arrayList4.add(b((tp.a) target, r0Var2, false, (r0Var2 == null || (i6 = ks.n.i(i12, r0Var2.getAnnotations())) == null) ? i12 : i6, rp.a.f17420i, mVar != null ? (r) CollectionsKt.M(r0Var2.f14177y, mVar.f21367b) : null, z5, new aq.a(27, r0Var2)));
                                        str2 = str2;
                                        arrayList3 = arrayList4;
                                    }
                                    String str3 = str2;
                                    ArrayList arrayList5 = arrayList3;
                                    m0Var = target instanceof ip.m0 ? (ip.m0) target : null;
                                    if (m0Var != null) {
                                        z6 = true;
                                        if (android.support.v4.media.session.b.r(m0Var)) {
                                            aVar = rp.a.f17421v;
                                            rp.a aVar2 = aVar;
                                            boolean z10 = z6;
                                            tp.a aVar3 = (tp.a) target;
                                            int i13 = 0;
                                            b10 = b(aVar3, j0Var, true, i12, aVar2, mVar == null ? mVar.a : null, false, n.f21371i);
                                            returnType = target.getReturnType();
                                            Intrinsics.checkNotNull(returnType);
                                            if (!z0.c(returnType, nVar, null)) {
                                                lp.u W = target.W();
                                                if (!(W != null ? z0.c(W.getType(), nVar, null) : false)) {
                                                    List P2 = target.P();
                                                    Intrinsics.checkNotNullExpressionValue(P2, str3);
                                                    if (P2 == null || !P2.isEmpty()) {
                                                        Iterator it3 = P2.iterator();
                                                        while (it3.hasNext()) {
                                                            y type = ((r0) it3.next()).getType();
                                                            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                                                            if (z0.c(type, nVar, null)) {
                                                                z8 = z10;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    z8 = false;
                                                    if (!z8) {
                                                        z7 = false;
                                                        if (z7) {
                                                            Intrinsics.checkNotNullParameter(target, "target");
                                                            pair = new Pair(nq.c.a, new rp.g());
                                                        } else {
                                                            pair = null;
                                                        }
                                                        if (yVar == null && b10 == null) {
                                                            if (!arrayList5.isEmpty()) {
                                                                Iterator it4 = arrayList5.iterator();
                                                                while (it4.hasNext()) {
                                                                    if (((y) it4.next()) != null ? z10 : false) {
                                                                        break;
                                                                    }
                                                                }
                                                            }
                                                            z10 = false;
                                                            if (!z10) {
                                                            }
                                                        }
                                                        if (yVar == null) {
                                                            lp.u W2 = target.W();
                                                            yVar = W2 != null ? W2.getType() : null;
                                                        }
                                                        i5 = 10;
                                                        ArrayList arrayList6 = new ArrayList(d0.l(arrayList5, 10));
                                                        it = arrayList5.iterator();
                                                        while (it.hasNext()) {
                                                            Object next = it.next();
                                                            int i14 = i13 + 1;
                                                            if (i13 < 0) {
                                                                kotlin.collections.c0.k();
                                                                throw null;
                                                            }
                                                            y yVar2 = (y) next;
                                                            if (yVar2 == null) {
                                                                yVar2 = ((r0) target.P().get(i13)).getType();
                                                                Intrinsics.checkNotNullExpressionValue(yVar2, "getType(...)");
                                                            }
                                                            arrayList6.add(yVar2);
                                                            i13 = i14;
                                                        }
                                                        if (b10 == null) {
                                                            b10 = target.getReturnType();
                                                            Intrinsics.checkNotNull(b10);
                                                        }
                                                        target = aVar3.j0(yVar, arrayList6, b10, pair);
                                                        Intrinsics.checkNotNull(target, "null cannot be cast to non-null type D of org.jetbrains.kotlin.load.java.typeEnhancement.SignatureEnhancement.enhanceSignature");
                                                    }
                                                }
                                            }
                                            z7 = z10;
                                            if (z7) {
                                            }
                                            if (yVar == null) {
                                                if (!arrayList5.isEmpty()) {
                                                }
                                                z10 = false;
                                                if (!z10) {
                                                }
                                            }
                                            if (yVar == null) {
                                            }
                                            i5 = 10;
                                            ArrayList arrayList62 = new ArrayList(d0.l(arrayList5, 10));
                                            it = arrayList5.iterator();
                                            while (it.hasNext()) {
                                            }
                                            if (b10 == null) {
                                            }
                                            target = aVar3.j0(yVar, arrayList62, b10, pair);
                                            Intrinsics.checkNotNull(target, "null cannot be cast to non-null type D of org.jetbrains.kotlin.load.java.typeEnhancement.SignatureEnhancement.enhanceSignature");
                                        }
                                    } else {
                                        z6 = true;
                                    }
                                    aVar = rp.a.f17419e;
                                    rp.a aVar22 = aVar;
                                    boolean z102 = z6;
                                    tp.a aVar32 = (tp.a) target;
                                    int i132 = 0;
                                    b10 = b(aVar32, j0Var, true, i12, aVar22, mVar == null ? mVar.a : null, false, n.f21371i);
                                    returnType = target.getReturnType();
                                    Intrinsics.checkNotNull(returnType);
                                    if (!z0.c(returnType, nVar, null)) {
                                    }
                                    z7 = z102;
                                    if (z7) {
                                    }
                                    if (yVar == null) {
                                    }
                                    if (yVar == null) {
                                    }
                                    i5 = 10;
                                    ArrayList arrayList622 = new ArrayList(d0.l(arrayList5, 10));
                                    it = arrayList5.iterator();
                                    while (it.hasNext()) {
                                    }
                                    if (b10 == null) {
                                    }
                                    target = aVar32.j0(yVar, arrayList622, b10, pair);
                                    Intrinsics.checkNotNull(target, "null cannot be cast to non-null type D of org.jetbrains.kotlin.load.java.typeEnhancement.SignatureEnhancement.enhanceSignature");
                                }
                            } else {
                                ((up.a) i12.f7952d).f18984t.getClass();
                            }
                            z5 = false;
                            List<r0> P3 = j0Var.P();
                            String str22 = "getValueParameters(...)";
                            Intrinsics.checkNotNullExpressionValue(P3, "getValueParameters(...)");
                            ArrayList arrayList32 = new ArrayList(d0.l(P3, i11));
                            while (r10.hasNext()) {
                            }
                            String str32 = str22;
                            ArrayList arrayList52 = arrayList32;
                            if (target instanceof ip.m0) {
                            }
                            if (m0Var != null) {
                            }
                            aVar = rp.a.f17419e;
                            rp.a aVar222 = aVar;
                            boolean z1022 = z6;
                            tp.a aVar322 = (tp.a) target;
                            int i1322 = 0;
                            b10 = b(aVar322, j0Var, true, i12, aVar222, mVar == null ? mVar.a : null, false, n.f21371i);
                            returnType = target.getReturnType();
                            Intrinsics.checkNotNull(returnType);
                            if (!z0.c(returnType, nVar, null)) {
                            }
                            z7 = z1022;
                            if (z7) {
                            }
                            if (yVar == null) {
                            }
                            if (yVar == null) {
                            }
                            i5 = 10;
                            ArrayList arrayList6222 = new ArrayList(d0.l(arrayList52, 10));
                            it = arrayList52.iterator();
                            while (it.hasNext()) {
                            }
                            if (b10 == null) {
                            }
                            target = aVar322.j0(yVar, arrayList6222, b10, pair);
                            Intrinsics.checkNotNull(target, "null cannot be cast to non-null type D of org.jetbrains.kotlin.load.java.typeEnhancement.SignatureEnhancement.enhanceSignature");
                        }
                    }
                    mVar = null;
                    if (mVar != null) {
                    }
                    javaTypeEnhancementState = ((up.a) c6.f7952d).f18986v;
                    Intrinsics.checkNotNullParameter(javaTypeEnhancementState, "javaTypeEnhancementState");
                    if (javaTypeEnhancementState.f17489b.invoke(rp.r.a) != c0.f17433v) {
                    }
                    z5 = false;
                    List<r0> P32 = j0Var.P();
                    String str222 = "getValueParameters(...)";
                    Intrinsics.checkNotNullExpressionValue(P32, "getValueParameters(...)");
                    ArrayList arrayList322 = new ArrayList(d0.l(P32, i11));
                    while (r10.hasNext()) {
                    }
                    String str322 = str222;
                    ArrayList arrayList522 = arrayList322;
                    if (target instanceof ip.m0) {
                    }
                    if (m0Var != null) {
                    }
                    aVar = rp.a.f17419e;
                    rp.a aVar2222 = aVar;
                    boolean z10222 = z6;
                    tp.a aVar3222 = (tp.a) target;
                    int i13222 = 0;
                    b10 = b(aVar3222, j0Var, true, i12, aVar2222, mVar == null ? mVar.a : null, false, n.f21371i);
                    returnType = target.getReturnType();
                    Intrinsics.checkNotNull(returnType);
                    if (!z0.c(returnType, nVar, null)) {
                    }
                    z7 = z10222;
                    if (z7) {
                    }
                    if (yVar == null) {
                    }
                    if (yVar == null) {
                    }
                    i5 = 10;
                    ArrayList arrayList62222 = new ArrayList(d0.l(arrayList522, 10));
                    it = arrayList522.iterator();
                    while (it.hasNext()) {
                    }
                    if (b10 == null) {
                    }
                    target = aVar3222.j0(yVar, arrayList62222, b10, pair);
                    Intrinsics.checkNotNull(target, "null cannot be cast to non-null type D of org.jetbrains.kotlin.load.java.typeEnhancement.SignatureEnhancement.enhanceSignature");
                }
                i5 = 10;
            } else {
                i5 = i11;
            }
            arrayList.add(target);
            i11 = i5;
        }
        return arrayList;
    }
}
