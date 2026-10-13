package ij;

import java.io.FilterInputStream;
import java.io.InputStream;

/* loaded from: classes3.dex */
public final class a extends FilterInputStream {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10840d;

    /* renamed from: e, reason: collision with root package name */
    public int f10841e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(InputStream inputStream, int i5, int i6) {
        super(inputStream);
        this.f10840d = i6;
        this.f10841e = i5;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int available() {
        switch (this.f10840d) {
        }
        return Math.min(super.available(), this.f10841e);
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read() {
        switch (this.f10840d) {
            case 0:
                if (this.f10841e <= 0) {
                    return -1;
                }
                int read = super.read();
                if (read < 0) {
                    return read;
                }
                this.f10841e--;
                return read;
            default:
                if (this.f10841e <= 0) {
                    return -1;
                }
                int read2 = super.read();
                if (read2 < 0) {
                    return read2;
                }
                this.f10841e--;
                return read2;
        }
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final long skip(long j) {
        switch (this.f10840d) {
            case 0:
                int skip = (int) super.skip(Math.min(j, this.f10841e));
                if (skip >= 0) {
                    this.f10841e -= skip;
                }
                return skip;
            default:
                long skip2 = super.skip(Math.min(j, this.f10841e));
                if (skip2 >= 0) {
                    this.f10841e = (int) (this.f10841e - skip2);
                }
                return skip2;
        }
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        switch (this.f10840d) {
            case 0:
                int i10 = this.f10841e;
                if (i10 <= 0) {
                    return -1;
                }
                int read = super.read(bArr, i5, Math.min(i6, i10));
                if (read < 0) {
                    return read;
                }
                this.f10841e -= read;
                return read;
            default:
                int i11 = this.f10841e;
                if (i11 <= 0) {
                    return -1;
                }
                int read2 = super.read(bArr, i5, Math.min(i6, i11));
                if (read2 < 0) {
                    return read2;
                }
                this.f10841e -= read2;
                return read2;
        }
    }
}
