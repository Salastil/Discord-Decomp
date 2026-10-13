package ui;

import java.io.OutputStream;

/* loaded from: classes3.dex */
public final class b extends OutputStream {

    /* renamed from: d, reason: collision with root package name */
    public long f18932d;

    @Override // java.io.OutputStream
    public final void write(int i5) {
        this.f18932d++;
    }

    @Override // java.io.OutputStream
    public final void write(byte[] bArr) {
        this.f18932d += bArr.length;
    }

    @Override // java.io.OutputStream
    public final void write(byte[] bArr, int i5, int i6) {
        int i10;
        if (i5 >= 0 && i5 <= bArr.length && i6 >= 0 && (i10 = i5 + i6) <= bArr.length && i10 >= 0) {
            this.f18932d += i6;
            return;
        }
        throw new IndexOutOfBoundsException();
    }
}
