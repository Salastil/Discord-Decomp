package cp;

import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class o0 extends n1 implements zo.i {
    public final p0 G;

    public o0(p0 property) {
        Intrinsics.checkNotNullParameter(property, "property");
        this.G = property;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        ((o0) this.G.M.getValue()).call(obj, obj2, obj3);
        return Unit.a;
    }

    @Override // cp.j1
    public final o1 j() {
        return this.G;
    }
}
