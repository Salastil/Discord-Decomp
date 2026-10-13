package com.discord.media_player;

import com.discord.media_player.reactevents.MediaPlayerPlaybackSource;
import com.discord.media_player.reactevents.MediaPlayerViewWillAppear;
import com.discord.primitives.ChannelId;
import com.discord.reactevents.ReactEvents;
import com.facebook.react.bridge.ReactApplicationContext;
import java.util.ArrayList;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media_player.MediaPlayerManagerModule$onMediaPlayerViewWillAppear$1", f = "MediaPlayerManagerModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nMediaPlayerManagerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaPlayerManagerModule.kt\ncom/discord/media_player/MediaPlayerManagerModule$onMediaPlayerViewWillAppear$1\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,353:1\n11228#2:354\n11563#2,3:355\n*S KotlinDebug\n*F\n+ 1 MediaPlayerManagerModule.kt\ncom/discord/media_player/MediaPlayerManagerModule$onMediaPlayerViewWillAppear$1\n*L\n317#1:354\n317#1:355,3\n*E\n"})
/* loaded from: classes.dex */
public final class MediaPlayerManagerModule$onMediaPlayerViewWillAppear$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ long $channelId;
    final /* synthetic */ MediaSource[] $mediaSources;
    int label;
    final /* synthetic */ MediaPlayerManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaPlayerManagerModule$onMediaPlayerViewWillAppear$1(MediaPlayerManagerModule mediaPlayerManagerModule, long j, MediaSource[] mediaSourceArr, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaPlayerManagerModule;
        this.$channelId = j;
        this.$mediaSources = mediaSourceArr;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaPlayerManagerModule$onMediaPlayerViewWillAppear$1(this.this$0, this.$channelId, this.$mediaSources, continuation);
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
        reactEvents = this.this$0.reactEvents;
        reactApplicationContext = this.this$0.reactContext;
        String m1170toStringimpl = ChannelId.m1170toStringimpl(this.$channelId);
        MediaSource[] mediaSourceArr = this.$mediaSources;
        ArrayList arrayList = new ArrayList(mediaSourceArr.length);
        for (MediaSource mediaSource : mediaSourceArr) {
            arrayList.add(MediaPlayerPlaybackSource.INSTANCE.createId(mediaSource));
        }
        reactEvents.emitModuleEvent(reactApplicationContext, new MediaPlayerViewWillAppear(m1170toStringimpl, arrayList));
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaPlayerManagerModule$onMediaPlayerViewWillAppear$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
