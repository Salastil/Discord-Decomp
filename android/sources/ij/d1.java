package ij;

import java.nio.charset.Charset;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class d1 extends io.sentry.config.a {
    public final /* synthetic */ int a;

    public /* synthetic */ d1(int i5) {
        this.a = i5;
    }

    public static int O(long j, byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            io.sentry.config.a aVar = e1.a;
            if (i5 > -12) {
                return -1;
            }
            return i5;
        }
        if (i6 == 1) {
            return e1.b(i5, c1.g(bArr, j));
        }
        if (i6 == 2) {
            return e1.c(i5, c1.g(bArr, j), c1.g(bArr, j + 1));
        }
        throw new AssertionError();
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0049  */
    @Override // io.sentry.config.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String l(byte[] bArr, int i5, int i6) {
        switch (this.a) {
            case 0:
                if ((i5 | i6 | ((bArr.length - i5) - i6)) < 0) {
                    throw new ArrayIndexOutOfBoundsException(String.format("buffer length=%d, index=%d, size=%d", Integer.valueOf(bArr.length), Integer.valueOf(i5), Integer.valueOf(i6)));
                }
                int i10 = i5 + i6;
                char[] cArr = new char[i6];
                int i11 = 0;
                while (i5 < i10) {
                    byte b10 = bArr[i5];
                    if (b10 < 0) {
                        while (i5 < i10) {
                            int i12 = i5 + 1;
                            byte b11 = bArr[i5];
                            if (b11 >= 0) {
                                int i13 = i11 + 1;
                                cArr[i11] = (char) b11;
                                while (i12 < i10) {
                                    byte b12 = bArr[i12];
                                    if (b12 >= 0) {
                                        i12++;
                                        cArr[i13] = (char) b12;
                                        i13++;
                                    } else {
                                        i11 = i13;
                                        i5 = i12;
                                    }
                                }
                                i11 = i13;
                                i5 = i12;
                            } else if (b11 < -32) {
                                if (i12 >= i10) {
                                    throw v.a();
                                }
                                i5 += 2;
                                byte b13 = bArr[i12];
                                int i14 = i11 + 1;
                                if (b11 < -62 || e4.f.A(b13)) {
                                    throw v.a();
                                }
                                cArr[i11] = (char) ((b13 & 63) | ((b11 & 31) << 6));
                                i11 = i14;
                            } else {
                                if (b11 >= -16) {
                                    if (i12 >= i10 - 2) {
                                        throw v.a();
                                    }
                                    byte b14 = bArr[i12];
                                    int i15 = i5 + 3;
                                    byte b15 = bArr[i5 + 2];
                                    i5 += 4;
                                    byte b16 = bArr[i15];
                                    int i16 = i11 + 1;
                                    if (!e4.f.A(b14)) {
                                        if ((((b14 + 112) + (b11 << 28)) >> 30) == 0 && !e4.f.A(b15) && !e4.f.A(b16)) {
                                            int i17 = ((b14 & 63) << 12) | ((b11 & 7) << 18) | ((b15 & 63) << 6) | (b16 & 63);
                                            cArr[i11] = (char) ((i17 >>> 10) + 55232);
                                            cArr[i16] = (char) ((i17 & 1023) + 56320);
                                            i11 += 2;
                                        }
                                    }
                                    throw v.a();
                                }
                                if (i12 >= i10 - 1) {
                                    throw v.a();
                                }
                                int i18 = i5 + 2;
                                byte b17 = bArr[i12];
                                i5 += 3;
                                byte b18 = bArr[i18];
                                int i19 = i11 + 1;
                                if (e4.f.A(b17) || ((b11 == -32 && b17 < -96) || ((b11 == -19 && b17 >= -96) || e4.f.A(b18)))) {
                                    throw v.a();
                                }
                                cArr[i11] = (char) (((b17 & 63) << 6) | ((b11 & 15) << 12) | (b18 & 63));
                                i11 = i19;
                            }
                        }
                        return new String(cArr, 0, i11);
                    }
                    i5++;
                    cArr[i11] = (char) b10;
                    i11++;
                }
                while (i5 < i10) {
                }
                return new String(cArr, 0, i11);
            default:
                Charset charset = t.a;
                String str = new String(bArr, i5, i6, charset);
                if (str.contains("�") && !Arrays.equals(str.getBytes(charset), Arrays.copyOfRange(bArr, i5, i6 + i5))) {
                    throw v.a();
                }
                return str;
        }
    }

    @Override // io.sentry.config.a
    public final int y(byte[] bArr, int i5, int i6) {
        int i10;
        long j;
        int i11 = i5;
        switch (this.a) {
            case 0:
                break;
            default:
                if ((i11 | i6 | (bArr.length - i6)) < 0) {
                    throw new ArrayIndexOutOfBoundsException(String.format("Array length=%d, index=%d, limit=%d", Integer.valueOf(bArr.length), Integer.valueOf(i11), Integer.valueOf(i6)));
                }
                long j5 = i11;
                int i12 = (int) (i6 - j5);
                long j7 = 1;
                if (i12 < 16) {
                    i10 = 0;
                } else {
                    int i13 = 8 - (((int) j5) & 7);
                    long j10 = j5;
                    i10 = 0;
                    while (true) {
                        if (i10 < i13) {
                            long j11 = j10 + 1;
                            if (c1.g(bArr, j10) >= 0) {
                                i10++;
                                j10 = j11;
                            }
                        } else {
                            while (true) {
                                int i14 = i10 + 8;
                                if (i14 <= i12) {
                                    if ((c1.f10846c.h(c1.f10849f + j10, bArr) & (-9187201950435737472L)) == 0) {
                                        j10 += 8;
                                        i10 = i14;
                                    }
                                }
                            }
                            while (true) {
                                if (i10 < i12) {
                                    long j12 = j10 + 1;
                                    if (c1.g(bArr, j10) >= 0) {
                                        i10++;
                                        j10 = j12;
                                    }
                                } else {
                                    i10 = i12;
                                }
                            }
                        }
                    }
                }
                int i15 = i12 - i10;
                long j13 = j5 + i10;
                while (true) {
                    byte b10 = 0;
                    while (true) {
                        if (i15 > 0) {
                            long j14 = j13 + j7;
                            b10 = c1.g(bArr, j13);
                            if (b10 >= 0) {
                                i15--;
                                j13 = j14;
                            } else {
                                j13 = j14;
                            }
                        }
                    }
                    if (i15 == 0) {
                        return 0;
                    }
                    int i16 = i15 - 1;
                    if (b10 < -32) {
                        if (i16 == 0) {
                            return b10;
                        }
                        i15 -= 2;
                        if (b10 >= -62) {
                            long j15 = j13 + j7;
                            if (c1.g(bArr, j13) <= -65) {
                                j = j7;
                                j13 = j15;
                                j7 = j;
                            }
                        }
                    } else if (b10 >= -16) {
                        j = j7;
                        if (i16 < 3) {
                            return O(j13, bArr, b10, i16);
                        }
                        i15 -= 4;
                        long j16 = j13 + j;
                        byte g6 = c1.g(bArr, j13);
                        if (g6 <= -65) {
                            if ((((g6 + 112) + (b10 << 28)) >> 30) == 0) {
                                long j17 = 2 + j13;
                                if (c1.g(bArr, j16) <= -65) {
                                    j13 += 3;
                                    if (c1.g(bArr, j17) <= -65) {
                                        j7 = j;
                                    }
                                }
                            }
                        }
                    } else {
                        if (i16 < 2) {
                            return O(j13, bArr, b10, i16);
                        }
                        i15 -= 3;
                        j = j7;
                        long j18 = j13 + j;
                        byte g10 = c1.g(bArr, j13);
                        if (g10 <= -65 && ((b10 != -32 || g10 >= -96) && (b10 != -19 || g10 < -96))) {
                            j13 += 2;
                            if (c1.g(bArr, j18) <= -65) {
                                j7 = j;
                            }
                        }
                    }
                }
                return -1;
        }
        while (i11 < i6 && bArr[i11] >= 0) {
            i11++;
        }
        if (i11 < i6) {
            while (i11 < i6) {
                int i17 = i11 + 1;
                byte b11 = bArr[i11];
                if (b11 < 0) {
                    if (b11 < -32) {
                        if (i17 >= i6) {
                            return b11;
                        }
                        if (b11 >= -62) {
                            i11 += 2;
                            if (bArr[i17] > -65) {
                            }
                        }
                        return -1;
                    }
                    if (b11 < -16) {
                        if (i17 >= i6 - 1) {
                            return e1.a(bArr, i17, i6);
                        }
                        int i18 = i11 + 2;
                        byte b12 = bArr[i17];
                        if (b12 <= -65 && ((b11 != -32 || b12 >= -96) && (b11 != -19 || b12 < -96))) {
                            i11 += 3;
                            if (bArr[i18] > -65) {
                            }
                        }
                        return -1;
                    }
                    if (i17 >= i6 - 2) {
                        return e1.a(bArr, i17, i6);
                    }
                    int i19 = i11 + 2;
                    byte b13 = bArr[i17];
                    if (b13 <= -65) {
                        if ((((b13 + 112) + (b11 << 28)) >> 30) == 0) {
                            int i20 = i11 + 3;
                            if (bArr[i19] <= -65) {
                                i11 += 4;
                                if (bArr[i20] > -65) {
                                }
                            }
                        }
                    }
                    return -1;
                }
                i11 = i17;
            }
        }
        return 0;
    }
}
