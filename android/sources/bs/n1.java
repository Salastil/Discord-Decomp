package bs;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class n1 implements SerialDescriptor {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final zr.f f3219b;

    public n1(String serialName, zr.f kind) {
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(kind, "kind");
        this.a = serialName;
        this.f3219b = kind;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String a() {
        return this.a;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final d9.a b() {
        return this.f3219b;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean d() {
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int e(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        throw new IllegalStateException("Primitive descriptor does not have elements");
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof n1)) {
            return false;
        }
        n1 n1Var = (n1) obj;
        return Intrinsics.areEqual(this.a, n1Var.a) && Intrinsics.areEqual(this.f3219b, n1Var.f3219b);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int f() {
        return 0;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String g(int i5) {
        throw new IllegalStateException("Primitive descriptor does not have elements");
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List getAnnotations() {
        return kotlin.collections.m0.f13512d;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List h(int i5) {
        throw new IllegalStateException("Primitive descriptor does not have elements");
    }

    public final int hashCode() {
        return (this.f3219b.hashCode() * 31) + this.a.hashCode();
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final SerialDescriptor i(int i5) {
        throw new IllegalStateException("Primitive descriptor does not have elements");
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean isInline() {
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean j(int i5) {
        throw new IllegalStateException("Primitive descriptor does not have elements");
    }

    public final String toString() {
        return s4.h.h(new StringBuilder("PrimitiveDescriptor("), this.a, ')');
    }
}
