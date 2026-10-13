package com.discord.media_player;

import java.lang.ref.WeakReference;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media_player.MediaPlayerManager$playActivePlayer$1", f = "MediaPlayerManager.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaPlayerManager$playActivePlayer$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    int label;

    public MediaPlayerManager$playActivePlayer$1(Continuation continuation) {
        super(2, continuation);
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaPlayerManager$playActivePlayer$1(continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        WeakReference weakReference;
        MediaPlayer mediaPlayer;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        weakReference = MediaPlayerManager.activePlayerRef;
        if (weakReference != null && (mediaPlayer = (MediaPlayer) weakReference.get()) != null) {
            mediaPlayer.playOrReset();
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaPlayerManager$playActivePlayer$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
