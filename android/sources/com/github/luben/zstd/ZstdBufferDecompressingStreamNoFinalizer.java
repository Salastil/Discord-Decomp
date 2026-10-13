package com.github.luben.zstd;

import com.github.luben.zstd.util.Native;
import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public class ZstdBufferDecompressingStreamNoFinalizer extends BaseZstdBufferDecompressingStreamNoFinalizer {
    static {
        Native.load();
    }

    public ZstdBufferDecompressingStreamNoFinalizer(ByteBuffer byteBuffer) {
        super(byteBuffer);
        if (byteBuffer.isDirect()) {
            throw new IllegalArgumentException("Source buffer should be a non-direct buffer");
        }
        long createDStream = createDStream();
        this.stream = createDStream;
        initDStream(createDStream);
    }

    private native long createDStreamNative();

    private native long decompressStreamNative(long j, byte[] bArr, int i5, int i6, byte[] bArr2, int i10, int i11);

    private native long freeDStreamNative(long j);

    private native long initDStreamNative(long j);

    private static native long recommendedDOutSizeNative();

    public static int recommendedTargetBufferSize() {
        return (int) recommendedDOutSizeNative();
    }

    public long createDStream() {
        return createDStreamNative();
    }

    @Override // com.github.luben.zstd.BaseZstdBufferDecompressingStreamNoFinalizer
    public long decompressStream(long j, ByteBuffer byteBuffer, int i5, int i6, ByteBuffer byteBuffer2, int i10, int i11) {
        if (!byteBuffer2.hasArray()) {
            throw new IllegalArgumentException("provided source ByteBuffer lacks array");
        }
        if (!byteBuffer.hasArray()) {
            throw new IllegalArgumentException("provided destination ByteBuffer lacks array");
        }
        return decompressStreamNative(j, byteBuffer.array(), byteBuffer.arrayOffset() + i5, i6, byteBuffer2.array(), byteBuffer2.arrayOffset() + i10, i11);
    }

    @Override // com.github.luben.zstd.BaseZstdBufferDecompressingStreamNoFinalizer
    public long freeDStream(long j) {
        return freeDStreamNative(j);
    }

    public long initDStream(long j) {
        return initDStreamNative(j);
    }

    public int read(ByteBuffer byteBuffer) {
        if (byteBuffer.isDirect()) {
            throw new IllegalArgumentException("Target buffer should be a non-direct buffer");
        }
        return readInternal(byteBuffer, false);
    }
}
