package yo;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class i {
    public static final void a(boolean z5, Number step) {
        Intrinsics.checkNotNullParameter(step, "step");
        if (z5) {
            return;
        }
        throw new IllegalArgumentException("Step must be positive, was: " + step + '.');
    }
}
