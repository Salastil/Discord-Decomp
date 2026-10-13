package org.chromium.net;

import android.os.ParcelFileDescriptor;
import java.io.File;
import java.nio.ByteBuffer;

@Deprecated
/* loaded from: classes.dex */
public final class UploadDataProviders {
    private UploadDataProviders() {
    }

    public static UploadDataProvider create(File file) {
        return new jt.c(new u4.b(22, file));
    }

    public static UploadDataProvider create(ParcelFileDescriptor parcelFileDescriptor) {
        return new jt.c(new u4.c(parcelFileDescriptor));
    }

    public static UploadDataProvider create(ByteBuffer byteBuffer) {
        return new jt.a(byteBuffer.slice());
    }

    public static UploadDataProvider create(byte[] bArr, int i5, int i6) {
        return new jt.a(ByteBuffer.wrap(bArr, i5, i6).slice());
    }

    public static UploadDataProvider create(byte[] bArr) {
        return new jt.a(ByteBuffer.wrap(bArr, 0, bArr.length).slice());
    }
}
