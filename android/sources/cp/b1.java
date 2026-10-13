package cp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class b1 extends o1 implements zo.p {
    public final Object K;
    public final Object L;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b1(h0 container, ip.m0 descriptor) {
        super(container, descriptor);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        fo.m mVar = fo.m.f8827e;
        this.K = fo.l.b(mVar, new z0(this, 0));
        this.L = fo.l.b(mVar, new z0(this, 1));
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // zo.p
    public final Object getDelegate() {
        return this.L.getValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KProperty
    public final zo.n getGetter() {
        return (a1) this.K.getValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        return ((a1) this.K.getValue()).call(new Object[0]);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.o1
    public final l1 l() {
        return (a1) this.K.getValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KProperty
    public final zo.o getGetter() {
        return (a1) this.K.getValue();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b1(h0 container, String name, String signature, Object obj) {
        super(container, name, signature, obj);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(signature, "signature");
        fo.m mVar = fo.m.f8827e;
        this.K = fo.l.b(mVar, new z0(this, 0));
        this.L = fo.l.b(mVar, new z0(this, 1));
    }
}
