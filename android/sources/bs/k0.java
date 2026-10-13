package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class k0 extends j1 {

    /* renamed from: m, reason: collision with root package name */
    public final boolean f3212m;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k0(String name, h0 generatedSerializer) {
        super(name, generatedSerializer, 1);
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(generatedSerializer, "generatedSerializer");
        this.f3212m = true;
    }

    /* JADX WARN: Type inference failed for: r2v3, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r6v3, types: [java.lang.Object, kotlin.Lazy] */
    @Override // bs.j1
    public final boolean equals(Object obj) {
        int i5;
        if (this == obj) {
            return true;
        }
        if (obj instanceof k0) {
            SerialDescriptor serialDescriptor = (SerialDescriptor) obj;
            if (Intrinsics.areEqual(this.a, serialDescriptor.a())) {
                k0 k0Var = (k0) obj;
                if (k0Var.f3212m && Arrays.equals((SerialDescriptor[]) this.k.getValue(), (SerialDescriptor[]) k0Var.k.getValue())) {
                    int f2 = serialDescriptor.f();
                    int i6 = this.f3203c;
                    if (i6 == f2) {
                        for (0; i5 < i6; i5 + 1) {
                            i5 = (Intrinsics.areEqual(i(i5).a(), serialDescriptor.i(i5).a()) && Intrinsics.areEqual(i(i5).b(), serialDescriptor.i(i5).b())) ? i5 + 1 : 0;
                        }
                        return true;
                    }
                }
            }
        }
        return false;
    }

    @Override // bs.j1
    public final int hashCode() {
        return super.hashCode() * 31;
    }

    @Override // bs.j1, kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean isInline() {
        return this.f3212m;
    }
}
