package rp;

import ip.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k implements kq.f {
    @Override // kq.f
    public final int a(ip.b superDescriptor, ip.b subDescriptor, ip.f fVar) {
        Intrinsics.checkNotNullParameter(superDescriptor, "superDescriptor");
        Intrinsics.checkNotNullParameter(subDescriptor, "subDescriptor");
        if (!(subDescriptor instanceof m0) || !(superDescriptor instanceof m0)) {
            return 3;
        }
        m0 m0Var = (m0) subDescriptor;
        m0 m0Var2 = (m0) superDescriptor;
        if (!Intrinsics.areEqual(m0Var.getName(), m0Var2.getName())) {
            return 3;
        }
        if (android.support.v4.media.session.b.r(m0Var) && android.support.v4.media.session.b.r(m0Var2)) {
            return 1;
        }
        return (android.support.v4.media.session.b.r(m0Var) || android.support.v4.media.session.b.r(m0Var2)) ? 2 : 3;
    }

    @Override // kq.f
    public final int b() {
        return 3;
    }
}
