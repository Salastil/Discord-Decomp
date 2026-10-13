package cp;

import java.io.ByteArrayInputStream;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.CallableReference;
import kotlin.jvm.internal.ClassBasedDeclarationContainer;
import kotlin.jvm.internal.FunctionBase;
import kotlin.jvm.internal.FunctionReference;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import kotlin.jvm.internal.MutablePropertyReference0;
import kotlin.jvm.internal.MutablePropertyReference1;
import kotlin.jvm.internal.MutablePropertyReference2;
import kotlin.jvm.internal.PropertyReference0;
import kotlin.jvm.internal.PropertyReference1;
import kotlin.jvm.internal.PropertyReference2;
import kotlin.jvm.internal.ReflectionFactory;
import kotlin.reflect.KCallable;
import kotlin.reflect.KClass;
import kotlin.reflect.KDeclarationContainer;
import kotlin.reflect.KFunction;
import kotlin.reflect.KProperty1;
import kotlin.reflect.KType;

/* loaded from: classes3.dex */
public class y1 extends ReflectionFactory {
    public static h0 a(CallableReference callableReference) {
        KDeclarationContainer owner = callableReference.getOwner();
        return owner instanceof h0 ? (h0) owner : d.f6890e;
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KClass createKotlinClass(Class cls) {
        return new b0(cls);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KFunction function(FunctionReference functionReference) {
        h0 container = a(functionReference);
        String name = functionReference.getName();
        String signature = functionReference.getSignature();
        Object boundReceiver = functionReference.getBoundReceiver();
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(signature, "signature");
        return new j0(container, name, signature, null, boundReceiver);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KClass getOrCreateKotlinClass(Class cls) {
        return c.a(cls);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KDeclarationContainer getOrCreateKotlinPackage(Class jClass, String str) {
        e4.c cVar = c.a;
        Intrinsics.checkNotNullParameter(jClass, "jClass");
        return (KDeclarationContainer) c.f6884b.R0(jClass);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KType mutableCollectionType(KType type) {
        Intrinsics.checkNotNullParameter(type, "type");
        yq.y yVar = ((r1) type).f6947d;
        if (!(yVar instanceof yq.c0)) {
            throw new IllegalArgumentException(("Non-simple type cannot be a mutable collection type: " + type).toString());
        }
        ip.i a = yVar.r0().a();
        ip.f fVar = a instanceof ip.f ? (ip.f) a : null;
        if (fVar == null) {
            throw new IllegalArgumentException("Non-class type cannot be a mutable collection type: " + type);
        }
        yq.c0 c0Var = (yq.c0) yVar;
        String str = hp.d.a;
        hq.c cVar = (hq.c) hp.d.k.get(oq.e.h(fVar));
        if (cVar == null) {
            throw new IllegalArgumentException("Not a readonly collection: " + fVar);
        }
        ip.f j = oq.e.e(fVar).j(cVar);
        Intrinsics.checkNotNullExpressionValue(j, "getBuiltInClassByFqName(...)");
        yq.p0 n6 = j.n();
        Intrinsics.checkNotNullExpressionValue(n6, "getTypeConstructor(...)");
        return new r1(yq.c.u(c0Var, n6), null);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final zo.f mutableProperty0(MutablePropertyReference0 mutablePropertyReference0) {
        return new l0(a(mutablePropertyReference0), mutablePropertyReference0.getName(), mutablePropertyReference0.getSignature(), mutablePropertyReference0.getBoundReceiver());
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final zo.h mutableProperty1(MutablePropertyReference1 mutablePropertyReference1) {
        return new n0(a(mutablePropertyReference1), mutablePropertyReference1.getName(), mutablePropertyReference1.getSignature(), mutablePropertyReference1.getBoundReceiver());
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final zo.j mutableProperty2(MutablePropertyReference2 mutablePropertyReference2) {
        return new p0(a(mutablePropertyReference2), mutablePropertyReference2.getName(), mutablePropertyReference2.getSignature());
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KType nothingType(KType type) {
        Intrinsics.checkNotNullParameter(type, "type");
        yq.y yVar = ((r1) type).f6947d;
        if (!(yVar instanceof yq.c0)) {
            throw new IllegalArgumentException(("Non-simple type cannot be a Nothing type: " + type).toString());
        }
        yq.c0 c0Var = (yq.c0) yVar;
        yq.p0 n6 = com.facebook.imagepipeline.nativecode.c.v(yVar).k("Nothing").n();
        Intrinsics.checkNotNullExpressionValue(n6, "getTypeConstructor(...)");
        return new r1(yq.c.u(c0Var, n6), null);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KType platformType(KType lowerBound, KType upperBound) {
        Intrinsics.checkNotNullParameter(lowerBound, "lowerBound");
        Intrinsics.checkNotNullParameter(upperBound, "upperBound");
        yq.y yVar = ((r1) lowerBound).f6947d;
        Intrinsics.checkNotNull(yVar, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        yq.y yVar2 = ((r1) upperBound).f6947d;
        Intrinsics.checkNotNull(yVar2, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        return new r1(yq.c.e((yq.c0) yVar, (yq.c0) yVar2), null);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final zo.p property0(PropertyReference0 propertyReference0) {
        return new b1(a(propertyReference0), propertyReference0.getName(), propertyReference0.getSignature(), propertyReference0.getBoundReceiver());
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KProperty1 property1(PropertyReference1 propertyReference1) {
        return new e1(a(propertyReference1), propertyReference1.getName(), propertyReference1.getSignature(), propertyReference1.getBoundReceiver());
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final zo.s property2(PropertyReference2 propertyReference2) {
        return new h1(a(propertyReference2), propertyReference2.getName(), propertyReference2.getSignature());
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final String renderLambdaToString(FunctionBase functionBase) {
        j0 b10;
        Intrinsics.checkNotNullParameter(functionBase, "<this>");
        Metadata metadata = (Metadata) functionBase.getClass().getAnnotation(Metadata.class);
        j0 j0Var = null;
        if (metadata != null) {
            String[] data = metadata.d1();
            if (data.length == 0) {
                data = null;
            }
            if (data != null) {
                String[] strings = metadata.d2();
                iq.g gVar = gq.g.a;
                Intrinsics.checkNotNullParameter(data, "data");
                Intrinsics.checkNotNullParameter(strings, "strings");
                ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(gq.a.a(data));
                iq.g gVar2 = gq.g.a;
                gq.f g6 = gq.g.g(byteArrayInputStream, strings);
                iq.g gVar3 = gq.g.a;
                cq.a aVar = cq.a0.T;
                aVar.getClass();
                iq.e eVar = new iq.e(byteArrayInputStream);
                iq.a aVar2 = (iq.a) aVar.a(eVar, gVar3);
                try {
                    eVar.a(0);
                    if (!aVar2.b()) {
                        iq.q qVar = new iq.q(new ai.k().getMessage());
                        qVar.f12236d = aVar2;
                        throw qVar;
                    }
                    cq.a0 a0Var = (cq.a0) aVar2;
                    eq.f fVar = new eq.f(metadata.mv(), (metadata.xi() & 8) != 0);
                    Class<?> cls = functionBase.getClass();
                    cq.y0 y0Var = a0Var.M;
                    Intrinsics.checkNotNullExpressionValue(y0Var, "getTypeTable(...)");
                    j0Var = new j0(d.f6890e, (lp.l0) c2.f(cls, a0Var, g6, new a4.i(y0Var), fVar, bp.a.f3134d));
                } catch (iq.q e9) {
                    e9.f12236d = aVar2;
                    throw e9;
                }
            }
        }
        if (j0Var == null || (b10 = c2.b(j0Var)) == null) {
            return super.renderLambdaToString(functionBase);
        }
        jq.h hVar = z1.a;
        ip.v invoke = b10.e();
        Intrinsics.checkNotNullParameter(invoke, "invoke");
        StringBuilder sb2 = new StringBuilder();
        z1.a(invoke, sb2);
        List P = invoke.P();
        Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
        CollectionsKt.N(P, sb2, ", ", "(", ")", b.I, 48);
        sb2.append(" -> ");
        yq.y returnType = invoke.getReturnType();
        Intrinsics.checkNotNull(returnType);
        sb2.append(z1.d(returnType));
        return sb2.toString();
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KType typeOf(zo.c cVar, List arguments, boolean z5) {
        if (!(cVar instanceof ClassBasedDeclarationContainer)) {
            return com.facebook.imagepipeline.nativecode.b.j(cVar, arguments, z5, Collections.EMPTY_LIST);
        }
        Class<?> jClass = ((ClassBasedDeclarationContainer) cVar).getJClass();
        e4.c cVar2 = c.a;
        Intrinsics.checkNotNullParameter(jClass, "jClass");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        if (arguments.isEmpty()) {
            return z5 ? (KType) c.f6886d.R0(jClass) : (KType) c.f6885c.R0(jClass);
        }
        ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) c.f6887e.R0(jClass);
        Pair pair = new Pair(arguments, Boolean.valueOf(z5));
        Object obj = concurrentHashMap.get(pair);
        if (obj == null) {
            r1 j = com.facebook.imagepipeline.nativecode.b.j(c.a(jClass), arguments, z5, kotlin.collections.m0.f13512d);
            Object putIfAbsent = concurrentHashMap.putIfAbsent(pair, j);
            obj = putIfAbsent == null ? j : putIfAbsent;
        }
        Intrinsics.checkNotNullExpressionValue(obj, "getOrPut(...)");
        return (KType) obj;
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final zo.t typeParameter(Object obj, String str, zo.w wVar, boolean z5) {
        List<zo.t> typeParameters;
        if (obj instanceof KClass) {
            typeParameters = ((KClass) obj).getTypeParameters();
        } else {
            if (!(obj instanceof KCallable)) {
                throw new IllegalArgumentException("Type parameter container must be a class or a callable: " + obj);
            }
            typeParameters = ((KCallable) obj).getTypeParameters();
        }
        for (zo.t tVar : typeParameters) {
            if (tVar.getName().equals(str)) {
                return tVar;
            }
        }
        throw new IllegalArgumentException("Type parameter " + str + " is not found in container: " + obj);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KClass createKotlinClass(Class cls, String str) {
        return new b0(cls);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final KClass getOrCreateKotlinClass(Class cls, String str) {
        return c.a(cls);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final String renderLambdaToString(Lambda lambda) {
        return renderLambdaToString((FunctionBase) lambda);
    }

    @Override // kotlin.jvm.internal.ReflectionFactory
    public final void setUpperBounds(zo.t tVar, List list) {
    }
}
