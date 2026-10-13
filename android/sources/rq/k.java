package rq;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k implements o {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f17550b = 1;

    /* renamed from: c, reason: collision with root package name */
    public final Object f17551c;

    public k(o oVar) {
        this.f17551c = oVar;
    }

    @Override // rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return l().a(name, location);
    }

    @Override // rq.o
    public final Set b() {
        return l().b();
    }

    @Override // rq.o
    public Collection c(hq.e name, qp.c location) {
        switch (this.f17550b) {
            case 1:
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(location, "location");
                return android.support.v4.media.session.b.y(k(name, location), l.f17554v);
            default:
                return k(name, location);
        }
    }

    @Override // rq.o
    public final Set d() {
        return l().d();
    }

    @Override // rq.q
    public Collection e(f kindFilter, Function1 nameFilter) {
        switch (this.f17550b) {
            case 1:
                Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
                Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
                Collection i5 = i(kindFilter, nameFilter);
                ArrayList arrayList = new ArrayList();
                ArrayList arrayList2 = new ArrayList();
                for (Object obj : i5) {
                    if (((ip.l) obj) instanceof ip.b) {
                        arrayList.add(obj);
                    } else {
                        arrayList2.add(obj);
                    }
                }
                Intrinsics.checkNotNull(arrayList, "null cannot be cast to non-null type kotlin.collections.Collection<org.jetbrains.kotlin.descriptors.CallableDescriptor>");
                return CollectionsKt.V(android.support.v4.media.session.b.y(arrayList, l.f17555w), arrayList2);
            default:
                return i(kindFilter, nameFilter);
        }
    }

    @Override // rq.o
    public Collection f(hq.e name, qp.a location) {
        switch (this.f17550b) {
            case 1:
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(location, "location");
                return android.support.v4.media.session.b.y(j(name, location), l.f17553i);
            default:
                return j(name, location);
        }
    }

    @Override // rq.o
    public final Set g() {
        return l().g();
    }

    public final o h() {
        if (!(l() instanceof k)) {
            return l();
        }
        o l6 = l();
        Intrinsics.checkNotNull(l6, "null cannot be cast to non-null type org.jetbrains.kotlin.resolve.scopes.AbstractScopeAdapter");
        return ((k) l6).h();
    }

    public final Collection i(f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        return l().e(kindFilter, nameFilter);
    }

    public final Collection j(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return l().f(name, location);
    }

    public final Collection k(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return l().c(name, location);
    }

    public final o l() {
        switch (this.f17550b) {
            case 0:
                return (o) ((xq.i) this.f17551c).invoke();
            default:
                return (o) this.f17551c;
        }
    }

    public k(xq.o storageManager, Function0 getScope) {
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(getScope, "getScope");
        j jVar = new j(0, getScope);
        xq.l lVar = (xq.l) storageManager;
        lVar.getClass();
        this.f17551c = new xq.i(lVar, jVar);
    }
}
