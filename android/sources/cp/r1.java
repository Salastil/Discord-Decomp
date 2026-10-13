package cp;

import java.lang.reflect.Array;
import java.lang.reflect.Type;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.KTypeBase;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class r1 implements KTypeBase {

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f6946w = {com.discord.chat.bridge.botuikit.a.o(r1.class, "classifier", "getClassifier()Lkotlin/reflect/KClassifier;", 0), com.discord.chat.bridge.botuikit.a.o(r1.class, "arguments", "getArguments()Ljava/util/List;", 0)};

    /* renamed from: d, reason: collision with root package name */
    public final yq.y f6947d;

    /* renamed from: e, reason: collision with root package name */
    public final w1 f6948e;

    /* renamed from: i, reason: collision with root package name */
    public final w1 f6949i;

    /* renamed from: v, reason: collision with root package name */
    public final w1 f6950v;

    public r1(yq.y type, Function0 function0) {
        Intrinsics.checkNotNullParameter(type, "type");
        this.f6947d = type;
        w1 w1Var = function0 instanceof w1 ? (w1) function0 : null;
        this.f6948e = w1Var == null ? function0 != null ? m3.n.q0(null, function0) : null : w1Var;
        this.f6949i = m3.n.q0(null, new p1(this, 0));
        this.f6950v = m3.n.q0(null, new bs.q(2, this, function0));
    }

    public final zo.c a(yq.y yVar) {
        yq.y b10;
        ip.i a = yVar.r0().a();
        if (a instanceof ip.f) {
            Class k = c2.k((ip.f) a);
            if (k != null) {
                if (!k.isArray()) {
                    if (yq.z0.e(yVar)) {
                        return new b0(k);
                    }
                    List list = op.c.a;
                    Intrinsics.checkNotNullParameter(k, "<this>");
                    Class cls = (Class) op.c.f16153b.get(k);
                    if (cls != null) {
                        k = cls;
                    }
                    return new b0(k);
                }
                yq.s0 s0Var = (yq.s0) CollectionsKt.b0(yVar.l0());
                if (s0Var == null || (b10 = s0Var.b()) == null) {
                    return new b0(k);
                }
                zo.c a10 = a(b10);
                if (a10 != null) {
                    Class z5 = com.facebook.imagepipeline.nativecode.c.z(d9.a.t(a10));
                    Intrinsics.checkNotNullParameter(z5, "<this>");
                    return new b0(Array.newInstance((Class<?>) z5, 0).getClass());
                }
                throw new u1("Cannot determine classifier for array element type: " + this);
            }
        } else {
            if (a instanceof ip.s0) {
                return new s1(null, (ip.s0) a);
            }
            if (a instanceof ip.r0) {
                Intrinsics.checkNotNullParameter("An operation is not implemented: Type alias classifiers are not yet supported", "message");
                throw new fo.o("An operation is not implemented: Type alias classifiers are not yet supported");
            }
        }
        return null;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof r1)) {
            return false;
        }
        r1 r1Var = (r1) obj;
        return Intrinsics.areEqual(this.f6947d, r1Var.f6947d) && Intrinsics.areEqual(getClassifier(), r1Var.getClassifier()) && Intrinsics.areEqual(getArguments(), r1Var.getArguments());
    }

    @Override // kotlin.jvm.internal.KTypeBase, zo.b
    public final List getAnnotations() {
        return c2.d(this.f6947d);
    }

    @Override // kotlin.jvm.internal.KTypeBase, kotlin.reflect.KType
    public final List getArguments() {
        KProperty kProperty = f6946w[1];
        Object invoke = this.f6950v.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return (List) invoke;
    }

    @Override // kotlin.jvm.internal.KTypeBase, kotlin.reflect.KType
    public final zo.c getClassifier() {
        KProperty kProperty = f6946w[0];
        return (zo.c) this.f6949i.invoke();
    }

    @Override // kotlin.jvm.internal.KTypeBase
    public final Type getJavaType() {
        w1 w1Var = this.f6948e;
        if (w1Var != null) {
            return (Type) w1Var.invoke();
        }
        return null;
    }

    public final int hashCode() {
        int hashCode = this.f6947d.hashCode() * 31;
        zo.c classifier = getClassifier();
        return getArguments().hashCode() + ((hashCode + (classifier != null ? classifier.hashCode() : 0)) * 31);
    }

    @Override // kotlin.jvm.internal.KTypeBase, kotlin.reflect.KType
    public final boolean isMarkedNullable() {
        return this.f6947d.t0();
    }

    public final String toString() {
        jq.h hVar = z1.a;
        return z1.d(this.f6947d);
    }
}
