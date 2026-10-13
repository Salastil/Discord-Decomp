package cp;

import java.lang.reflect.Constructor;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.lang.reflect.Type;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.functions.Function4;
import kotlin.jvm.functions.Function5;
import kotlin.jvm.functions.Function6;
import kotlin.jvm.functions.Function8;
import kotlin.jvm.internal.CallableReference;
import kotlin.jvm.internal.FunctionBase;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KFunction;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class j0 extends r implements FunctionBase, KFunction, Function0, Function1, to.a, to.b, to.c, to.d, to.e, to.f, to.g, to.h, to.i, to.j, Function2, to.k, to.l, to.m, Function3, Function4, Function5, Function6, to.n, Function8, to.o {
    public static final /* synthetic */ KProperty[] J = {com.discord.chat.bridge.botuikit.a.o(j0.class, "descriptor", "getDescriptor()Lorg/jetbrains/kotlin/descriptors/FunctionDescriptor;", 0)};
    public final String E;
    public final Object F;
    public final w1 G;
    public final Object H;
    public final Object I;

    /* renamed from: y, reason: collision with root package name */
    public final h0 f6913y;

    public j0(h0 h0Var, String str, String str2, ip.v vVar, Object obj) {
        this.f6913y = h0Var;
        this.E = str2;
        this.F = obj;
        this.G = m3.n.q0(vVar, new bs.q(1, this, str));
        fo.m mVar = fo.m.f8827e;
        this.H = fo.l.b(mVar, new i0(this, 0));
        this.I = fo.l.b(mVar, new i0(this, 1));
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.r
    public final dp.g b() {
        return (dp.g) this.H.getValue();
    }

    @Override // cp.r
    public final h0 c() {
        return this.f6913y;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // cp.r
    public final dp.g d() {
        return (dp.g) this.I.getValue();
    }

    public final boolean equals(Object obj) {
        j0 b10 = c2.b(obj);
        return b10 != null && Intrinsics.areEqual(this.f6913y, b10.f6913y) && Intrinsics.areEqual(getName(), b10.getName()) && Intrinsics.areEqual(this.E, b10.E) && Intrinsics.areEqual(this.F, b10.F);
    }

    @Override // kotlin.jvm.internal.FunctionBase
    public final int getArity() {
        return a5.k0.t(b());
    }

    @Override // kotlin.reflect.KCallable
    public final String getName() {
        String b10 = ((lp.l) e()).getName().b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        return b10;
    }

    @Override // cp.r
    public final boolean h() {
        return this.F != CallableReference.NO_RECEIVER;
    }

    public final int hashCode() {
        return this.E.hashCode() + ((getName().hashCode() + (this.f6913y.hashCode() * 31)) * 31);
    }

    public final dp.w i(Constructor constructor, ip.v descriptor, boolean z5) {
        Object obj = this.F;
        Class<?> cls = null;
        if (!z5) {
            Intrinsics.checkNotNullParameter(descriptor, "descriptor");
            lp.h hVar = descriptor instanceof lp.h ? (lp.h) descriptor : null;
            if (hVar != null) {
                lp.h hVar2 = hVar;
                if (!ip.q.e(hVar2.getVisibility())) {
                    ip.f s2 = hVar.s();
                    Intrinsics.checkNotNullExpressionValue(s2, "getConstructedClass(...)");
                    if (!kq.g.f(s2) && !kq.e.q(hVar.s())) {
                        List P = hVar2.P();
                        Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                        if (P == null || !P.isEmpty()) {
                            Iterator it = P.iterator();
                            while (it.hasNext()) {
                                yq.y type = ((lp.r0) it.next()).getType();
                                Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                                if (ys.l.w(type)) {
                                    if (h()) {
                                        return new dp.h(constructor, android.support.v4.media.session.b.b(obj, e()), 0);
                                    }
                                    Intrinsics.checkNotNullParameter(constructor, "constructor");
                                    Class declaringClass = constructor.getDeclaringClass();
                                    Intrinsics.checkNotNullExpressionValue(declaringClass, "getDeclaringClass(...)");
                                    Type[] genericParameterTypes = constructor.getGenericParameterTypes();
                                    Intrinsics.checkNotNullExpressionValue(genericParameterTypes, "getGenericParameterTypes(...)");
                                    return new dp.i(constructor, declaringClass, cls, (Type[]) (genericParameterTypes.length <= 1 ? new Type[0] : kotlin.collections.u.j(genericParameterTypes, 0, genericParameterTypes.length - 1)), 0);
                                }
                            }
                        }
                    }
                }
            }
        }
        if (h()) {
            return new dp.h(constructor, android.support.v4.media.session.b.b(obj, e()), 1);
        }
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Class declaringClass2 = constructor.getDeclaringClass();
        Intrinsics.checkNotNullExpressionValue(declaringClass2, "getDeclaringClass(...)");
        Class declaringClass3 = constructor.getDeclaringClass();
        Class<?> declaringClass4 = declaringClass3.getDeclaringClass();
        if (declaringClass4 != null && !Modifier.isStatic(declaringClass3.getModifiers())) {
            cls = declaringClass4;
        }
        Type[] genericParameterTypes2 = constructor.getGenericParameterTypes();
        Intrinsics.checkNotNullExpressionValue(genericParameterTypes2, "getGenericParameterTypes(...)");
        return new dp.i(constructor, declaringClass2, cls, genericParameterTypes2, 1);
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        return call(new Object[0]);
    }

    @Override // kotlin.reflect.KFunction
    public final boolean isExternal() {
        return e().isExternal();
    }

    @Override // kotlin.reflect.KFunction
    public final boolean isInfix() {
        return e().isInfix();
    }

    @Override // kotlin.reflect.KFunction
    public final boolean isInline() {
        return e().isInline();
    }

    @Override // kotlin.reflect.KFunction
    public final boolean isOperator() {
        return e().isOperator();
    }

    @Override // kotlin.reflect.KCallable, kotlin.reflect.KFunction
    public final boolean isSuspend() {
        return e().isSuspend();
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0034, code lost:
    
        if (r1.isInterface() == true) goto L14;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final dp.q j(Method method, boolean z5) {
        if (!h()) {
            return new dp.v(2, method);
        }
        lp.u T = e().T();
        Object obj = this.F;
        if (T != null && kq.g.c(T.getType())) {
            Class<?>[] parameterTypes = method.getParameterTypes();
            Intrinsics.checkNotNullExpressionValue(parameterTypes, "getParameterTypes(...)");
            Class cls = (Class) kotlin.collections.x.t(parameterTypes);
            if (cls != null) {
            }
        }
        obj = android.support.v4.media.session.b.b(obj, e());
        return new dp.t(method, z5, obj);
    }

    @Override // cp.r
    /* renamed from: k, reason: merged with bridge method [inline-methods] */
    public final ip.v e() {
        KProperty kProperty = J[0];
        Object invoke = this.G.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return (ip.v) invoke;
    }

    public final String toString() {
        jq.h hVar = z1.a;
        return z1.b(e());
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return call(obj);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return call(obj, obj2);
    }

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        return call(obj, obj2, obj3);
    }

    @Override // kotlin.jvm.functions.Function4
    public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4) {
        return call(obj, obj2, obj3, obj4);
    }

    @Override // kotlin.jvm.functions.Function5
    public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5) {
        return call(obj, obj2, obj3, obj4, obj5);
    }

    @Override // kotlin.jvm.functions.Function6
    public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6) {
        return call(obj, obj2, obj3, obj4, obj5, obj6);
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /* JADX WARN: Multi-variable type inference failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public j0(h0 container, ip.v descriptor) {
        this(container, r3, a2.c(descriptor).d(), descriptor, CallableReference.NO_RECEIVER);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        String b10 = ((lp.l) descriptor).getName().b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
    }

    @Override // to.n
    public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6, Object obj7) {
        return call(obj, obj2, obj3, obj4, obj5, obj6, obj7);
    }

    @Override // kotlin.jvm.functions.Function8
    public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6, Object obj7, Object obj8) {
        return call(obj, obj2, obj3, obj4, obj5, obj6, obj7, obj8);
    }
}
