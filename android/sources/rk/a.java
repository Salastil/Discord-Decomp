package rk;

import android.media.MediaCodec;
import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class a {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final ByteBuffer f17401b;

    /* renamed from: c, reason: collision with root package name */
    public final MediaCodec.BufferInfo f17402c;

    public a(int i5, ByteBuffer byteBuffer, MediaCodec.BufferInfo bufferInfo) {
        this.a = i5;
        this.f17401b = byteBuffer;
        if (bufferInfo == null) {
            this.f17402c = new MediaCodec.BufferInfo();
        } else {
            this.f17402c = bufferInfo;
        }
    }
}
