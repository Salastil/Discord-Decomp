package cp;

import java.util.Collection;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class v0 extends h0 {

    /* renamed from: e, reason: collision with root package name */
    public final Class f6974e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f6975i;

    public v0(Class jClass) {
        Intrinsics.checkNotNullParameter(jClass, "jClass");
        this.f6974e = jClass;
        this.f6975i = fo.l.b(fo.m.f8827e, new q0(this, 0));
    }

    @Override // cp.h0
    public final Collection d() {
        return kotlin.collections.m0.f13512d;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.h0
    public final Collection e(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        w1 w1Var = ((t0) this.f6975i.getValue()).f6964d;
        KProperty kProperty = t0.f6962h[1];
        Object invoke = w1Var.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return ((rq.o) invoke).f(name, qp.c.f16938e);
    }

    public final boolean equals(Object obj) {
        if (obj instanceof v0) {
            return Intrinsics.areEqual(this.f6974e, ((v0) obj).f6974e);
        }
        return false;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r0v3, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.h0
    public final ip.m0 f(int i5) {
        fo.v vVar = (fo.v) ((t0) this.f6975i.getValue()).f6966f.getValue();
        if (vVar == null) {
            return null;
        }
        gq.f fVar = (gq.f) vVar.f8840d;
        cq.e0 e0Var = (cq.e0) vVar.f8841e;
        eq.f fVar2 = (eq.f) vVar.f8842i;
        iq.m packageLocalVariable = fq.k.f9004n;
        Intrinsics.checkNotNullExpressionValue(packageLocalVariable, "packageLocalVariable");
        cq.i0 i0Var = (cq.i0) zk.a.r(e0Var, packageLocalVariable, i5);
        if (i0Var == null) {
            return null;
        }
        cq.y0 y0Var = e0Var.f7069y;
        Intrinsics.checkNotNullExpressionValue(y0Var, "getTypeTable(...)");
        return (ip.m0) c2.f(this.f6974e, i0Var, fVar, new a4.i(y0Var), fVar2, u0.f6972d);
    }

    @Override // kotlin.jvm.internal.ClassBasedDeclarationContainer
    public final Class getJClass() {
        return this.f6974e;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.internal.ClassBasedDeclarationContainer, kotlin.reflect.KClass
    public final Collection getMembers() {
        w1 w1Var = ((t0) this.f6975i.getValue()).f6967g;
        KProperty kProperty = t0.f6962h[2];
        Object invoke = w1Var.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return (Collection) invoke;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r0v3, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.h0
    public final Class h() {
        Class cls = (Class) ((t0) this.f6975i.getValue()).f6965e.getValue();
        return cls == null ? this.f6974e : cls;
    }

    public final int hashCode() {
        return this.f6974e.hashCode();
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.h0
    public final Collection i(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        w1 w1Var = ((t0) this.f6975i.getValue()).f6964d;
        KProperty kProperty = t0.f6962h[1];
        Object invoke = w1Var.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return ((rq.o) invoke).c(name, qp.c.f16938e);
    }

    public final String toString() {
        return "file class " + op.c.a(this.f6974e).a();
    }
}
