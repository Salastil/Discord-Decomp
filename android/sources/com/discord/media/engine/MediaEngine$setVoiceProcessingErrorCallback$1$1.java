package com.discord.media.engine;

import com.discord.p000native.engine.NativeEngine;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class MediaEngine$setVoiceProcessingErrorCallback$1$1 implements NativeEngine.VoiceProcessingErrorCallback {
    final /* synthetic */ Function1<Integer, Unit> $callback;

    /* JADX WARN: Multi-variable type inference failed */
    public MediaEngine$setVoiceProcessingErrorCallback$1$1(Function1<? super Integer, Unit> function1) {
        this.$callback = function1;
    }

    @Override // com.discord.native.engine.NativeEngine.VoiceProcessingErrorCallback
    public final void onVoiceProcessingError(int i5) {
        this.$callback.invoke(Integer.valueOf(i5));
    }
}
