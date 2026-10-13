package ds;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class p {
    public final bs.z a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f7740b;

    public p(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        this.a = new bs.z(descriptor, new o(2, this, p.class, "readIfAbsent", "readIfAbsent(Lkotlinx/serialization/descriptors/SerialDescriptor;I)Z", 0, 0));
    }
}
