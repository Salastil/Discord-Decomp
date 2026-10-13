package ip;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class w extends t0 {
    public final hq.e a;

    /* renamed from: b, reason: collision with root package name */
    public final cr.e f12175b;

    public w(hq.e underlyingPropertyName, cr.e underlyingType) {
        Intrinsics.checkNotNullParameter(underlyingPropertyName, "underlyingPropertyName");
        Intrinsics.checkNotNullParameter(underlyingType, "underlyingType");
        this.a = underlyingPropertyName;
        this.f12175b = underlyingType;
    }

    @Override // ip.t0
    public final boolean a(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return Intrinsics.areEqual(this.a, name);
    }

    public final String toString() {
        return "InlineClassRepresentation(underlyingPropertyName=" + this.a + ", underlyingType=" + this.f12175b + ')';
    }
}
