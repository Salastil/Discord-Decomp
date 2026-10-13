package rp;

import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q implements kq.f {
    /* JADX WARN: Code restructure failed: missing block: B:10:0x0046, code lost:
    
        if (rp.h0.j.contains(r2) == false) goto L42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x00a9, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r9, ks.n.g(r0, 2)) != false) goto L42;
     */
    /* JADX WARN: Multi-variable type inference failed */
    @Override // kq.f
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int a(ip.b superDescriptor, ip.b subDescriptor, ip.f fVar) {
        Intrinsics.checkNotNullParameter(superDescriptor, "superDescriptor");
        Intrinsics.checkNotNullParameter(subDescriptor, "subDescriptor");
        if ((superDescriptor instanceof ip.d) && (subDescriptor instanceof ip.v) && !fp.i.A(subDescriptor)) {
            int i5 = e.f17447l;
            ip.v vVar = (ip.v) subDescriptor;
            lp.l lVar = (lp.l) vVar;
            hq.e name = lVar.getName();
            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
            if (!e.b(name)) {
                ArrayList arrayList = h0.a;
                hq.e name2 = lVar.getName();
                Intrinsics.checkNotNullExpressionValue(name2, "getName(...)");
                Intrinsics.checkNotNullParameter(name2, "<this>");
            }
            ip.d N = ys.d.N((ip.d) superDescriptor);
            boolean z5 = superDescriptor instanceof ip.v;
            ip.v vVar2 = z5 ? (ip.v) superDescriptor : null;
            if ((vVar2 != null && vVar.f0() == vVar2.f0()) || (N != null && vVar.f0())) {
                if ((fVar instanceof tp.c) && vVar.S() == null && N != null && !ys.d.P(fVar, N)) {
                    if ((N instanceof ip.v) && z5 && e.a((ip.v) N) != null) {
                        String g6 = ks.n.g(vVar, 2);
                        ip.v a = ((ip.v) superDescriptor).a();
                        Intrinsics.checkNotNullExpressionValue(a, "getOriginal(...)");
                    }
                }
            }
        }
        return tn.g.i(superDescriptor, subDescriptor) ? 2 : 3;
    }

    @Override // kq.f
    public final int b() {
        return 1;
    }
}
