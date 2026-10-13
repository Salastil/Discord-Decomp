package bs;

import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class c extends q0 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f3165b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ c(SerialDescriptor serialDescriptor, int i5) {
        super(serialDescriptor);
        this.f3165b = i5;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String a() {
        switch (this.f3165b) {
            case 0:
                return "kotlin.Array";
            case 1:
                return "kotlin.collections.ArrayList";
            case 2:
                return "kotlin.collections.HashSet";
            default:
                return "kotlin.collections.LinkedHashSet";
        }
    }
}
