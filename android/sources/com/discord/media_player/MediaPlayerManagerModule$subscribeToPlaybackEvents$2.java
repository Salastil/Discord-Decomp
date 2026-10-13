package com.discord.media_player;

import com.discord.media_player.reactevents.MediaPlayerPlaybackRateChanged;
import com.discord.media_player.reactevents.MediaPlayerPlaybackSource;
import com.discord.reactevents.ReactEvents;
import com.facebook.react.bridge.ReactApplicationContext;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.MutableStateFlow;
import lo.h;
import qr.y;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media_player.MediaPlayerManagerModule$subscribeToPlaybackEvents$2", f = "MediaPlayerManagerModule.kt", l = {179}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaPlayerManagerModule$subscribeToPlaybackEvents$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ MediaPlayerManagerModule this$0;

    @Metadata(d1 = {"\u0000\u0014\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0006\u0010\u0000\u001a\u00020\u00012\u0014\u0010\u0002\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0012\u0004\u0012\u00020\u00050\u0003H\n"}, d2 = {"<anonymous>", "", "<destruct>", "Lkotlin/Pair;", "Lcom/discord/media_player/MediaSource;", ""}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.media_player.MediaPlayerManagerModule$subscribeToPlaybackEvents$2$1", f = "MediaPlayerManagerModule.kt", l = {}, m = "invokeSuspend")
    @SourceDebugExtension({"SMAP\nMediaPlayerManagerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaPlayerManagerModule.kt\ncom/discord/media_player/MediaPlayerManagerModule$subscribeToPlaybackEvents$2$1\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,353:1\n1#2:354\n*E\n"})
    /* renamed from: com.discord.media_player.MediaPlayerManagerModule$subscribeToPlaybackEvents$2$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<Pair<? extends MediaSource, ? extends Double>, Continuation, Object> {
        /* synthetic */ Object L$0;
        int label;
        final /* synthetic */ MediaPlayerManagerModule this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(MediaPlayerManagerModule mediaPlayerManagerModule, Continuation continuation) {
            super(2, continuation);
            this.this$0 = mediaPlayerManagerModule;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, continuation);
            anonymousClass1.L$0 = obj;
            return anonymousClass1;
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ReactEvents reactEvents;
            ReactApplicationContext reactApplicationContext;
            ko.a aVar = ko.a.f13464d;
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
            Pair pair = (Pair) this.L$0;
            MediaSource mediaSource = (MediaSource) pair.f13474d;
            double doubleValue = ((Number) pair.f13475e).doubleValue();
            reactEvents = this.this$0.reactEvents;
            reactApplicationContext = this.this$0.reactContext;
            reactEvents.emitModuleEvent(reactApplicationContext, new MediaPlayerPlaybackRateChanged(mediaSource != null ? MediaPlayerPlaybackSource.INSTANCE.fromMediaSource(mediaSource) : null, doubleValue));
            return Unit.a;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(Pair<MediaSource, Double> pair, Continuation continuation) {
            return ((AnonymousClass1) create(pair, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaPlayerManagerModule$subscribeToPlaybackEvents$2(MediaPlayerManagerModule mediaPlayerManagerModule, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaPlayerManagerModule;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaPlayerManagerModule$subscribeToPlaybackEvents$2(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            MutableStateFlow playbackRateFlow$media_player_release = MediaPlayerManager.INSTANCE.getPlaybackRateFlow$media_player_release();
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, null);
            this.label = 1;
            if (y.f(playbackRateFlow$media_player_release, anonymousClass1, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaPlayerManagerModule$subscribeToPlaybackEvents$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
