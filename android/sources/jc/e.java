package jc;

import android.media.AudioAttributes;
import android.media.AudioFormat;
import android.media.AudioTrack;
import fi.e1;
import fi.w0;

/* loaded from: classes3.dex */
public abstract class e {
    public static final AudioAttributes a = new AudioAttributes.Builder().setUsage(1).setContentType(3).setFlags(0).build();

    public static fi.e0 a() {
        fi.c0 c0Var = fi.e0.f8656e;
        fi.b0 b0Var = new fi.b0();
        w0 w0Var = f.f12515e;
        fi.u0 u0Var = w0Var.f8730e;
        if (u0Var == null) {
            fi.u0 u0Var2 = new fi.u0(w0Var, new fi.v0(w0Var.f8733w, 0, w0Var.f8734x));
            w0Var.f8730e = u0Var2;
            u0Var = u0Var2;
        }
        e1 it = u0Var.iterator();
        while (it.hasNext()) {
            Integer num = (Integer) it.next();
            int intValue = num.intValue();
            if (ke.d0.a >= 34 || intValue != 30) {
                if (AudioTrack.isDirectPlaybackSupported(new AudioFormat.Builder().setChannelMask(12).setEncoding(intValue).setSampleRate(48000).build(), a)) {
                    b0Var.a(num);
                }
            }
        }
        b0Var.a(2);
        return b0Var.f();
    }

    public static int b(int i5, int i6) {
        for (int i10 = 10; i10 > 0; i10--) {
            if (AudioTrack.isDirectPlaybackSupported(new AudioFormat.Builder().setEncoding(i5).setSampleRate(i6).setChannelMask(ke.d0.o(i10)).build(), a)) {
                return i10;
            }
        }
        return 0;
    }
}
