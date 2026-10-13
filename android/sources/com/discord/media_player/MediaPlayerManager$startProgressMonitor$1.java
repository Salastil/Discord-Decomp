package com.discord.media_player;

import com.discord.media_player.MediaPlayerManager;
import java.lang.ref.WeakReference;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import nr.x;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media_player.MediaPlayerManager$startProgressMonitor$1", f = "MediaPlayerManager.kt", l = {116}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaPlayerManager$startProgressMonitor$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ WeakReference<MediaPlayer> $playerRef;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaPlayerManager$startProgressMonitor$1(WeakReference<MediaPlayer> weakReference, Continuation continuation) {
        super(2, continuation);
        this.$playerRef = weakReference;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaPlayerManager$startProgressMonitor$1(this.$playerRef, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 != 0 && i5 != 1) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        do {
            MediaPlayer mediaPlayer = this.$playerRef.get();
            if (mediaPlayer == null || !mediaPlayer.isPlaying()) {
                return Unit.a;
            }
            MediaPlayerManager.INSTANCE.getPlaybackProgressFlow$media_player_release().setValue(new MediaPlayerManager.PlaybackProgress(mediaPlayer.getMediaSource(), mediaPlayer.currentPositionMs(), mediaPlayer.durationMs()));
            this.label = 1;
        } while (x.j(100L, this) != aVar);
        return aVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaPlayerManager$startProgressMonitor$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
