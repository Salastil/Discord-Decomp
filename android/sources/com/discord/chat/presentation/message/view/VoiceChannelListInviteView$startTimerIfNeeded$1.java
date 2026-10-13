package com.discord.chat.presentation.message.view;

import androidx.lifecycle.Lifecycle;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.discord.misc.utilities.time.IntervalFlowKt;
import com.facebook.imageutils.JfifUtil;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.presentation.message.view.VoiceChannelListInviteView$startTimerIfNeeded$1", f = "VoiceChannelListInviteView.kt", l = {JfifUtil.MARKER_EOI}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class VoiceChannelListInviteView$startTimerIfNeeded$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ VoiceChannelListInviteView this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.chat.presentation.message.view.VoiceChannelListInviteView$startTimerIfNeeded$1$1", f = "VoiceChannelListInviteView.kt", l = {JfifUtil.MARKER_SOS}, m = "invokeSuspend")
    /* renamed from: com.discord.chat.presentation.message.view.VoiceChannelListInviteView$startTimerIfNeeded$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
        int label;
        final /* synthetic */ VoiceChannelListInviteView this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(VoiceChannelListInviteView voiceChannelListInviteView, Continuation continuation) {
            super(2, continuation);
            this.this$0 = voiceChannelListInviteView;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.this$0, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            long j;
            long j5;
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 == 0) {
                ki.b.R(obj);
                j = this.this$0.tickIntervalMs;
                j5 = this.this$0.tickIntervalMs;
                Flow intervalFlow = IntervalFlowKt.intervalFlow(j, j5);
                final VoiceChannelListInviteView voiceChannelListInviteView = this.this$0;
                FlowCollector flowCollector = new FlowCollector() { // from class: com.discord.chat.presentation.message.view.VoiceChannelListInviteView.startTimerIfNeeded.1.1.1
                    @Override // kotlinx.coroutines.flow.FlowCollector
                    public final Object emit(Unit unit, Continuation continuation) {
                        VoiceChannelListInviteView.this.updateTimestampText();
                        return Unit.a;
                    }
                };
                this.label = 1;
                if (intervalFlow.collect(flowCollector, this) == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
            }
            return Unit.a;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public VoiceChannelListInviteView$startTimerIfNeeded$1(VoiceChannelListInviteView voiceChannelListInviteView, Continuation continuation) {
        super(2, continuation);
        this.this$0 = voiceChannelListInviteView;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new VoiceChannelListInviteView$startTimerIfNeeded$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            VoiceChannelListInviteView voiceChannelListInviteView = this.this$0;
            Lifecycle.State state = Lifecycle.State.f2140v;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(voiceChannelListInviteView, null);
            this.label = 1;
            if (CoroutineViewUtilsKt.repeatOnLifecycleOwner(voiceChannelListInviteView, state, anonymousClass1, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((VoiceChannelListInviteView$startTimerIfNeeded$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
