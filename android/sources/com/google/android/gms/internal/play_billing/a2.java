package com.google.android.gms.internal.play_billing;

import java.nio.charset.StandardCharsets;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import java.util.logging.Level;
import java.util.logging.Logger;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public abstract class a2 {
    public static final a a = new a();

    public static int C(byte[] bArr, int i5, i2 i2Var, s1 s1Var) {
        f2 f2Var = (f2) i2Var;
        int I = I(bArr, i5, s1Var);
        int i6 = s1Var.a;
        if (i6 < 0) {
            throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
        }
        if (i6 > bArr.length - I) {
            throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
        }
        int i10 = i6 + I;
        while (I < i10) {
            I = I(bArr, I, s1Var);
            f2Var.e(s1Var.a);
        }
        if (I == i10) {
            return I;
        }
        throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
    }

    public static String D(int i5, int i6, String str) {
        if (i5 < 0) {
            return p("%s (%s) must not be negative", str, Integer.valueOf(i5));
        }
        if (i6 >= 0) {
            return p("%s (%s) must not be greater than size (%s)", str, Integer.valueOf(i5), Integer.valueOf(i6));
        }
        throw new IllegalArgumentException(k0.d.i(i6, "negative size: "));
    }

    public static int F(byte[] bArr, int i5, s1 s1Var) {
        int I = I(bArr, i5, s1Var);
        int i6 = s1Var.a;
        if (i6 < 0) {
            throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
        }
        if (i6 == 0) {
            s1Var.f5825c = "";
            return I;
        }
        int i10 = o3.a;
        int length = bArr.length;
        if ((((length - I) - i6) | I | i6) < 0) {
            throw new ArrayIndexOutOfBoundsException(String.format("buffer length=%d, index=%d, size=%d", Integer.valueOf(length), Integer.valueOf(I), Integer.valueOf(i6)));
        }
        int i11 = I + i6;
        char[] cArr = new char[i6];
        int i12 = 0;
        while (I < i11) {
            byte b10 = bArr[I];
            if (b10 < 0) {
                break;
            }
            I++;
            cArr[i12] = (char) b10;
            i12++;
        }
        while (I < i11) {
            int i13 = I + 1;
            byte b11 = bArr[I];
            if (b11 >= 0) {
                cArr[i12] = (char) b11;
                i12++;
                I = i13;
                while (I < i11) {
                    byte b12 = bArr[I];
                    if (b12 >= 0) {
                        I++;
                        cArr[i12] = (char) b12;
                        i12++;
                    }
                }
            } else {
                if (b11 >= -32) {
                    if (b11 >= -16) {
                        if (i13 >= i11 - 2) {
                            throw new n2("Protocol message had invalid UTF-8.");
                        }
                        byte b13 = bArr[i13];
                        int i14 = I + 3;
                        byte b14 = bArr[I + 2];
                        I += 4;
                        byte b15 = bArr[i14];
                        if (!z(b13)) {
                            if ((((b13 + 112) + (b11 << 28)) >> 30) == 0 && !z(b14) && !z(b15)) {
                                int i15 = ((b13 & 63) << 12) | ((b11 & 7) << 18) | ((b14 & 63) << 6) | (b15 & 63);
                                cArr[i12] = (char) ((i15 >>> 10) + 55232);
                                cArr[i12 + 1] = (char) ((i15 & 1023) + 56320);
                                i12 += 2;
                            }
                        }
                        throw new n2("Protocol message had invalid UTF-8.");
                    }
                    if (i13 >= i11 - 1) {
                        throw new n2("Protocol message had invalid UTF-8.");
                    }
                    int i16 = i12 + 1;
                    int i17 = I + 2;
                    byte b16 = bArr[i13];
                    I += 3;
                    byte b17 = bArr[i17];
                    if (!z(b16)) {
                        if (b11 == -32) {
                            if (b16 >= -96) {
                                b11 = -32;
                            }
                        }
                        if (b11 == -19) {
                            if (b16 < -96) {
                                b11 = -19;
                            }
                        }
                        if (!z(b17)) {
                            cArr[i12] = (char) (((b16 & 63) << 6) | ((b11 & 15) << 12) | (b17 & 63));
                            i12 = i16;
                        }
                    }
                    throw new n2("Protocol message had invalid UTF-8.");
                }
                if (i13 >= i11) {
                    throw new n2("Protocol message had invalid UTF-8.");
                }
                int i18 = i12 + 1;
                I += 2;
                byte b18 = bArr[i13];
                if (b11 < -62 || z(b18)) {
                    throw new n2("Protocol message had invalid UTF-8.");
                }
                cArr[i12] = (char) ((b18 & 63) | ((b11 & 31) << 6));
                i12 = i18;
            }
        }
        s1Var.f5825c = new String(cArr, 0, i12);
        return i11;
    }

    public static int H(int i5, byte[] bArr, int i6, int i10, g3 g3Var, s1 s1Var) {
        if ((i5 >>> 3) == 0) {
            throw new n2("Protocol message contained an invalid tag (zero).");
        }
        int i11 = i5 & 7;
        if (i11 == 0) {
            int L = L(bArr, i6, s1Var);
            g3Var.c(i5, Long.valueOf(s1Var.f5824b));
            return L;
        }
        if (i11 == 1) {
            g3Var.c(i5, Long.valueOf(P(bArr, i6)));
            return i6 + 8;
        }
        if (i11 == 2) {
            int I = I(bArr, i6, s1Var);
            int i12 = s1Var.a;
            if (i12 < 0) {
                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
            }
            if (i12 > bArr.length - I) {
                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
            }
            if (i12 == 0) {
                g3Var.c(i5, u1.f5850e);
            } else {
                g3Var.c(i5, u1.m(bArr, I, i12));
            }
            return I + i12;
        }
        if (i11 != 3) {
            if (i11 != 5) {
                throw new n2("Protocol message contained an invalid tag (zero).");
            }
            g3Var.c(i5, Integer.valueOf(n(bArr, i6)));
            return i6 + 4;
        }
        int i13 = (i5 & (-8)) | 4;
        g3 b10 = g3.b();
        int i14 = s1Var.f5826d + 1;
        s1Var.f5826d = i14;
        Q(i14);
        int i15 = 0;
        while (true) {
            if (i6 >= i10) {
                break;
            }
            int I2 = I(bArr, i6, s1Var);
            int i16 = s1Var.a;
            if (i16 == i13) {
                i15 = i16;
                i6 = I2;
                break;
            }
            i6 = H(i16, bArr, I2, i10, b10, s1Var);
            i15 = i16;
        }
        s1Var.f5826d--;
        if (i6 > i10 || i15 != i13) {
            throw new n2("Failed to parse the message.");
        }
        g3Var.c(i5, b10);
        return i6;
    }

    public static int I(byte[] bArr, int i5, s1 s1Var) {
        int i6 = i5 + 1;
        byte b10 = bArr[i5];
        if (b10 < 0) {
            return J(b10, bArr, i6, s1Var);
        }
        s1Var.a = b10;
        return i6;
    }

    public static int J(int i5, byte[] bArr, int i6, s1 s1Var) {
        byte b10 = bArr[i6];
        int i10 = i6 + 1;
        int i11 = i5 & 127;
        if (b10 >= 0) {
            s1Var.a = i11 | (b10 << 7);
            return i10;
        }
        int i12 = i11 | ((b10 & ByteCompanionObject.MAX_VALUE) << 7);
        int i13 = i6 + 2;
        byte b11 = bArr[i10];
        if (b11 >= 0) {
            s1Var.a = i12 | (b11 << 14);
            return i13;
        }
        int i14 = i12 | ((b11 & ByteCompanionObject.MAX_VALUE) << 14);
        int i15 = i6 + 3;
        byte b12 = bArr[i13];
        if (b12 >= 0) {
            s1Var.a = i14 | (b12 << 21);
            return i15;
        }
        int i16 = i14 | ((b12 & ByteCompanionObject.MAX_VALUE) << 21);
        int i17 = i6 + 4;
        byte b13 = bArr[i15];
        if (b13 >= 0) {
            s1Var.a = i16 | (b13 << 28);
            return i17;
        }
        int i18 = i16 | ((b13 & ByteCompanionObject.MAX_VALUE) << 28);
        while (true) {
            int i19 = i17 + 1;
            if (bArr[i17] >= 0) {
                s1Var.a = i18;
                return i19;
            }
            i17 = i19;
        }
    }

    public static int K(int i5, byte[] bArr, int i6, int i10, i2 i2Var, s1 s1Var) {
        f2 f2Var = (f2) i2Var;
        int I = I(bArr, i6, s1Var);
        f2Var.e(s1Var.a);
        while (I < i10) {
            int I2 = I(bArr, I, s1Var);
            if (i5 != s1Var.a) {
                break;
            }
            I = I(bArr, I2, s1Var);
            f2Var.e(s1Var.a);
        }
        return I;
    }

    public static int L(byte[] bArr, int i5, s1 s1Var) {
        long j = bArr[i5];
        int i6 = i5 + 1;
        if (j >= 0) {
            s1Var.f5824b = j;
            return i6;
        }
        int i10 = i5 + 2;
        byte b10 = bArr[i6];
        long j5 = (j & 127) | ((b10 & ByteCompanionObject.MAX_VALUE) << 7);
        int i11 = 7;
        while (b10 < 0) {
            int i12 = i10 + 1;
            i11 += 7;
            j5 |= (r10 & ByteCompanionObject.MAX_VALUE) << i11;
            b10 = bArr[i10];
            i10 = i12;
        }
        s1Var.f5824b = j5;
        return i10;
    }

    public static int M(Object obj, y2 y2Var, byte[] bArr, int i5, int i6, int i10, s1 s1Var) {
        int i11 = s1Var.f5826d + 1;
        s1Var.f5826d = i11;
        Q(i11);
        int u5 = ((t2) y2Var).u(obj, bArr, i5, i6, i10, s1Var);
        s1Var.f5826d--;
        s1Var.f5825c = obj;
        return u5;
    }

    public static int N(Object obj, y2 y2Var, byte[] bArr, int i5, int i6, s1 s1Var) {
        int i10 = i5 + 1;
        int i11 = bArr[i5];
        if (i11 < 0) {
            i10 = J(i11, bArr, i10, s1Var);
            i11 = s1Var.a;
        }
        int i12 = i10;
        if (i11 < 0 || i11 > i6 - i12) {
            throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
        }
        int i13 = s1Var.f5826d + 1;
        s1Var.f5826d = i13;
        Q(i13);
        int i14 = i12 + i11;
        y2Var.i(obj, bArr, i12, i14, s1Var);
        s1Var.f5826d--;
        s1Var.f5825c = obj;
        return i14;
    }

    public static int O(int i5, byte[] bArr, int i6, int i10, s1 s1Var) {
        if ((i5 >>> 3) == 0) {
            throw new n2("Protocol message contained an invalid tag (zero).");
        }
        int i11 = i5 & 7;
        if (i11 == 0) {
            return L(bArr, i6, s1Var);
        }
        if (i11 == 1) {
            return i6 + 8;
        }
        if (i11 == 2) {
            return I(bArr, i6, s1Var) + s1Var.a;
        }
        if (i11 != 3) {
            if (i11 == 5) {
                return i6 + 4;
            }
            throw new n2("Protocol message contained an invalid tag (zero).");
        }
        int i12 = (i5 & (-8)) | 4;
        int i13 = s1Var.f5826d + 1;
        s1Var.f5826d = i13;
        Q(i13);
        int i14 = 0;
        while (i6 < i10) {
            i6 = I(bArr, i6, s1Var);
            i14 = s1Var.a;
            if (i14 == i12) {
                break;
            }
            i6 = O(i14, bArr, i6, i10, s1Var);
        }
        s1Var.f5826d--;
        if (i6 > i10 || i14 != i12) {
            throw new n2("Failed to parse the message.");
        }
        return i6;
    }

    public static long P(byte[] bArr, int i5) {
        return (bArr[i5] & 255) | ((bArr[i5 + 1] & 255) << 8) | ((bArr[i5 + 2] & 255) << 16) | ((bArr[i5 + 3] & 255) << 24) | ((bArr[i5 + 4] & 255) << 32) | ((bArr[i5 + 5] & 255) << 40) | ((bArr[i5 + 6] & 255) << 48) | ((bArr[i5 + 7] & 255) << 56);
    }

    public static void Q(int i5) {
        if (i5 >= 100) {
            throw new n2("Protocol message had too many levels of nesting.  May be malicious.  Use setRecursionLimit() to increase the recursion depth limit.");
        }
    }

    public static int a(int i5) {
        return (int) (Integer.rotateLeft((int) (i5 * (-862048943)), 15) * 461845907);
    }

    public static int b(int i5, int i6) {
        if (i6 < 0) {
            throw new IllegalArgumentException("cannot store more than Integer.MAX_VALUE elements");
        }
        if (i6 <= i5) {
            return i5;
        }
        int i10 = i5 + (i5 >> 1) + 1;
        if (i10 < i6) {
            int highestOneBit = Integer.highestOneBit(i6 - 1);
            i10 = highestOneBit + highestOneBit;
        }
        if (i10 < 0) {
            return Integer.MAX_VALUE;
        }
        return i10;
    }

    public static int c(byte[] bArr, int i5, s1 s1Var) {
        int I = I(bArr, i5, s1Var);
        int i6 = s1Var.a;
        if (i6 < 0) {
            throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
        }
        if (i6 > bArr.length - I) {
            throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
        }
        if (i6 == 0) {
            s1Var.f5825c = u1.f5850e;
            return I;
        }
        s1Var.f5825c = u1.m(bArr, I, i6);
        return I + i6;
    }

    public static final r2 f(Object obj, Object obj2) {
        r2 r2Var = (r2) obj;
        r2 r2Var2 = (r2) obj2;
        if (!r2Var2.isEmpty()) {
            if (!r2Var.f5817d) {
                r2Var = r2Var.a();
            }
            r2Var.c();
            if (!r2Var2.isEmpty()) {
                r2Var.putAll(r2Var2);
            }
        }
        return r2Var;
    }

    public static String g(byte[] bArr) {
        StringBuilder sb2 = new StringBuilder(bArr.length);
        for (byte b10 : bArr) {
            if (b10 == 34) {
                sb2.append("\\\"");
            } else if (b10 == 39) {
                sb2.append("\\'");
            } else if (b10 != 92) {
                switch (b10) {
                    case 7:
                        sb2.append("\\a");
                        break;
                    case 8:
                        sb2.append("\\b");
                        break;
                    case 9:
                        sb2.append("\\t");
                        break;
                    case 10:
                        sb2.append("\\n");
                        break;
                    case 11:
                        sb2.append("\\v");
                        break;
                    case 12:
                        sb2.append("\\f");
                        break;
                    case 13:
                        sb2.append("\\r");
                        break;
                    default:
                        if (b10 < 32 || b10 > 126) {
                            sb2.append('\\');
                            sb2.append((char) (((b10 >>> 6) & 3) + 48));
                            sb2.append((char) (((b10 >>> 3) & 7) + 48));
                            sb2.append((char) ((b10 & 7) + 48));
                            break;
                        } else {
                            sb2.append((char) b10);
                            break;
                        }
                }
            } else {
                sb2.append("\\\\");
            }
        }
        return sb2.toString();
    }

    public static void h(int i5, int i6) {
        String p3;
        if (i5 < 0 || i5 >= i6) {
            if (i5 < 0) {
                p3 = p("%s (%s) must not be negative", "index", Integer.valueOf(i5));
            } else {
                if (i6 < 0) {
                    throw new IllegalArgumentException(k0.d.i(i6, "negative size: "));
                }
                p3 = p("%s (%s) must be less than size (%s)", "index", Integer.valueOf(i5), Integer.valueOf(i6));
            }
            throw new IndexOutOfBoundsException(p3);
        }
    }

    public static /* synthetic */ boolean j(AtomicReferenceFieldUpdater atomicReferenceFieldUpdater, q0 q0Var, Object obj, Object obj2) {
        while (!atomicReferenceFieldUpdater.compareAndSet(q0Var, obj, obj2)) {
            if (atomicReferenceFieldUpdater.get(q0Var) != obj && atomicReferenceFieldUpdater.get(q0Var) != obj) {
                return false;
            }
        }
        return true;
    }

    public static /* synthetic */ boolean k(AtomicReferenceFieldUpdater atomicReferenceFieldUpdater, w4 w4Var, Object obj, Object obj2) {
        while (!atomicReferenceFieldUpdater.compareAndSet(w4Var, obj, obj2)) {
            if (atomicReferenceFieldUpdater.get(w4Var) != obj && atomicReferenceFieldUpdater.get(w4Var) != obj) {
                return false;
            }
        }
        return true;
    }

    public static int l(int i5) {
        return (i5 >>> 1) ^ (-(i5 & 1));
    }

    public static int m(String str) {
        int length = str.length();
        int i5 = 0;
        int i6 = 0;
        while (i6 < length && str.charAt(i6) < 128) {
            i6++;
        }
        int i10 = length;
        while (true) {
            if (i6 >= length) {
                break;
            }
            char charAt = str.charAt(i6);
            if (charAt < 2048) {
                i10 += (127 - charAt) >>> 31;
                i6++;
            } else {
                try {
                    int i11 = o3.a;
                    int length2 = str.length();
                    while (i6 < length2) {
                        char charAt2 = str.charAt(i6);
                        if (charAt2 < 2048) {
                            i5 += (127 - charAt2) >>> 31;
                        } else {
                            i5 += 2;
                            if (charAt2 >= 55296 && charAt2 <= 57343) {
                                if (Character.codePointAt(str, i6) < 65536) {
                                    throw new n3("Unpaired surrogate at index " + i6 + " of " + length2);
                                }
                                i6++;
                            }
                        }
                        i6++;
                    }
                    i10 += i5;
                } catch (n3 unused) {
                    return str.getBytes(StandardCharsets.UTF_8).length;
                }
            }
        }
        if (i10 >= length) {
            return i10;
        }
        throw new IllegalArgumentException("UTF-8 length does not fit in int: " + (i10 + 4294967296L));
    }

    public static int n(byte[] bArr, int i5) {
        int i6 = bArr[i5] & 255;
        int i10 = bArr[i5 + 1] & 255;
        int i11 = bArr[i5 + 2] & 255;
        return ((bArr[i5 + 3] & 255) << 24) | (i10 << 8) | i6 | (i11 << 16);
    }

    public static String p(String str, Object... objArr) {
        int length;
        int indexOf;
        StringBuilder sb2 = new StringBuilder(str.length() + (objArr.length * 16));
        int i5 = 0;
        int i6 = 0;
        while (true) {
            length = objArr.length;
            if (i5 >= length || (indexOf = str.indexOf("%s", i6)) == -1) {
                break;
            }
            sb2.append((CharSequence) str, i6, indexOf);
            sb2.append(y(objArr[i5]));
            i6 = indexOf + 2;
            i5++;
        }
        sb2.append((CharSequence) str, i6, str.length());
        if (i5 < length) {
            String str2 = " [";
            while (i5 < objArr.length) {
                sb2.append(str2);
                sb2.append(y(objArr[i5]));
                i5++;
                str2 = ", ";
            }
            sb2.append(']');
        }
        return sb2.toString();
    }

    public static void q(int i5, int i6) {
        if (i5 < 0 || i5 > i6) {
            throw new IndexOutOfBoundsException(D(i5, i6, "index"));
        }
    }

    public static void u(int i5, int i6, int i10) {
        if (i5 < 0 || i6 < i5 || i6 > i10) {
            throw new IndexOutOfBoundsException((i5 < 0 || i5 > i10) ? D(i5, i10, "start index") : (i6 < 0 || i6 > i10) ? D(i6, i10, "end index") : p("end index (%s) must not be less than start index (%s)", Integer.valueOf(i6), Integer.valueOf(i5)));
        }
    }

    public static int x(y2 y2Var, int i5, byte[] bArr, int i6, int i10, i2 i2Var, s1 s1Var) {
        e2 g6 = y2Var.g();
        y2 y2Var2 = y2Var;
        byte[] bArr2 = bArr;
        int i11 = i10;
        s1 s1Var2 = s1Var;
        int N = N(g6, y2Var2, bArr2, i6, i11, s1Var2);
        y2Var2.a(g6);
        s1Var2.f5825c = g6;
        i2Var.add(g6);
        while (N < i11) {
            s1 s1Var3 = s1Var2;
            int i12 = i11;
            int I = I(bArr2, N, s1Var3);
            if (i5 != s1Var3.a) {
                break;
            }
            byte[] bArr3 = bArr2;
            y2 y2Var3 = y2Var2;
            e2 g10 = y2Var3.g();
            N = N(g10, y2Var3, bArr3, I, i12, s1Var3);
            y2Var2 = y2Var3;
            bArr2 = bArr3;
            i11 = i12;
            s1Var2 = s1Var3;
            y2Var2.a(g10);
            s1Var2.f5825c = g10;
            i2Var.add(g10);
        }
        return N;
    }

    public static String y(Object obj) {
        if (obj == null) {
            return "null";
        }
        try {
            return obj.toString();
        } catch (Exception e9) {
            String l6 = k0.d.l(obj.getClass().getName(), "@", Integer.toHexString(System.identityHashCode(obj)));
            Logger.getLogger("com.google.common.base.Strings").logp(Level.WARNING, "com.google.common.base.Strings", "lenientToString", "Exception during lenientFormat for ".concat(l6), (Throwable) e9);
            return s4.h.g("<", l6, " threw ", e9.getClass().getName(), ">");
        }
    }

    public static boolean z(byte b10) {
        return b10 > -65;
    }

    public abstract boolean A(b1 b1Var, k0 k0Var, k0 k0Var2);

    public abstract boolean B(w4 w4Var, v4 v4Var, v4 v4Var2);

    public abstract boolean E(q0 q0Var, Object obj, Object obj2);

    public abstract boolean G(q0 q0Var, p0 p0Var, p0 p0Var2);

    public abstract long d();

    public abstract k0 e(b1 b1Var);

    public abstract void i(v4 v4Var, v4 v4Var2);

    public abstract p0 o(b1 b1Var);

    public abstract void r(v4 v4Var, Thread thread);

    public abstract void s(p0 p0Var, p0 p0Var2);

    public abstract boolean t(w4 w4Var, l2 l2Var, l2 l2Var2);

    public abstract void v(p0 p0Var, Thread thread);

    public abstract boolean w(w4 w4Var, Object obj, Object obj2);
}
