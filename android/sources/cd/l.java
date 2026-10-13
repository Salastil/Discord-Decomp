package cd;

import android.media.MediaCodec;
import android.media.MediaFormat;
import android.os.Bundle;
import android.os.Handler;
import android.view.Surface;
import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public interface l {
    int B(MediaCodec.BufferInfo bufferInfo);

    void D(int i5);

    void F(le.h hVar, Handler handler);

    void flush();

    ByteBuffer getInputBuffer(int i5);

    ByteBuffer getOutputBuffer(int i5);

    MediaFormat getOutputFormat();

    void m(int i5, mc.c cVar, long j);

    void p(long j, int i5, int i6, int i10);

    void release();

    void releaseOutputBuffer(int i5, boolean z5);

    void s(int i5, long j);

    void setOutputSurface(Surface surface);

    void setParameters(Bundle bundle);

    int v();
}
