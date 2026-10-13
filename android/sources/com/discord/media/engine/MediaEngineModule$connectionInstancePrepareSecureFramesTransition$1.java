package com.discord.media.engine;

import com.facebook.react.bridge.Callback;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$connectionInstancePrepareSecureFramesTransition$1", f = "MediaEngineModule.kt", l = {706}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaEngineModule$connectionInstancePrepareSecureFramesTransition$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Callback $callback;
    final /* synthetic */ double $connectionId;
    final /* synthetic */ double $protocolVersion;
    final /* synthetic */ double $transitionId;
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule$connectionInstancePrepareSecureFramesTransition$1(MediaEngineModule mediaEngineModule, double d6, double d7, double d8, Callback callback, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
        this.$connectionId = d6;
        this.$transitionId = d7;
        this.$protocolVersion = d8;
        this.$callback = callback;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$0(Callback callback) {
        callback.invoke(new Object[0]);
        return Unit.a;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaEngineModule$connectionInstancePrepareSecureFramesTransition$1(this.this$0, this.$connectionId, this.$transitionId, this.$protocolVersion, this.$callback, continuation);
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
        MediaEngine mediaEngine = this.this$0.getMediaEngine();
        int i6 = (int) this.$connectionId;
        int i10 = (int) this.$transitionId;
        int i11 = (int) this.$protocolVersion;
        final Callback callback = this.$callback;
        mediaEngine.connectionInstancePrepareSecureFramesTransition$media_engine_release(i6, i10, i11, new Function0() { // from class: com.discord.media.engine.n
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                Unit invokeSuspend$lambda$0;
                invokeSuspend$lambda$0 = MediaEngineModule$connectionInstancePrepareSecureFramesTransition$1.invokeSuspend$lambda$0(Callback.this);
                return invokeSuspend$lambda$0;
            }
        });
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$connectionInstancePrepareSecureFramesTransition$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
