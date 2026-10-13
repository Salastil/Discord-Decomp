package lp;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k implements ip.i0 {
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public final String f14157b;

    public k(List providers, String debugName) {
        Intrinsics.checkNotNullParameter(providers, "providers");
        Intrinsics.checkNotNullParameter(debugName, "debugName");
        this.a = providers;
        this.f14157b = debugName;
        providers.size();
        CollectionsKt.l0(providers).size();
    }

    @Override // ip.i0
    public final void a(hq.c fqName, ArrayList packageFragments) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(packageFragments, "packageFragments");
        Iterator it = this.a.iterator();
        while (it.hasNext()) {
            nt.a.f((ip.i0) it.next(), fqName, packageFragments);
        }
    }

    @Override // ip.i0
    public final boolean b(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        List list = this.a;
        if (list != null && list.isEmpty()) {
            return true;
        }
        Iterator it = list.iterator();
        while (it.hasNext()) {
            if (!nt.a.z((ip.i0) it.next(), fqName)) {
                return false;
            }
        }
        return true;
    }

    @Override // ip.i0
    public final List c(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        ArrayList arrayList = new ArrayList();
        Iterator it = this.a.iterator();
        while (it.hasNext()) {
            nt.a.f((ip.i0) it.next(), fqName, arrayList);
        }
        return CollectionsKt.i0(arrayList);
    }

    @Override // ip.i0
    public final Collection f(hq.c fqName, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        HashSet hashSet = new HashSet();
        Iterator it = this.a.iterator();
        while (it.hasNext()) {
            hashSet.addAll(((ip.i0) it.next()).f(fqName, nameFilter));
        }
        return hashSet;
    }

    public final String toString() {
        return this.f14157b;
    }
}
