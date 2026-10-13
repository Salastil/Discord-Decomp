package com.discord.misc.utilities.coroutines;

import fo.h;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.FlowCollector;
import kotlinx.coroutines.flow.MutableSharedFlow;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a4\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0007H\u0086@¢\u0006\u0002\u0010\b¨\u0006\t"}, d2 = {"collectWithLeadingDebounce", "", "T", "Lkotlinx/coroutines/flow/MutableSharedFlow;", "timeoutMillis", "", "collector", "Lkotlinx/coroutines/flow/FlowCollector;", "(Lkotlinx/coroutines/flow/MutableSharedFlow;JLkotlinx/coroutines/flow/FlowCollector;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "misc_utilities_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CollectWithLeadingDebounceKt {
    /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T> Object collectWithLeadingDebounce(@NotNull MutableSharedFlow mutableSharedFlow, long j, @NotNull FlowCollector flowCollector, @NotNull Continuation continuation) {
        CollectWithLeadingDebounceKt$collectWithLeadingDebounce$1 collectWithLeadingDebounceKt$collectWithLeadingDebounce$1;
        int i5;
        if (continuation instanceof CollectWithLeadingDebounceKt$collectWithLeadingDebounce$1) {
            collectWithLeadingDebounceKt$collectWithLeadingDebounce$1 = (CollectWithLeadingDebounceKt$collectWithLeadingDebounce$1) continuation;
            int i6 = collectWithLeadingDebounceKt$collectWithLeadingDebounce$1.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                collectWithLeadingDebounceKt$collectWithLeadingDebounce$1.label = i6 - Integer.MIN_VALUE;
                Object obj = collectWithLeadingDebounceKt$collectWithLeadingDebounce$1.result;
                Object obj2 = a.f13464d;
                i5 = collectWithLeadingDebounceKt$collectWithLeadingDebounce$1.label;
                if (i5 != 0) {
                    b.R(obj);
                    FlowCollector collectWithLeadingDebounceKt$collectWithLeadingDebounce$2 = new CollectWithLeadingDebounceKt$collectWithLeadingDebounce$2(new Ref.LongRef(), j, flowCollector, mutableSharedFlow);
                    collectWithLeadingDebounceKt$collectWithLeadingDebounce$1.label = 1;
                    if (mutableSharedFlow.collect(collectWithLeadingDebounceKt$collectWithLeadingDebounce$2, collectWithLeadingDebounceKt$collectWithLeadingDebounce$1) == obj2) {
                        return obj2;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    b.R(obj);
                }
                throw new h();
            }
        }
        collectWithLeadingDebounceKt$collectWithLeadingDebounce$1 = new CollectWithLeadingDebounceKt$collectWithLeadingDebounce$1(continuation);
        Object obj3 = collectWithLeadingDebounceKt$collectWithLeadingDebounce$1.result;
        Object obj22 = a.f13464d;
        i5 = collectWithLeadingDebounceKt$collectWithLeadingDebounce$1.label;
        if (i5 != 0) {
        }
        throw new h();
    }
}
