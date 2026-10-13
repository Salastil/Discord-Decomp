package com.discord.misc.utilities.time;

import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.flow.FlowCollector;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00010\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/flow/FlowCollector;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.misc.utilities.time.IntervalFlowKt$intervalFlow$2", f = "IntervalFlow.kt", l = {26, 28, 29}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class IntervalFlowKt$intervalFlow$2 extends h implements Function2<FlowCollector, Continuation, Object> {
    final /* synthetic */ long $initialDelayMs;
    final /* synthetic */ long $periodMs;
    private /* synthetic */ Object L$0;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public IntervalFlowKt$intervalFlow$2(long j, long j5, Continuation continuation) {
        super(2, continuation);
        this.$initialDelayMs = j;
        this.$periodMs = j5;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        IntervalFlowKt$intervalFlow$2 intervalFlowKt$intervalFlow$2 = new IntervalFlowKt$intervalFlow$2(this.$initialDelayMs, this.$periodMs, continuation);
        intervalFlowKt$intervalFlow$2.L$0 = obj;
        return intervalFlowKt$intervalFlow$2;
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0054, code lost:
    
        if (nr.x.j(r4, r7) == r0) goto L20;
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x0047, code lost:
    
        if (r1.emit(r8, r7) == r0) goto L20;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0056, code lost:
    
        return r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x003a, code lost:
    
        if (nr.x.j(r5, r7) == r0) goto L20;
     */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:11:0x0054 -> B:12:0x003d). Please report as a decompilation issue!!! */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        FlowCollector flowCollector;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 != 0) {
            if (i5 != 1) {
                if (i5 == 2) {
                    flowCollector = (FlowCollector) this.L$0;
                    b.R(obj);
                    long j = this.$periodMs;
                    this.L$0 = flowCollector;
                    this.label = 3;
                } else if (i5 != 3) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
            flowCollector = (FlowCollector) this.L$0;
            b.R(obj);
        } else {
            b.R(obj);
            flowCollector = (FlowCollector) this.L$0;
            long j5 = this.$initialDelayMs;
            this.L$0 = flowCollector;
            this.label = 1;
        }
        Unit unit = Unit.a;
        this.L$0 = flowCollector;
        this.label = 2;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(FlowCollector flowCollector, Continuation continuation) {
        return ((IntervalFlowKt$intervalFlow$2) create(flowCollector, continuation)).invokeSuspend(Unit.a);
    }
}
