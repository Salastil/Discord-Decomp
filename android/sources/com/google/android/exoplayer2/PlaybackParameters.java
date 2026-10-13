package com.google.android.exoplayer2;

import java.util.Locale;
import ke.d0;

/* loaded from: classes3.dex */
public final class PlaybackParameters implements hc.g {

    /* renamed from: v, reason: collision with root package name */
    public static final PlaybackParameters f5274v = new PlaybackParameters(1.0f, 1.0f);

    /* renamed from: d, reason: collision with root package name */
    public final float f5275d;

    /* renamed from: e, reason: collision with root package name */
    public final float f5276e;

    /* renamed from: i, reason: collision with root package name */
    public final int f5277i;

    static {
        int i5 = d0.a;
        Integer.toString(0, 36);
        Integer.toString(1, 36);
    }

    public PlaybackParameters(float f2, float f10) {
        ke.b.g(f2 > 0.0f);
        ke.b.g(f10 > 0.0f);
        this.f5275d = f2;
        this.f5276e = f10;
        this.f5277i = Math.round(f2 * 1000.0f);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && PlaybackParameters.class == obj.getClass()) {
            PlaybackParameters playbackParameters = (PlaybackParameters) obj;
            if (this.f5275d == playbackParameters.f5275d && this.f5276e == playbackParameters.f5276e) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Float.floatToRawIntBits(this.f5276e) + ((Float.floatToRawIntBits(this.f5275d) + 527) * 31);
    }

    public final String toString() {
        Object[] objArr = {Float.valueOf(this.f5275d), Float.valueOf(this.f5276e)};
        int i5 = d0.a;
        return String.format(Locale.US, "PlaybackParameters(speed=%.2f, pitch=%.2f)", objArr);
    }
}
