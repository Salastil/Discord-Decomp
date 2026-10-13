package cp;

import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k0 extends n1 implements zo.e {
    public final l0 G;

    public k0(l0 property) {
        Intrinsics.checkNotNullParameter(property, "property");
        this.G = property;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        ((k0) this.G.M.getValue()).call(obj);
        return Unit.a;
    }

    @Override // cp.j1
    public final o1 j() {
        return this.G;
    }
}
