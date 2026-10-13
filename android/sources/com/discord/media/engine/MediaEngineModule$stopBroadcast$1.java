package com.discord.media.engine;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$stopBroadcast$1", f = "MediaEngineModule.kt", l = {239}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nMediaEngineModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaEngineModule.kt\ncom/discord/media/engine/MediaEngineModule$stopBroadcast$1\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,890:1\n1#2:891\n*E\n"})
/* loaded from: classes.dex */
public final class MediaEngineModule$stopBroadcast$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule$stopBroadcast$1(MediaEngineModule mediaEngineModule, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaEngineModule$stopBroadcast$1(this.this$0, continuation);
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
        num = this.this$0.streamConnectionId;
        if (num != null) {
            this.this$0.getMediaEngine().connectionInstanceStopBroadcast$media_engine_release(num.intValue());
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$stopBroadcast$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
