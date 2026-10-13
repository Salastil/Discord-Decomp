package org.webrtc;

import org.webrtc.VideoFrame;
import org.webrtc.VideoProcessor;
import org.webrtc.VideoSource;

/* loaded from: classes4.dex */
class NativeAndroidVideoTrackSource {
    private final long nativeAndroidVideoTrackSource;

    public NativeAndroidVideoTrackSource(long j) {
        this.nativeAndroidVideoTrackSource = j;
    }

    @CalledByNative
    public static VideoProcessor.FrameAdaptationParameters createFrameAdaptationParameters(int i5, int i6, int i10, int i11, int i12, int i13, long j, boolean z5) {
        return new VideoProcessor.FrameAdaptationParameters(i5, i6, i10, i11, i12, i13, j, z5);
    }

    private static native VideoProcessor.FrameAdaptationParameters nativeAdaptFrame(long j, int i5, int i6, int i10, long j5);

    private static native void nativeAdaptOutputFormat(long j, int i5, int i6, Integer num, int i10, int i11, Integer num2, Integer num3);

    private static native void nativeOnFrameCaptured(long j, int i5, long j5, VideoFrame.Buffer buffer);

    private static native void nativeSetIsScreencast(long j, boolean z5);

    private static native void nativeSetState(long j, boolean z5);

    public VideoProcessor.FrameAdaptationParameters adaptFrame(VideoFrame videoFrame) {
        return nativeAdaptFrame(this.nativeAndroidVideoTrackSource, videoFrame.getBuffer().getWidth(), videoFrame.getBuffer().getHeight(), videoFrame.getRotation(), videoFrame.getTimestampNs());
    }

    public void adaptOutputFormat(VideoSource.AspectRatio aspectRatio, Integer num, VideoSource.AspectRatio aspectRatio2, Integer num2, Integer num3) {
        nativeAdaptOutputFormat(this.nativeAndroidVideoTrackSource, aspectRatio.width, aspectRatio.height, num, aspectRatio2.width, aspectRatio2.height, num2, num3);
    }

    public void onFrameCaptured(VideoFrame videoFrame) {
        nativeOnFrameCaptured(this.nativeAndroidVideoTrackSource, videoFrame.getRotation(), videoFrame.getTimestampNs(), videoFrame.getBuffer());
    }

    public void setIsScreencast(boolean z5) {
        nativeSetIsScreencast(this.nativeAndroidVideoTrackSource, z5);
    }

    public void setState(boolean z5) {
        nativeSetState(this.nativeAndroidVideoTrackSource, z5);
    }
}
