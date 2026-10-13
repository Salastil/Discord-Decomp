package org.webrtc;

/* loaded from: classes4.dex */
public interface VideoEncoderFactory {

    public interface VideoEncoderSelector {
        @CalledByNative("VideoEncoderSelector")
        VideoCodecInfo onAvailableBitrate(int i5);

        @CalledByNative("VideoEncoderSelector")
        void onCurrentEncoder(VideoCodecInfo videoCodecInfo);

        @CalledByNative("VideoEncoderSelector")
        VideoCodecInfo onEncoderBroken();

        @CalledByNative("VideoEncoderSelector")
        default VideoCodecInfo onResolutionChange(int i5, int i6) {
            return null;
        }
    }

    @CalledByNative
    VideoEncoder createEncoder(VideoCodecInfo videoCodecInfo);

    @CalledByNative
    default VideoEncoderSelector getEncoderSelector() {
        return null;
    }

    @CalledByNative
    default VideoCodecInfo[] getImplementations() {
        return getSupportedCodecs();
    }

    @CalledByNative
    VideoCodecInfo[] getSupportedCodecs();
}
