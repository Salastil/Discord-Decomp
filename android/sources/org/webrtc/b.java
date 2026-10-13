package org.webrtc;

import org.webrtc.Camera2Session;

/* loaded from: classes4.dex */
public final /* synthetic */ class b implements VideoSink {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16201d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f16202e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f16201d = i5;
        this.f16202e = obj;
    }

    @Override // org.webrtc.VideoSink
    public final void onFrame(VideoFrame videoFrame) {
        switch (this.f16201d) {
            case 0:
                ((Camera1Session) this.f16202e).lambda$listenForTextureFrames$0(videoFrame);
                break;
            case 1:
                ((Camera2Session.CaptureSessionCallback) this.f16202e).lambda$onConfigured$0(videoFrame);
                break;
            default:
                ((VideoSource) this.f16202e).lambda$setVideoProcessor$1(videoFrame);
                break;
        }
    }
}
