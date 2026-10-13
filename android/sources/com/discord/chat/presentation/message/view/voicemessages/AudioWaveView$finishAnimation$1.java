package com.discord.chat.presentation.message.view.voicemessages;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import nr.g0;
import nr.x;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.presentation.message.view.voicemessages.AudioWaveView$finishAnimation$1", f = "AudioWaveView.kt", l = {122}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class AudioWaveView$finishAnimation$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    int I$0;
    int I$1;
    private /* synthetic */ Object L$0;
    Object L$1;
    int label;
    final /* synthetic */ AudioWaveView this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public AudioWaveView$finishAnimation$1(AudioWaveView audioWaveView, Continuation continuation) {
        super(2, continuation);
        this.this$0 = audioWaveView;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        AudioWaveView$finishAnimation$1 audioWaveView$finishAnimation$1 = new AudioWaveView$finishAnimation$1(this.this$0, continuation);
        audioWaveView$finishAnimation$1.L$0 = obj;
        return audioWaveView$finishAnimation$1;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0057  */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0052  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:11:0x0049 -> B:5:0x004c). Please report as a decompilation issue!!! */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        int i5;
        AudioWaveView audioWaveView;
        int i6;
        CoroutineScope coroutineScope;
        ko.a aVar = ko.a.f13464d;
        int i10 = this.label;
        if (i10 == 0) {
            ki.b.R(obj);
            CoroutineScope coroutineScope2 = (CoroutineScope) this.L$0;
            i5 = 10;
            audioWaveView = this.this$0;
            i6 = 0;
            coroutineScope = coroutineScope2;
            if (i6 < i5) {
            }
        } else {
            if (i10 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            i6 = this.I$1;
            i5 = this.I$0;
            audioWaveView = (AudioWaveView) this.L$1;
            coroutineScope = (CoroutineScope) this.L$0;
            ki.b.R(obj);
            if (x.s(coroutineScope)) {
                audioWaveView.invalidate();
            }
            i6++;
            if (i6 < i5) {
                ur.e eVar = g0.a;
                AudioWaveView$finishAnimation$1$1$1 audioWaveView$finishAnimation$1$1$1 = new AudioWaveView$finishAnimation$1$1$1(null);
                this.L$0 = coroutineScope;
                this.L$1 = audioWaveView;
                this.I$0 = i5;
                this.I$1 = i6;
                this.label = 1;
                if (x.A(eVar, audioWaveView$finishAnimation$1$1$1, this) == aVar) {
                    return aVar;
                }
                if (x.s(coroutineScope)) {
                }
                i6++;
                if (i6 < i5) {
                    return Unit.a;
                }
            }
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((AudioWaveView$finishAnimation$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
