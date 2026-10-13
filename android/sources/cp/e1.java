package cp;

import java.lang.reflect.Member;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty1;

/* loaded from: classes3.dex */
public class e1 extends o1 implements KProperty1 {
    public final Object K;
    public final Object L;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e1(h0 container, String name, String signature, Object obj) {
        super(container, name, signature, obj);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(signature, "signature");
        fo.m mVar = fo.m.f8827e;
        this.K = fo.l.b(mVar, new c1(this, 0));
        this.L = fo.l.b(mVar, new c1(this, 1));
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KProperty1
    public final Object getDelegate(Object obj) {
        return j((Member) this.L.getValue(), obj, null);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KProperty
    public final zo.n getGetter() {
        return (d1) this.K.getValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return ((d1) this.K.getValue()).call(obj);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.o1
    public final l1 l() {
        return (d1) this.K.getValue();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KProperty
    public final zo.q getGetter() {
        return (d1) this.K.getValue();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e1(h0 container, ip.m0 descriptor) {
        super(container, descriptor);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        fo.m mVar = fo.m.f8827e;
        this.K = fo.l.b(mVar, new c1(this, 0));
        this.L = fo.l.b(mVar, new c1(this, 1));
    }
}
