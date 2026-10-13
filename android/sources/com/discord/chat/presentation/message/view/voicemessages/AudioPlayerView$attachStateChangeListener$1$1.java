package com.discord.chat.presentation.message.view.voicemessages;

import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerManager;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.presentation.message.view.voicemessages.AudioPlayerView$attachStateChangeListener$1$1", f = "AudioPlayerView.kt", l = {109}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class AudioPlayerView$attachStateChangeListener$1$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ AudioPlayerView this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public AudioPlayerView$attachStateChangeListener$1$1(AudioPlayerView audioPlayerView, Continuation continuation) {
        super(2, continuation);
        this.this$0 = audioPlayerView;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new AudioPlayerView$attachStateChangeListener$1$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            Flow currentPlayerSourceFlow = AudioPlayerManager.INSTANCE.getCurrentPlayerSourceFlow();
            final AudioPlayerView audioPlayerView = this.this$0;
            FlowCollector flowCollector = new FlowCollector() { // from class: com.discord.chat.presentation.message.view.voicemessages.AudioPlayerView$attachStateChangeListener$1$1.1
                @Override // kotlinx.coroutines.flow.FlowCollector
                public final Object emit(AudioPlayerManager.AudioSource audioSource, Continuation continuation) {
                    AudioPlayerViewState audioPlayerViewState;
                    AudioPlayerViewState audioPlayerViewState2;
                    AudioPlayerViewState audioPlayerViewState3;
                    audioPlayerViewState = AudioPlayerView.this.state;
                    if (!Intrinsics.areEqual(audioSource, audioPlayerViewState.getAudioSource())) {
                        AudioPlayerView audioPlayerView2 = AudioPlayerView.this;
                        audioPlayerViewState2 = audioPlayerView2.state;
                        audioPlayerView2.configurePlayButton(audioPlayerViewState2);
                        AudioPlayerView audioPlayerView3 = AudioPlayerView.this;
                        audioPlayerViewState3 = audioPlayerView3.state;
                        audioPlayerView3.toggleDurationEmitter(audioPlayerViewState3.shouldEmitDuration$chat_release());
                    }
                    return Unit.a;
                }
            };
            this.label = 1;
            if (currentPlayerSourceFlow.collect(flowCollector, this) == aVar) {
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
        return ((AudioPlayerView$attachStateChangeListener$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
