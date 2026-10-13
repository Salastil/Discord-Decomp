package androidx.lifecycle;

import androidx.lifecycle.Lifecycle;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class l {
    public static n a(Lifecycle.State state) {
        Intrinsics.checkNotNullParameter(state, "state");
        int ordinal = state.ordinal();
        if (ordinal == 2) {
            return n.ON_DESTROY;
        }
        if (ordinal == 3) {
            return n.ON_STOP;
        }
        if (ordinal != 4) {
            return null;
        }
        return n.ON_PAUSE;
    }
}
