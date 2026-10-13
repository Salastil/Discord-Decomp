package oc;

import java.nio.ByteBuffer;
import org.chromium.net.UploadDataProvider;
import org.chromium.net.UploadDataSink;

/* loaded from: classes3.dex */
public final class a extends UploadDataProvider {

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f15817d;

    /* renamed from: e, reason: collision with root package name */
    public int f15818e;

    public a(byte[] bArr) {
        this.f15817d = bArr;
    }

    @Override // org.chromium.net.UploadDataProvider
    public final long getLength() {
        return this.f15817d.length;
    }

    @Override // org.chromium.net.UploadDataProvider
    public final void read(UploadDataSink uploadDataSink, ByteBuffer byteBuffer) {
        int remaining = byteBuffer.remaining();
        byte[] bArr = this.f15817d;
        int min = Math.min(remaining, bArr.length - this.f15818e);
        byteBuffer.put(bArr, this.f15818e, min);
        this.f15818e += min;
        uploadDataSink.onReadSucceeded(false);
    }

    @Override // org.chromium.net.UploadDataProvider
    public final void rewind(UploadDataSink uploadDataSink) {
        this.f15818e = 0;
        uploadDataSink.onRewindSucceeded();
    }
}
