package cp;

import java.util.List;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.TypeParameterReference;
import kotlin.reflect.KClass;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class s1 implements zo.t, c0 {

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f6956v = {com.discord.chat.bridge.botuikit.a.o(s1.class, "upperBounds", "getUpperBounds()Ljava/util/List;", 0)};

    /* renamed from: d, reason: collision with root package name */
    public final ip.s0 f6957d;

    /* renamed from: e, reason: collision with root package name */
    public final w1 f6958e;

    /* renamed from: i, reason: collision with root package name */
    public final t1 f6959i;

    public s1(t1 t1Var, ip.s0 descriptor) {
        Class cls;
        b0 b0Var;
        Object e02;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        this.f6957d = descriptor;
        this.f6958e = m3.n.q0(null, new d0(4, this));
        if (t1Var == null) {
            ip.l h6 = descriptor.h();
            Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
            if (h6 instanceof ip.f) {
                e02 = a((ip.f) h6);
            } else {
                if (!(h6 instanceof ip.d)) {
                    throw new u1("Unknown type parameter container: " + h6);
                }
                ip.l h7 = ((ip.d) h6).h();
                Intrinsics.checkNotNullExpressionValue(h7, "getContainingDeclaration(...)");
                if (h7 instanceof ip.f) {
                    b0Var = a((ip.f) h7);
                } else {
                    wq.l lVar = h6 instanceof wq.l ? (wq.l) h6 : null;
                    if (lVar == null) {
                        throw new u1("Non-class callable descriptor must be deserialized: " + h6);
                    }
                    wq.k R = lVar.R();
                    aq.h hVar = R instanceof aq.h ? (aq.h) R : null;
                    np.b bVar = hVar != null ? hVar.f2639i : null;
                    np.b bVar2 = bVar instanceof np.b ? bVar : null;
                    if (bVar2 == null || (cls = bVar2.a) == null) {
                        throw new u1("Container of deserialized member is not resolved: " + lVar);
                    }
                    Intrinsics.checkNotNullParameter(cls, "<this>");
                    KClass orCreateKotlinClass = Reflection.getOrCreateKotlinClass(cls);
                    Intrinsics.checkNotNull(orCreateKotlinClass, "null cannot be cast to non-null type kotlin.reflect.jvm.internal.KClassImpl<*>");
                    b0Var = (b0) orCreateKotlinClass;
                }
                e02 = h6.e0(new gj.c(b0Var), Unit.a);
            }
            t1Var = (t1) e02;
        }
        this.f6959i = t1Var;
    }

    public static b0 a(ip.f fVar) {
        KClass kClass;
        Class k = c2.k(fVar);
        if (k != null) {
            Intrinsics.checkNotNullParameter(k, "<this>");
            kClass = Reflection.getOrCreateKotlinClass(k);
        } else {
            kClass = null;
        }
        b0 b0Var = (b0) kClass;
        if (b0Var != null) {
            return b0Var;
        }
        throw new u1("Type parameter container is not resolved: " + fVar.h());
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof s1)) {
            return false;
        }
        s1 s1Var = (s1) obj;
        return Intrinsics.areEqual(this.f6959i, s1Var.f6959i) && Intrinsics.areEqual(getName(), s1Var.getName());
    }

    @Override // cp.c0
    public final ip.i getDescriptor() {
        return this.f6957d;
    }

    @Override // zo.t
    public final String getName() {
        String b10 = this.f6957d.getName().b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        return b10;
    }

    @Override // zo.t
    public final List getUpperBounds() {
        KProperty kProperty = f6956v[0];
        Object invoke = this.f6958e.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return (List) invoke;
    }

    @Override // zo.t
    public final zo.w getVariance() {
        int ordinal = this.f6957d.getVariance().ordinal();
        if (ordinal == 0) {
            return zo.w.f21333d;
        }
        if (ordinal == 1) {
            return zo.w.f21334e;
        }
        if (ordinal == 2) {
            return zo.w.f21335i;
        }
        throw new fo.n();
    }

    public final int hashCode() {
        return getName().hashCode() + (this.f6959i.hashCode() * 31);
    }

    public final String toString() {
        return TypeParameterReference.INSTANCE.toString(this);
    }
}
