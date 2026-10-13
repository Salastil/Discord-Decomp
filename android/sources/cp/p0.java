package cp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p0 extends h1 implements zo.j {
    public final Object M;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p0(h0 container, String name, String signature) {
        super(container, name, signature);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(signature, "signature");
        this.M = fo.l.b(fo.m.f8827e, new d0(3, this));
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // zo.k
    public final zo.d getSetter() {
        return (o0) this.M.getValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // zo.j, zo.k
    public final zo.i getSetter() {
        return (o0) this.M.getValue();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p0(h0 container, ip.m0 descriptor) {
        super(container, descriptor);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        this.M = fo.l.b(fo.m.f8827e, new d0(3, this));
    }
}
