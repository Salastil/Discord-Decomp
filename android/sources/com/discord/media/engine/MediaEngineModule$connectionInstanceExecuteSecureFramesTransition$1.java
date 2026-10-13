package com.discord.media.engine;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$connectionInstanceExecuteSecureFramesTransition$1", f = "MediaEngineModule.kt", l = {717}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaEngineModule$connectionInstanceExecuteSecureFramesTransition$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ double $connectionId;
    final /* synthetic */ double $transitionId;
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule$connectionInstanceExecuteSecureFramesTransition$1(MediaEngineModule mediaEngineModule, double d6, double d7, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
        this.$connectionId = d6;
        this.$transitionId = d7;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaEngineModule$connectionInstanceExecuteSecureFramesTransition$1(this.this$0, this.$connectionId, this.$transitionId, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object awaitMediaEngine;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            MediaEngineModule mediaEngineModule = this.this$0;
            this.label = 1;
            awaitMediaEngine = mediaEngineModule.awaitMediaEngine(this);
            if (awaitMediaEngine == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        this.this$0.getMediaEngine().connectionInstanceExecuteSecureFramesTransition$media_engine_release((int) this.$connectionId, (int) this.$transitionId);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$connectionInstanceExecuteSecureFramesTransition$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
