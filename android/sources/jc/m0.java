package jc;

import android.media.AudioDeviceInfo;
import android.media.AudioTrack;

/* loaded from: classes3.dex */
public abstract class m0 {
    public static void a(u uVar, Object obj) {
        e0 e0Var;
        AudioDeviceInfo audioDeviceInfo = (AudioDeviceInfo) obj;
        k0 k0Var = (k0) uVar;
        if (audioDeviceInfo == null) {
            e0Var = null;
        } else {
            k0Var.getClass();
            e0Var = new e0(audioDeviceInfo);
        }
        k0Var.Z = e0Var;
        AudioTrack audioTrack = k0Var.f12567v;
        if (audioTrack != null) {
            c0.a(audioTrack, e0Var);
        }
    }
}
