package org.webrtc;

import android.media.MediaCodec;
import android.media.MediaCodecInfo;
import android.media.MediaCrypto;
import android.media.MediaFormat;
import android.os.Bundle;
import android.view.Surface;
import java.nio.ByteBuffer;

/* loaded from: classes4.dex */
interface MediaCodecWrapper {
    void configure(MediaFormat mediaFormat, Surface surface, MediaCrypto mediaCrypto, int i5);

    Surface createInputSurface();

    int dequeueInputBuffer(long j);

    int dequeueOutputBuffer(MediaCodec.BufferInfo bufferInfo, long j);

    void flush();

    MediaCodecInfo getCodecInfo();

    ByteBuffer getInputBuffer(int i5);

    MediaFormat getInputFormat();

    ByteBuffer getOutputBuffer(int i5);

    MediaFormat getOutputFormat();

    MediaFormat getOutputFormat(int i5);

    void queueInputBuffer(int i5, int i6, int i10, long j, int i11);

    void release();

    void releaseOutputBuffer(int i5, boolean z5);

    void setOutputSurface(Surface surface);

    void setParameters(Bundle bundle);

    void start();

    void stop();
}
