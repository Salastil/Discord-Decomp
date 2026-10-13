package com.discord.misc.utilities.time;

import a4.h;
import kotlin.Metadata;
import kotlinx.coroutines.flow.Flow;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\t\n\u0002\b\u0002\u001a'\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u00042\b\b\u0002\u0010\u0005\u001a\u00020\u0004H\u0007¢\u0006\u0004\b\u0006\u0010\u0007\u001a\u001e\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u00012\u0006\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\t¨\u0006\u000b"}, d2 = {"intervalFlow", "Lkotlinx/coroutines/flow/Flow;", "", "period", "Lkotlin/time/Duration;", "initialDelay", "intervalFlow-QTBD994", "(JJ)Lkotlinx/coroutines/flow/Flow;", "periodMs", "", "initialDelayMs", "misc_utilities_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class IntervalFlowKt {
    @NotNull
    public static final Flow intervalFlow(long j, long j5) {
        return new h(new IntervalFlowKt$intervalFlow$2(j5, j, null));
    }

    public static /* synthetic */ Flow intervalFlow$default(long j, long j5, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            j5 = j;
        }
        return intervalFlow(j, j5);
    }

    @NotNull
    /* renamed from: intervalFlow-QTBD994, reason: not valid java name */
    public static final Flow m1057intervalFlowQTBD994(long j, long j5) {
        return new h(new IntervalFlowKt$intervalFlow$1(j5, j, null));
    }

    /* renamed from: intervalFlow-QTBD994$default, reason: not valid java name */
    public static /* synthetic */ Flow m1058intervalFlowQTBD994$default(long j, long j5, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            j5 = j;
        }
        return m1057intervalFlowQTBD994(j, j5);
    }
}
