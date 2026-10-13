package u8;

import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;

/* loaded from: classes3.dex */
public final class b extends FilterInputStream {

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f18815d;

    /* renamed from: e, reason: collision with root package name */
    public int f18816e;

    /* renamed from: i, reason: collision with root package name */
    public int f18817i;

    public b(InputStream inputStream, byte[] bArr) {
        super(inputStream);
        this.f18815d = bArr;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final void mark(int i5) {
        if (((FilterInputStream) this).in.markSupported()) {
            super.mark(i5);
            this.f18817i = this.f18816e;
        }
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read() {
        int read = ((FilterInputStream) this).in.read();
        if (read != -1) {
            return read;
        }
        int i5 = this.f18816e;
        byte[] bArr = this.f18815d;
        if (i5 >= bArr.length) {
            return -1;
        }
        this.f18816e = i5 + 1;
        return bArr[i5] & 255;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final void reset() {
        if (!((FilterInputStream) this).in.markSupported()) {
            throw new IOException("mark is not supported");
        }
        ((FilterInputStream) this).in.reset();
        this.f18816e = this.f18817i;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        int i10;
        int read = ((FilterInputStream) this).in.read(bArr, i5, i6);
        if (read != -1) {
            return read;
        }
        int i11 = 0;
        if (i6 == 0) {
            return 0;
        }
        while (i11 < i6) {
            int i12 = this.f18816e;
            byte[] bArr2 = this.f18815d;
            if (i12 >= bArr2.length) {
                i10 = -1;
            } else {
                this.f18816e = i12 + 1;
                i10 = bArr2[i12] & 255;
            }
            if (i10 == -1) {
                break;
            }
            bArr[i5 + i11] = (byte) i10;
            i11++;
        }
        if (i11 > 0) {
            return i11;
        }
        return -1;
    }
}
