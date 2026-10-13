package cp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l0 extends b1 implements zo.f {
    public final Object M;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l0(h0 container, ip.m0 descriptor) {
        super(container, descriptor);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        this.M = fo.l.b(fo.m.f8827e, new d0(1, this));
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // zo.k
    public final zo.d getSetter() {
        return (k0) this.M.getValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // zo.f, zo.k
    public final zo.e getSetter() {
        return (k0) this.M.getValue();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l0(h0 container, String name, String signature, Object obj) {
        super(container, name, signature, obj);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(signature, "signature");
        this.M = fo.l.b(fo.m.f8827e, new d0(1, this));
    }
}
