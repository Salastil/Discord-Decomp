package com.discord.media_player;

import com.discord.media_player.reactevents.MediaPlayerPause;
import com.discord.reactevents.ReactEvents;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.bridge.ReactApplicationContext;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.FlowCollector;
import kotlinx.coroutines.flow.MutableStateFlow;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media_player.MediaPlayerManagerModule$subscribeToPlaybackEvents$3", f = "MediaPlayerManagerModule.kt", l = {JfifUtil.MARKER_SOFn}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaPlayerManagerModule$subscribeToPlaybackEvents$3 extends h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ MediaPlayerManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaPlayerManagerModule$subscribeToPlaybackEvents$3(MediaPlayerManagerModule mediaPlayerManagerModule, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaPlayerManagerModule;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaPlayerManagerModule$subscribeToPlaybackEvents$3(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            MutableStateFlow playbackRateFlow$media_player_release = MediaPlayerManager.INSTANCE.getPlaybackRateFlow$media_player_release();
            final MediaPlayerManagerModule mediaPlayerManagerModule = this.this$0;
            FlowCollector flowCollector = new FlowCollector() { // from class: com.discord.media_player.MediaPlayerManagerModule$subscribeToPlaybackEvents$3.1
                @Override // kotlinx.coroutines.flow.FlowCollector
                public final Object emit(Pair<MediaSource, Double> pair, Continuation continuation) {
                    Double portal;
                    ReactEvents reactEvents;
                    ReactApplicationContext reactApplicationContext;
                    MediaSource mediaSource = (MediaSource) pair.f13474d;
                    double doubleValue = ((Number) pair.f13475e).doubleValue();
                    if (mediaSource == null || (portal = mediaSource.getPortal()) == null) {
                        return Unit.a;
                    }
                    double doubleValue2 = portal.doubleValue();
                    reactEvents = MediaPlayerManagerModule.this.reactEvents;
                    reactApplicationContext = MediaPlayerManagerModule.this.reactContext;
                    reactEvents.emitModuleEvent(reactApplicationContext, new MediaPlayerPause(doubleValue2, doubleValue == 0.0d));
                    return Unit.a;
                }
            };
            this.label = 1;
            if (playbackRateFlow$media_player_release.collect(flowCollector, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        throw new fo.h();
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaPlayerManagerModule$subscribeToPlaybackEvents$3) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
