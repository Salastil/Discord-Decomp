package jc;

import android.media.AudioTrack;

/* loaded from: classes3.dex */
public abstract class c0 {
    public static void a(AudioTrack audioTrack, e0 e0Var) {
        audioTrack.setPreferredDevice(e0Var == null ? null : e0Var.a);
    }
}
