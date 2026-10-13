package hc;

import android.content.Context;
import android.media.AudioManager;
import android.os.Handler;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public final class d {
    public final AudioManager a;

    /* renamed from: b, reason: collision with root package name */
    public final c f9650b;

    /* renamed from: c, reason: collision with root package name */
    public w f9651c;

    /* renamed from: d, reason: collision with root package name */
    public int f9652d;

    /* renamed from: e, reason: collision with root package name */
    public float f9653e = 1.0f;

    public d(Context context, Handler handler, w wVar) {
        AudioManager audioManager = (AudioManager) context.getApplicationContext().getSystemService(MediaStreamTrack.AUDIO_TRACK_KIND);
        audioManager.getClass();
        this.a = audioManager;
        this.f9651c = wVar;
        this.f9650b = new c(this, handler);
        this.f9652d = 0;
    }

    public final void a() {
        if (this.f9652d == 0) {
            return;
        }
        if (ke.d0.a < 26) {
            this.a.abandonAudioFocus(this.f9650b);
        }
        b(0);
    }

    public final void b(int i5) {
        if (this.f9652d == i5) {
            return;
        }
        this.f9652d = i5;
        float f2 = i5 == 3 ? 0.2f : 1.0f;
        if (this.f9653e == f2) {
            return;
        }
        this.f9653e = f2;
        w wVar = this.f9651c;
        if (wVar != null) {
            com.google.android.exoplayer2.d dVar = wVar.f9929d;
            dVar.o0(1, 2, Float.valueOf(dVar.Z * dVar.f5377z.f9653e));
        }
    }

    public final int c(int i5, boolean z5) {
        a();
        return z5 ? 1 : -1;
    }
}
