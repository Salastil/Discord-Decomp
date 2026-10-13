package hc;

import android.media.AudioManager;
import android.os.Handler;

/* loaded from: classes3.dex */
public final class c implements AudioManager.OnAudioFocusChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final Handler f9636d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f9637e;

    public c(d dVar, Handler handler) {
        this.f9637e = dVar;
        this.f9636d = handler;
    }

    @Override // android.media.AudioManager.OnAudioFocusChangeListener
    public final void onAudioFocusChange(int i5) {
        this.f9636d.post(new a1.l(i5, 3, this));
    }
}
