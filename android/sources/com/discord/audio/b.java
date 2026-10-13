package com.discord.audio;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3763d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ DiscordAudioManager f3764e;

    public /* synthetic */ b(DiscordAudioManager discordAudioManager, int i5) {
        this.f3763d = i5;
        this.f3764e = discordAudioManager;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit onAudioDevicesAdded$lambda$1;
        Unit onAudioDevicesRemoved$lambda$4;
        switch (this.f3763d) {
            case 0:
                onAudioDevicesAdded$lambda$1 = DiscordAudioManager$setupAudioDeviceCallback$1.onAudioDevicesAdded$lambda$1(this.f3764e, (DiscordAudioManagerListener) obj);
                return onAudioDevicesAdded$lambda$1;
            default:
                onAudioDevicesRemoved$lambda$4 = DiscordAudioManager$setupAudioDeviceCallback$1.onAudioDevicesRemoved$lambda$4(this.f3764e, (DiscordAudioManagerListener) obj);
                return onAudioDevicesRemoved$lambda$4;
        }
    }
}
