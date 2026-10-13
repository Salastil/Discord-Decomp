package gq;

import a4.i;
import cq.a0;
import cq.a1;
import cq.e0;
import cq.i0;
import cq.n;
import cq.s0;
import fq.j;
import fq.k;
import iq.m;
import iq.q;
import java.io.ByteArrayInputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import zo.c0;

/* loaded from: classes3.dex */
public final class g {
    public static final iq.g a;

    static {
        iq.g gVar = new iq.g();
        gVar.a(k.a);
        gVar.a(k.f8994b);
        gVar.a(k.f8995c);
        gVar.a(k.f8996d);
        gVar.a(k.f8997e);
        gVar.a(k.f8998f);
        gVar.a(k.f8999g);
        gVar.a(k.f9000h);
        gVar.a(k.f9001i);
        gVar.a(k.j);
        gVar.a(k.k);
        gVar.a(k.f9002l);
        gVar.a(k.f9003m);
        gVar.a(k.f9004n);
        Intrinsics.checkNotNullExpressionValue(gVar, "apply(...)");
        a = gVar;
    }

    public static e a(n proto, eq.g nameResolver, i typeTable) {
        String O;
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        m constructorSignature = k.a;
        Intrinsics.checkNotNullExpressionValue(constructorSignature, "constructorSignature");
        fq.c cVar = (fq.c) zk.a.q(proto, constructorSignature);
        String string = (cVar == null || (cVar.f8948e & 1) != 1) ? "<init>" : nameResolver.getString(cVar.f8949i);
        if (cVar == null || (cVar.f8948e & 2) != 2) {
            List<a1> list = proto.f7183w;
            Intrinsics.checkNotNullExpressionValue(list, "getValueParameterList(...)");
            ArrayList arrayList = new ArrayList(d0.l(list, 10));
            for (a1 a1Var : list) {
                Intrinsics.checkNotNull(a1Var);
                String e9 = e(c0.Q(a1Var, typeTable), nameResolver);
                if (e9 == null) {
                    return null;
                }
                arrayList.add(e9);
            }
            O = CollectionsKt.O(arrayList, "", "(", ")V", null, 56);
        } else {
            O = nameResolver.getString(cVar.f8950v);
        }
        return new e(string, O);
    }

    /*  JADX ERROR: JadxRuntimeException in pass: IfRegionVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't remove SSA var: r4v2 java.lang.String, still in use, count: 2, list:
          (r4v2 java.lang.String) from 0x0052: IF  (r4v2 java.lang.String) == (null java.lang.String)  -> B:23:0x0054 A[HIDDEN] (LINE:83)
          (r4v2 java.lang.String) from 0x0055: PHI (r4v3 java.lang.String) = (r4v2 java.lang.String), (r4v5 java.lang.String) binds: [B:20:0x0052, B:15:0x0043] A[DONT_GENERATE, DONT_INLINE]
        	at jadx.core.utils.InsnRemover.removeSsaVar(InsnRemover.java:162)
        	at jadx.core.utils.InsnRemover.unbindResult(InsnRemover.java:127)
        	at jadx.core.dex.visitors.regions.TernaryMod.makeTernaryInsn(TernaryMod.java:114)
        	at jadx.core.dex.visitors.regions.TernaryMod.processRegion(TernaryMod.java:62)
        	at jadx.core.dex.visitors.regions.TernaryMod.enterRegion(TernaryMod.java:45)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:67)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Collections.java:1117)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Collections.java:1117)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverse(DepthRegionTraversal.java:19)
        	at jadx.core.dex.visitors.regions.TernaryMod.process(TernaryMod.java:35)
        	at jadx.core.dex.visitors.regions.IfRegionVisitor.process(IfRegionVisitor.java:34)
        	at jadx.core.dex.visitors.regions.IfRegionVisitor.visit(IfRegionVisitor.java:30)
        */
    public static gq.d b(cq.i0 r4, eq.g r5, a4.i r6, boolean r7) {
        /*
            java.lang.String r0 = "proto"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "nameResolver"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "typeTable"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            iq.m r0 = fq.k.f8996d
            java.lang.String r1 = "propertySignature"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.Object r0 = zk.a.q(r4, r0)
            fq.e r0 = (fq.e) r0
            r1 = 0
            if (r0 != 0) goto L20
            goto L54
        L20:
            int r2 = r0.f8960e
            r3 = 1
            r2 = r2 & r3
            if (r2 != r3) goto L29
            fq.b r0 = r0.f8961i
            goto L2a
        L29:
            r0 = r1
        L2a:
            if (r0 != 0) goto L2f
            if (r7 == 0) goto L2f
            goto L54
        L2f:
            if (r0 == 0) goto L39
            int r7 = r0.f8941e
            r7 = r7 & r3
            if (r7 != r3) goto L39
            int r7 = r0.f8942i
            goto L3b
        L39:
            int r7 = r4.f7125x
        L3b:
            if (r0 == 0) goto L4a
            int r2 = r0.f8941e
            r3 = 2
            r2 = r2 & r3
            if (r2 != r3) goto L4a
            int r4 = r0.f8943v
            java.lang.String r4 = r5.getString(r4)
            goto L55
        L4a:
            cq.s0 r4 = zo.c0.K(r4, r6)
            java.lang.String r4 = e(r4, r5)
            if (r4 != 0) goto L55
        L54:
            return r1
        L55:
            gq.d r6 = new gq.d
            java.lang.String r5 = r5.getString(r7)
            r6.<init>(r5, r4)
            return r6
        */
        throw new UnsupportedOperationException("Method not decompiled: gq.g.b(cq.i0, eq.g, a4.i, boolean):gq.d");
    }

    public static e c(a0 proto, eq.g nameResolver, i typeTable) {
        String j;
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        m methodSignature = k.f8994b;
        Intrinsics.checkNotNullExpressionValue(methodSignature, "methodSignature");
        fq.c cVar = (fq.c) zk.a.q(proto, methodSignature);
        int i5 = (cVar == null || (cVar.f8948e & 1) != 1) ? proto.f7008x : cVar.f8949i;
        if (cVar == null || (cVar.f8948e & 2) != 2) {
            List h6 = kotlin.collections.c0.h(c0.H(proto, typeTable));
            List<a1> list = proto.L;
            Intrinsics.checkNotNullExpressionValue(list, "getValueParameterList(...)");
            ArrayList arrayList = new ArrayList(d0.l(list, 10));
            for (a1 a1Var : list) {
                Intrinsics.checkNotNull(a1Var);
                arrayList.add(c0.Q(a1Var, typeTable));
            }
            ArrayList V = CollectionsKt.V(h6, arrayList);
            ArrayList arrayList2 = new ArrayList(d0.l(V, 10));
            Iterator it = V.iterator();
            while (it.hasNext()) {
                String e9 = e((s0) it.next(), nameResolver);
                if (e9 == null) {
                    return null;
                }
                arrayList2.add(e9);
            }
            String e10 = e(c0.J(proto, typeTable), nameResolver);
            if (e10 == null) {
                return null;
            }
            j = com.discord.chat.bridge.botuikit.a.j(new StringBuilder(), CollectionsKt.O(arrayList2, "", "(", ")", null, 56), e10);
        } else {
            j = nameResolver.getString(cVar.f8950v);
        }
        return new e(nameResolver.getString(i5), j);
    }

    public static final boolean d(i0 proto) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        eq.b bVar = c.a;
        Object k = proto.k(k.f8997e);
        Intrinsics.checkNotNullExpressionValue(k, "getExtension(...)");
        Boolean g6 = bVar.g(((Number) k).intValue());
        Intrinsics.checkNotNullExpressionValue(g6, "get(...)");
        return g6.booleanValue();
    }

    public static String e(s0 s0Var, eq.g gVar) {
        if ((s0Var.f7238i & 16) == 16) {
            return b.b(gVar.h(s0Var.F));
        }
        return null;
    }

    public static final Pair f(String[] data, String[] strings) {
        Intrinsics.checkNotNullParameter(data, "data");
        Intrinsics.checkNotNullParameter(strings, "strings");
        byte[] bytes = a.a(data);
        Intrinsics.checkNotNullExpressionValue(bytes, "decodeBytes(...)");
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        Intrinsics.checkNotNullParameter(strings, "strings");
        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bytes);
        f g6 = g(byteArrayInputStream, strings);
        cq.a aVar = cq.k.f7138i0;
        aVar.getClass();
        iq.e eVar = new iq.e(byteArrayInputStream);
        iq.a aVar2 = (iq.a) aVar.a(eVar, a);
        try {
            eVar.a(0);
            if (aVar2.b()) {
                return new Pair(g6, (cq.k) aVar2);
            }
            q qVar = new q(new ai.k().getMessage());
            qVar.f12236d = aVar2;
            throw qVar;
        } catch (q e9) {
            e9.f12236d = aVar2;
            throw e9;
        }
    }

    public static f g(ByteArrayInputStream byteArrayInputStream, String[] strArr) {
        j jVar = (j) j.E.b(byteArrayInputStream, a);
        Intrinsics.checkNotNullExpressionValue(jVar, "parseDelimitedFrom(...)");
        return new f(jVar, strArr);
    }

    public static final Pair h(String[] data, String[] strings) {
        Intrinsics.checkNotNullParameter(data, "data");
        Intrinsics.checkNotNullParameter(strings, "strings");
        byte[] bytes = a.a(data);
        Intrinsics.checkNotNullExpressionValue(bytes, "decodeBytes(...)");
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        Intrinsics.checkNotNullParameter(strings, "strings");
        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bytes);
        f g6 = g(byteArrayInputStream, strings);
        cq.a aVar = e0.I;
        aVar.getClass();
        iq.e eVar = new iq.e(byteArrayInputStream);
        iq.a aVar2 = (iq.a) aVar.a(eVar, a);
        try {
            eVar.a(0);
            if (aVar2.b()) {
                return new Pair(g6, (e0) aVar2);
            }
            q qVar = new q(new ai.k().getMessage());
            qVar.f12236d = aVar2;
            throw qVar;
        } catch (q e9) {
            e9.f12236d = aVar2;
            throw e9;
        }
    }
}
