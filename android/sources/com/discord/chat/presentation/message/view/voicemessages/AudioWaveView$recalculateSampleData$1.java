package com.discord.chat.presentation.message.view.voicemessages;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import nr.g0;
import nr.x;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.presentation.message.view.voicemessages.AudioWaveView$recalculateSampleData$1", f = "AudioWaveView.kt", l = {140}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class AudioWaveView$recalculateSampleData$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ int $numChunks;
    final /* synthetic */ byte[] $originalSampleData;
    Object L$0;
    int label;
    final /* synthetic */ AudioWaveView this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0012\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.chat.presentation.message.view.voicemessages.AudioWaveView$recalculateSampleData$1$1", f = "AudioWaveView.kt", l = {}, m = "invokeSuspend")
    /* renamed from: com.discord.chat.presentation.message.view.voicemessages.AudioWaveView$recalculateSampleData$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ int $numChunks;
        final /* synthetic */ byte[] $originalSampleData;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(byte[] bArr, int i5, Continuation continuation) {
            super(2, continuation);
            this.$originalSampleData = bArr;
            this.$numChunks = i5;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.$originalSampleData, this.$numChunks, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
            return Sampler.INSTANCE.downSample(this.$originalSampleData, this.$numChunks);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public AudioWaveView$recalculateSampleData$1(AudioWaveView audioWaveView, byte[] bArr, int i5, Continuation continuation) {
        super(2, continuation);
        this.this$0 = audioWaveView;
        this.$originalSampleData = bArr;
        this.$numChunks = i5;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new AudioWaveView$recalculateSampleData$1(this.this$0, this.$originalSampleData, this.$numChunks, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        AudioWaveView audioWaveView;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            AudioWaveView audioWaveView2 = this.this$0;
            ur.e eVar = g0.a;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.$originalSampleData, this.$numChunks, null);
            this.L$0 = audioWaveView2;
            this.label = 1;
            Object A = x.A(eVar, anonymousClass1, this);
            if (A == aVar) {
                return aVar;
            }
            audioWaveView = audioWaveView2;
            obj = A;
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            audioWaveView = (AudioWaveView) this.L$0;
            ki.b.R(obj);
        }
        audioWaveView.setDownSampleData((byte[]) obj);
        this.this$0.invalidate();
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((AudioWaveView$recalculateSampleData$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
