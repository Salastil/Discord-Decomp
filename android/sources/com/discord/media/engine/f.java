package com.discord.media.engine;

import com.discord.p000native.engine.NativeConnection;
import kotlin.jvm.functions.Function3;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements NativeConnection.OnFirstFrameCallback, NativeConnection.OnSpeakingCallback {
    public final /* synthetic */ MediaEngine a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Function3 f4206b;

    public /* synthetic */ f(MediaEngine mediaEngine, Function3 function3) {
        this.a = mediaEngine;
        this.f4206b = function3;
    }

    @Override // com.discord.native.engine.NativeConnection.OnFirstFrameCallback
    public void onFirstFrame(String str, long j, String str2) {
        MediaEngine.connectionInstanceSetOnFirstFrameCallback$lambda$55(this.a, this.f4206b, str, j, str2);
    }

    @Override // com.discord.native.engine.NativeConnection.OnSpeakingCallback
    public void onSpeaking(String str, int i5, float f2) {
        MediaEngine.connectionInstanceSetOnSpeakingCallback$lambda$47(this.a, this.f4206b, str, i5, f2);
    }
}
