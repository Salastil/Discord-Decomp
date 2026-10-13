package up;

import e4.i;
import fo.g;
import ip.i0;
import ir.n;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import op.x;
import vp.q;
import xq.f;
import xq.l;

/* loaded from: classes3.dex */
public final class d implements i0 {
    public final i a;

    /* renamed from: b, reason: collision with root package name */
    public final xq.e f18995b;

    public d(a components) {
        Intrinsics.checkNotNullParameter(components, "components");
        this.a = new i(components, b.f18990e, new g());
        l lVar = (l) components.a;
        lVar.getClass();
        this.f18995b = new xq.e(lVar, new ConcurrentHashMap(3, 1.0f, 2), new f(), 0);
    }

    @Override // ip.i0
    public final void a(hq.c fqName, ArrayList packageFragments) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(packageFragments, "packageFragments");
        n.b(packageFragments, d(fqName));
    }

    @Override // ip.i0
    public final boolean b(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        ((a) this.a.f7952d).f18968b.getClass();
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        return false;
    }

    @Override // ip.i0
    public final List c(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        return b0.c(d(fqName));
    }

    public final q d(hq.c fqName) {
        ((a) this.a.f7952d).f18968b.getClass();
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        bs.q qVar = new bs.q(14, this, new x(fqName));
        xq.e eVar = this.f18995b;
        eVar.getClass();
        Object invoke = eVar.invoke(new xq.g(fqName, qVar));
        if (invoke != null) {
            return (q) invoke;
        }
        xq.e.a(3);
        throw null;
    }

    @Override // ip.i0
    public final Collection f(hq.c fqName, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        List list = (List) d(fqName).I.invoke();
        return list == null ? m0.f13512d : list;
    }

    public final String toString() {
        return "LazyJavaPackageFragmentProvider of module " + ((a) this.a.f7952d).f18979o;
    }
}
