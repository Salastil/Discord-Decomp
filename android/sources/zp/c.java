package zp;

import a5.a0;
import ip.s0;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import yq.b1;
import yq.c0;
import yq.c1;
import yq.h0;
import yq.k0;
import yq.p0;
import yq.y;
import yq.z0;

/* loaded from: classes3.dex */
public final class c {
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:125:0x02ba  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00d7  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00f3  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x012f  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x0145  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x01aa  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x01b6  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x014d  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x01ec A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:78:0x01f5  */
    /* JADX WARN: Removed duplicated region for block: B:91:0x021b  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x0220  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x023c  */
    /* JADX WARN: Type inference failed for: r5v0 */
    /* JADX WARN: Type inference failed for: r5v1, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r5v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static a5.f a(c0 c0Var, kq.k kVar, int i5, q qVar, boolean z5, boolean z6) {
        ip.f fVar;
        Boolean bool;
        p0 r02;
        int i6;
        Iterator it;
        ArrayList arrayList;
        int i10;
        int size;
        Boolean bool2;
        a0 a0Var;
        y yVar;
        h0 j;
        Intrinsics.checkNotNullParameter(qVar, "<this>");
        q qVar2 = q.f21379i;
        ?? r5 = 0;
        boolean z7 = qVar != qVar2;
        boolean z8 = (z6 && z5) ? false : true;
        Object obj = null;
        if (!z7 && c0Var.l0().isEmpty()) {
            return new a5.f(null, 1, false);
        }
        ip.i a = c0Var.r0().a();
        if (a == null) {
            return new a5.f(null, 1, false);
        }
        d dVar = (d) kVar.invoke(Integer.valueOf(i5));
        jp.i iVar = t.a;
        Intrinsics.checkNotNullParameter(qVar, "<this>");
        if (qVar != qVar2 && (a instanceof ip.f)) {
            if (dVar.f21345b == e.f21348d && qVar == q.f21377d) {
                ip.f mutable = (ip.f) a;
                Intrinsics.checkNotNullParameter(mutable, "mutable");
                String str = hp.d.a;
                hq.d g6 = kq.e.g(mutable);
                HashMap hashMap = hp.d.j;
                if (hashMap.containsKey(g6)) {
                    Intrinsics.checkNotNullParameter(mutable, "mutable");
                    hq.c cVar = (hq.c) hashMap.get(kq.e.g(mutable));
                    if (cVar == null) {
                        throw new IllegalArgumentException("Given class " + mutable + " is not a mutable collection");
                    }
                    fVar = oq.e.e(mutable).j(cVar);
                    Intrinsics.checkNotNullExpressionValue(fVar, "getBuiltInClassByFqName(...)");
                    Intrinsics.checkNotNullParameter(qVar, "<this>");
                    if (qVar != qVar2) {
                        g gVar = dVar.a;
                        int i11 = gVar == null ? -1 : s.a[gVar.ordinal()];
                        if (i11 == 1) {
                            bool = Boolean.TRUE;
                        } else if (i11 == 2) {
                            bool = Boolean.FALSE;
                        }
                        if (fVar != null || (r02 = fVar.n()) == null) {
                            r02 = c0Var.r0();
                        }
                        i6 = i5 + 1;
                        List l02 = c0Var.l0();
                        List parameters = r02.getParameters();
                        Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
                        it = parameters.iterator();
                        arrayList = new ArrayList(Math.min(d0.l(l02, 10), d0.l(parameters, 10)));
                        while (r14.hasNext() && it.hasNext()) {
                            s0 s0Var = (s0) it.next();
                            yq.s0 s0Var2 = (yq.s0) r12;
                            if (z8) {
                                bool2 = bool;
                                a0Var = new a0(r5, 20, obj);
                            } else {
                                bool2 = bool;
                                if (!s0Var2.c()) {
                                    a0Var = b(s0Var2.b().w0(), kVar, i6, z6);
                                } else if (((d) kVar.invoke(Integer.valueOf(i6))).a == g.f21352d) {
                                    b1 w02 = s0Var2.b().w0();
                                    a0Var = new a0(1, 20, yq.c.e(yq.c.l(w02).x0(r5), yq.c.E(w02).x0(true)));
                                } else {
                                    a0Var = new a0(1, 20, null);
                                }
                            }
                            i6 += a0Var.f124e;
                            yVar = (y) a0Var.f125i;
                            if (yVar == null) {
                                c1 a10 = s0Var2.a();
                                Intrinsics.checkNotNullExpressionValue(a10, "getProjectionKind(...)");
                                j = com.facebook.imagepipeline.nativecode.c.p(yVar, a10, s0Var);
                            } else if (fVar == null || s0Var2.c()) {
                                j = fVar != null ? z0.j(s0Var) : null;
                            } else {
                                y b10 = s0Var2.b();
                                Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
                                c1 a11 = s0Var2.a();
                                Intrinsics.checkNotNullExpressionValue(a11, "getProjectionKind(...)");
                                j = com.facebook.imagepipeline.nativecode.c.p(b10, a11, s0Var);
                            }
                            arrayList.add(j);
                            bool = bool2;
                            r5 = 0;
                            obj = null;
                        }
                        Boolean bool3 = bool;
                        i10 = i6 - i5;
                        if (fVar == null && bool3 == null) {
                            if (!arrayList.isEmpty()) {
                                Iterator it2 = arrayList.iterator();
                                while (it2.hasNext()) {
                                    if (((yq.s0) it2.next()) == null) {
                                    }
                                }
                            }
                            return new a5.f(null, i10, false);
                        }
                        jp.h annotations = c0Var.getAnnotations();
                        jp.i iVar2 = t.f21381b;
                        if (fVar == null) {
                            iVar2 = null;
                        }
                        jp.h[] elements = {annotations, iVar2, bool3 != null ? t.a : null};
                        Intrinsics.checkNotNullParameter(elements, "elements");
                        ArrayList r7 = x.r(elements);
                        size = r7.size();
                        if (size != 0) {
                            throw new IllegalStateException("At least one Annotations object expected");
                        }
                        k0 C = yq.c.C(size != 1 ? new jp.i(CollectionsKt.i0(r7), 1) : (jp.h) CollectionsKt.Z(r7));
                        List l03 = c0Var.l0();
                        Iterator it3 = arrayList.iterator();
                        Iterator it4 = l03.iterator();
                        ArrayList arrayList2 = new ArrayList(Math.min(d0.l(arrayList, 10), d0.l(l03, 10)));
                        while (it3.hasNext() && it4.hasNext()) {
                            Object next = it3.next();
                            yq.s0 s0Var3 = (yq.s0) it4.next();
                            yq.s0 s0Var4 = (yq.s0) next;
                            if (s0Var4 != null) {
                                s0Var3 = s0Var4;
                            }
                            arrayList2.add(s0Var3);
                        }
                        c0 t5 = yq.c.t(arrayList2, C, r02, bool3 != null ? bool3.booleanValue() : c0Var.t0());
                        if (dVar.f21346c) {
                            t5 = new f(t5);
                        }
                        return new a5.f(t5, i10, bool3 != null && dVar.f21347d);
                    }
                    bool = null;
                    if (fVar != null) {
                    }
                    r02 = c0Var.r0();
                    i6 = i5 + 1;
                    List l022 = c0Var.l0();
                    List parameters2 = r02.getParameters();
                    Intrinsics.checkNotNullExpressionValue(parameters2, "getParameters(...)");
                    it = parameters2.iterator();
                    arrayList = new ArrayList(Math.min(d0.l(l022, 10), d0.l(parameters2, 10)));
                    for (Object obj2 : l022) {
                        s0 s0Var5 = (s0) it.next();
                        yq.s0 s0Var22 = (yq.s0) obj2;
                        if (z8) {
                        }
                        i6 += a0Var.f124e;
                        yVar = (y) a0Var.f125i;
                        if (yVar == null) {
                        }
                        arrayList.add(j);
                        bool = bool2;
                        r5 = 0;
                        obj = null;
                    }
                    Boolean bool32 = bool;
                    i10 = i6 - i5;
                    if (fVar == null) {
                        if (!arrayList.isEmpty()) {
                        }
                        return new a5.f(null, i10, false);
                    }
                    jp.h annotations2 = c0Var.getAnnotations();
                    jp.i iVar22 = t.f21381b;
                    if (fVar == null) {
                    }
                    jp.h[] elements2 = {annotations2, iVar22, bool32 != null ? t.a : null};
                    Intrinsics.checkNotNullParameter(elements2, "elements");
                    ArrayList r72 = x.r(elements2);
                    size = r72.size();
                    if (size != 0) {
                    }
                }
            }
            if (dVar.f21345b == e.f21349e && qVar == q.f21378e) {
                ip.f readOnly = (ip.f) a;
                Intrinsics.checkNotNullParameter(readOnly, "readOnly");
                String str2 = hp.d.a;
                if (hp.d.k.containsKey(kq.e.g(readOnly))) {
                    fVar = hp.e.a(readOnly);
                    Intrinsics.checkNotNullParameter(qVar, "<this>");
                    if (qVar != qVar2) {
                    }
                    bool = null;
                    if (fVar != null) {
                    }
                    r02 = c0Var.r0();
                    i6 = i5 + 1;
                    List l0222 = c0Var.l0();
                    List parameters22 = r02.getParameters();
                    Intrinsics.checkNotNullExpressionValue(parameters22, "getParameters(...)");
                    it = parameters22.iterator();
                    arrayList = new ArrayList(Math.min(d0.l(l0222, 10), d0.l(parameters22, 10)));
                    while (r14.hasNext()) {
                    }
                    Boolean bool322 = bool;
                    i10 = i6 - i5;
                    if (fVar == null) {
                    }
                    jp.h annotations22 = c0Var.getAnnotations();
                    jp.i iVar222 = t.f21381b;
                    if (fVar == null) {
                    }
                    jp.h[] elements22 = {annotations22, iVar222, bool322 != null ? t.a : null};
                    Intrinsics.checkNotNullParameter(elements22, "elements");
                    ArrayList r722 = x.r(elements22);
                    size = r722.size();
                    if (size != 0) {
                    }
                }
            }
        }
        fVar = null;
        Intrinsics.checkNotNullParameter(qVar, "<this>");
        if (qVar != qVar2) {
        }
        bool = null;
        if (fVar != null) {
        }
        r02 = c0Var.r0();
        i6 = i5 + 1;
        List l02222 = c0Var.l0();
        List parameters222 = r02.getParameters();
        Intrinsics.checkNotNullExpressionValue(parameters222, "getParameters(...)");
        it = parameters222.iterator();
        arrayList = new ArrayList(Math.min(d0.l(l02222, 10), d0.l(parameters222, 10)));
        while (r14.hasNext()) {
        }
        Boolean bool3222 = bool;
        i10 = i6 - i5;
        if (fVar == null) {
        }
        jp.h annotations222 = c0Var.getAnnotations();
        jp.i iVar2222 = t.f21381b;
        if (fVar == null) {
        }
        jp.h[] elements222 = {annotations222, iVar2222, bool3222 != null ? t.a : null};
        Intrinsics.checkNotNullParameter(elements222, "elements");
        ArrayList r7222 = x.r(elements222);
        size = r7222.size();
        if (size != 0) {
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r11v8, types: [yq.b1] */
    public static a0 b(b1 b1Var, kq.k kVar, int i5, boolean z5) {
        Object obj = null;
        if (yq.c.j(b1Var)) {
            return new a0(1, 20, null);
        }
        if (!(b1Var instanceof yq.s)) {
            if (!(b1Var instanceof c0)) {
                throw new fo.n();
            }
            a5.f a = a((c0) b1Var, kVar, i5, q.f21379i, false, z5);
            b1 b1Var2 = (c0) a.f154c;
            if (a.a) {
                b1Var2 = yq.c.G(b1Var, b1Var2);
            }
            return new a0(a.f153b, 20, b1Var2);
        }
        boolean z6 = b1Var instanceof wp.h;
        yq.s sVar = (yq.s) b1Var;
        c0 c0Var = sVar.f21069i;
        c0 c0Var2 = sVar.f21068e;
        a5.f a10 = a(c0Var2, kVar, i5, q.f21377d, z6, z5);
        c0 c0Var3 = c0Var2;
        c0 c0Var4 = (c0) a10.f154c;
        a5.f a11 = a(sVar.f21069i, kVar, i5, q.f21378e, z6, z5);
        c0 c0Var5 = (c0) a11.f154c;
        if (c0Var4 != null || c0Var5 != null) {
            if (a10.a || a11.a) {
                if (c0Var5 != null) {
                    ?? e9 = yq.c.e(c0Var4 == null ? c0Var5 : c0Var4, c0Var5);
                    if (e9 != 0) {
                        c0Var4 = e9;
                        obj = yq.c.G(b1Var, c0Var4);
                    }
                }
                Intrinsics.checkNotNull(c0Var4);
                obj = yq.c.G(b1Var, c0Var4);
            } else if (z6) {
                if (c0Var4 != null) {
                    c0Var3 = c0Var4;
                }
                if (c0Var5 != null) {
                    c0Var = c0Var5;
                }
                obj = new wp.h(c0Var3, c0Var);
            } else {
                if (c0Var4 != null) {
                    c0Var3 = c0Var4;
                }
                if (c0Var5 != null) {
                    c0Var = c0Var5;
                }
                obj = yq.c.e(c0Var3, c0Var);
            }
        }
        return new a0(a10.f153b, 20, obj);
    }
}
