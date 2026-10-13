package cp;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KCallable;
import kotlin.reflect.KType;
import kotlin.reflect.KVisibility;

/* loaded from: classes3.dex */
public abstract class r implements KCallable, t1 {

    /* renamed from: d, reason: collision with root package name */
    public final w1 f6938d;

    /* renamed from: e, reason: collision with root package name */
    public final w1 f6939e;

    /* renamed from: i, reason: collision with root package name */
    public final w1 f6940i;

    /* renamed from: v, reason: collision with root package name */
    public final w1 f6941v;

    /* renamed from: w, reason: collision with root package name */
    public final w1 f6942w;

    /* renamed from: x, reason: collision with root package name */
    public final Object f6943x;

    public r() {
        w1 q02 = m3.n.q0(null, new o(this, 0));
        Intrinsics.checkNotNullExpressionValue(q02, "lazySoft(...)");
        this.f6938d = q02;
        w1 q03 = m3.n.q0(null, new o(this, 1));
        Intrinsics.checkNotNullExpressionValue(q03, "lazySoft(...)");
        this.f6939e = q03;
        w1 q04 = m3.n.q0(null, new o(this, 2));
        Intrinsics.checkNotNullExpressionValue(q04, "lazySoft(...)");
        this.f6940i = q04;
        w1 q05 = m3.n.q0(null, new o(this, 3));
        Intrinsics.checkNotNullExpressionValue(q05, "lazySoft(...)");
        this.f6941v = q05;
        w1 q06 = m3.n.q0(null, new o(this, 4));
        Intrinsics.checkNotNullExpressionValue(q06, "lazySoft(...)");
        this.f6942w = q06;
        this.f6943x = fo.l.b(fo.m.f8827e, new o(this, 5));
    }

    public static Object a(r1 r1Var) {
        Class z5 = com.facebook.imagepipeline.nativecode.c.z(d9.a.s(r1Var));
        if (z5.isArray()) {
            Object newInstance = Array.newInstance(z5.getComponentType(), 0);
            Intrinsics.checkNotNullExpressionValue(newInstance, "run(...)");
            return newInstance;
        }
        throw new u1("Cannot instantiate the default empty array of type " + z5.getSimpleName() + ", because it is not an array type");
    }

    public abstract dp.g b();

    public abstract h0 c();

    @Override // kotlin.reflect.KCallable
    public final Object call(Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        try {
            return b().call(args);
        } catch (IllegalAccessException cause) {
            Intrinsics.checkNotNullParameter(cause, "cause");
            throw new ap.a(cause);
        }
    }

    /* JADX WARN: Type inference failed for: r8v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.reflect.KCallable
    public final Object callBy(Map args) {
        boolean z5;
        Object a;
        Intrinsics.checkNotNullParameter(args, "args");
        boolean z6 = false;
        if (g()) {
            List<zo.m> parameters = getParameters();
            ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(parameters, 10));
            for (zo.m mVar : parameters) {
                if (args.containsKey(mVar)) {
                    a = args.get(mVar);
                    if (a == null) {
                        throw new IllegalArgumentException("Annotation argument value cannot be null (" + mVar + ')');
                    }
                } else {
                    y0 y0Var = (y0) mVar;
                    if (y0Var.c()) {
                        a = null;
                    } else {
                        if (!y0Var.d()) {
                            throw new IllegalArgumentException("No argument provided for a required parameter: " + y0Var);
                        }
                        a = a(y0Var.b());
                    }
                }
                arrayList.add(a);
            }
            dp.g d6 = d();
            if (d6 == null) {
                throw new u1("This callable does not support a default call: " + e());
            }
            try {
                return d6.call(arrayList.toArray(new Object[0]));
            } catch (IllegalAccessException cause) {
                Intrinsics.checkNotNullParameter(cause, "cause");
                throw new ap.a(cause);
            }
        }
        Intrinsics.checkNotNullParameter(args, "args");
        List<zo.m> parameters2 = getParameters();
        if (parameters2.isEmpty()) {
            try {
                return b().call(isSuspend() ? new Continuation[]{null} : new Continuation[0]);
            } catch (IllegalAccessException cause2) {
                Intrinsics.checkNotNullParameter(cause2, "cause");
                throw new ap.a(cause2);
            }
        }
        int size = (isSuspend() ? 1 : 0) + parameters2.size();
        Object[] objArr = (Object[]) ((Object[]) this.f6942w.invoke()).clone();
        if (isSuspend()) {
            objArr[parameters2.size()] = null;
        }
        boolean booleanValue = ((Boolean) this.f6943x.getValue()).booleanValue();
        int i5 = 0;
        for (zo.m mVar2 : parameters2) {
            int f2 = booleanValue ? f(mVar2) : 1;
            if (args.containsKey(mVar2)) {
                objArr[((y0) mVar2).f6999e] = args.get(mVar2);
            } else {
                y0 y0Var2 = (y0) mVar2;
                if (y0Var2.c()) {
                    if (booleanValue) {
                        int i6 = i5 + f2;
                        for (int i10 = i5; i10 < i6; i10++) {
                            int i11 = (i10 / 32) + size;
                            Object obj = objArr[i11];
                            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Int");
                            objArr[i11] = Integer.valueOf(((Integer) obj).intValue() | (1 << (i10 % 32)));
                        }
                        z5 = true;
                    } else {
                        z5 = true;
                        int i12 = (i5 / 32) + size;
                        Object obj2 = objArr[i12];
                        Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.Int");
                        objArr[i12] = Integer.valueOf(((Integer) obj2).intValue() | (1 << (i5 % 32)));
                    }
                    z6 = z5;
                } else if (!y0Var2.d()) {
                    throw new IllegalArgumentException("No argument provided for a required parameter: " + y0Var2);
                }
            }
            if (((y0) mVar2).f7000i == zo.l.f21331i) {
                i5 += f2;
            }
        }
        if (!z6) {
            try {
                dp.g b10 = b();
                Object[] copyOf = Arrays.copyOf(objArr, size);
                Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
                return b10.call(copyOf);
            } catch (IllegalAccessException cause3) {
                Intrinsics.checkNotNullParameter(cause3, "cause");
                throw new ap.a(cause3);
            }
        }
        dp.g d7 = d();
        if (d7 == null) {
            throw new u1("This callable does not support a default call: " + e());
        }
        try {
            return d7.call(objArr);
        } catch (IllegalAccessException cause4) {
            Intrinsics.checkNotNullParameter(cause4, "cause");
            throw new ap.a(cause4);
        }
    }

    public abstract dp.g d();

    public abstract ip.d e();

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    public final int f(zo.m mVar) {
        if (!((Boolean) this.f6943x.getValue()).booleanValue()) {
            throw new IllegalArgumentException("Check if parametersNeedMFVCFlattening is true before");
        }
        y0 y0Var = (y0) mVar;
        if (!c2.h(y0Var.b())) {
            return 1;
        }
        r1 b10 = y0Var.b();
        Intrinsics.checkNotNull(b10, "null cannot be cast to non-null type kotlin.reflect.jvm.internal.KTypeImpl");
        ArrayList m5 = android.support.v4.media.session.b.m(yq.c.b(b10.f6947d));
        Intrinsics.checkNotNull(m5);
        return m5.size();
    }

    public final boolean g() {
        return Intrinsics.areEqual(getName(), "<init>") && c().getJClass().isAnnotation();
    }

    @Override // zo.b
    public final List getAnnotations() {
        Object invoke = this.f6938d.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "invoke(...)");
        return (List) invoke;
    }

    @Override // kotlin.reflect.KCallable
    public final List getParameters() {
        Object invoke = this.f6939e.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "invoke(...)");
        return (List) invoke;
    }

    @Override // kotlin.reflect.KCallable
    public final KType getReturnType() {
        Object invoke = this.f6940i.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "invoke(...)");
        return (KType) invoke;
    }

    @Override // kotlin.reflect.KCallable
    public final List getTypeParameters() {
        Object invoke = this.f6941v.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "invoke(...)");
        return (List) invoke;
    }

    @Override // kotlin.reflect.KCallable
    public final KVisibility getVisibility() {
        ip.p visibility = e().getVisibility();
        Intrinsics.checkNotNullExpressionValue(visibility, "getVisibility(...)");
        hq.c cVar = c2.a;
        Intrinsics.checkNotNullParameter(visibility, "<this>");
        if (Intrinsics.areEqual(visibility, ip.q.f12159e)) {
            return KVisibility.f13551d;
        }
        if (Intrinsics.areEqual(visibility, ip.q.f12157c)) {
            return KVisibility.f13552e;
        }
        if (Intrinsics.areEqual(visibility, ip.q.f12158d)) {
            return KVisibility.f13553i;
        }
        if (Intrinsics.areEqual(visibility, ip.q.a) || Intrinsics.areEqual(visibility, ip.q.f12156b)) {
            return KVisibility.f13554v;
        }
        return null;
    }

    public abstract boolean h();

    @Override // kotlin.reflect.KCallable
    public final boolean isAbstract() {
        return e().e() == ip.z.f12183w;
    }

    @Override // kotlin.reflect.KCallable
    public final boolean isFinal() {
        return e().e() == ip.z.f12180e;
    }

    @Override // kotlin.reflect.KCallable
    public final boolean isOpen() {
        return e().e() == ip.z.f12182v;
    }
}
