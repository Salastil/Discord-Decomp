package org.webrtc;

import java.util.concurrent.CountDownLatch;
import org.webrtc.EglBase;
import org.webrtc.EglBase10Impl;
import org.webrtc.EglBase14Impl;
import org.webrtc.VideoFrame;

/* loaded from: classes4.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16206d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f16207e;

    public /* synthetic */ d(int i5, Object obj) {
        this.f16206d = i5;
        this.f16207e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16206d) {
            case 0:
                ((EglBase10Impl.EglConnection) this.f16207e).lambda$new$0();
                break;
            case 1:
                ((EglBase14Impl.EglConnection) this.f16207e).lambda$new$0();
                break;
            case 2:
                ((EglRenderer) this.f16207e).renderFrameOnRenderThread();
                break;
            case 3:
                ((EglBase.EglConnection) this.f16207e).release();
                break;
            case 4:
                ((VideoFrame.I420Buffer) this.f16207e).release();
                break;
            case 5:
                ((ScreenCapturerAndroid) this.f16207e).updateVirtualDisplay();
                break;
            case 6:
                ((CountDownLatch) this.f16207e).countDown();
                break;
            default:
                ((VideoFileRenderer) this.f16207e).lambda$release$3();
                break;
        }
    }
}
