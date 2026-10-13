package androidx.datastore.preferences.protobuf;

import com.discord.media.utils.DiscordVideoMediaSource;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes.dex */
public final class o1 extends m0 {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f1801c;

    public static int m(long j, byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            m0 m0Var = q1.a;
            if (i5 > -12) {
                return -1;
            }
            return i5;
        }
        if (i6 == 1) {
            return q1.c(i5, n1.f(bArr, j));
        }
        if (i6 == 2) {
            return q1.d(i5, n1.f(bArr, j), n1.f(bArr, j + 1));
        }
        throw new AssertionError();
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0028  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x00f1  */
    @Override // androidx.datastore.preferences.protobuf.m0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String e(byte[] bArr, int i5, int i6) {
        switch (this.f1801c) {
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
                        int i12 = i11;
                        while (i5 < i10) {
                            int i13 = i5 + 1;
                            byte b11 = bArr[i5];
                            if (b11 >= 0) {
                                int i14 = i12 + 1;
                                cArr[i12] = (char) b11;
                                int i15 = i13;
                                while (i15 < i10) {
                                    byte b12 = bArr[i15];
                                    if (b12 >= 0) {
                                        i15++;
                                        cArr[i14] = (char) b12;
                                        i14++;
                                    } else {
                                        i12 = i14;
                                        i5 = i15;
                                    }
                                }
                                i12 = i14;
                                i5 = i15;
                            } else if (b11 < -32) {
                                if (i13 >= i10) {
                                    throw x.a();
                                }
                                i5 += 2;
                                m0.b(b11, bArr[i13], cArr, i12);
                                i12++;
                            } else if (b11 < -16) {
                                if (i13 >= i10 - 1) {
                                    throw x.a();
                                }
                                int i16 = i5 + 2;
                                i5 += 3;
                                m0.c(b11, bArr[i13], bArr[i16], cArr, i12);
                                i12++;
                            } else {
                                if (i13 >= i10 - 2) {
                                    throw x.a();
                                }
                                byte b13 = bArr[i13];
                                int i17 = i5 + 3;
                                byte b14 = bArr[i5 + 2];
                                i5 += 4;
                                m0.a(b11, b13, b14, bArr[i17], cArr, i12);
                                i12 += 2;
                            }
                        }
                        return new String(cArr, 0, i12);
                    }
                    i5++;
                    cArr[i11] = (char) b10;
                    i11++;
                }
                int i122 = i11;
                while (i5 < i10) {
                }
                return new String(cArr, 0, i122);
            default:
                if ((i5 | i6 | ((bArr.length - i5) - i6)) < 0) {
                    throw new ArrayIndexOutOfBoundsException(String.format("buffer length=%d, index=%d, size=%d", Integer.valueOf(bArr.length), Integer.valueOf(i5), Integer.valueOf(i6)));
                }
                int i18 = i5 + i6;
                char[] cArr2 = new char[i6];
                int i19 = 0;
                while (i5 < i18) {
                    byte f2 = n1.f(bArr, i5);
                    if (f2 < 0) {
                        int i20 = i19;
                        while (i5 < i18) {
                            int i21 = i5 + 1;
                            byte f10 = n1.f(bArr, i5);
                            if (f10 >= 0) {
                                int i22 = i20 + 1;
                                cArr2[i20] = (char) f10;
                                while (i21 < i18) {
                                    byte f11 = n1.f(bArr, i21);
                                    if (f11 >= 0) {
                                        i21++;
                                        cArr2[i22] = (char) f11;
                                        i22++;
                                    } else {
                                        i20 = i22;
                                        i5 = i21;
                                    }
                                }
                                i20 = i22;
                                i5 = i21;
                            } else if (f10 < -32) {
                                if (i21 >= i18) {
                                    throw x.a();
                                }
                                i5 += 2;
                                m0.b(f10, n1.f(bArr, i21), cArr2, i20);
                                i20++;
                            } else if (f10 < -16) {
                                if (i21 >= i18 - 1) {
                                    throw x.a();
                                }
                                int i23 = i5 + 2;
                                i5 += 3;
                                m0.c(f10, n1.f(bArr, i21), n1.f(bArr, i23), cArr2, i20);
                                i20++;
                            } else {
                                if (i21 >= i18 - 2) {
                                    throw x.a();
                                }
                                byte f12 = n1.f(bArr, i21);
                                int i24 = i5 + 3;
                                byte f13 = n1.f(bArr, i5 + 2);
                                i5 += 4;
                                m0.a(f10, f12, f13, n1.f(bArr, i24), cArr2, i20);
                                i20 += 2;
                            }
                        }
                        return new String(cArr2, 0, i20);
                    }
                    i5++;
                    cArr2[i19] = (char) f2;
                    i19++;
                }
                int i202 = i19;
                while (i5 < i18) {
                }
                return new String(cArr2, 0, i202);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:82:?, code lost:
    
        return r27 + r3;
     */
    @Override // androidx.datastore.preferences.protobuf.m0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int f(String str, byte[] bArr, int i5, int i6) {
        int i10;
        int i11;
        char charAt;
        long j;
        char c6;
        long j5;
        long j7;
        char c8;
        int i12;
        char charAt2;
        switch (this.f1801c) {
            case 0:
                int length = str.length();
                int i13 = i6 + i5;
                int i14 = 0;
                while (i14 < length && (i11 = i14 + i5) < i13 && (charAt = str.charAt(i14)) < 128) {
                    bArr[i11] = (byte) charAt;
                    i14++;
                }
                int i15 = i5 + i14;
                while (i14 < length) {
                    char charAt3 = str.charAt(i14);
                    if (charAt3 < 128 && i15 < i13) {
                        bArr[i15] = (byte) charAt3;
                        i15++;
                    } else if (charAt3 < 2048 && i15 <= i13 - 2) {
                        int i16 = i15 + 1;
                        bArr[i15] = (byte) ((charAt3 >>> 6) | 960);
                        i15 += 2;
                        bArr[i16] = (byte) ((charAt3 & '?') | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                    } else {
                        if ((charAt3 >= 55296 && 57343 >= charAt3) || i15 > i13 - 3) {
                            if (i15 > i13 - 4) {
                                if (55296 <= charAt3 && charAt3 <= 57343 && ((i10 = i14 + 1) == str.length() || !Character.isSurrogatePair(charAt3, str.charAt(i10)))) {
                                    throw new p1(i14, length);
                                }
                                throw new ArrayIndexOutOfBoundsException("Failed writing " + charAt3 + " at index " + i15);
                            }
                            int i17 = i14 + 1;
                            if (i17 != str.length()) {
                                char charAt4 = str.charAt(i17);
                                if (Character.isSurrogatePair(charAt3, charAt4)) {
                                    int codePoint = Character.toCodePoint(charAt3, charAt4);
                                    bArr[i15] = (byte) ((codePoint >>> 18) | 240);
                                    bArr[i15 + 1] = (byte) (((codePoint >>> 12) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                                    int i18 = i15 + 3;
                                    bArr[i15 + 2] = (byte) (((codePoint >>> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                                    i15 += 4;
                                    bArr[i18] = (byte) ((codePoint & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                                    i14 = i17;
                                } else {
                                    i14 = i17;
                                }
                            }
                            throw new p1(i14 - 1, length);
                        }
                        bArr[i15] = (byte) ((charAt3 >>> '\f') | DiscordVideoMediaSource.DEFAULT_HEIGHT);
                        int i19 = i15 + 2;
                        bArr[i15 + 1] = (byte) (((charAt3 >>> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                        i15 += 3;
                        bArr[i19] = (byte) ((charAt3 & '?') | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                    }
                    i14++;
                }
                return i15;
            default:
                long j10 = i5;
                long j11 = i6 + j10;
                int length2 = str.length();
                if (length2 > i6 || bArr.length - i6 < i5) {
                    throw new ArrayIndexOutOfBoundsException("Failed writing " + str.charAt(length2 - 1) + " at index " + (i5 + i6));
                }
                int i20 = 0;
                while (true) {
                    j = 1;
                    c6 = 128;
                    if (i20 < length2 && (charAt2 = str.charAt(i20)) < 128) {
                        n1.j(bArr, (byte) charAt2, j10);
                        i20++;
                        j10 = 1 + j10;
                    }
                }
                if (i20 == length2) {
                    return (int) j10;
                }
                while (i20 < length2) {
                    char charAt5 = str.charAt(i20);
                    if (charAt5 < c6 && j10 < j11) {
                        n1.j(bArr, (byte) charAt5, j10);
                        c8 = c6;
                        j5 = j;
                        j7 = j10 + j;
                    } else if (charAt5 >= 2048 || j10 > j11 - 2) {
                        j5 = j;
                        if ((charAt5 >= 55296 && 57343 >= charAt5) || j10 > j11 - 3) {
                            long j12 = j10;
                            if (j12 > j11 - 4) {
                                if (55296 <= charAt5 && charAt5 <= 57343 && ((i12 = i20 + 1) == length2 || !Character.isSurrogatePair(charAt5, str.charAt(i12)))) {
                                    throw new p1(i20, length2);
                                }
                                throw new ArrayIndexOutOfBoundsException("Failed writing " + charAt5 + " at index " + j12);
                            }
                            int i21 = i20 + 1;
                            if (i21 != length2) {
                                char charAt6 = str.charAt(i21);
                                if (Character.isSurrogatePair(charAt5, charAt6)) {
                                    int codePoint2 = Character.toCodePoint(charAt5, charAt6);
                                    n1.j(bArr, (byte) ((codePoint2 >>> 18) | 240), j12);
                                    c8 = 128;
                                    n1.j(bArr, (byte) (((codePoint2 >>> 12) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT), j12 + j5);
                                    n1.j(bArr, (byte) (((codePoint2 >>> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT), j12 + 2);
                                    n1.j(bArr, (byte) ((codePoint2 & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT), j12 + 3);
                                    j7 = j12 + 4;
                                    i20 = i21;
                                } else {
                                    i20 = i21;
                                }
                            }
                            throw new p1(i20 - 1, length2);
                        }
                        n1.j(bArr, (byte) ((charAt5 >>> '\f') | DiscordVideoMediaSource.DEFAULT_HEIGHT), j10);
                        long j13 = j10;
                        n1.j(bArr, (byte) (((charAt5 >>> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT), j10 + j5);
                        j7 = j13 + 3;
                        n1.j(bArr, (byte) ((charAt5 & '?') | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT), j13 + 2);
                        c8 = 128;
                    } else {
                        j5 = j;
                        n1.j(bArr, (byte) ((charAt5 >>> 6) | 960), j10);
                        n1.j(bArr, (byte) ((charAt5 & '?') | c6), j10 + j5);
                        j7 = j10 + 2;
                        c8 = c6;
                    }
                    i20++;
                    c6 = c8;
                    j10 = j7;
                    j = j5;
                }
                return (int) j10;
        }
    }

    @Override // androidx.datastore.preferences.protobuf.m0
    public final int i(byte[] bArr, int i5, int i6) {
        int i10;
        long j;
        int i11 = i5;
        switch (this.f1801c) {
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
                    long j10 = j5;
                    i10 = 0;
                    while (true) {
                        if (i10 < i12) {
                            long j11 = j10 + 1;
                            if (n1.f(bArr, j10) >= 0) {
                                i10++;
                                j10 = j11;
                            }
                        } else {
                            i10 = i12;
                        }
                    }
                }
                int i13 = i12 - i10;
                long j12 = j5 + i10;
                while (true) {
                    byte b10 = 0;
                    while (true) {
                        if (i13 > 0) {
                            long j13 = j12 + j7;
                            b10 = n1.f(bArr, j12);
                            if (b10 >= 0) {
                                i13--;
                                j12 = j13;
                            } else {
                                j12 = j13;
                            }
                        }
                    }
                    if (i13 == 0) {
                        return 0;
                    }
                    int i14 = i13 - 1;
                    if (b10 < -32) {
                        if (i14 == 0) {
                            return b10;
                        }
                        i13 -= 2;
                        if (b10 >= -62) {
                            long j14 = j12 + j7;
                            if (n1.f(bArr, j12) <= -65) {
                                j = j7;
                                j12 = j14;
                                j7 = j;
                            }
                        }
                    } else if (b10 >= -16) {
                        j = j7;
                        if (i14 < 3) {
                            return m(j12, bArr, b10, i14);
                        }
                        i13 -= 4;
                        long j15 = j12 + j;
                        byte f2 = n1.f(bArr, j12);
                        if (f2 <= -65) {
                            if ((((f2 + 112) + (b10 << 28)) >> 30) == 0) {
                                long j16 = 2 + j12;
                                if (n1.f(bArr, j15) <= -65) {
                                    j12 += 3;
                                    if (n1.f(bArr, j16) <= -65) {
                                        j7 = j;
                                    }
                                }
                            }
                        }
                    } else {
                        if (i14 < 2) {
                            return m(j12, bArr, b10, i14);
                        }
                        i13 -= 3;
                        j = j7;
                        long j17 = j12 + j;
                        byte f10 = n1.f(bArr, j12);
                        if (f10 <= -65 && ((b10 != -32 || f10 >= -96) && (b10 != -19 || f10 < -96))) {
                            j12 += 2;
                            if (n1.f(bArr, j17) <= -65) {
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
                int i15 = i11 + 1;
                byte b11 = bArr[i11];
                if (b11 < 0) {
                    if (b11 < -32) {
                        if (i15 >= i6) {
                            return b11;
                        }
                        if (b11 >= -62) {
                            i11 += 2;
                            if (bArr[i15] > -65) {
                            }
                        }
                        return -1;
                    }
                    if (b11 < -16) {
                        if (i15 >= i6 - 1) {
                            return q1.a(bArr, i15, i6);
                        }
                        int i16 = i11 + 2;
                        byte b12 = bArr[i15];
                        if (b12 <= -65 && ((b11 != -32 || b12 >= -96) && (b11 != -19 || b12 < -96))) {
                            i11 += 3;
                            if (bArr[i16] > -65) {
                            }
                        }
                        return -1;
                    }
                    if (i15 >= i6 - 2) {
                        return q1.a(bArr, i15, i6);
                    }
                    int i17 = i11 + 2;
                    byte b13 = bArr[i15];
                    if (b13 <= -65) {
                        if ((((b13 + 112) + (b11 << 28)) >> 30) == 0) {
                            int i18 = i11 + 3;
                            if (bArr[i17] <= -65) {
                                i11 += 4;
                                if (bArr[i18] > -65) {
                                }
                            }
                        }
                    }
                    return -1;
                }
                i11 = i15;
            }
        }
        return 0;
    }
}
