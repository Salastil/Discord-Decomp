package com.google.android.exoplayer2.video;

import com.facebook.imageutils.JfifUtil;
import hc.g;
import ke.d0;

/* loaded from: classes3.dex */
public final class VideoSize implements g {

    /* renamed from: w, reason: collision with root package name */
    public static final VideoSize f5575w = new VideoSize(0, 0, 0, 1.0f);

    /* renamed from: d, reason: collision with root package name */
    public final int f5576d;

    /* renamed from: e, reason: collision with root package name */
    public final int f5577e;

    /* renamed from: i, reason: collision with root package name */
    public final int f5578i;

    /* renamed from: v, reason: collision with root package name */
    public final float f5579v;

    static {
        int i5 = d0.a;
        Integer.toString(0, 36);
        Integer.toString(1, 36);
        Integer.toString(2, 36);
        Integer.toString(3, 36);
    }

    public VideoSize(int i5, int i6, int i10, float f2) {
        this.f5576d = i5;
        this.f5577e = i6;
        this.f5578i = i10;
        this.f5579v = f2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof VideoSize) {
            VideoSize videoSize = (VideoSize) obj;
            if (this.f5576d == videoSize.f5576d && this.f5577e == videoSize.f5577e && this.f5578i == videoSize.f5578i && this.f5579v == videoSize.f5579v) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Float.floatToRawIntBits(this.f5579v) + ((((((JfifUtil.MARKER_EOI + this.f5576d) * 31) + this.f5577e) * 31) + this.f5578i) * 31);
    }
}
