package io.sentry;

import java.util.Locale;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public enum SentryLevel implements y1 {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    FATAL;

    @Override // io.sentry.y1
    public void serialize(@NotNull y2 y2Var, @NotNull ILogger iLogger) {
        y2Var.s(name().toLowerCase(Locale.ROOT));
    }
}
