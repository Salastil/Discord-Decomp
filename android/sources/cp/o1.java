package cp;

import java.lang.reflect.AccessibleObject;
import java.lang.reflect.Field;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import kotlin.jvm.internal.CallableReference;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public abstract class o1 extends r implements KProperty {
    public static final Object J = new Object();
    public final String E;
    public final String F;
    public final Object G;
    public final Object H;
    public final w1 I;

    /* renamed from: y, reason: collision with root package name */
    public final h0 f6926y;

    public o1(h0 h0Var, String str, String str2, ip.m0 m0Var, Object obj) {
        this.f6926y = h0Var;
        this.E = str;
        this.F = str2;
        this.G = obj;
        this.H = fo.l.b(fo.m.f8827e, new i1(this, 0));
        w1 q02 = m3.n.q0(m0Var, new i1(this, 1));
        Intrinsics.checkNotNullExpressionValue(q02, "lazySoft(...)");
        this.I = q02;
    }

    @Override // cp.r
    public final dp.g b() {
        return l().b();
    }

    @Override // cp.r
    public final h0 c() {
        return this.f6926y;
    }

    @Override // cp.r
    public final dp.g d() {
        l().getClass();
        return null;
    }

    public final boolean equals(Object obj) {
        o1 c6 = c2.c(obj);
        return c6 != null && Intrinsics.areEqual(this.f6926y, c6.f6926y) && Intrinsics.areEqual(this.E, c6.E) && Intrinsics.areEqual(this.F, c6.F) && Intrinsics.areEqual(this.G, c6.G);
    }

    @Override // kotlin.reflect.KCallable
    public final String getName() {
        return this.E;
    }

    @Override // cp.r
    public final boolean h() {
        return this.G != CallableReference.NO_RECEIVER;
    }

    public final int hashCode() {
        return this.F.hashCode() + a3.e.d(this.f6926y.hashCode() * 31, 31, this.E);
    }

    /* JADX WARN: Type inference failed for: r0v5, types: [java.lang.Object, kotlin.Lazy] */
    public final Member i() {
        if (!e().E()) {
            return null;
        }
        hq.b bVar = a2.a;
        zk.a b10 = a2.b(e());
        if (b10 instanceof m) {
            m mVar = (m) b10;
            eq.g gVar = mVar.f6918m;
            fq.e eVar = mVar.f6917l;
            if ((eVar.f8960e & 16) == 16) {
                fq.c cVar = eVar.f8965y;
                int i5 = cVar.f8948e;
                if ((i5 & 1) != 1 || (i5 & 2) != 2) {
                    return null;
                }
                return this.f6926y.c(gVar.getString(cVar.f8949i), gVar.getString(cVar.f8950v));
            }
        }
        return (Field) this.H.getValue();
    }

    @Override // kotlin.reflect.KProperty
    public final boolean isConst() {
        return e().isConst();
    }

    @Override // kotlin.reflect.KProperty
    public final boolean isLateinit() {
        return e().b0();
    }

    @Override // kotlin.reflect.KCallable, kotlin.reflect.KFunction
    public final boolean isSuspend() {
        return false;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final Object j(Member member, Object obj, Object obj2) {
        try {
            Object obj3 = J;
            if ((obj == obj3 || obj2 == obj3) && e().W() == null) {
                throw new RuntimeException("'" + this + "' is not an extension property and thus getExtensionDelegate() is not going to work, use getDelegate() instead");
            }
            Object b10 = h() ? android.support.v4.media.session.b.b(this.G, e()) : obj;
            if (b10 == obj3) {
                b10 = null;
            }
            if (!h()) {
                obj = obj2;
            }
            if (obj == obj3) {
                obj = null;
            }
            AccessibleObject accessibleObject = member instanceof AccessibleObject ? (AccessibleObject) member : null;
            if (accessibleObject != null) {
                accessibleObject.setAccessible(com.facebook.imagepipeline.nativecode.c.L(this));
            }
            if (member == 0) {
                return null;
            }
            if (member instanceof Field) {
                return ((Field) member).get(b10);
            }
            if (!(member instanceof Method)) {
                throw new AssertionError("delegate field/method " + member + " neither field nor method");
            }
            int length = ((Method) member).getParameterTypes().length;
            if (length == 0) {
                return ((Method) member).invoke(null, null);
            }
            if (length == 1) {
                Method method = (Method) member;
                if (b10 == null) {
                    Class<?> cls = ((Method) member).getParameterTypes()[0];
                    Intrinsics.checkNotNullExpressionValue(cls, "get(...)");
                    b10 = c2.e(cls);
                }
                return method.invoke(null, b10);
            }
            if (length != 2) {
                throw new AssertionError("delegate method " + member + " should take 0, 1, or 2 parameters");
            }
            Method method2 = (Method) member;
            if (obj == null) {
                Class<?> cls2 = ((Method) member).getParameterTypes()[1];
                Intrinsics.checkNotNullExpressionValue(cls2, "get(...)");
                obj = c2.e(cls2);
            }
            return method2.invoke(null, b10, obj);
        } catch (IllegalAccessException cause) {
            Intrinsics.checkNotNullParameter(cause, "cause");
            throw new ap.a(1, "Cannot obtain the delegate of a non-accessible property. Use \"isAccessible = true\" to make the property accessible", cause);
        }
    }

    @Override // cp.r
    /* renamed from: k, reason: merged with bridge method [inline-methods] */
    public final ip.m0 e() {
        Object invoke = this.I.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "invoke(...)");
        return (ip.m0) invoke;
    }

    public abstract l1 l();

    public final String toString() {
        jq.h hVar = z1.a;
        return z1.c(e());
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public o1(h0 container, String name, String signature, Object obj) {
        this(container, name, signature, null, obj);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(signature, "signature");
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public o1(h0 container, ip.m0 descriptor) {
        this(container, r3, a2.b(descriptor).d(), descriptor, CallableReference.NO_RECEIVER);
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        String b10 = descriptor.getName().b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
    }
}
