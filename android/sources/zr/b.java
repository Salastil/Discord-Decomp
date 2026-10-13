package zr;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class b implements SerialDescriptor {
    public final g a;

    /* renamed from: b, reason: collision with root package name */
    public final KClass f21411b;

    /* renamed from: c, reason: collision with root package name */
    public final String f21412c;

    public b(g original, KClass kClass) {
        Intrinsics.checkNotNullParameter(original, "original");
        Intrinsics.checkNotNullParameter(kClass, "kClass");
        this.a = original;
        this.f21411b = kClass;
        this.f21412c = original.a + '<' + kClass.getSimpleName() + '>';
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String a() {
        return this.f21412c;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final d9.a b() {
        return this.a.f21422b;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean d() {
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int e(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return this.a.e(name);
    }

    public final boolean equals(Object obj) {
        b bVar = obj instanceof b ? (b) obj : null;
        return bVar != null && Intrinsics.areEqual(this.a, bVar.a) && Intrinsics.areEqual(bVar.f21411b, this.f21411b);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int f() {
        return this.a.f21423c;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String g(int i5) {
        return this.a.f21426f[i5];
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List getAnnotations() {
        return this.a.f21424d;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List h(int i5) {
        return this.a.f21428h[i5];
    }

    public final int hashCode() {
        return this.f21412c.hashCode() + (this.f21411b.hashCode() * 31);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final SerialDescriptor i(int i5) {
        return this.a.f21427g[i5];
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean isInline() {
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean j(int i5) {
        return this.a.f21429i[i5];
    }

    public final String toString() {
        return "ContextDescriptor(kClass: " + this.f21411b + ", original: " + this.a + ')';
    }
}
