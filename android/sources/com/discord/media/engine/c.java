package com.discord.media.engine;

import com.discord.p000native.engine.NativeConnection;
import kotlin.Function;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function3;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements NativeConnection.MLSWelcomeCallback, NativeConnection.MLSCommitTransitionCallback, NativeConnection.SecureFramesTransitionReadyCallback {
    public final /* synthetic */ Function a;

    public /* synthetic */ c(Function function) {
        this.a = function;
    }

    @Override // com.discord.native.engine.NativeConnection.MLSCommitTransitionCallback
    public void onMLSProcessedCommit(boolean z5, int i5, String str) {
        MediaEngine.connectionInstancePrepareMLSCommitTransitionB64$lambda$71((Function3) this.a, z5, i5, str);
    }

    @Override // com.discord.native.engine.NativeConnection.MLSWelcomeCallback
    public void onMLSProcessedWelcome(boolean z5, int i5, String str) {
        MediaEngine.connectionInstanceProcessMLSWelcomeB64$lambda$72((Function3) this.a, z5, i5, str);
    }

    @Override // com.discord.native.engine.NativeConnection.SecureFramesTransitionReadyCallback
    public void onTransitionReady() {
        ((Function0) this.a).invoke();
    }
}
