package cd;

import android.media.MediaCodec;
import android.media.MediaFormat;
import android.os.Handler;
import android.os.HandlerThread;
import java.util.ArrayDeque;

/* loaded from: classes3.dex */
public final class g extends MediaCodec.Callback {

    /* renamed from: b, reason: collision with root package name */
    public final HandlerThread f3424b;

    /* renamed from: c, reason: collision with root package name */
    public Handler f3425c;

    /* renamed from: h, reason: collision with root package name */
    public MediaFormat f3430h;

    /* renamed from: i, reason: collision with root package name */
    public MediaFormat f3431i;
    public MediaCodec.CodecException j;
    public long k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f3432l;

    /* renamed from: m, reason: collision with root package name */
    public IllegalStateException f3433m;
    public final Object a = new Object();

    /* renamed from: d, reason: collision with root package name */
    public final bd.e f3426d = new bd.e();

    /* renamed from: e, reason: collision with root package name */
    public final bd.e f3427e = new bd.e();

    /* renamed from: f, reason: collision with root package name */
    public final ArrayDeque f3428f = new ArrayDeque();

    /* renamed from: g, reason: collision with root package name */
    public final ArrayDeque f3429g = new ArrayDeque();

    public g(HandlerThread handlerThread) {
        this.f3424b = handlerThread;
    }

    public final void a() {
        ArrayDeque arrayDeque = this.f3429g;
        if (!arrayDeque.isEmpty()) {
            this.f3431i = (MediaFormat) arrayDeque.getLast();
        }
        bd.e eVar = this.f3426d;
        eVar.f2801d = 0;
        eVar.f2802e = -1;
        eVar.f2803i = 0;
        bd.e eVar2 = this.f3427e;
        eVar2.f2801d = 0;
        eVar2.f2802e = -1;
        eVar2.f2803i = 0;
        this.f3428f.clear();
        arrayDeque.clear();
    }

    @Override // android.media.MediaCodec.Callback
    public final void onError(MediaCodec mediaCodec, MediaCodec.CodecException codecException) {
        synchronized (this.a) {
            this.j = codecException;
        }
    }

    @Override // android.media.MediaCodec.Callback
    public final void onInputBufferAvailable(MediaCodec mediaCodec, int i5) {
        synchronized (this.a) {
            this.f3426d.d(i5);
        }
    }

    @Override // android.media.MediaCodec.Callback
    public final void onOutputBufferAvailable(MediaCodec mediaCodec, int i5, MediaCodec.BufferInfo bufferInfo) {
        synchronized (this.a) {
            try {
                MediaFormat mediaFormat = this.f3431i;
                if (mediaFormat != null) {
                    this.f3427e.d(-2);
                    this.f3429g.add(mediaFormat);
                    this.f3431i = null;
                }
                this.f3427e.d(i5);
                this.f3428f.add(bufferInfo);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // android.media.MediaCodec.Callback
    public final void onOutputFormatChanged(MediaCodec mediaCodec, MediaFormat mediaFormat) {
        synchronized (this.a) {
            this.f3427e.d(-2);
            this.f3429g.add(mediaFormat);
            this.f3431i = null;
        }
    }
}
