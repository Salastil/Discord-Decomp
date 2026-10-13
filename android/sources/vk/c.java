package vk;

import android.media.MediaCodec;
import java.nio.ByteBuffer;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final ByteBuffer f19452b;

    /* renamed from: c, reason: collision with root package name */
    public final MediaCodec.BufferInfo f19453c;

    public c(int i5, ByteBuffer buffer, MediaCodec.BufferInfo info) {
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        Intrinsics.checkNotNullParameter(info, "info");
        this.a = i5;
        ByteBuffer allocate = ByteBuffer.allocate(buffer.capacity());
        Intrinsics.checkNotNullExpressionValue(allocate, "allocate(buffer.capacity())");
        this.f19452b = allocate;
        MediaCodec.BufferInfo bufferInfo = new MediaCodec.BufferInfo();
        this.f19453c = bufferInfo;
        bufferInfo.set(0, info.size, info.presentationTimeUs, info.flags);
        allocate.put(buffer);
        allocate.flip();
    }
}
