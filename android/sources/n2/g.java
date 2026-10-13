package n2;

import java.io.InputStream;

/* loaded from: classes.dex */
public final class g extends b {
    public g(byte[] bArr) {
        super(bArr);
        this.f14733d.mark(Integer.MAX_VALUE);
    }

    public final void f(long j) {
        int i5 = this.f14734e;
        if (i5 > j) {
            this.f14734e = 0;
            this.f14733d.reset();
        } else {
            j -= i5;
        }
        c((int) j);
    }

    public g(InputStream inputStream) {
        super(inputStream);
        if (inputStream.markSupported()) {
            this.f14733d.mark(Integer.MAX_VALUE);
            return;
        }
        throw new IllegalArgumentException("Cannot create SeekableByteOrderedDataInputStream with stream that does not support mark/reset");
    }
}
