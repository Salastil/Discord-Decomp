package jp;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;
import yq.w;

/* loaded from: classes3.dex */
public final class l implements h {

    /* renamed from: d, reason: collision with root package name */
    public final h f13014d;

    /* renamed from: e, reason: collision with root package name */
    public final w f13015e;

    public l(h delegate, w fqNameFilter) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        Intrinsics.checkNotNullParameter(fqNameFilter, "fqNameFilter");
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        Intrinsics.checkNotNullParameter(fqNameFilter, "fqNameFilter");
        this.f13014d = delegate;
        this.f13015e = fqNameFilter;
    }

    @Override // jp.h
    public final b Q(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        if (((Boolean) this.f13015e.invoke(fqName)).booleanValue()) {
            return this.f13014d.Q(fqName);
        }
        return null;
    }

    @Override // jp.h
    public final boolean isEmpty() {
        h hVar = this.f13014d;
        if ((hVar instanceof Collection) && ((Collection) hVar).isEmpty()) {
            return false;
        }
        Iterator it = hVar.iterator();
        while (it.hasNext()) {
            hq.c a = ((b) it.next()).a();
            if (a != null && ((Boolean) this.f13015e.invoke(a)).booleanValue()) {
                return true;
            }
        }
        return false;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        ArrayList arrayList = new ArrayList();
        for (Object obj : this.f13014d) {
            hq.c a = ((b) obj).a();
            if (a != null && ((Boolean) this.f13015e.invoke(a)).booleanValue()) {
                arrayList.add(obj);
            }
        }
        return arrayList.iterator();
    }

    @Override // jp.h
    public final boolean r(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        if (((Boolean) this.f13015e.invoke(fqName)).booleanValue()) {
            return this.f13014d.r(fqName);
        }
        return false;
    }
}
