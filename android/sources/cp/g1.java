package cp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g1 extends l1 implements zo.r {
    public final h1 G;

    public g1(h1 property) {
        Intrinsics.checkNotNullParameter(property, "property");
        this.G = property;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((g1) this.G.K.getValue()).call(obj, obj2);
    }

    @Override // cp.j1
    public final o1 j() {
        return this.G;
    }
}
