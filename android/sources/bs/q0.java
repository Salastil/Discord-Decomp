package bs;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public abstract class q0 implements SerialDescriptor {
    public final SerialDescriptor a;

    public q0(SerialDescriptor serialDescriptor) {
        this.a = serialDescriptor;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final d9.a b() {
        return zr.j.f21434u;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean d() {
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int e(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        Integer intOrNull = StringsKt.toIntOrNull(name);
        if (intOrNull != null) {
            return intOrNull.intValue();
        }
        throw new IllegalArgumentException(k0.d.k(name, " is not a valid list index"));
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof q0)) {
            return false;
        }
        q0 q0Var = (q0) obj;
        return Intrinsics.areEqual(this.a, q0Var.a) && Intrinsics.areEqual(a(), q0Var.a());
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int f() {
        return 1;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String g(int i5) {
        return String.valueOf(i5);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List getAnnotations() {
        return kotlin.collections.m0.f13512d;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List h(int i5) {
        if (i5 >= 0) {
            return kotlin.collections.m0.f13512d;
        }
        StringBuilder r5 = a3.e.r(i5, "Illegal index ", ", ");
        r5.append(a());
        r5.append(" expects only non-negative indices");
        throw new IllegalArgumentException(r5.toString().toString());
    }

    public final int hashCode() {
        return a().hashCode() + (this.a.hashCode() * 31);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final SerialDescriptor i(int i5) {
        if (i5 >= 0) {
            return this.a;
        }
        StringBuilder r5 = a3.e.r(i5, "Illegal index ", ", ");
        r5.append(a());
        r5.append(" expects only non-negative indices");
        throw new IllegalArgumentException(r5.toString().toString());
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean isInline() {
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean j(int i5) {
        if (i5 >= 0) {
            return false;
        }
        StringBuilder r5 = a3.e.r(i5, "Illegal index ", ", ");
        r5.append(a());
        r5.append(" expects only non-negative indices");
        throw new IllegalArgumentException(r5.toString().toString());
    }

    public final String toString() {
        return a() + '(' + this.a + ')';
    }
}
