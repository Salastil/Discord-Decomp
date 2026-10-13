package com.discord.notifications.renderer.utils;

import android.icu.text.RelativeDateTimeFormatter;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import uo.c;

@Metadata(d1 = {"\u0000\"\n\u0000\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010\u0006\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\u001a\u0010\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u0001H\u0000\u001a\u0010\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0001H\u0000\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0003\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0004\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0005\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\b\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\t\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\n\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u000b\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"SECONDS_THRESHOLD", "", "MINUTES_THRESHOLD", "HOURS_THRESHOLD", "DAYS_THRESHOLD", "MONTHS_THRESHOLD", "MILLIS_PER_SECOND", "", "MILLIS_PER_MINUTE", "MILLIS_PER_HOUR", "MILLIS_PER_DAY", "DAYS_PER_MONTH", "relativeTimeSpanFor", "Lcom/discord/notifications/renderer/utils/RelativeTimeSpan;", "deltaMillis", "formatRelativeTimestamp", "", "timeMillis", "notification_renderer_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RelativeTimestampKt {
    private static final double DAYS_PER_MONTH = 30.436875d;
    private static final long DAYS_THRESHOLD = 26;
    private static final long HOURS_THRESHOLD = 22;
    private static final double MILLIS_PER_DAY = 8.64E7d;
    private static final double MILLIS_PER_HOUR = 3600000.0d;
    private static final double MILLIS_PER_MINUTE = 60000.0d;
    private static final double MILLIS_PER_SECOND = 1000.0d;
    private static final long MINUTES_THRESHOLD = 60;
    private static final long MONTHS_THRESHOLD = 11;
    private static final long SECONDS_THRESHOLD = 60;

    @NotNull
    public static final String formatRelativeTimestamp(long j) {
        RelativeTimeSpan relativeTimeSpanFor = relativeTimeSpanFor(j - System.currentTimeMillis());
        String format = RelativeDateTimeFormatter.getInstance().format(relativeTimeSpanFor.getCount(), relativeTimeSpanFor.getDirection(), relativeTimeSpanFor.getUnit());
        Intrinsics.checkNotNullExpressionValue(format, "format(...)");
        return format;
    }

    @NotNull
    public static final RelativeTimeSpan relativeTimeSpanFor(long j) {
        double abs = Math.abs(j);
        RelativeDateTimeFormatter.Direction direction = j > 0 ? RelativeDateTimeFormatter.Direction.NEXT : RelativeDateTimeFormatter.Direction.LAST;
        double d6 = abs / MILLIS_PER_DAY;
        double d7 = d6 / DAYS_PER_MONTH;
        long c6 = c.c(abs / MILLIS_PER_SECOND);
        long c8 = c.c(abs / MILLIS_PER_MINUTE);
        long c10 = c.c(abs / MILLIS_PER_HOUR);
        long c11 = c.c(d6);
        long c12 = c.c(d7);
        return c6 < 60 ? relativeTimeSpanFor$span(direction, c6, RelativeDateTimeFormatter.RelativeUnit.SECONDS) : c8 < 60 ? relativeTimeSpanFor$span(direction, c8, RelativeDateTimeFormatter.RelativeUnit.MINUTES) : c10 < HOURS_THRESHOLD ? relativeTimeSpanFor$span(direction, c10, RelativeDateTimeFormatter.RelativeUnit.HOURS) : c11 < DAYS_THRESHOLD ? relativeTimeSpanFor$span(direction, c11, RelativeDateTimeFormatter.RelativeUnit.DAYS) : c12 < MONTHS_THRESHOLD ? relativeTimeSpanFor$span(direction, c12, RelativeDateTimeFormatter.RelativeUnit.MONTHS) : relativeTimeSpanFor$span(direction, c.c(d7 / 12), RelativeDateTimeFormatter.RelativeUnit.YEARS);
    }

    private static final RelativeTimeSpan relativeTimeSpanFor$span(RelativeDateTimeFormatter.Direction direction, long j, RelativeDateTimeFormatter.RelativeUnit relativeUnit) {
        return new RelativeTimeSpan(j, relativeUnit, direction);
    }
}
