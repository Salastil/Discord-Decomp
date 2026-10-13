package com.discord.chat.presentation.message.view.voicemessages;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import nr.g0;
import nr.x;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.presentation.message.view.voicemessages.AudioPlayerView$reset$1", f = "AudioPlayerView.kt", l = {683}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class AudioPlayerView$reset$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ AudioPlayerView this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.chat.presentation.message.view.voicemessages.AudioPlayerView$reset$1$1", f = "AudioPlayerView.kt", l = {684}, m = "invokeSuspend")
    /* renamed from: com.discord.chat.presentation.message.view.voicemessages.AudioPlayerView$reset$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
        int label;

        public AnonymousClass1(Continuation continuation) {
            super(2, continuation);
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 == 0) {
                ki.b.R(obj);
                this.label = 1;
                if (x.j(500L, this) == aVar) {
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
    public AudioPlayerView$reset$1(AudioPlayerView audioPlayerView, Continuation continuation) {
        super(2, continuation);
        this.this$0 = audioPlayerView;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new AudioPlayerView$reset$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Long l6;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            ur.e eVar = g0.a;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(null);
            this.label = 1;
            if (x.A(eVar, anonymousClass1, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        AudioPlayerView audioPlayerView = this.this$0;
        l6 = audioPlayerView.durationMs;
        audioPlayerView.configureDuration(l6, false);
        this.this$0.configureProgress();
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((AudioPlayerView$reset$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
