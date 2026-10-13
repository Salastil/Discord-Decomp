package cp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a1 extends l1 implements zo.o {
    public final b1 G;

    public a1(b1 property) {
        Intrinsics.checkNotNullParameter(property, "property");
        this.G = property;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        return ((a1) this.G.K.getValue()).call(new Object[0]);
    }

    @Override // cp.j1
    public final o1 j() {
        return this.G;
    }
}
