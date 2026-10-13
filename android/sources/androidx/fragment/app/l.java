package androidx.fragment.app;

import android.animation.AnimatorSet;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class l {
    public static final l a = new l();

    public final void a(@NotNull AnimatorSet animatorSet) {
        Intrinsics.checkNotNullParameter(animatorSet, "animatorSet");
        animatorSet.reverse();
    }

    public final void b(@NotNull AnimatorSet animatorSet, long j) {
        Intrinsics.checkNotNullParameter(animatorSet, "animatorSet");
        animatorSet.setCurrentPlayTime(j);
    }
}
