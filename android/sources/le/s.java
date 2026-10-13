package le;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.view.Choreographer;
import ke.d0;

/* loaded from: classes3.dex */
public final class s implements Choreographer.FrameCallback, Handler.Callback {

    /* renamed from: w, reason: collision with root package name */
    public static final s f13923w = new s();

    /* renamed from: d, reason: collision with root package name */
    public volatile long f13924d = -9223372036854775807L;

    /* renamed from: e, reason: collision with root package name */
    public final Handler f13925e;

    /* renamed from: i, reason: collision with root package name */
    public Choreographer f13926i;

    /* renamed from: v, reason: collision with root package name */
    public int f13927v;

    public s() {
        HandlerThread handlerThread = new HandlerThread("ExoPlayer:FrameReleaseChoreographer");
        handlerThread.start();
        Looper looper = handlerThread.getLooper();
        int i5 = d0.a;
        Handler handler = new Handler(looper, this);
        this.f13925e = handler;
        handler.sendEmptyMessage(0);
    }

    @Override // android.view.Choreographer.FrameCallback
    public final void doFrame(long j) {
        this.f13924d = j;
        Choreographer choreographer = this.f13926i;
        choreographer.getClass();
        choreographer.postFrameCallbackDelayed(this, 500L);
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        int i5 = message.what;
        if (i5 == 0) {
            try {
                this.f13926i = Choreographer.getInstance();
                return true;
            } catch (RuntimeException e9) {
                ke.b.O("VideoFrameReleaseHelper", "Vsync sampling disabled due to platform error", e9);
                return true;
            }
        }
        if (i5 == 1) {
            Choreographer choreographer = this.f13926i;
            if (choreographer != null) {
                int i6 = this.f13927v + 1;
                this.f13927v = i6;
                if (i6 == 1) {
                    choreographer.postFrameCallback(this);
                }
            }
        } else {
            if (i5 != 2) {
                return false;
            }
            Choreographer choreographer2 = this.f13926i;
            if (choreographer2 != null) {
                int i10 = this.f13927v - 1;
                this.f13927v = i10;
                if (i10 == 0) {
                    choreographer2.removeFrameCallback(this);
                    this.f13924d = -9223372036854775807L;
                    return true;
                }
            }
        }
        return true;
    }
}
