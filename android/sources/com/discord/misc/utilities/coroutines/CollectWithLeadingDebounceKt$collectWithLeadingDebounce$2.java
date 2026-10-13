package com.discord.misc.utilities.coroutines;

import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.FlowCollector;
import kotlinx.coroutines.flow.MutableSharedFlow;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CollectWithLeadingDebounceKt$collectWithLeadingDebounce$2<T> implements FlowCollector {
    final /* synthetic */ FlowCollector $collector;
    final /* synthetic */ MutableSharedFlow $this_collectWithLeadingDebounce;
    final /* synthetic */ Ref.LongRef $timeLastEmitted;
    final /* synthetic */ long $timeoutMillis;

    public CollectWithLeadingDebounceKt$collectWithLeadingDebounce$2(Ref.LongRef longRef, long j, FlowCollector flowCollector, MutableSharedFlow mutableSharedFlow) {
        this.$timeLastEmitted = longRef;
        this.$timeoutMillis = j;
        this.$collector = flowCollector;
        this.$this_collectWithLeadingDebounce = mutableSharedFlow;
    }

    /* JADX WARN: Code restructure failed: missing block: B:22:0x0055, code lost:
    
        if (r13.emit(r12, r0) == r1) goto L25;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x0064, code lost:
    
        if (nr.x.j(r9 - r7, r0) == r1) goto L25;
     */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0038  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0022  */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(T t5, Continuation continuation) {
        CollectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1 collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1;
        int i5;
        if (continuation instanceof CollectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1) {
            collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1 = (CollectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1) continuation;
            int i6 = collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1.label = i6 - Integer.MIN_VALUE;
                Object obj = collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1.result;
                a aVar = a.f13464d;
                i5 = collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1.label;
                if (i5 == 0) {
                    if (i5 == 1) {
                        b.R(obj);
                        return Unit.a;
                    }
                    if (i5 != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    t5 = (T) collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1.L$0;
                    b.R(obj);
                    this.$this_collectWithLeadingDebounce.d(t5);
                    return Unit.a;
                }
                b.R(obj);
                long currentTimeMillis = System.currentTimeMillis();
                Ref.LongRef longRef = this.$timeLastEmitted;
                long j = currentTimeMillis - longRef.element;
                long j5 = this.$timeoutMillis;
                if (j > j5) {
                    longRef.element = currentTimeMillis;
                    FlowCollector flowCollector = this.$collector;
                    collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1.label = 1;
                } else {
                    collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1.L$0 = t5;
                    collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1.label = 2;
                }
                return aVar;
            }
        }
        collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1 = new CollectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1(this, continuation);
        Object obj2 = collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1.result;
        a aVar2 = a.f13464d;
        i5 = collectWithLeadingDebounceKt$collectWithLeadingDebounce$2$emit$1.label;
        if (i5 == 0) {
        }
    }
}
