package bo;

import java.io.ByteArrayOutputStream;
import java.nio.ByteBuffer;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class e extends ByteArrayOutputStream {
    public e(byte[] bArr) {
        super(0);
        ((ByteArrayOutputStream) this).buf = bArr;
    }

    public final ByteBuffer c(int i5) {
        byte[] bArr = ((ByteArrayOutputStream) this).buf;
        if (bArr.length < i5) {
            int length = bArr.length << 1;
            if (length - i5 < 0) {
                length = i5;
            }
            if (length - 2147483639 > 0) {
                if (i5 < 0) {
                    throw new OutOfMemoryError();
                }
                length = i5 > 2147483639 ? Integer.MAX_VALUE : 2147483639;
            }
            ((ByteArrayOutputStream) this).buf = Arrays.copyOf(bArr, length);
        }
        return ByteBuffer.wrap(((ByteArrayOutputStream) this).buf);
    }

    public final byte[] f() {
        return ((ByteArrayOutputStream) this).buf;
    }

    public final void g(int i5) {
        ((ByteArrayOutputStream) this).count = i5;
    }
}
