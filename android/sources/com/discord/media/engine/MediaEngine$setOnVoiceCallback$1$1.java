package com.discord.media.engine;

import com.discord.p000native.engine.NativeEngine;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class MediaEngine$setOnVoiceCallback$1$1 implements NativeEngine.OnVoiceCallback {
    final /* synthetic */ Function2<Float, Integer, Unit> $cb;

    /* JADX WARN: Multi-variable type inference failed */
    public MediaEngine$setOnVoiceCallback$1$1(Function2<? super Float, ? super Integer, Unit> function2) {
        this.$cb = function2;
    }

    @Override // com.discord.native.engine.NativeEngine.OnVoiceCallback
    public final void onVoice(float f2, int i5) {
        this.$cb.invoke(Float.valueOf(f2), Integer.valueOf(i5));
    }
}
