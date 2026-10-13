package com.discord.audio;

import android.media.AudioDeviceCallback;
import android.media.AudioDeviceInfo;
import android.media.AudioManager;
import android.os.RemoteException;
import java.util.ArrayList;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.e1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;

@Metadata(d1 = {"\u0000\u001d\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0004*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u001f\u0010\u0002\u001a\u00020\u00032\u0010\u0010\u0004\u001a\f\u0012\u0006\b\u0001\u0012\u00020\u0006\u0018\u00010\u0005H\u0016¢\u0006\u0002\u0010\u0007J\u001f\u0010\b\u001a\u00020\u00032\u0010\u0010\t\u001a\f\u0012\u0006\b\u0001\u0012\u00020\u0006\u0018\u00010\u0005H\u0016¢\u0006\u0002\u0010\u0007¨\u0006\n"}, d2 = {"com/discord/audio/DiscordAudioManager2$setupAudioDeviceCallback$1", "Landroid/media/AudioDeviceCallback;", "onAudioDevicesAdded", "", "addedDevices", "", "Landroid/media/AudioDeviceInfo;", "([Landroid/media/AudioDeviceInfo;)V", "onAudioDevicesRemoved", "removedDevices", "audio_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nDiscordAudioManager2.kt\nKotlin\n*S Kotlin\n*F\n+ 1 DiscordAudioManager2.kt\ncom/discord/audio/DiscordAudioManager2$setupAudioDeviceCallback$1\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,231:1\n3829#2:232\n4344#2,2:233\n3829#2:235\n4344#2,2:236\n*S KotlinDebug\n*F\n+ 1 DiscordAudioManager2.kt\ncom/discord/audio/DiscordAudioManager2$setupAudioDeviceCallback$1\n*L\n183#1:232\n183#1:233,2\n223#1:235\n223#1:236,2\n*E\n"})
/* loaded from: classes.dex */
public final class DiscordAudioManager2$setupAudioDeviceCallback$1 extends AudioDeviceCallback {
    final /* synthetic */ DiscordAudioManager2 this$0;

    public DiscordAudioManager2$setupAudioDeviceCallback$1(DiscordAudioManager2 discordAudioManager2) {
        this.this$0 = discordAudioManager2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onAudioDevicesAdded$lambda$1(DiscordAudioManager2 discordAudioManager2, DiscordAudioManagerListener listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        listener.onAudioDevicesUpdated(CollectionsKt.i0(discordAudioManager2.getAudioDevices()));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onAudioDevicesRemoved$lambda$5(DiscordAudioManager2 discordAudioManager2, DiscordAudioManagerListener listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        listener.onAudioDevicesUpdated(CollectionsKt.i0(discordAudioManager2.getAudioDevices()));
        return Unit.a;
    }

    @Override // android.media.AudioDeviceCallback
    public void onAudioDevicesAdded(AudioDeviceInfo[] addedDevices) {
        Set set;
        AudioDeviceInfo audioDeviceInfo;
        AudioDeviceInfo audioDeviceInfo2;
        AudioDeviceInfo audioDeviceInfo3;
        AudioManager audioManager;
        AudioManager audioManager2;
        if (addedDevices == null || addedDevices.length == 0) {
            return;
        }
        DiscordAudioManager2 discordAudioManager2 = this.this$0;
        set = discordAudioManager2.audioDevices;
        ArrayList arrayList = new ArrayList();
        for (AudioDeviceInfo audioDeviceInfo4 : addedDevices) {
            if (audioDeviceInfo4.isSink()) {
                arrayList.add(audioDeviceInfo4);
            }
        }
        discordAudioManager2.audioDevices = e1.d(set, arrayList);
        DiscordAudioManager2 discordAudioManager22 = this.this$0;
        discordAudioManager22.notifyListeners(new c(discordAudioManager22, 0));
        audioDeviceInfo = this.this$0.preferredAudioDevice;
        if (audioDeviceInfo == null) {
            int length = addedDevices.length;
            int i5 = 0;
            while (true) {
                audioDeviceInfo2 = null;
                if (i5 >= length) {
                    audioDeviceInfo3 = null;
                    break;
                }
                audioDeviceInfo3 = addedDevices[i5];
                if (AndroidAudioDeviceKt.getAudioDeviceTypeToSimpleMapping().getOrDefault(Integer.valueOf(audioDeviceInfo3.getType()), SimpleDeviceType.INVALID) == SimpleDeviceType.BLUETOOTH_HEADSET) {
                    break;
                } else {
                    i5++;
                }
            }
            for (AudioDeviceInfo audioDeviceInfo5 : addedDevices) {
                if (AndroidAudioDeviceKt.getAudioDeviceTypeToSimpleMapping().getOrDefault(Integer.valueOf(audioDeviceInfo5.getType()), SimpleDeviceType.INVALID) == SimpleDeviceType.WIRED_HEADSET) {
                    audioDeviceInfo2 = audioDeviceInfo5;
                    break;
                }
            }
            try {
                if (audioDeviceInfo3 != null) {
                    audioManager2 = this.this$0.androidAudioManager;
                    audioManager2.setCommunicationDevice(audioDeviceInfo3);
                } else if (audioDeviceInfo2 != null) {
                    audioManager = this.this$0.androidAudioManager;
                    audioManager.setCommunicationDevice(audioDeviceInfo2);
                }
            } catch (RemoteException | IllegalArgumentException unused) {
            }
        }
        this.this$0.emitEffectiveDevice();
    }

    @Override // android.media.AudioDeviceCallback
    public void onAudioDevicesRemoved(AudioDeviceInfo[] removedDevices) {
        Set set;
        if (removedDevices == null || removedDevices.length == 0) {
            return;
        }
        DiscordAudioManager2 discordAudioManager2 = this.this$0;
        set = discordAudioManager2.audioDevices;
        ArrayList arrayList = new ArrayList();
        for (AudioDeviceInfo audioDeviceInfo : removedDevices) {
            if (audioDeviceInfo.isSink()) {
                arrayList.add(audioDeviceInfo);
            }
        }
        discordAudioManager2.audioDevices = e1.c(set, CollectionsKt.l0(arrayList));
        DiscordAudioManager2 discordAudioManager22 = this.this$0;
        discordAudioManager22.notifyListeners(new c(discordAudioManager22, 1));
        this.this$0.emitEffectiveDevice();
    }
}
