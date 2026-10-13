package cp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d1 extends l1 implements zo.q {
    public final e1 G;

    public d1(e1 property) {
        Intrinsics.checkNotNullParameter(property, "property");
        this.G = property;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return ((d1) this.G.K.getValue()).call(obj);
    }

    @Override // cp.j1
    public final o1 j() {
        return this.G;
    }
}
