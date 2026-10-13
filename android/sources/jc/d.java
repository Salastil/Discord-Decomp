package jc;

import android.content.Context;
import android.media.AudioDeviceInfo;
import android.media.AudioManager;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public abstract class d {
    private static final fi.h0 a() {
        fi.g0 g0Var = new fi.g0();
        Integer[] numArr = {8, 7};
        fi.p.b(2, numArr);
        g0Var.e(g0Var.f8741b + 2);
        System.arraycopy(numArr, 0, g0Var.a, g0Var.f8741b, 2);
        g0Var.f8741b += 2;
        int i5 = ke.d0.a;
        if (i5 >= 31) {
            Integer[] numArr2 = {26, 27};
            fi.p.b(2, numArr2);
            g0Var.e(g0Var.f8741b + 2);
            System.arraycopy(numArr2, 0, g0Var.a, g0Var.f8741b, 2);
            g0Var.f8741b += 2;
        }
        if (i5 >= 33) {
            g0Var.a(30);
        }
        return g0Var.f();
    }

    public static final boolean b(Context context) {
        AudioManager audioManager = (AudioManager) context.getSystemService(MediaStreamTrack.AUDIO_TRACK_KIND);
        audioManager.getClass();
        AudioDeviceInfo[] devices = audioManager.getDevices(2);
        fi.h0 a = a();
        for (AudioDeviceInfo audioDeviceInfo : devices) {
            if (a.contains(Integer.valueOf(audioDeviceInfo.getType()))) {
                return true;
            }
        }
        return false;
    }
}
