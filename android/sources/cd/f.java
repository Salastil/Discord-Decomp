package cd;

import a5.h0;
import android.media.MediaCodec;
import android.os.HandlerThread;
import java.util.ArrayDeque;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class f {

    /* renamed from: g, reason: collision with root package name */
    public static final ArrayDeque f3417g = new ArrayDeque();

    /* renamed from: h, reason: collision with root package name */
    public static final Object f3418h = new Object();
    public final MediaCodec a;

    /* renamed from: b, reason: collision with root package name */
    public final HandlerThread f3419b;

    /* renamed from: c, reason: collision with root package name */
    public d f3420c;

    /* renamed from: d, reason: collision with root package name */
    public final AtomicReference f3421d;

    /* renamed from: e, reason: collision with root package name */
    public final h0 f3422e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f3423f;

    public f(MediaCodec mediaCodec, HandlerThread handlerThread) {
        h0 h0Var = new h0(0);
        this.a = mediaCodec;
        this.f3419b = handlerThread;
        this.f3422e = h0Var;
        this.f3421d = new AtomicReference();
    }

    public static e b() {
        ArrayDeque arrayDeque = f3417g;
        synchronized (arrayDeque) {
            try {
                if (arrayDeque.isEmpty()) {
                    return new e();
                }
                return (e) arrayDeque.removeFirst();
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void a() {
        if (this.f3423f) {
            try {
                d dVar = this.f3420c;
                dVar.getClass();
                dVar.removeCallbacksAndMessages(null);
                h0 h0Var = this.f3422e;
                h0Var.l();
                d dVar2 = this.f3420c;
                dVar2.getClass();
                dVar2.obtainMessage(2).sendToTarget();
                h0Var.f();
            } catch (InterruptedException e9) {
                Thread.currentThread().interrupt();
                throw new IllegalStateException(e9);
            }
        }
    }
}
