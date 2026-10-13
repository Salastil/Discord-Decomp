package cp;

import java.util.Collection;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.TypeIntrinsics;
import kotlin.reflect.KClass;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class b0 extends h0 implements KClass, c0, t1 {

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ int f6881v = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Class f6882e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f6883i;

    public b0(Class jClass) {
        Intrinsics.checkNotNullParameter(jClass, "jClass");
        this.f6882e = jClass;
        this.f6883i = fo.l.b(fo.m.f8827e, new s(this, 0));
    }

    public static lp.j n(hq.b bVar, np.e eVar) {
        uq.j jVar = eVar.a;
        hp.m mVar = new hp.m(jVar.f19016b, bVar.a, 1);
        hq.e f2 = bVar.f();
        ip.z zVar = ip.z.f12180e;
        ip.g gVar = ip.g.f12138d;
        List c6 = kotlin.collections.b0.c(jVar.f19016b.g().k("Any").k());
        xq.l lVar = jVar.a;
        lp.j jVar2 = new lp.j(mVar, f2, zVar, gVar, c6, lVar);
        jVar2.l0(new z(lVar, jVar2), kotlin.collections.o0.f13515d, null);
        return jVar2;
    }

    @Override // cp.h0
    public final Collection d() {
        ip.f descriptor = getDescriptor();
        if (descriptor.b() == ip.g.f12139e || descriptor.b() == ip.g.f12143x) {
            return kotlin.collections.m0.f13512d;
        }
        Collection q5 = descriptor.q();
        Intrinsics.checkNotNullExpressionValue(q5, "getConstructors(...)");
        return q5;
    }

    @Override // cp.h0
    public final Collection e(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        rq.o N = getDescriptor().k().N();
        qp.c cVar = qp.c.f16938e;
        Collection f2 = N.f(name, cVar);
        rq.o H = getDescriptor().H();
        Intrinsics.checkNotNullExpressionValue(H, "getStaticScope(...)");
        return CollectionsKt.V(f2, H.f(name, cVar));
    }

    public final boolean equals(Object obj) {
        return (obj instanceof b0) && Intrinsics.areEqual(com.facebook.imagepipeline.nativecode.c.A(this), com.facebook.imagepipeline.nativecode.c.A((KClass) obj));
    }

    @Override // cp.h0
    public final ip.m0 f(int i5) {
        Class<?> declaringClass;
        Class cls = this.f6882e;
        if (Intrinsics.areEqual(cls.getSimpleName(), "DefaultImpls") && (declaringClass = cls.getDeclaringClass()) != null && declaringClass.isInterface()) {
            Intrinsics.checkNotNullParameter(declaringClass, "<this>");
            KClass orCreateKotlinClass = Reflection.getOrCreateKotlinClass(declaringClass);
            Intrinsics.checkNotNull(orCreateKotlinClass, "null cannot be cast to non-null type kotlin.reflect.jvm.internal.KClassImpl<*>");
            return ((b0) orCreateKotlinClass).f(i5);
        }
        ip.f descriptor = getDescriptor();
        wq.i iVar = descriptor instanceof wq.i ? (wq.i) descriptor : null;
        if (iVar != null) {
            cq.k kVar = iVar.f20008w;
            iq.m classLocalVariable = fq.k.j;
            Intrinsics.checkNotNullExpressionValue(classLocalVariable, "classLocalVariable");
            cq.i0 i0Var = (cq.i0) zk.a.r(kVar, classLocalVariable, i5);
            if (i0Var != null) {
                cc.k kVar2 = iVar.I;
                return (ip.m0) c2.f(this.f6882e, i0Var, (eq.g) kVar2.f3399i, (a4.i) kVar2.f3401w, iVar.f20009x, a0.f6873d);
            }
        }
        return null;
    }

    @Override // zo.b
    public final List getAnnotations() {
        throw null;
    }

    @Override // kotlin.jvm.internal.ClassBasedDeclarationContainer
    public final Class getJClass() {
        return this.f6882e;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.internal.ClassBasedDeclarationContainer, kotlin.reflect.KClass
    public final Collection getMembers() {
        w1 w1Var = ((x) this.f6883i.getValue()).f6994n;
        KProperty kProperty = x.f6984o[16];
        Object invoke = w1Var.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return (Collection) invoke;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KClass
    public final String getQualifiedName() {
        w1 w1Var = ((x) this.f6883i.getValue()).f6987e;
        KProperty kProperty = x.f6984o[3];
        return (String) w1Var.invoke();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KClass
    public final String getSimpleName() {
        w1 w1Var = ((x) this.f6883i.getValue()).f6986d;
        KProperty kProperty = x.f6984o[2];
        return (String) w1Var.invoke();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KClass
    public final List getTypeParameters() {
        w1 w1Var = ((x) this.f6883i.getValue()).f6989g;
        KProperty kProperty = x.f6984o[6];
        Object invoke = w1Var.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return (List) invoke;
    }

    @Override // kotlin.reflect.KClass
    public final int hashCode() {
        return com.facebook.imagepipeline.nativecode.c.A(this).hashCode();
    }

    @Override // cp.h0
    public final Collection i(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        rq.o N = getDescriptor().k().N();
        qp.c cVar = qp.c.f16938e;
        Collection c6 = N.c(name, cVar);
        rq.o H = getDescriptor().H();
        Intrinsics.checkNotNullExpressionValue(H, "getStaticScope(...)");
        return CollectionsKt.V(c6, H.c(name, cVar));
    }

    @Override // kotlin.reflect.KClass
    public final boolean isInstance(Object obj) {
        List list = op.c.a;
        Class cls = this.f6882e;
        Intrinsics.checkNotNullParameter(cls, "<this>");
        Integer num = (Integer) op.c.f16155d.get(cls);
        if (num != null) {
            return TypeIntrinsics.isFunctionOfArity(obj, num.intValue());
        }
        Intrinsics.checkNotNullParameter(cls, "<this>");
        Class cls2 = (Class) op.c.f16154c.get(cls);
        if (cls2 != null) {
            cls = cls2;
        }
        return cls.isInstance(obj);
    }

    @Override // kotlin.reflect.KClass
    public final boolean isValue() {
        return getDescriptor().isValue();
    }

    public final hq.b o() {
        fp.k d6;
        hq.b bVar = a2.a;
        Class klass = this.f6882e;
        Intrinsics.checkNotNullParameter(klass, "klass");
        if (klass.isArray()) {
            Class<?> componentType = klass.getComponentType();
            Intrinsics.checkNotNullExpressionValue(componentType, "getComponentType(...)");
            d6 = componentType.isPrimitive() ? pq.c.b(componentType.getSimpleName()).d() : null;
            if (d6 != null) {
                return new hq.b(fp.p.f8915l, d6.f8869e);
            }
            hq.c topLevelFqName = fp.o.f8888g.g();
            Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
            return new hq.b(topLevelFqName.b(), topLevelFqName.a.f());
        }
        if (Intrinsics.areEqual(klass, Void.TYPE)) {
            return a2.a;
        }
        d6 = klass.isPrimitive() ? pq.c.b(klass.getSimpleName()).d() : null;
        if (d6 != null) {
            return new hq.b(fp.p.f8915l, d6.f8868d);
        }
        hq.b a = op.c.a(klass);
        if (!a.f10202c) {
            String str = hp.d.a;
            hq.c fqName = a.a();
            Intrinsics.checkNotNullParameter(fqName, "fqName");
            hq.b bVar2 = (hq.b) hp.d.f10154h.get(fqName.a);
            if (bVar2 != null) {
                return bVar2;
            }
        }
        return a;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.c0
    /* renamed from: p, reason: merged with bridge method [inline-methods] */
    public final ip.f getDescriptor() {
        return ((x) this.f6883i.getValue()).a();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("class ");
        hq.b o6 = o();
        hq.c cVar = o6.a;
        String h6 = cVar.a.c() ? "" : s4.h.h(new StringBuilder(), cVar.a.a, '.');
        sb2.append(h6 + kotlin.text.x.m(o6.f10201b.a.a, '.', '$'));
        return sb2.toString();
    }
}
