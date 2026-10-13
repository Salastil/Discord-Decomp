package jc;

import android.media.AudioAttributes;
import android.media.AudioTrack;
import com.google.android.exoplayer2.Format;

/* loaded from: classes3.dex */
public final class f0 {
    public final Format a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12517b;

    /* renamed from: c, reason: collision with root package name */
    public final int f12518c;

    /* renamed from: d, reason: collision with root package name */
    public final int f12519d;

    /* renamed from: e, reason: collision with root package name */
    public final int f12520e;

    /* renamed from: f, reason: collision with root package name */
    public final int f12521f;

    /* renamed from: g, reason: collision with root package name */
    public final int f12522g;

    /* renamed from: h, reason: collision with root package name */
    public final int f12523h;

    /* renamed from: i, reason: collision with root package name */
    public final k f12524i;
    public final boolean j;

    public f0(Format format, int i5, int i6, int i10, int i11, int i12, int i13, int i14, k kVar, boolean z5) {
        this.a = format;
        this.f12517b = i5;
        this.f12518c = i6;
        this.f12519d = i10;
        this.f12520e = i11;
        this.f12521f = i12;
        this.f12522g = i13;
        this.f12523h = i14;
        this.f12524i = kVar;
        this.j = z5;
    }

    public static AudioAttributes c(com.google.android.exoplayer2.audio.AudioAttributes audioAttributes, boolean z5) {
        return z5 ? new AudioAttributes.Builder().setContentType(3).setFlags(16).setUsage(1).build() : (AudioAttributes) audioAttributes.a().f18810e;
    }

    public final AudioTrack a(boolean z5, com.google.android.exoplayer2.audio.AudioAttributes audioAttributes, int i5) {
        int i6 = this.f12518c;
        try {
            AudioTrack b10 = b(z5, audioAttributes, i5);
            int state = b10.getState();
            if (state == 1) {
                return b10;
            }
            try {
                b10.release();
            } catch (Exception unused) {
            }
            throw new s(state, this.f12520e, this.f12521f, this.f12523h, this.a, i6 == 1, null);
        } catch (IllegalArgumentException | UnsupportedOperationException e9) {
            throw new s(0, this.f12520e, this.f12521f, this.f12523h, this.a, i6 == 1, e9);
        }
    }

    public final AudioTrack b(boolean z5, com.google.android.exoplayer2.audio.AudioAttributes audioAttributes, int i5) {
        int i6;
        int i10 = ke.d0.a;
        int i11 = 0;
        int i12 = this.f12522g;
        int i13 = this.f12521f;
        int i14 = this.f12520e;
        if (i10 >= 29) {
            return new AudioTrack.Builder().setAudioAttributes(c(audioAttributes, z5)).setAudioFormat(k0.f(i14, i13, i12)).setTransferMode(1).setBufferSizeInBytes(this.f12523h).setSessionId(i5).setOffloadedPlayback(this.f12518c == 1).build();
        }
        if (i10 >= 21) {
            return new AudioTrack(c(audioAttributes, z5), k0.f(i14, i13, i12), this.f12523h, 1, i5);
        }
        int i15 = audioAttributes.f5339i;
        if (i15 != 13) {
            switch (i15) {
                case 2:
                    break;
                case 3:
                    i11 = 8;
                    break;
                case 4:
                    i11 = 4;
                    break;
                case 5:
                case 7:
                case 8:
                case 9:
                case 10:
                    i11 = 5;
                    break;
                case 6:
                    i11 = 2;
                    break;
                default:
                    i11 = 3;
                    break;
            }
            i6 = i11;
        } else {
            i6 = 1;
        }
        if (i5 == 0) {
            return new AudioTrack(i6, this.f12520e, this.f12521f, this.f12522g, this.f12523h, 1);
        }
        return new AudioTrack(i6, this.f12520e, this.f12521f, this.f12522g, this.f12523h, 1, i5);
    }
}
