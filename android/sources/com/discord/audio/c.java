package com.discord.audio;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3765d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ DiscordAudioManager2 f3766e;

    public /* synthetic */ c(DiscordAudioManager2 discordAudioManager2, int i5) {
        this.f3765d = i5;
        this.f3766e = discordAudioManager2;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit onAudioDevicesAdded$lambda$1;
        Unit onAudioDevicesRemoved$lambda$5;
        switch (this.f3765d) {
            case 0:
                onAudioDevicesAdded$lambda$1 = DiscordAudioManager2$setupAudioDeviceCallback$1.onAudioDevicesAdded$lambda$1(this.f3766e, (DiscordAudioManagerListener) obj);
                return onAudioDevicesAdded$lambda$1;
            default:
                onAudioDevicesRemoved$lambda$5 = DiscordAudioManager2$setupAudioDeviceCallback$1.onAudioDevicesRemoved$lambda$5(this.f3766e, (DiscordAudioManagerListener) obj);
                return onAudioDevicesRemoved$lambda$5;
        }
    }
}
