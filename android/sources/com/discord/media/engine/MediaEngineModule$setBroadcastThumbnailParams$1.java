package com.discord.media.engine;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import nr.g0;
import nr.x;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$setBroadcastThumbnailParams$1", f = "MediaEngineModule.kt", l = {228}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaEngineModule$setBroadcastThumbnailParams$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ double $height;
    final /* synthetic */ double $intervalSeconds;
    final /* synthetic */ double $width;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule$setBroadcastThumbnailParams$1(MediaEngineModule mediaEngineModule, double d6, double d7, double d8, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
        this.$width = d6;
        this.$height = d7;
        this.$intervalSeconds = d8;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$0(CoroutineScope coroutineScope, MediaEngineModule mediaEngineModule, String str) {
        ur.e eVar = g0.a;
        x.t(coroutineScope, sr.q.a, new MediaEngineModule$setBroadcastThumbnailParams$1$1$1(mediaEngineModule, str, null), 2);
        return Unit.a;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        MediaEngineModule$setBroadcastThumbnailParams$1 mediaEngineModule$setBroadcastThumbnailParams$1 = new MediaEngineModule$setBroadcastThumbnailParams$1(this.this$0, this.$width, this.$height, this.$intervalSeconds, continuation);
        mediaEngineModule$setBroadcastThumbnailParams$1.L$0 = obj;
        return mediaEngineModule$setBroadcastThumbnailParams$1;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object awaitMediaEngine;
        CoroutineScope coroutineScope;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            CoroutineScope coroutineScope2 = (CoroutineScope) this.L$0;
            MediaEngineModule mediaEngineModule = this.this$0;
            this.L$0 = coroutineScope2;
            this.label = 1;
            awaitMediaEngine = mediaEngineModule.awaitMediaEngine(this);
            if (awaitMediaEngine == aVar) {
                return aVar;
            }
            coroutineScope = coroutineScope2;
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            coroutineScope = (CoroutineScope) this.L$0;
            ki.b.R(obj);
        }
        this.this$0.getMediaEngine().setBroadcastThumbnailParams$media_engine_release((int) this.$width, (int) this.$height, (int) this.$intervalSeconds, new v(0, coroutineScope, this.this$0));
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$setBroadcastThumbnailParams$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
