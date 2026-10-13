package jc;

import android.content.Context;
import android.media.AudioDeviceCallback;
import android.media.AudioDeviceInfo;

/* loaded from: classes3.dex */
public final class h extends AudioDeviceCallback {
    public final /* synthetic */ j a;

    public h(j jVar) {
        this.a = jVar;
    }

    @Override // android.media.AudioDeviceCallback
    public final void onAudioDevicesAdded(AudioDeviceInfo[] audioDeviceInfoArr) {
        j jVar = this.a;
        j.a(jVar, f.a((Context) jVar.f12530b));
    }

    @Override // android.media.AudioDeviceCallback
    public final void onAudioDevicesRemoved(AudioDeviceInfo[] audioDeviceInfoArr) {
        j jVar = this.a;
        j.a(jVar, f.a((Context) jVar.f12530b));
    }
}
