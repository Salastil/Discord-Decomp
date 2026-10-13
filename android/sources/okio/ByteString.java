package okio;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import et.x;
import et.y;
import ft.b;
import java.io.Serializable;
import java.security.MessageDigest;
import java.util.Arrays;
import java.util.zip.InflaterOutputStream;
import k0.d;
import kotlin.collections.u;
import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;

/* loaded from: classes.dex */
public class ByteString implements Serializable, Comparable {

    /* renamed from: v, reason: collision with root package name */
    public static final ByteString f16115v = new ByteString(new byte[0]);

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f16116d;

    /* renamed from: e, reason: collision with root package name */
    public transient int f16117e;

    /* renamed from: i, reason: collision with root package name */
    public transient String f16118i;

    public ByteString(byte[] data) {
        Intrinsics.checkNotNullParameter(data, "data");
        this.f16116d = data;
    }

    public String a() {
        byte[] map = x.a;
        byte[] bArr = this.f16116d;
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        Intrinsics.checkNotNullParameter(map, "map");
        byte[] bArr2 = new byte[((bArr.length + 2) / 3) * 4];
        int length = bArr.length - (bArr.length % 3);
        int i5 = 0;
        int i6 = 0;
        while (i5 < length) {
            byte b10 = bArr[i5];
            int i10 = i5 + 2;
            byte b11 = bArr[i5 + 1];
            i5 += 3;
            byte b12 = bArr[i10];
            bArr2[i6] = map[(b10 & 255) >> 2];
            bArr2[i6 + 1] = map[((b10 & 3) << 4) | ((b11 & 255) >> 4)];
            int i11 = i6 + 3;
            bArr2[i6 + 2] = map[((b11 & 15) << 2) | ((b12 & 255) >> 6)];
            i6 += 4;
            bArr2[i11] = map[b12 & 63];
        }
        int length2 = bArr.length - length;
        if (length2 == 1) {
            byte b13 = bArr[i5];
            bArr2[i6] = map[(b13 & 255) >> 2];
            bArr2[i6 + 1] = map[(b13 & 3) << 4];
            byte b14 = (byte) 61;
            bArr2[i6 + 2] = b14;
            bArr2[i6 + 3] = b14;
        } else if (length2 == 2) {
            int i12 = i5 + 1;
            byte b15 = bArr[i5];
            byte b16 = bArr[i12];
            bArr2[i6] = map[(b15 & 255) >> 2];
            bArr2[i6 + 1] = map[((b15 & 3) << 4) | ((b16 & 255) >> 4)];
            bArr2[i6 + 2] = map[(b16 & 15) << 2];
            bArr2[i6 + 3] = (byte) 61;
        }
        Intrinsics.checkNotNullParameter(bArr2, "<this>");
        return new String(bArr2, Charsets.UTF_8);
    }

    public ByteString b(String algorithm) {
        Intrinsics.checkNotNullParameter(algorithm, "algorithm");
        MessageDigest messageDigest = MessageDigest.getInstance(algorithm);
        messageDigest.update(this.f16116d, 0, c());
        byte[] digestBytes = messageDigest.digest();
        Intrinsics.checkNotNullExpressionValue(digestBytes, "digestBytes");
        return new ByteString(digestBytes);
    }

    public int c() {
        return this.f16116d.length;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        ByteString other = (ByteString) obj;
        Intrinsics.checkNotNullParameter(other, "other");
        int c6 = c();
        int c8 = other.c();
        int min = Math.min(c6, c8);
        for (int i5 = 0; i5 < min; i5++) {
            int f2 = f(i5) & 255;
            int f10 = other.f(i5) & 255;
            if (f2 != f10) {
                return f2 < f10 ? -1 : 1;
            }
        }
        if (c6 == c8) {
            return 0;
        }
        return c6 < c8 ? -1 : 1;
    }

    public String d() {
        byte[] bArr = this.f16116d;
        char[] cArr = new char[bArr.length * 2];
        int i5 = 0;
        for (byte b10 : bArr) {
            int i6 = i5 + 1;
            char[] cArr2 = b.a;
            cArr[i5] = cArr2[(b10 >> 4) & 15];
            i5 += 2;
            cArr[i6] = cArr2[b10 & 15];
        }
        Intrinsics.checkNotNullParameter(cArr, "<this>");
        return new String(cArr);
    }

    public byte[] e() {
        return this.f16116d;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof ByteString) {
            ByteString byteString = (ByteString) obj;
            int c6 = byteString.c();
            byte[] bArr = this.f16116d;
            if (c6 == bArr.length && byteString.g(0, 0, bArr.length, bArr)) {
                return true;
            }
        }
        return false;
    }

    public byte f(int i5) {
        return this.f16116d[i5];
    }

    public boolean g(int i5, int i6, int i10, byte[] other) {
        Intrinsics.checkNotNullParameter(other, "other");
        if (i5 < 0) {
            return false;
        }
        byte[] bArr = this.f16116d;
        return i5 <= bArr.length - i10 && i6 >= 0 && i6 <= other.length - i10 && y.a(i5, i6, i10, bArr, other);
    }

    public boolean h(ByteString other, int i5) {
        Intrinsics.checkNotNullParameter(other, "other");
        return other.g(0, 0, i5, this.f16116d);
    }

    public int hashCode() {
        int i5 = this.f16117e;
        if (i5 != 0) {
            return i5;
        }
        int hashCode = Arrays.hashCode(this.f16116d);
        this.f16117e = hashCode;
        return hashCode;
    }

    public ByteString i() {
        byte b10;
        int i5 = 0;
        while (true) {
            byte[] bArr = this.f16116d;
            if (i5 >= bArr.length) {
                return this;
            }
            byte b11 = bArr[i5];
            byte b12 = (byte) 65;
            if (b11 >= b12 && b11 <= (b10 = (byte) 90)) {
                byte[] copyOf = Arrays.copyOf(bArr, bArr.length);
                Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, size)");
                copyOf[i5] = (byte) (b11 + 32);
                for (int i6 = i5 + 1; i6 < copyOf.length; i6++) {
                    byte b13 = copyOf[i6];
                    if (b13 >= b12 && b13 <= b10) {
                        copyOf[i6] = (byte) (b13 + 32);
                    }
                }
                return new ByteString(copyOf);
            }
            i5++;
        }
    }

    public byte[] j() {
        byte[] bArr = this.f16116d;
        byte[] copyOf = Arrays.copyOf(bArr, bArr.length);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, size)");
        return copyOf;
    }

    public final String k() {
        String str = this.f16118i;
        if (str != null) {
            return str;
        }
        byte[] e9 = e();
        Intrinsics.checkNotNullParameter(e9, "<this>");
        String str2 = new String(e9, Charsets.UTF_8);
        this.f16118i = str2;
        return str2;
    }

    public void l(InflaterOutputStream out) {
        Intrinsics.checkNotNullParameter(out, "out");
        out.write(this.f16116d);
    }

    public void m(Buffer buffer, int i5) {
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        Intrinsics.checkNotNullParameter(this, "<this>");
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        buffer.m1302write(this.f16116d, 0, i5);
    }

    /* JADX WARN: Code restructure failed: missing block: B:105:0x00f6, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:107:0x0130, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:109:0x0134, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:111:0x00d6, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:127:0x0173, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:153:0x017a, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:155:0x016c, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:157:0x01aa, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:159:0x01ad, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:161:0x01b0, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:163:0x0140, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:165:0x01b3, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x0096, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x00c4, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x0085, code lost:
    
        if (r6 == 64) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x00fe, code lost:
    
        if (r6 == 64) goto L180;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String toString() {
        byte b10;
        int i5;
        byte[] bArr = this.f16116d;
        if (bArr.length == 0) {
            return "[size=0]";
        }
        int length = bArr.length;
        int i6 = 0;
        int i10 = 0;
        int i11 = 0;
        loop0: while (true) {
            if (i6 >= length) {
                break;
            }
            byte b11 = bArr[i6];
            if (b11 >= 0) {
                int i12 = i11 + 1;
                if (i11 == 64) {
                    break;
                }
                if ((b11 != 10 && b11 != 13 && ((b11 >= 0 && b11 < 32) || (Byte.MAX_VALUE <= b11 && b11 < 160))) || b11 == 65533) {
                    break;
                }
                i10 += b11 < 65536 ? 1 : 2;
                i6++;
                while (true) {
                    i11 = i12;
                    if (i6 < length && (b10 = bArr[i6]) >= 0) {
                        i6++;
                        i12 = i11 + 1;
                        if (i11 == 64) {
                            break loop0;
                        }
                        if ((b10 != 10 && b10 != 13 && ((b10 >= 0 && b10 < 32) || (Byte.MAX_VALUE <= b10 && b10 < 160))) || b10 == 65533) {
                            break loop0;
                        }
                        i10 += b10 < 65536 ? 1 : 2;
                    }
                }
            } else if ((b11 >> 5) == -2) {
                int i13 = i6 + 1;
                if (length > i13) {
                    byte b12 = bArr[i13];
                    if ((b12 & 192) == 128) {
                        int i14 = (b12 ^ ByteCompanionObject.MIN_VALUE) ^ (b11 << 6);
                        if (i14 >= 128) {
                            i5 = i11 + 1;
                            if (i11 == 64) {
                                break;
                            }
                            if ((i14 != 10 && i14 != 13 && ((i14 >= 0 && i14 < 32) || (127 <= i14 && i14 < 160))) || i14 == 65533) {
                                break;
                            }
                            i10 += i14 < 65536 ? 1 : 2;
                            i6 += 2;
                            i11 = i5;
                        }
                    }
                }
            } else if ((b11 >> 4) == -2) {
                int i15 = i6 + 2;
                if (length > i15) {
                    byte b13 = bArr[i6 + 1];
                    if ((b13 & 192) == 128) {
                        byte b14 = bArr[i15];
                        if ((b14 & 192) == 128) {
                            int i16 = ((b14 ^ ByteCompanionObject.MIN_VALUE) ^ (b13 << 6)) ^ (b11 << 12);
                            if (i16 >= 2048) {
                                if (55296 > i16 || i16 >= 57344) {
                                    i5 = i11 + 1;
                                    if (i11 == 64) {
                                        break;
                                    }
                                    if ((i16 != 10 && i16 != 13 && ((i16 >= 0 && i16 < 32) || (127 <= i16 && i16 < 160))) || i16 == 65533) {
                                        break;
                                    }
                                    i10 += i16 < 65536 ? 1 : 2;
                                    i6 += 3;
                                    i11 = i5;
                                }
                            }
                        }
                    }
                }
            } else if ((b11 >> 3) == -2) {
                int i17 = i6 + 3;
                if (length > i17) {
                    byte b15 = bArr[i6 + 1];
                    if ((b15 & 192) == 128) {
                        byte b16 = bArr[i6 + 2];
                        if ((b16 & 192) == 128) {
                            byte b17 = bArr[i17];
                            if ((b17 & 192) == 128) {
                                int i18 = (((b17 ^ ByteCompanionObject.MIN_VALUE) ^ (b16 << 6)) ^ (b15 << 12)) ^ (b11 << 18);
                                if (i18 <= 1114111) {
                                    if (55296 > i18 || i18 >= 57344) {
                                        if (i18 >= 65536) {
                                            i5 = i11 + 1;
                                            if (i11 == 64) {
                                                break;
                                            }
                                            if ((i18 != 10 && i18 != 13 && ((i18 >= 0 && i18 < 32) || (127 <= i18 && i18 < 160))) || i18 == 65533) {
                                                break;
                                            }
                                            i10 += i18 < 65536 ? 1 : 2;
                                            i6 += 4;
                                            i11 = i5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (i10 != -1) {
            String k = k();
            String substring = k.substring(0, i10);
            Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
            String l6 = kotlin.text.x.l(kotlin.text.x.l(kotlin.text.x.l(substring, "\\", "\\\\", false), ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, "\\n", false), "\r", "\\r", false);
            if (i10 >= k.length()) {
                return d.h(']', "[text=", l6);
            }
            return "[size=" + bArr.length + " text=" + l6 + "…]";
        }
        if (bArr.length <= 64) {
            return "[hex=" + d() + ']';
        }
        StringBuilder sb2 = new StringBuilder("[size=");
        sb2.append(bArr.length);
        sb2.append(" hex=");
        Intrinsics.checkNotNullParameter(this, "<this>");
        if (64 > bArr.length) {
            throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.i(new StringBuilder("endIndex > length("), bArr.length, ')').toString());
        }
        sb2.append((64 == bArr.length ? this : new ByteString(u.i(bArr, 64))).d());
        sb2.append("…]");
        return sb2.toString();
    }
}
