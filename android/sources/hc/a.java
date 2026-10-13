package hc;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Handler;

/* loaded from: classes3.dex */
public final class a extends BroadcastReceiver implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final w f9615d;

    /* renamed from: e, reason: collision with root package name */
    public final Handler f9616e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ b f9617i;

    public a(b bVar, Handler handler, w wVar) {
        this.f9617i = bVar;
        this.f9616e = handler;
        this.f9615d = wVar;
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        if ("android.media.AUDIO_BECOMING_NOISY".equals(intent.getAction())) {
            this.f9616e.post(this);
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.f9617i.f9624b) {
            this.f9615d.f9929d.u0(-1, 3, false);
        }
    }
}
