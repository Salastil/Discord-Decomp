package io.sentry;

import java.util.Locale;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public enum z4 implements y1 {
    TRACE(1),
    DEBUG(5),
    INFO(9),
    WARN(13),
    ERROR(17),
    FATAL(21);

    private final int severityNumber;

    z4(int i5) {
        this.severityNumber = i5;
    }

    public int getSeverityNumber() {
        return this.severityNumber;
    }

    @Override // io.sentry.y1
    public void serialize(@NotNull y2 y2Var, @NotNull ILogger iLogger) {
        y2Var.s(name().toLowerCase(Locale.ROOT));
    }
}
