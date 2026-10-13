package com.discord.audio;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3761d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AndroidAudioDevice f3762e;

    public /* synthetic */ a(AndroidAudioDevice androidAudioDevice, int i5) {
        this.f3761d = i5;
        this.f3762e = androidAudioDevice;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit emitEffectiveDevice$lambda$3;
        Unit emitEffectiveDevice$lambda$7;
        switch (this.f3761d) {
            case 0:
                emitEffectiveDevice$lambda$3 = DiscordAudioManager.emitEffectiveDevice$lambda$3(this.f3762e, (DiscordAudioManagerListener) obj);
                return emitEffectiveDevice$lambda$3;
            default:
                emitEffectiveDevice$lambda$7 = DiscordAudioManager2.emitEffectiveDevice$lambda$7(this.f3762e, (DiscordAudioManagerListener) obj);
                return emitEffectiveDevice$lambda$7;
        }
    }
}
