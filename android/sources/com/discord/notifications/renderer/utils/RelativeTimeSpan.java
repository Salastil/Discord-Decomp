package com.discord.notifications.renderer.utils;

import android.icu.text.RelativeDateTimeFormatter;
import com.discord.jank_stats.JankRecordStore;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0080\b\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0011\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0007HÆ\u0003J'\u0010\u0013\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0007HÆ\u0001J\u0013\u0010\u0014\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0017\u001a\u00020\u0018HÖ\u0001J\t\u0010\u0019\u001a\u00020\u001aHÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000f¨\u0006\u001b"}, d2 = {"Lcom/discord/notifications/renderer/utils/RelativeTimeSpan;", "", "count", "", "unit", "Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;", "direction", "Landroid/icu/text/RelativeDateTimeFormatter$Direction;", "<init>", "(JLandroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;Landroid/icu/text/RelativeDateTimeFormatter$Direction;)V", "getCount", "()J", "getUnit", "()Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;", "getDirection", "()Landroid/icu/text/RelativeDateTimeFormatter$Direction;", "component1", "component2", "component3", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class RelativeTimeSpan {
    private final long count;

    @NotNull
    private final RelativeDateTimeFormatter.Direction direction;

    @NotNull
    private final RelativeDateTimeFormatter.RelativeUnit unit;

    public RelativeTimeSpan(long j, @NotNull RelativeDateTimeFormatter.RelativeUnit unit, @NotNull RelativeDateTimeFormatter.Direction direction) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        Intrinsics.checkNotNullParameter(direction, "direction");
        this.count = j;
        this.unit = unit;
        this.direction = direction;
    }

    public static /* synthetic */ RelativeTimeSpan copy$default(RelativeTimeSpan relativeTimeSpan, long j, RelativeDateTimeFormatter.RelativeUnit relativeUnit, RelativeDateTimeFormatter.Direction direction, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            j = relativeTimeSpan.count;
        }
        if ((i5 & 2) != 0) {
            relativeUnit = relativeTimeSpan.unit;
        }
        if ((i5 & 4) != 0) {
            direction = relativeTimeSpan.direction;
        }
        return relativeTimeSpan.copy(j, relativeUnit, direction);
    }

    /* renamed from: component1, reason: from getter */
    public final long getCount() {
        return this.count;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final RelativeDateTimeFormatter.RelativeUnit getUnit() {
        return this.unit;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final RelativeDateTimeFormatter.Direction getDirection() {
        return this.direction;
    }

    @NotNull
    public final RelativeTimeSpan copy(long count, @NotNull RelativeDateTimeFormatter.RelativeUnit unit, @NotNull RelativeDateTimeFormatter.Direction direction) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        Intrinsics.checkNotNullParameter(direction, "direction");
        return new RelativeTimeSpan(count, unit, direction);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof RelativeTimeSpan)) {
            return false;
        }
        RelativeTimeSpan relativeTimeSpan = (RelativeTimeSpan) other;
        return this.count == relativeTimeSpan.count && this.unit == relativeTimeSpan.unit && this.direction == relativeTimeSpan.direction;
    }

    public final long getCount() {
        return this.count;
    }

    @NotNull
    public final RelativeDateTimeFormatter.Direction getDirection() {
        return this.direction;
    }

    @NotNull
    public final RelativeDateTimeFormatter.RelativeUnit getUnit() {
        return this.unit;
    }

    public int hashCode() {
        return this.direction.hashCode() + ((this.unit.hashCode() + (Long.hashCode(this.count) * 31)) * 31);
    }

    @NotNull
    public String toString() {
        return "RelativeTimeSpan(count=" + this.count + ", unit=" + this.unit + ", direction=" + this.direction + ")";
    }
}
