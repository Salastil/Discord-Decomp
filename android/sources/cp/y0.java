package cp;

import java.util.List;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class y0 implements zo.m {

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f6997w = {com.discord.chat.bridge.botuikit.a.o(y0.class, "descriptor", "getDescriptor()Lorg/jetbrains/kotlin/descriptors/ParameterDescriptor;", 0), com.discord.chat.bridge.botuikit.a.o(y0.class, "annotations", "getAnnotations()Ljava/util/List;", 0)};

    /* renamed from: d, reason: collision with root package name */
    public final r f6998d;

    /* renamed from: e, reason: collision with root package name */
    public final int f6999e;

    /* renamed from: i, reason: collision with root package name */
    public final zo.l f7000i;

    /* renamed from: v, reason: collision with root package name */
    public final w1 f7001v;

    public y0(r callable, int i5, zo.l kind, Function0 computeDescriptor) {
        Intrinsics.checkNotNullParameter(callable, "callable");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(computeDescriptor, "computeDescriptor");
        this.f6998d = callable;
        this.f6999e = i5;
        this.f7000i = kind;
        this.f7001v = m3.n.q0(null, computeDescriptor);
        m3.n.q0(null, new w0(this, 0));
    }

    public final ip.k0 a() {
        KProperty kProperty = f6997w[0];
        Object invoke = this.f7001v.invoke();
        Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
        return (ip.k0) invoke;
    }

    public final r1 b() {
        yq.y type = a().getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        return new r1(type, new w0(this, 1));
    }

    public final boolean c() {
        ip.k0 a = a();
        lp.r0 r0Var = a instanceof lp.r0 ? (lp.r0) a : null;
        if (r0Var != null) {
            return oq.e.a(r0Var);
        }
        return false;
    }

    public final boolean d() {
        ip.k0 a = a();
        return (a instanceof lp.r0) && ((lp.r0) a).H != null;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof y0)) {
            return false;
        }
        y0 y0Var = (y0) obj;
        return Intrinsics.areEqual(this.f6998d, y0Var.f6998d) && this.f6999e == y0Var.f6999e;
    }

    @Override // zo.b
    public final List getAnnotations() {
        throw null;
    }

    public final String getName() {
        ip.k0 a = a();
        lp.r0 r0Var = a instanceof lp.r0 ? (lp.r0) a : null;
        if (r0Var != null && !r0Var.h().w()) {
            hq.e name = r0Var.getName();
            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
            if (!name.f10210e) {
                return name.b();
            }
        }
        return null;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f6999e) + (this.f6998d.hashCode() * 31);
    }

    public final String toString() {
        String b10;
        jq.h hVar = z1.a;
        Intrinsics.checkNotNullParameter(this, "parameter");
        StringBuilder sb2 = new StringBuilder();
        int ordinal = this.f7000i.ordinal();
        if (ordinal == 0) {
            sb2.append("instance parameter");
        } else if (ordinal == 1) {
            sb2.append("extension receiver parameter");
        } else {
            if (ordinal != 2) {
                throw new fo.n();
            }
            sb2.append("parameter #" + this.f6999e + ' ' + getName());
        }
        sb2.append(" of ");
        ip.d e9 = this.f6998d.e();
        if (e9 instanceof ip.m0) {
            b10 = z1.c((ip.m0) e9);
        } else {
            if (!(e9 instanceof ip.v)) {
                throw new IllegalStateException(("Illegal callable: " + e9).toString());
            }
            b10 = z1.b((ip.v) e9);
        }
        sb2.append(b10);
        return sb2.toString();
    }
}
