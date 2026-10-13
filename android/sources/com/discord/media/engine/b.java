package com.discord.media.engine;

import com.discord.p000native.engine.NativeConnection;
import kotlin.Function;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements NativeConnection.OnSpeakingWhileMutedCallback, NativeConnection.MLSFailureCallback, NativeConnection.SecureFramesStateUpdateCallback {
    public final /* synthetic */ MediaEngine a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Function f4204b;

    public /* synthetic */ b(MediaEngine mediaEngine, Function function) {
        this.a = mediaEngine;
        this.f4204b = function;
    }

    @Override // com.discord.native.engine.NativeConnection.MLSFailureCallback
    public void onMLSFailureCallback(String str, String str2) {
        MediaEngine.connectionInstanceSetOnMLSFailureCallback$lambda$59(this.a, (Function2) this.f4204b, str, str2);
    }

    @Override // com.discord.native.engine.NativeConnection.SecureFramesStateUpdateCallback
    public void onSecureFramesStateUpdateCallback(String str) {
        MediaEngine.connectionInstanceSetSecureFramesStateUpdateCallback$lambda$61(this.a, (Function1) this.f4204b, str);
    }

    @Override // com.discord.native.engine.NativeConnection.OnSpeakingWhileMutedCallback
    public void onSpeakingWhileMuted() {
        MediaEngine.connectionInstanceSetOnSpeakingWhileMutedCallback$lambda$49(this.a, (Function0) this.f4204b);
    }
}
