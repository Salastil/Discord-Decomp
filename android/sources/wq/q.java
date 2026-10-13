package wq;

import cq.e0;
import cq.f1;
import cq.y0;
import ip.f0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.h0;
import kotlin.collections.o0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.c0;

/* loaded from: classes3.dex */
public final class q extends p {

    /* renamed from: g, reason: collision with root package name */
    public final f0 f20032g;

    /* renamed from: h, reason: collision with root package name */
    public final String f20033h;

    /* renamed from: i, reason: collision with root package name */
    public final hq.c f20034i;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public q(f0 packageDescriptor, e0 proto, eq.g nameResolver, eq.a metadataVersion, aq.h hVar, uq.j components, String debugName, Function0 classNames) {
        super(r0, r2, r3, r4, classNames);
        Intrinsics.checkNotNullParameter(packageDescriptor, "packageDescriptor");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        Intrinsics.checkNotNullParameter(components, "components");
        Intrinsics.checkNotNullParameter(debugName, "debugName");
        Intrinsics.checkNotNullParameter(classNames, "classNames");
        y0 y0Var = proto.f7069y;
        Intrinsics.checkNotNullExpressionValue(y0Var, "getTypeTable(...)");
        a4.i iVar = new a4.i(y0Var);
        eq.h hVar2 = eq.h.f8219b;
        f1 f1Var = proto.E;
        Intrinsics.checkNotNullExpressionValue(f1Var, "getVersionRequirementTable(...)");
        cc.k a = components.a(packageDescriptor, nameResolver, iVar, m3.n.v(f1Var), metadataVersion, hVar);
        List list = proto.f7066v;
        Intrinsics.checkNotNullExpressionValue(list, "getFunctionList(...)");
        List list2 = proto.f7067w;
        Intrinsics.checkNotNullExpressionValue(list2, "getPropertyList(...)");
        List list3 = proto.f7068x;
        Intrinsics.checkNotNullExpressionValue(list3, "getTypeAliasList(...)");
        this.f20032g = packageDescriptor;
        this.f20033h = debugName;
        this.f20034i = ((c0) packageDescriptor).f14132x;
    }

    @Override // wq.p, rq.p, rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        ys.d.a0(((uq.j) this.f20028b.f3398e).f19023i, location, this.f20032g, name);
        return super.a(name, location);
    }

    @Override // rq.p, rq.q
    public final Collection e(rq.f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        qp.c cVar = qp.c.f16937d;
        List i5 = i(kindFilter, nameFilter);
        Iterable iterable = ((uq.j) this.f20028b.f3398e).k;
        ArrayList arrayList = new ArrayList();
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            h0.o(arrayList, ((kp.c) it.next()).b(this.f20034i));
        }
        return CollectionsKt.V(i5, arrayList);
    }

    @Override // wq.p
    public final void h(ArrayList result, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
    }

    @Override // wq.p
    public final hq.b l(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return new hq.b(this.f20034i, name);
    }

    @Override // wq.p
    public final Set n() {
        return o0.f13515d;
    }

    @Override // wq.p
    public final Set o() {
        return o0.f13515d;
    }

    @Override // wq.p
    public final Set p() {
        return o0.f13515d;
    }

    @Override // wq.p
    public final boolean q(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        if (super.q(name)) {
            return true;
        }
        Iterable iterable = ((uq.j) this.f20028b.f3398e).k;
        if ((iterable instanceof Collection) && ((Collection) iterable).isEmpty()) {
            return false;
        }
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            if (((kp.c) it.next()).a(this.f20034i, name)) {
                return true;
            }
        }
        return false;
    }

    public final String toString() {
        return this.f20033h;
    }
}
