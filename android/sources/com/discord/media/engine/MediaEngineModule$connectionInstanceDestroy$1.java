package com.discord.media.engine;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$connectionInstanceDestroy$1", f = "MediaEngineModule.kt", l = {530}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaEngineModule$connectionInstanceDestroy$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ double $connectionId;
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule$connectionInstanceDestroy$1(MediaEngineModule mediaEngineModule, double d6, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
        this.$connectionId = d6;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaEngineModule$connectionInstanceDestroy$1(this.this$0, this.$connectionId, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object awaitMediaEngine;
        Integer num;
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
        this.this$0.getMediaEngine().connectionInstanceDestroy$media_engine_release((int) this.$connectionId);
        int i6 = (int) this.$connectionId;
        num = this.this$0.streamConnectionId;
        if (num != null && i6 == num.intValue()) {
            this.this$0.streamConnectionId = null;
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$connectionInstanceDestroy$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
