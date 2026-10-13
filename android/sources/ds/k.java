package ds;

import a5.h0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k extends h0 {

    /* renamed from: v, reason: collision with root package name */
    public final boolean f7736v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(a5.a0 writer, boolean z5) {
        super(writer);
        Intrinsics.checkNotNullParameter(writer, "writer");
        this.f7736v = z5;
    }

    @Override // a5.h0
    public final void x(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        if (this.f7736v) {
            super.x(value);
        } else {
            v(value);
        }
    }
}
