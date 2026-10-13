package cp;

import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public abstract class l1 extends j1 implements zo.n {
    public static final /* synthetic */ KProperty[] F = {com.discord.chat.bridge.botuikit.a.o(l1.class, "descriptor", "getDescriptor()Lorg/jetbrains/kotlin/descriptors/PropertyGetterDescriptor;", 0)};

    /* renamed from: y, reason: collision with root package name */
    public final w1 f6916y = m3.n.q0(null, new k1(this, 0));
    public final Object E = fo.l.b(fo.m.f8827e, new k1(this, 1));

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.r
    public final dp.g b() {
        return (dp.g) this.E.getValue();
    }

    @Override // cp.r
    public final ip.d e() {
        KProperty kProperty = F[0];
        Object invoke = this.f6916y.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return (lp.j0) invoke;
    }

    public final boolean equals(Object obj) {
        return (obj instanceof l1) && Intrinsics.areEqual(j(), ((l1) obj).j());
    }

    @Override // kotlin.reflect.KCallable
    public final String getName() {
        return s4.h.h(new StringBuilder("<get-"), j().E, '>');
    }

    public final int hashCode() {
        return j().hashCode();
    }

    @Override // cp.j1
    public final ip.l0 i() {
        KProperty kProperty = F[0];
        Object invoke = this.f6916y.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return (lp.j0) invoke;
    }

    public final String toString() {
        return "getter of " + j();
    }
}
