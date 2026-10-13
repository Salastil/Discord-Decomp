package com.discord.media.engine;

import com.discord.p000native.engine.NativeConnection;
import kotlin.jvm.functions.Function4;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements NativeConnection.OnVideoCallback, NativeConnection.OnPingCallback, NativeConnection.OnPingTimeoutCallback {
    public final /* synthetic */ MediaEngine a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Function4 f4205b;

    public /* synthetic */ e(MediaEngine mediaEngine, Function4 function4) {
        this.a = mediaEngine;
        this.f4205b = function4;
    }

    @Override // com.discord.native.engine.NativeConnection.OnPingCallback
    public void onPing(int i5, String str, int i6, int i10) {
        MediaEngine.connectionInstanceSetOnPingCallback$lambda$51(this.a, this.f4205b, i5, str, i6, i10);
    }

    @Override // com.discord.native.engine.NativeConnection.OnPingTimeoutCallback
    public void onPingTimeout(String str, int i5, int i6, int i10) {
        MediaEngine.connectionInstanceSetOnPingTimeoutCallback$lambda$53(this.a, this.f4205b, str, i5, i6, i10);
    }

    @Override // com.discord.native.engine.NativeConnection.OnVideoCallback
    public void onVideo(String str, long j, String str2, String str3) {
        MediaEngine.connectionInstanceSetOnVideoCallback$lambda$57(this.a, this.f4205b, str, j, str2, str3);
    }
}
