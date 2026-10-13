package cp;

import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m0 extends n1 implements zo.g {
    public final n0 G;

    public m0(n0 property) {
        Intrinsics.checkNotNullParameter(property, "property");
        this.G = property;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        ((m0) this.G.M.getValue()).call(obj, obj2);
        return Unit.a;
    }

    @Override // cp.j1
    public final o1 j() {
        return this.G;
    }
}
