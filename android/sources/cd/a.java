package cd;

import android.media.MediaCodec;
import android.os.Handler;
import android.os.Message;
import ke.d0;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements MediaCodec.OnFrameRenderedListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ le.h f3404b;

    public /* synthetic */ a(l lVar, le.h hVar, int i5) {
        this.a = i5;
        this.f3404b = hVar;
    }

    @Override // android.media.MediaCodec.OnFrameRenderedListener
    public final void onFrameRendered(MediaCodec mediaCodec, long j, long j5) {
        switch (this.a) {
            case 0:
                le.h hVar = this.f3404b;
                Handler handler = hVar.f13877d;
                if (d0.a >= 30) {
                    hVar.a(j);
                    break;
                } else {
                    handler.sendMessageAtFrontOfQueue(Message.obtain(handler, 0, (int) (j >> 32), (int) j));
                    break;
                }
            default:
                le.h hVar2 = this.f3404b;
                Handler handler2 = hVar2.f13877d;
                if (d0.a >= 30) {
                    hVar2.a(j);
                    break;
                } else {
                    handler2.sendMessageAtFrontOfQueue(Message.obtain(handler2, 0, (int) (j >> 32), (int) j));
                    break;
                }
        }
    }
}
