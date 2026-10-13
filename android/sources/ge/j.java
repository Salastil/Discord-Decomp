package ge;

import android.content.Context;
import android.media.AudioFormat;
import android.media.AudioManager;
import android.media.Spatializer;
import android.os.Handler;
import android.os.Looper;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.audio.AudioAttributes;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import jc.h0;
import ke.d0;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public final class j {
    public final Spatializer a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f9187b;

    /* renamed from: c, reason: collision with root package name */
    public Handler f9188c;

    /* renamed from: d, reason: collision with root package name */
    public i f9189d;

    public j(Spatializer spatializer) {
        this.a = spatializer;
        this.f9187b = spatializer.getImmersiveAudioLevel() != 0;
    }

    public static j f(Context context) {
        AudioManager audioManager = (AudioManager) context.getSystemService(MediaStreamTrack.AUDIO_TRACK_KIND);
        if (audioManager == null) {
            return null;
        }
        return new j(audioManager.getSpatializer());
    }

    public final boolean a(Format format, AudioAttributes audioAttributes) {
        String str = format.I;
        int i5 = format.V;
        if ("audio/eac3-joc".equals(str) && i5 == 16) {
            i5 = 12;
        }
        AudioFormat.Builder channelMask = new AudioFormat.Builder().setEncoding(2).setChannelMask(d0.o(i5));
        int i6 = format.W;
        if (i6 != -1) {
            channelMask.setSampleRate(i6);
        }
        return this.a.canBeSpatialized((android.media.AudioAttributes) audioAttributes.a().f18810e, channelMask.build());
    }

    public final void b(DefaultTrackSelector defaultTrackSelector, Looper looper) {
        if (this.f9189d == null && this.f9188c == null) {
            this.f9189d = new i(defaultTrackSelector);
            Handler handler = new Handler(looper);
            this.f9188c = handler;
            this.a.addOnSpatializerStateChangedListener(new h0(handler), this.f9189d);
        }
    }

    public final boolean c() {
        return this.a.isAvailable();
    }

    public final boolean d() {
        return this.a.isEnabled();
    }

    public final void e() {
        i iVar = this.f9189d;
        if (iVar == null || this.f9188c == null) {
            return;
        }
        this.a.removeOnSpatializerStateChangedListener(iVar);
        Handler handler = this.f9188c;
        int i5 = d0.a;
        handler.removeCallbacksAndMessages(null);
        this.f9188c = null;
        this.f9189d = null;
    }
}
