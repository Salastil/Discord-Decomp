package com.discord.media_player;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import nr.g0;
import nr.x;
import sr.q;
import ur.e;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media_player.MediaPlayerManagerModule$startPlayerProgressInterval$1", f = "MediaPlayerManagerModule.kt", l = {242, 258}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaPlayerManagerModule$startPlayerProgressInterval$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ MediaPlayer $mediaPlayer;
    final /* synthetic */ MediaSource $mediaSource;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ MediaPlayerManagerModule this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.media_player.MediaPlayerManagerModule$startPlayerProgressInterval$1$1", f = "MediaPlayerManagerModule.kt", l = {}, m = "invokeSuspend")
    /* renamed from: com.discord.media_player.MediaPlayerManagerModule$startPlayerProgressInterval$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ MediaPlayer $mediaPlayer;
        final /* synthetic */ MediaSource $mediaSource;
        int label;
        final /* synthetic */ MediaPlayerManagerModule this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(MediaPlayer mediaPlayer, MediaPlayerManagerModule mediaPlayerManagerModule, MediaSource mediaSource, Continuation continuation) {
            super(2, continuation);
            this.$mediaPlayer = mediaPlayer;
            this.this$0 = mediaPlayerManagerModule;
            this.$mediaSource = mediaSource;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.$mediaPlayer, this.this$0, this.$mediaSource, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
            if (this.$mediaPlayer.isPlaying()) {
                this.this$0.onMediaPlayerPlaybackProgress(this.$mediaSource, this.$mediaPlayer.currentPositionMs(), this.$mediaPlayer.durationMs());
            }
            if (this.$mediaPlayer.durationMs() > 0 && (this.$mediaPlayer.isPlaying() || this.$mediaPlayer.isBuffering())) {
                this.this$0.onMediaPlayerDownloadProgress(this.$mediaSource.getPortal().doubleValue(), this.$mediaPlayer.bufferedPositionMs(), this.$mediaPlayer.durationMs());
            }
            return Unit.a;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaPlayerManagerModule$startPlayerProgressInterval$1(MediaPlayer mediaPlayer, MediaPlayerManagerModule mediaPlayerManagerModule, MediaSource mediaSource, Continuation continuation) {
        super(2, continuation);
        this.$mediaPlayer = mediaPlayer;
        this.this$0 = mediaPlayerManagerModule;
        this.$mediaSource = mediaSource;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        MediaPlayerManagerModule$startPlayerProgressInterval$1 mediaPlayerManagerModule$startPlayerProgressInterval$1 = new MediaPlayerManagerModule$startPlayerProgressInterval$1(this.$mediaPlayer, this.this$0, this.$mediaSource, continuation);
        mediaPlayerManagerModule$startPlayerProgressInterval$1.L$0 = obj;
        return mediaPlayerManagerModule$startPlayerProgressInterval$1;
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x0058, code lost:
    
        if (nr.x.j(100, r9) != r0) goto L7;
     */
    /* JADX WARN: Removed duplicated region for block: B:16:0x005b  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0032  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:13:0x0058 -> B:6:0x0013). Please report as a decompilation issue!!! */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        CoroutineScope coroutineScope;
        CoroutineScope coroutineScope2;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            coroutineScope = (CoroutineScope) this.L$0;
            if (x.s(coroutineScope)) {
            }
        } else {
            if (i5 != 1) {
                if (i5 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                coroutineScope2 = (CoroutineScope) this.L$0;
                ki.b.R(obj);
                coroutineScope = coroutineScope2;
                if (x.s(coroutineScope)) {
                    return Unit.a;
                }
                e eVar = g0.a;
                or.d dVar = q.a;
                AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.$mediaPlayer, this.this$0, this.$mediaSource, null);
                this.L$0 = coroutineScope;
                this.label = 1;
                if (x.A(dVar, anonymousClass1, this) != aVar) {
                    coroutineScope2 = coroutineScope;
                    this.L$0 = coroutineScope2;
                    this.label = 2;
                }
                return aVar;
            }
            coroutineScope2 = (CoroutineScope) this.L$0;
            ki.b.R(obj);
            this.L$0 = coroutineScope2;
            this.label = 2;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaPlayerManagerModule$startPlayerProgressInterval$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
