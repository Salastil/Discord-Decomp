package com.mkuczera.haptic;

import android.content.Context;
import android.media.AudioManager;
import android.os.Build;
import android.os.Vibrator;
import java.util.HashMap;
import org.webrtc.MediaStreamTrack;
import s4.h;

/* loaded from: classes3.dex */
public abstract class b {
    public static final HashMap a;

    static {
        HashMap hashMap = new HashMap();
        a = hashMap;
        h.k(4, hashMap, "clockTick", 6, "contextClick");
        hashMap.put("keyboardPress", 3);
        hashMap.put("keyboardRelease", 7);
        hashMap.put("keyboardTap", 3);
        hashMap.put("longPress", 0);
        h.k(9, hashMap, "textHandleMove", 1, "virtualKey");
        hashMap.put("virtualKeyRelease", 8);
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 30) {
            h.k(16, hashMap, "confirm", 17, "reject");
            h.k(12, hashMap, "gestureStart", 13, "gestureEnd");
            h.k(26, hashMap, "segmentTick", 27, "segmentFrequentTick");
        }
        if (i5 >= 34) {
            h.k(21, hashMap, "toggleOn", 22, "toggleOff");
            h.k(25, hashMap, "dragStart", 23, "gestureThresholdActivate");
            h.k(24, hashMap, "gestureThresholdDeactivate", -1, "noHaptics");
        }
    }

    public static boolean a(Context context) {
        Vibrator vibrator = (Vibrator) context.getSystemService("vibrator");
        AudioManager audioManager = (AudioManager) context.getSystemService(MediaStreamTrack.AUDIO_TRACK_KIND);
        return (vibrator != null && vibrator.hasVibrator()) && ((audioManager.getRingerMode() != 0) || (audioManager.getRingerMode() == 1));
    }
}
