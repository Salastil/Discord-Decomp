package jc;

import android.media.AudioTrack;
import android.os.Handler;
import android.os.Looper;

/* loaded from: classes3.dex */
public final class j0 {
    public final Handler a = new Handler(Looper.myLooper());

    /* renamed from: b, reason: collision with root package name */
    public final i0 f12537b = new i0(this);

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ k0 f12538c;

    public j0(k0 k0Var) {
        this.f12538c = k0Var;
    }

    public final void a(AudioTrack audioTrack) {
        audioTrack.unregisterStreamEventCallback(this.f12537b);
        this.a.removeCallbacksAndMessages(null);
    }
}
