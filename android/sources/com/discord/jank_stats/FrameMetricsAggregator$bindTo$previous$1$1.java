package com.discord.jank_stats;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class FrameMetricsAggregator$bindTo$previous$1$1 extends FunctionReferenceImpl implements Function2<Long, Long, Unit> {
    public FrameMetricsAggregator$bindTo$previous$1$1(Object obj) {
        super(2, obj, FrameMetricsAggregator.class, "recordFrame", "recordFrame(JJ)V", 0);
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2) {
        invoke(((Number) obj).longValue(), ((Number) obj2).longValue());
        return Unit.a;
    }

    public final void invoke(long j, long j5) {
        ((FrameMetricsAggregator) this.receiver).recordFrame(j, j5);
    }
}
