package com.discord.media.engine;

import com.discord.media.engine.video.events.OnVideoCallbackEvent;
import com.discord.reactevents.ReactEvents;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function4;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$connectionInstanceTriggerOnVideoCallback$1", f = "MediaEngineModule.kt", l = {659}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaEngineModule$connectionInstanceTriggerOnVideoCallback$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ double $connectionId;
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule$connectionInstanceTriggerOnVideoCallback$1(MediaEngineModule mediaEngineModule, double d6, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
        this.$connectionId = d6;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$0(MediaEngineModule mediaEngineModule, double d6, String str, long j, String str2, String str3) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new OnVideoCallbackEvent((int) d6, str, j, str2, str3));
        return Unit.a;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaEngineModule$connectionInstanceTriggerOnVideoCallback$1(this.this$0, this.$connectionId, continuation);
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
        final double d6 = this.$connectionId;
        final MediaEngineModule mediaEngineModule2 = this.this$0;
        mediaEngine.connectionInstanceSetOnVideoCallback$media_engine_release((int) d6, new Function4() { // from class: com.discord.media.engine.p
            @Override // kotlin.jvm.functions.Function4
            public final Object invoke(Object obj2, Object obj3, Object obj4, Object obj5) {
                Unit invokeSuspend$lambda$0;
                invokeSuspend$lambda$0 = MediaEngineModule$connectionInstanceTriggerOnVideoCallback$1.invokeSuspend$lambda$0(MediaEngineModule.this, d6, (String) obj2, ((Long) obj3).longValue(), (String) obj4, (String) obj5);
                return invokeSuspend$lambda$0;
            }
        });
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$connectionInstanceTriggerOnVideoCallback$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
