package ip;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h0 implements i0 {
    public final ArrayList a;

    public h0(ArrayList packageFragments) {
        Intrinsics.checkNotNullParameter(packageFragments, "packageFragments");
        this.a = packageFragments;
    }

    @Override // ip.i0
    public final void a(hq.c fqName, ArrayList packageFragments) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(packageFragments, "packageFragments");
        for (Object obj : this.a) {
            if (Intrinsics.areEqual(((lp.c0) ((f0) obj)).f14132x, fqName)) {
                packageFragments.add(obj);
            }
        }
    }

    @Override // ip.i0
    public final boolean b(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        ArrayList arrayList = this.a;
        if (arrayList.isEmpty()) {
            return true;
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            if (Intrinsics.areEqual(((lp.c0) ((f0) it.next())).f14132x, fqName)) {
                return false;
            }
        }
        return true;
    }

    @Override // ip.i0
    public final List c(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        ArrayList arrayList = new ArrayList();
        for (Object obj : this.a) {
            if (Intrinsics.areEqual(((lp.c0) ((f0) obj)).f14132x, fqName)) {
                arrayList.add(obj);
            }
        }
        return arrayList;
    }

    @Override // ip.i0
    public final Collection f(hq.c fqName, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        return kr.s.q(kr.s.i(kr.s.n(CollectionsKt.C(this.a), s.f12169i), new g0(fqName, 0)));
    }
}
