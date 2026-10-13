package io.sentry.android.replay.util;

import androidx.fragment.app.e;
import io.sentry.SentryLevel;
import io.sentry.a1;
import io.sentry.v5;
import java.util.concurrent.Future;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a1\u0010\b\u001a\b\u0012\u0002\b\u0003\u0018\u00010\u0007*\u00020\u00002\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u00032\u0006\u0010\u0006\u001a\u00020\u0005H\u0000¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lio/sentry/a1;", "Lio/sentry/v5;", "options", "", "taskName", "Ljava/lang/Runnable;", "task", "Ljava/util/concurrent/Future;", "submitSafely", "(Lio/sentry/a1;Lio/sentry/v5;Ljava/lang/String;Ljava/lang/Runnable;)Ljava/util/concurrent/Future;", "sentry-android-replay_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class ExecutorsKt {
    public static final Future<?> submitSafely(@NotNull a1 a1Var, @NotNull v5 options, @NotNull String taskName, @NotNull Runnable task) {
        Intrinsics.checkNotNullParameter(a1Var, "<this>");
        Intrinsics.checkNotNullParameter(options, "options");
        Intrinsics.checkNotNullParameter(taskName, "taskName");
        Intrinsics.checkNotNullParameter(task, "task");
        try {
            return a1Var.submit(new e(task, options, taskName, 21));
        } catch (Throwable th2) {
            options.getLogger().k(SentryLevel.ERROR, h.f("Failed to submit task ", taskName, " to executor"), th2);
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void submitSafely$lambda$0(Runnable runnable, v5 v5Var, String str) {
        try {
            runnable.run();
        } catch (Throwable th2) {
            v5Var.getLogger().k(SentryLevel.ERROR, "Failed to execute task " + str, th2);
        }
    }
}
