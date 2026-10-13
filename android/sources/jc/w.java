package jc;

import android.media.AudioTrack;

/* loaded from: classes3.dex */
public final class w {
    public final v a;

    /* renamed from: b, reason: collision with root package name */
    public int f12666b;

    /* renamed from: c, reason: collision with root package name */
    public long f12667c;

    /* renamed from: d, reason: collision with root package name */
    public long f12668d;

    /* renamed from: e, reason: collision with root package name */
    public long f12669e;

    /* renamed from: f, reason: collision with root package name */
    public long f12670f;

    public w(AudioTrack audioTrack) {
        if (ke.d0.a >= 19) {
            this.a = new v(audioTrack);
            a();
        } else {
            this.a = null;
            b(3);
        }
    }

    public final void a() {
        if (this.a != null) {
            b(0);
        }
    }

    public final void b(int i5) {
        this.f12666b = i5;
        if (i5 == 0) {
            this.f12669e = 0L;
            this.f12670f = -1L;
            this.f12667c = System.nanoTime() / 1000;
            this.f12668d = 10000L;
            return;
        }
        if (i5 == 1) {
            this.f12668d = 10000L;
            return;
        }
        if (i5 == 2 || i5 == 3) {
            this.f12668d = 10000000L;
        } else {
            if (i5 != 4) {
                throw new IllegalStateException();
            }
            this.f12668d = 500000L;
        }
    }
}
