package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class l1 extends q0 {

    /* renamed from: b, reason: collision with root package name */
    public final String f3214b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l1(SerialDescriptor primitive) {
        super(primitive);
        Intrinsics.checkNotNullParameter(primitive, "primitive");
        this.f3214b = primitive.a() + "Array";
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String a() {
        return this.f3214b;
    }
}
