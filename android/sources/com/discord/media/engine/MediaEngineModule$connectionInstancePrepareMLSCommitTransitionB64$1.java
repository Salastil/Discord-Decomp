package com.discord.media.engine;

import com.facebook.react.bridge.Callback;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$connectionInstancePrepareMLSCommitTransitionB64$1", f = "MediaEngineModule.kt", l = {761}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaEngineModule$connectionInstancePrepareMLSCommitTransitionB64$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Callback $callback;
    final /* synthetic */ String $commit;
    final /* synthetic */ double $connectionId;
    final /* synthetic */ double $transitionId;
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule$connectionInstancePrepareMLSCommitTransitionB64$1(MediaEngineModule mediaEngineModule, double d6, double d7, String str, Callback callback, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
        this.$connectionId = d6;
        this.$transitionId = d7;
        this.$commit = str;
        this.$callback = callback;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$0(Callback callback, boolean z5, int i5, String str) {
        callback.invoke(Boolean.valueOf(z5), Integer.valueOf(i5), str);
        return Unit.a;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaEngineModule$connectionInstancePrepareMLSCommitTransitionB64$1(this.this$0, this.$connectionId, this.$transitionId, this.$commit, this.$callback, continuation);
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
        this.this$0.getMediaEngine().connectionInstancePrepareMLSCommitTransitionB64$media_engine_release((int) this.$connectionId, (int) this.$transitionId, this.$commit, new m(0, this.$callback));
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$connectionInstancePrepareMLSCommitTransitionB64$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
