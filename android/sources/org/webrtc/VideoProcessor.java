package org.webrtc;

/* loaded from: classes4.dex */
public interface VideoProcessor extends CapturerObserver {

    public static class FrameAdaptationParameters {
        public final int cropHeight;
        public final int cropWidth;
        public final int cropX;
        public final int cropY;
        public final boolean drop;
        public final int scaleHeight;
        public final int scaleWidth;
        public final long timestampNs;

        public FrameAdaptationParameters(int i5, int i6, int i10, int i11, int i12, int i13, long j, boolean z5) {
            this.cropX = i5;
            this.cropY = i6;
            this.cropWidth = i10;
            this.cropHeight = i11;
            this.scaleWidth = i12;
            this.scaleHeight = i13;
            this.timestampNs = j;
            this.drop = z5;
        }
    }

    static VideoFrame applyFrameAdaptationParameters(VideoFrame videoFrame, FrameAdaptationParameters frameAdaptationParameters) {
        if (frameAdaptationParameters.drop) {
            return null;
        }
        return new VideoFrame(videoFrame.getBuffer().cropAndScale(frameAdaptationParameters.cropX, frameAdaptationParameters.cropY, frameAdaptationParameters.cropWidth, frameAdaptationParameters.cropHeight, frameAdaptationParameters.scaleWidth, frameAdaptationParameters.scaleHeight), videoFrame.getRotation(), frameAdaptationParameters.timestampNs);
    }

    default void onFrameCaptured(VideoFrame videoFrame, FrameAdaptationParameters frameAdaptationParameters) {
        VideoFrame applyFrameAdaptationParameters = applyFrameAdaptationParameters(videoFrame, frameAdaptationParameters);
        if (applyFrameAdaptationParameters != null) {
            onFrameCaptured(applyFrameAdaptationParameters);
            applyFrameAdaptationParameters.release();
        }
    }

    void setSink(VideoSink videoSink);
}
