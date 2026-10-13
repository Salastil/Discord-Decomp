package cp;

import java.lang.reflect.Member;
import kotlin.jvm.internal.CallableReference;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class h1 extends o1 implements zo.s {
    public final Object K;
    public final Object L;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h1(h0 container, String name, String signature) {
        super(container, name, signature, CallableReference.NO_RECEIVER);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(signature, "signature");
        fo.m mVar = fo.m.f8827e;
        this.K = fo.l.b(mVar, new f1(this, 0));
        this.L = fo.l.b(mVar, new f1(this, 1));
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // zo.s
    public final Object getDelegate(Object obj, Object obj2) {
        return j((Member) this.L.getValue(), obj, obj2);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KProperty
    public final zo.n getGetter() {
        return (g1) this.K.getValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((g1) this.K.getValue()).call(obj, obj2);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.o1
    public final l1 l() {
        return (g1) this.K.getValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KProperty
    public final zo.r getGetter() {
        return (g1) this.K.getValue();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h1(h0 container, ip.m0 descriptor) {
        super(container, descriptor);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        fo.m mVar = fo.m.f8827e;
        this.K = fo.l.b(mVar, new f1(this, 0));
        this.L = fo.l.b(mVar, new f1(this, 1));
    }
}
