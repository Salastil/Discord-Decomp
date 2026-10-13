package o1;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class k extends l {

    /* renamed from: i, reason: collision with root package name */
    public final String f15727i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(CharSequence charSequence, String type) {
        super(charSequence, type);
        Intrinsics.checkNotNullParameter(type, "type");
        this.f15727i = type;
        if (type.length() <= 0) {
            throw new IllegalArgumentException("type must not be empty");
        }
    }

    @Override // o1.l
    public final String a() {
        return this.f15727i;
    }
}
