package r8;

import com.facebook.common.references.CloseableReference;
import java.io.InputStream;
import o8.h;
import qa.q;

/* loaded from: classes3.dex */
public final class f extends InputStream {

    /* renamed from: d, reason: collision with root package name */
    public final q f17146d;

    /* renamed from: e, reason: collision with root package name */
    public int f17147e;

    /* renamed from: i, reason: collision with root package name */
    public int f17148i;

    public f(q qVar) {
        boolean t5;
        synchronized (qVar) {
            t5 = CloseableReference.t(qVar.f16712e);
        }
        if (!t5) {
            throw new IllegalArgumentException();
        }
        this.f17146d = qVar;
        this.f17147e = 0;
        this.f17148i = 0;
    }

    @Override // java.io.InputStream
    public final int available() {
        return this.f17146d.o() - this.f17147e;
    }

    @Override // java.io.InputStream
    public final void mark(int i5) {
        this.f17148i = this.f17147e;
    }

    @Override // java.io.InputStream
    public final boolean markSupported() {
        return true;
    }

    @Override // java.io.InputStream
    public final int read() {
        if (available() <= 0) {
            return -1;
        }
        int i5 = this.f17147e;
        this.f17147e = i5 + 1;
        return this.f17146d.i(i5) & 255;
    }

    @Override // java.io.InputStream
    public final void reset() {
        this.f17147e = this.f17148i;
    }

    @Override // java.io.InputStream
    public final long skip(long j) {
        h.a(Boolean.valueOf(j >= 0));
        int min = Math.min((int) j, available());
        this.f17147e += min;
        return min;
    }

    @Override // java.io.InputStream
    public final int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    @Override // java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        if (i5 >= 0 && i6 >= 0 && i5 + i6 <= bArr.length) {
            int available = available();
            if (available <= 0) {
                return -1;
            }
            if (i6 <= 0) {
                return 0;
            }
            int min = Math.min(available, i6);
            this.f17146d.l(this.f17147e, i5, min, bArr);
            this.f17147e += min;
            return min;
        }
        StringBuilder sb2 = new StringBuilder("length=");
        a3.e.y(sb2, bArr.length, "; regionStart=", i5, "; regionLength=");
        sb2.append(i6);
        throw new ArrayIndexOutOfBoundsException(sb2.toString());
    }
}
