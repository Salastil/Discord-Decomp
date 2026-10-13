package n2;

import java.io.DataOutputStream;
import java.io.FilterOutputStream;
import java.io.OutputStream;
import java.nio.ByteOrder;

/* loaded from: classes.dex */
public final class c extends FilterOutputStream {

    /* renamed from: d, reason: collision with root package name */
    public final DataOutputStream f14738d;

    /* renamed from: e, reason: collision with root package name */
    public ByteOrder f14739e;

    public c(OutputStream outputStream, ByteOrder byteOrder) {
        super(outputStream);
        this.f14738d = new DataOutputStream(outputStream);
        this.f14739e = byteOrder;
    }

    public final void c(int i5) {
        this.f14738d.write(i5);
    }

    public final void f(int i5) {
        ByteOrder byteOrder = this.f14739e;
        ByteOrder byteOrder2 = ByteOrder.LITTLE_ENDIAN;
        DataOutputStream dataOutputStream = this.f14738d;
        if (byteOrder == byteOrder2) {
            dataOutputStream.write(i5 & 255);
            dataOutputStream.write((i5 >>> 8) & 255);
            dataOutputStream.write((i5 >>> 16) & 255);
            dataOutputStream.write((i5 >>> 24) & 255);
            return;
        }
        if (byteOrder == ByteOrder.BIG_ENDIAN) {
            dataOutputStream.write((i5 >>> 24) & 255);
            dataOutputStream.write((i5 >>> 16) & 255);
            dataOutputStream.write((i5 >>> 8) & 255);
            dataOutputStream.write(i5 & 255);
        }
    }

    public final void g(short s2) {
        ByteOrder byteOrder = this.f14739e;
        ByteOrder byteOrder2 = ByteOrder.LITTLE_ENDIAN;
        DataOutputStream dataOutputStream = this.f14738d;
        if (byteOrder == byteOrder2) {
            dataOutputStream.write(s2 & 255);
            dataOutputStream.write((s2 >>> 8) & 255);
        } else if (byteOrder == ByteOrder.BIG_ENDIAN) {
            dataOutputStream.write((s2 >>> 8) & 255);
            dataOutputStream.write(s2 & 255);
        }
    }

    public final void i(long j) {
        if (j > 4294967295L) {
            throw new IllegalArgumentException("val is larger than the maximum value of a 32-bit unsigned integer");
        }
        f((int) j);
    }

    public final void l(int i5) {
        if (i5 > 65535) {
            throw new IllegalArgumentException("val is larger than the maximum value of a 16-bit unsigned integer");
        }
        g((short) i5);
    }

    @Override // java.io.FilterOutputStream, java.io.OutputStream
    public final void write(byte[] bArr) {
        this.f14738d.write(bArr);
    }

    @Override // java.io.FilterOutputStream, java.io.OutputStream
    public final void write(byte[] bArr, int i5, int i6) {
        this.f14738d.write(bArr, i5, i6);
    }
}
