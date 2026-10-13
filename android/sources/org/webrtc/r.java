package org.webrtc;

import java.util.concurrent.CountDownLatch;
import org.webrtc.TextureBufferImpl;

/* loaded from: classes4.dex */
public final /* synthetic */ class r implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16236d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f16237e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f16238i;

    public /* synthetic */ r(int i5, Object obj, Object obj2) {
        this.f16236d = i5;
        this.f16237e = obj;
        this.f16238i = obj2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16236d) {
            case 0:
                ((TextureBufferImpl) this.f16237e).lambda$new$0((TextureBufferImpl.RefCountMonitor) this.f16238i);
                break;
            case 1:
                ((EglRenderer) this.f16237e).lambda$releaseEglSurface$4((Runnable) this.f16238i);
                break;
            case 2:
                ((EglRenderer) this.f16237e).lambda$release$0((CountDownLatch) this.f16238i);
                break;
            case 3:
                ((VideoFileRenderer) this.f16237e).lambda$onFrame$0((VideoFrame) this.f16238i);
                break;
            case 4:
                ((VideoFileRenderer) this.f16237e).lambda$release$2((CountDownLatch) this.f16238i);
                break;
            default:
                ((VideoSource) this.f16237e).lambda$setVideoProcessor$0((VideoFrame) this.f16238i);
                break;
        }
    }
}
