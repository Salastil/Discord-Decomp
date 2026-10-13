package x0;

import android.media.AudioAttributes;

/* loaded from: classes.dex */
public abstract class c0 {
    public static AudioAttributes a(AudioAttributes.Builder builder) {
        return builder.build();
    }

    public static AudioAttributes.Builder b() {
        return new AudioAttributes.Builder();
    }

    public static AudioAttributes.Builder c(AudioAttributes.Builder builder, int i5) {
        return builder.setContentType(i5);
    }

    public static AudioAttributes.Builder d(AudioAttributes.Builder builder, int i5) {
        return builder.setLegacyStreamType(i5);
    }

    public static AudioAttributes.Builder e(AudioAttributes.Builder builder, int i5) {
        return builder.setUsage(i5);
    }
}
