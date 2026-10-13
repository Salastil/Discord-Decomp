package com.discord.audio;

import android.media.AudioDeviceCallback;
import android.media.AudioDeviceInfo;
import android.media.AudioManager;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;

@Metadata(d1 = {"\u0000\u001d\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0004*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u001f\u0010\u0002\u001a\u00020\u00032\u0010\u0010\u0004\u001a\f\u0012\u0006\b\u0001\u0012\u00020\u0006\u0018\u00010\u0005H\u0016¢\u0006\u0002\u0010\u0007J\u001f\u0010\b\u001a\u00020\u00032\u0010\u0010\t\u001a\f\u0012\u0006\b\u0001\u0012\u00020\u0006\u0018\u00010\u0005H\u0016¢\u0006\u0002\u0010\u0007¨\u0006\n"}, d2 = {"com/discord/audio/DiscordAudioManager$setupAudioDeviceCallback$1", "Landroid/media/AudioDeviceCallback;", "onAudioDevicesAdded", "", "addedDevices", "", "Landroid/media/AudioDeviceInfo;", "([Landroid/media/AudioDeviceInfo;)V", "onAudioDevicesRemoved", "removedDevices", "audio_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nDiscordAudioManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 DiscordAudioManager.kt\ncom/discord/audio/DiscordAudioManager$setupAudioDeviceCallback$1\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,346:1\n3829#2:347\n4344#2,2:348\n12637#2,2:350\n3829#2:352\n4344#2,2:353\n*S KotlinDebug\n*F\n+ 1 DiscordAudioManager.kt\ncom/discord/audio/DiscordAudioManager$setupAudioDeviceCallback$1\n*L\n262#1:347\n262#1:348,2\n267#1:350,2\n279#1:352\n279#1:353,2\n*E\n"})
/* loaded from: classes.dex */
public final class DiscordAudioManager$setupAudioDeviceCallback$1 extends AudioDeviceCallback {
    final /* synthetic */ DiscordAudioManager this$0;

    public DiscordAudioManager$setupAudioDeviceCallback$1(DiscordAudioManager discordAudioManager) {
        this.this$0 = discordAudioManager;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onAudioDevicesAdded$lambda$1(DiscordAudioManager discordAudioManager, DiscordAudioManagerListener listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        listener.onAudioDevicesUpdated(CollectionsKt.i0(discordAudioManager.getAudioDevices()));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onAudioDevicesRemoved$lambda$4(DiscordAudioManager discordAudioManager, DiscordAudioManagerListener listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        listener.onAudioDevicesUpdated(CollectionsKt.i0(discordAudioManager.getAudioDevices()));
        return Unit.a;
    }

    @Override // android.media.AudioDeviceCallback
    public void onAudioDevicesAdded(AudioDeviceInfo[] addedDevices) {
        List list;
        SimpleDeviceType simpleDeviceType;
        AudioManager audioManager;
        AudioManager audioManager2;
        if (addedDevices == null || addedDevices.length == 0) {
            return;
        }
        DiscordAudioManager discordAudioManager = this.this$0;
        list = discordAudioManager.audioDevices;
        ArrayList arrayList = new ArrayList();
        for (AudioDeviceInfo audioDeviceInfo : addedDevices) {
            if (audioDeviceInfo.isSink()) {
                arrayList.add(audioDeviceInfo);
            }
        }
        discordAudioManager.audioDevices = CollectionsKt.V(list, arrayList);
        DiscordAudioManager discordAudioManager2 = this.this$0;
        discordAudioManager2.notifyListeners(new b(discordAudioManager2, 0));
        simpleDeviceType = this.this$0.desiredDeviceType;
        if (simpleDeviceType == SimpleDeviceType.DEFAULT) {
            int length = addedDevices.length;
            int i5 = 0;
            while (true) {
                if (i5 >= length) {
                    break;
                }
                if (addedDevices[i5].getType() == 7) {
                    audioManager = this.this$0.androidAudioManager;
                    audioManager.startBluetoothSco();
                    audioManager2 = this.this$0.androidAudioManager;
                    audioManager2.setSpeakerphoneOn(false);
                    break;
                }
                i5++;
            }
        }
        this.this$0.emitEffectiveDevice();
    }

    @Override // android.media.AudioDeviceCallback
    public void onAudioDevicesRemoved(AudioDeviceInfo[] removedDevices) {
        List list;
        List list2;
        SimpleDeviceType simpleDeviceType;
        Set simpleDevices;
        SimpleDeviceType simpleDeviceType2;
        SimpleDeviceType simpleDeviceType3;
        AudioManager audioManager;
        if (removedDevices == null || removedDevices.length == 0) {
            return;
        }
        DiscordAudioManager discordAudioManager = this.this$0;
        list = discordAudioManager.audioDevices;
        ArrayList arrayList = new ArrayList();
        for (AudioDeviceInfo audioDeviceInfo : removedDevices) {
            if (audioDeviceInfo.isSink()) {
                arrayList.add(audioDeviceInfo);
            }
        }
        Set elements = CollectionsKt.l0(arrayList);
        Intrinsics.checkNotNullParameter(list, "<this>");
        Intrinsics.checkNotNullParameter(elements, "elements");
        Intrinsics.checkNotNullParameter(elements, "<this>");
        Set i02 = elements instanceof Collection ? elements : CollectionsKt.i0(elements);
        if (i02.isEmpty()) {
            list2 = CollectionsKt.i0(list);
        } else {
            ArrayList arrayList2 = new ArrayList();
            for (Object obj : list) {
                if (!i02.contains(obj)) {
                    arrayList2.add(obj);
                }
            }
            list2 = arrayList2;
        }
        discordAudioManager.audioDevices = list2;
        DiscordAudioManager discordAudioManager2 = this.this$0;
        discordAudioManager2.notifyListeners(new b(discordAudioManager2, 1));
        simpleDeviceType = this.this$0.desiredDeviceType;
        SimpleDeviceType simpleDeviceType4 = SimpleDeviceType.DEFAULT;
        if (simpleDeviceType != simpleDeviceType4) {
            simpleDevices = this.this$0.getSimpleDevices();
            simpleDeviceType2 = this.this$0.desiredDeviceType;
            if (!simpleDevices.contains(simpleDeviceType2)) {
                simpleDeviceType3 = this.this$0.desiredDeviceType;
                if (simpleDeviceType3 == SimpleDeviceType.BLUETOOTH_HEADSET) {
                    audioManager = this.this$0.androidAudioManager;
                    audioManager.stopBluetoothSco();
                }
                this.this$0.desiredDeviceType = simpleDeviceType4;
            }
        }
        this.this$0.emitEffectiveDevice();
    }
}
