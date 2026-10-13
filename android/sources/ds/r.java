package ds;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class r extends xr.f {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public r(String message) {
        super(message);
        Intrinsics.checkNotNullParameter(message, "message");
    }

    public r(int i5) {
        super(k0.d.i(i5, "An unknown field for index "));
    }
}
