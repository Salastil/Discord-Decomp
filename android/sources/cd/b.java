package cd;

import android.os.HandlerThread;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements ei.j, ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3405d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f3406e;

    public /* synthetic */ b(int i5, int i6) {
        this.f3405d = i6;
        this.f3406e = i5;
    }

    @Override // ei.j
    public Object get() {
        switch (this.f3405d) {
            case 0:
                return new HandlerThread(c.b(this.f3406e, "ExoPlayer:MediaCodecAsyncAdapter:"));
            default:
                return new HandlerThread(c.b(this.f3406e, "ExoPlayer:MediaCodecQueueingThread:"));
        }
    }

    @Override // ke.j
    public void invoke(Object obj) {
        ((com.google.android.exoplayer2.h) obj).onRepeatModeChanged(this.f3406e);
    }
}
