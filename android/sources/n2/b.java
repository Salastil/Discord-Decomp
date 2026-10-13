package n2;

import android.util.Log;
import java.io.ByteArrayInputStream;
import java.io.DataInput;
import java.io.DataInputStream;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteOrder;

/* loaded from: classes.dex */
public class b extends InputStream implements DataInput {

    /* renamed from: d, reason: collision with root package name */
    public final DataInputStream f14733d;

    /* renamed from: e, reason: collision with root package name */
    public int f14734e;

    /* renamed from: i, reason: collision with root package name */
    public ByteOrder f14735i;

    /* renamed from: v, reason: collision with root package name */
    public byte[] f14736v;

    /* renamed from: w, reason: collision with root package name */
    public final int f14737w;

    public b(byte[] bArr) {
        this(new ByteArrayInputStream(bArr), ByteOrder.BIG_ENDIAN);
        this.f14737w = bArr.length;
    }

    @Override // java.io.InputStream
    public final int available() {
        return this.f14733d.available();
    }

    public final void c(int i5) {
        int i6 = 0;
        while (i6 < i5) {
            int i10 = i5 - i6;
            DataInputStream dataInputStream = this.f14733d;
            int skip = (int) dataInputStream.skip(i10);
            if (skip <= 0) {
                if (this.f14736v == null) {
                    this.f14736v = new byte[8192];
                }
                skip = dataInputStream.read(this.f14736v, 0, Math.min(8192, i10));
                if (skip == -1) {
                    throw new EOFException(s4.h.e(i5, "Reached EOF while skipping ", " bytes."));
                }
            }
            i6 += skip;
        }
        this.f14734e += i6;
    }

    @Override // java.io.InputStream
    public final void mark(int i5) {
        throw new UnsupportedOperationException("Mark is currently unsupported");
    }

    @Override // java.io.InputStream
    public final int read() {
        this.f14734e++;
        return this.f14733d.read();
    }

    @Override // java.io.DataInput
    public final boolean readBoolean() {
        this.f14734e++;
        return this.f14733d.readBoolean();
    }

    @Override // java.io.DataInput
    public final byte readByte() {
        this.f14734e++;
        int read = this.f14733d.read();
        if (read >= 0) {
            return (byte) read;
        }
        throw new EOFException();
    }

    @Override // java.io.DataInput
    public final char readChar() {
        this.f14734e += 2;
        return this.f14733d.readChar();
    }

    @Override // java.io.DataInput
    public final double readDouble() {
        return Double.longBitsToDouble(readLong());
    }

    @Override // java.io.DataInput
    public final float readFloat() {
        return Float.intBitsToFloat(readInt());
    }

    @Override // java.io.DataInput
    public final void readFully(byte[] bArr, int i5, int i6) {
        this.f14734e += i6;
        this.f14733d.readFully(bArr, i5, i6);
    }

    @Override // java.io.DataInput
    public final int readInt() {
        this.f14734e += 4;
        DataInputStream dataInputStream = this.f14733d;
        int read = dataInputStream.read();
        int read2 = dataInputStream.read();
        int read3 = dataInputStream.read();
        int read4 = dataInputStream.read();
        if ((read | read2 | read3 | read4) < 0) {
            throw new EOFException();
        }
        ByteOrder byteOrder = this.f14735i;
        if (byteOrder == ByteOrder.LITTLE_ENDIAN) {
            return (read4 << 24) + (read3 << 16) + (read2 << 8) + read;
        }
        if (byteOrder == ByteOrder.BIG_ENDIAN) {
            return (read << 24) + (read2 << 16) + (read3 << 8) + read4;
        }
        throw new IOException("Invalid byte order: " + this.f14735i);
    }

    @Override // java.io.DataInput
    public final String readLine() {
        Log.d("ExifInterface", "Currently unsupported");
        return null;
    }

    @Override // java.io.DataInput
    public final long readLong() {
        long j;
        long j5;
        this.f14734e += 8;
        DataInputStream dataInputStream = this.f14733d;
        int read = dataInputStream.read();
        int read2 = dataInputStream.read();
        int read3 = dataInputStream.read();
        int read4 = dataInputStream.read();
        int read5 = dataInputStream.read();
        int read6 = dataInputStream.read();
        int read7 = dataInputStream.read();
        int read8 = dataInputStream.read();
        if ((read | read2 | read3 | read4 | read5 | read6 | read7 | read8) < 0) {
            throw new EOFException();
        }
        ByteOrder byteOrder = this.f14735i;
        if (byteOrder == ByteOrder.LITTLE_ENDIAN) {
            j = (read8 << 56) + (read7 << 48) + (read6 << 40) + (read5 << 32) + (read4 << 24) + (read3 << 16) + (read2 << 8);
            j5 = read;
        } else {
            if (byteOrder != ByteOrder.BIG_ENDIAN) {
                throw new IOException("Invalid byte order: " + this.f14735i);
            }
            j = (read << 56) + (read2 << 48) + (read3 << 40) + (read4 << 32) + (read5 << 24) + (read6 << 16) + (read7 << 8);
            j5 = read8;
        }
        return j + j5;
    }

    @Override // java.io.DataInput
    public final short readShort() {
        this.f14734e += 2;
        DataInputStream dataInputStream = this.f14733d;
        int read = dataInputStream.read();
        int read2 = dataInputStream.read();
        if ((read | read2) < 0) {
            throw new EOFException();
        }
        ByteOrder byteOrder = this.f14735i;
        if (byteOrder == ByteOrder.LITTLE_ENDIAN) {
            return (short) ((read2 << 8) + read);
        }
        if (byteOrder == ByteOrder.BIG_ENDIAN) {
            return (short) ((read << 8) + read2);
        }
        throw new IOException("Invalid byte order: " + this.f14735i);
    }

    @Override // java.io.DataInput
    public final String readUTF() {
        this.f14734e += 2;
        return this.f14733d.readUTF();
    }

    @Override // java.io.DataInput
    public final int readUnsignedByte() {
        this.f14734e++;
        return this.f14733d.readUnsignedByte();
    }

    @Override // java.io.DataInput
    public final int readUnsignedShort() {
        this.f14734e += 2;
        DataInputStream dataInputStream = this.f14733d;
        int read = dataInputStream.read();
        int read2 = dataInputStream.read();
        if ((read | read2) < 0) {
            throw new EOFException();
        }
        ByteOrder byteOrder = this.f14735i;
        if (byteOrder == ByteOrder.LITTLE_ENDIAN) {
            return (read2 << 8) + read;
        }
        if (byteOrder == ByteOrder.BIG_ENDIAN) {
            return (read << 8) + read2;
        }
        throw new IOException("Invalid byte order: " + this.f14735i);
    }

    @Override // java.io.InputStream
    public final void reset() {
        throw new UnsupportedOperationException("Reset is currently unsupported");
    }

    @Override // java.io.DataInput
    public final int skipBytes(int i5) {
        throw new UnsupportedOperationException("skipBytes is currently unsupported");
    }

    public b(InputStream inputStream) {
        this(inputStream, ByteOrder.BIG_ENDIAN);
    }

    @Override // java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        int read = this.f14733d.read(bArr, i5, i6);
        this.f14734e += read;
        return read;
    }

    @Override // java.io.DataInput
    public final void readFully(byte[] bArr) {
        this.f14734e += bArr.length;
        this.f14733d.readFully(bArr);
    }

    public b(InputStream inputStream, ByteOrder byteOrder) {
        DataInputStream dataInputStream = new DataInputStream(inputStream);
        this.f14733d = dataInputStream;
        dataInputStream.mark(0);
        this.f14734e = 0;
        this.f14735i = byteOrder;
        this.f14737w = inputStream instanceof b ? ((b) inputStream).f14737w : -1;
    }
}
