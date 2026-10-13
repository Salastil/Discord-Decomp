package cp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n0 extends e1 implements zo.h {
    public final Object M;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n0(h0 container, String name, String signature, Object obj) {
        super(container, name, signature, obj);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(signature, "signature");
        this.M = fo.l.b(fo.m.f8827e, new d0(2, this));
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // zo.k
    public final zo.d getSetter() {
        return (m0) this.M.getValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // zo.h, zo.k
    public final zo.g getSetter() {
        return (m0) this.M.getValue();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n0(h0 container, ip.m0 descriptor) {
        super(container, descriptor);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        this.M = fo.l.b(fo.m.f8827e, new d0(2, this));
    }
}
