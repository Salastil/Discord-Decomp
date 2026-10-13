package com.discord.media_player;

import com.google.android.exoplayer2.SimpleExoPlayer;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4268d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ boolean f4269e;

    public /* synthetic */ c(boolean z5, int i5) {
        this.f4268d = i5;
        this.f4269e = z5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit muted$lambda$2;
        Unit loopPlayback$lambda$3;
        switch (this.f4268d) {
            case 0:
                muted$lambda$2 = MediaPlayerManagerModule.setMuted$lambda$2(this.f4269e, (SimpleExoPlayer) obj);
                return muted$lambda$2;
            default:
                loopPlayback$lambda$3 = MediaPlayerManagerModule.setLoopPlayback$lambda$3(this.f4269e, (SimpleExoPlayer) obj);
                return loopPlayback$lambda$3;
        }
    }
}
