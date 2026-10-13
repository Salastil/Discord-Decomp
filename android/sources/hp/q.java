package hp;

import ip.f0;
import ip.i0;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import kotlin.collections.c0;
import kotlin.collections.o0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.a0;

/* loaded from: classes3.dex */
public final class q implements i0 {
    public final xq.l a;

    /* renamed from: b, reason: collision with root package name */
    public final a0 f10191b;

    /* renamed from: c, reason: collision with root package name */
    public uq.j f10192c;

    /* renamed from: d, reason: collision with root package name */
    public final xq.j f10193d;

    public q(xq.l storageManager, ha.l finder, a0 moduleDescriptor) {
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(finder, "finder");
        Intrinsics.checkNotNullParameter(moduleDescriptor, "moduleDescriptor");
        this.a = storageManager;
        this.f10191b = moduleDescriptor;
        this.f10193d = storageManager.d(new aq.a(18, this));
    }

    @Override // ip.i0
    public final void a(hq.c fqName, ArrayList packageFragments) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(packageFragments, "packageFragments");
        ir.n.b(packageFragments, this.f10193d.invoke(fqName));
    }

    @Override // ip.i0
    public final boolean b(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        xq.j jVar = this.f10193d;
        Object obj = jVar.f20544e.get(fqName);
        return ((obj == null || obj == xq.k.f20547e) ? d(fqName) : (f0) jVar.invoke(fqName)) == null;
    }

    @Override // ip.i0
    public final List c(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        return c0.h(this.f10193d.invoke(fqName));
    }

    public final vq.c d(hq.c packageFqName) {
        InputStream a;
        Intrinsics.checkNotNullParameter(packageFqName, "fqName");
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        if (packageFqName.c(fp.p.k)) {
            vq.a.f19541m.getClass();
            a = vq.d.a(vq.a.a(packageFqName));
        } else {
            a = null;
        }
        if (a != null) {
            return com.facebook.imagepipeline.nativecode.c.n(packageFqName, this.a, this.f10191b, a);
        }
        return null;
    }

    @Override // ip.i0
    public final Collection f(hq.c fqName, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        return o0.f13515d;
    }
}
