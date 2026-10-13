package bs;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class i0 implements SerialDescriptor {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final SerialDescriptor f3194b;

    /* renamed from: c, reason: collision with root package name */
    public final SerialDescriptor f3195c;

    public i0(String str, SerialDescriptor serialDescriptor, SerialDescriptor serialDescriptor2) {
        this.a = str;
        this.f3194b = serialDescriptor;
        this.f3195c = serialDescriptor2;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String a() {
        return this.a;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final d9.a b() {
        return zr.j.f21435v;
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
        throw new IllegalArgumentException(k0.d.k(name, " is not a valid map index"));
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof i0)) {
            return false;
        }
        i0 i0Var = (i0) obj;
        return Intrinsics.areEqual(this.a, i0Var.a) && Intrinsics.areEqual(this.f3194b, i0Var.f3194b) && Intrinsics.areEqual(this.f3195c, i0Var.f3195c);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int f() {
        return 2;
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
        throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.j(a3.e.r(i5, "Illegal index ", ", "), this.a, " expects only non-negative indices").toString());
    }

    public final int hashCode() {
        return this.f3195c.hashCode() + ((this.f3194b.hashCode() + (this.a.hashCode() * 31)) * 31);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final SerialDescriptor i(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.j(a3.e.r(i5, "Illegal index ", ", "), this.a, " expects only non-negative indices").toString());
        }
        int i6 = i5 % 2;
        if (i6 == 0) {
            return this.f3194b;
        }
        if (i6 == 1) {
            return this.f3195c;
        }
        throw new IllegalStateException("Unreached");
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
        throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.j(a3.e.r(i5, "Illegal index ", ", "), this.a, " expects only non-negative indices").toString());
    }

    public final String toString() {
        return this.a + '(' + this.f3194b + ", " + this.f3195c + ')';
    }
}
