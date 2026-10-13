package io.sentry.android.replay;

import fo.d;
import io.sentry.z5;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\n\"(\u0010\u0007\u001a\u00020\u0001*\u00020\u00002\u0006\u0010\u0002\u001a\u00020\u00018G@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\u0003\u0010\u0004\"\u0004\b\u0005\u0010\u0006\"(\u0010\n\u001a\u00020\u0001*\u00020\u00002\u0006\u0010\u0002\u001a\u00020\u00018G@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\b\u0010\u0004\"\u0004\b\t\u0010\u0006¨\u0006\u000b"}, d2 = {"Lio/sentry/z5;", "", "value", "getMaskAllText", "(Lio/sentry/z5;)Z", "setMaskAllText", "(Lio/sentry/z5;Z)V", "maskAllText", "getMaskAllImages", "setMaskAllImages", "maskAllImages", "sentry-android-replay_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class SessionReplayOptionsKt {
    @d
    public static final boolean getMaskAllImages(@NotNull z5 z5Var) {
        Intrinsics.checkNotNullParameter(z5Var, "<this>");
        throw new IllegalStateException("Getter not supported");
    }

    @d
    public static final boolean getMaskAllText(@NotNull z5 z5Var) {
        Intrinsics.checkNotNullParameter(z5Var, "<this>");
        throw new IllegalStateException("Getter not supported");
    }

    public static final void setMaskAllImages(@NotNull z5 z5Var, boolean z5) {
        Intrinsics.checkNotNullParameter(z5Var, "<this>");
        z5Var.i(z5);
    }

    public static final void setMaskAllText(@NotNull z5 z5Var, boolean z5) {
        Intrinsics.checkNotNullParameter(z5Var, "<this>");
        z5Var.j(z5);
    }
}
