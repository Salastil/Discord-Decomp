package yn;

import a3.e;
import android.util.Log;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.charset.Charset;
import qa.t;

/* loaded from: classes3.dex */
public final class b {

    /* renamed from: b, reason: collision with root package name */
    public static final byte[] f20981b = "Exif\u0000\u0000".getBytes(Charset.forName("UTF-8"));

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f20982c = {0, 1, 1, 2, 4, 8, 1, 1, 2, 4, 8, 4, 8};
    public final t a;

    public b(InputStream inputStream) {
        this.a = new t(15, inputStream);
    }

    /* JADX WARN: Code restructure failed: missing block: B:43:0x004d, code lost:
    
        r4 = -1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int a() {
        int i5;
        InputStream inputStream = (InputStream) this.a.f16718e;
        int i6 = 65280;
        short s2 = 255;
        int read = ((inputStream.read() << 8) & 65280) | (inputStream.read() & 255);
        if ((read & 65496) == 65496 || read == 19789 || read == 18761) {
            while (true) {
                short read2 = (short) (inputStream.read() & s2);
                if (read2 == s2) {
                    short read3 = (short) (inputStream.read() & s2);
                    if (read3 == 218) {
                        break;
                    }
                    if (read3 != 217) {
                        i5 = (((inputStream.read() << 8) & i6) | (inputStream.read() & s2)) - 2;
                        if (read3 == 225) {
                            break;
                        }
                        long j = i5;
                        long j5 = 0;
                        if (j >= 0) {
                            long j7 = j;
                            while (j7 > 0) {
                                long skip = inputStream.skip(j7);
                                if (skip > 0) {
                                    j7 -= skip;
                                } else {
                                    if (inputStream.read() == -1) {
                                        break;
                                    }
                                    j7--;
                                }
                            }
                            j5 = j - j7;
                        }
                        if (j5 == j) {
                            i6 = 65280;
                            s2 = 255;
                        } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                            StringBuilder q5 = e.q(read3, "Unable to skip enough data, type: ", i5, ", wanted to skip: ", ", but actually skipped: ");
                            q5.append(j5);
                            Log.d("ImageHeaderParser", q5.toString());
                        }
                    } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                        Log.d("ImageHeaderParser", "Found MARKER_EOI in exif segment");
                    }
                } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                    k0.d.q(read2, "Unknown segmentId=", "ImageHeaderParser");
                }
            }
            if (i5 != -1) {
                byte[] bArr = new byte[i5];
                int i10 = i5;
                while (i10 > 0) {
                    int read4 = inputStream.read(bArr, i5 - i10, i10);
                    if (read4 == -1) {
                        break;
                    }
                    i10 -= read4;
                }
                int i11 = i5 - i10;
                if (i11 == i5) {
                    byte[] bArr2 = f20981b;
                    boolean z5 = i5 > bArr2.length;
                    if (z5) {
                        int i12 = 0;
                        while (true) {
                            if (i12 >= bArr2.length) {
                                break;
                            }
                            if (bArr[i12] != bArr2[i12]) {
                                z5 = false;
                                break;
                            }
                            i12++;
                        }
                    }
                    if (z5) {
                        ByteBuffer wrap = ByteBuffer.wrap(bArr);
                        ByteOrder byteOrder = ByteOrder.BIG_ENDIAN;
                        ByteBuffer byteBuffer = (ByteBuffer) wrap.order(byteOrder).limit(i5);
                        short s5 = byteBuffer.getShort(6);
                        if (s5 != 19789) {
                            if (s5 == 18761) {
                                byteOrder = ByteOrder.LITTLE_ENDIAN;
                            } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                                k0.d.q(s5, "Unknown endianness = ", "ImageHeaderParser");
                            }
                        }
                        byteBuffer.order(byteOrder);
                        int i13 = byteBuffer.getInt(10);
                        short s7 = byteBuffer.getShort(i13 + 6);
                        for (int i14 = 0; i14 < s7; i14++) {
                            int i15 = (i14 * 12) + i13 + 8;
                            short s10 = byteBuffer.getShort(i15);
                            if (s10 == 274) {
                                short s11 = byteBuffer.getShort(i15 + 2);
                                if (s11 >= 1 && s11 <= 12) {
                                    int i16 = byteBuffer.getInt(i15 + 4);
                                    if (i16 >= 0) {
                                        if (Log.isLoggable("ImageHeaderParser", 3)) {
                                            StringBuilder q6 = e.q(i14, "Got tagIndex=", s10, " tagType=", " formatCode=");
                                            q6.append((int) s11);
                                            q6.append(" componentCount=");
                                            q6.append(i16);
                                            Log.d("ImageHeaderParser", q6.toString());
                                        }
                                        int i17 = i16 + f20982c[s11];
                                        if (i17 <= 4) {
                                            int i18 = i15 + 8;
                                            if (i18 >= 0 && i18 <= byteBuffer.remaining()) {
                                                if (i17 >= 0 && i17 + i18 <= byteBuffer.remaining()) {
                                                    return byteBuffer.getShort(i18);
                                                }
                                                if (Log.isLoggable("ImageHeaderParser", 3)) {
                                                    k0.d.q(s10, "Illegal number of bytes for TI tag data tagType=", "ImageHeaderParser");
                                                }
                                            } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                                                Log.d("ImageHeaderParser", "Illegal tagValueOffset=" + i18 + " tagType=" + ((int) s10));
                                            }
                                        } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                                            k0.d.q(s11, "Got byte count > 4, not orientation, continuing, formatCode=", "ImageHeaderParser");
                                        }
                                    } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                                        Log.d("ImageHeaderParser", "Negative tiff component count");
                                    }
                                } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                                    k0.d.q(s11, "Got invalid format code = ", "ImageHeaderParser");
                                }
                            }
                        }
                    } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                        Log.d("ImageHeaderParser", "Missing jpeg exif preamble");
                    }
                } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                    Log.d("ImageHeaderParser", "Unable to read exif segment data, length: " + i5 + ", actually read: " + i11);
                    return -1;
                }
            } else if (Log.isLoggable("ImageHeaderParser", 3)) {
                Log.d("ImageHeaderParser", "Failed to parse exif segment length, or exif segment not found");
                return -1;
            }
        } else if (Log.isLoggable("ImageHeaderParser", 3)) {
            k0.d.q(read, "Parser doesn't handle magic number: ", "ImageHeaderParser");
            return -1;
        }
        return -1;
    }
}
