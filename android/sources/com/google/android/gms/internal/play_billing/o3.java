package com.google.android.gms.internal.play_billing;

import com.discord.media.utils.DiscordVideoMediaSource;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.nio.charset.StandardCharsets;

/* loaded from: classes3.dex */
public abstract class o3 {
    public static final /* synthetic */ int a = 0;

    static {
        int i5 = r1.a;
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x001f, code lost:
    
        return r13 + r0;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int a(String str, byte[] bArr, int i5, int i6) {
        int i10;
        int i11;
        int length;
        int i12;
        char charAt;
        int length2 = str.length();
        int i13 = 0;
        while (true) {
            i10 = i5 + i6;
            if (i13 >= length2 || (i12 = i13 + i5) >= i10 || (charAt = str.charAt(i13)) >= 128) {
                break;
            }
            bArr[i12] = (byte) charAt;
            i13++;
        }
        int i14 = i5 + i13;
        while (i13 < length2) {
            char charAt2 = str.charAt(i13);
            if (charAt2 < 128 && i14 < i10) {
                bArr[i14] = (byte) charAt2;
                i14++;
            } else if (charAt2 < 2048 && i14 <= i10 - 2) {
                bArr[i14] = (byte) ((charAt2 >>> 6) | 960);
                bArr[i14 + 1] = (byte) ((charAt2 & '?') | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                i14 += 2;
            } else {
                if ((charAt2 >= 55296 && charAt2 <= 57343) || i14 > i10 - 3) {
                    if (i14 <= i10 - 4) {
                        i13++;
                        if (i13 != str.length()) {
                            char charAt3 = str.charAt(i13);
                            if (Character.isSurrogatePair(charAt2, charAt3)) {
                                int i15 = i14 + 3;
                                int codePoint = Character.toCodePoint(charAt2, charAt3);
                                bArr[i14] = (byte) ((codePoint >>> 18) | 240);
                                bArr[i14 + 1] = (byte) (((codePoint >>> 12) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                                bArr[i14 + 2] = (byte) (((codePoint >>> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                                i14 += 4;
                                bArr[i15] = (byte) ((codePoint & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                            }
                        }
                        byte[] bytes = str.getBytes(StandardCharsets.UTF_8);
                        length = bytes.length;
                        if (length - i5 > i6) {
                            throw new ArrayIndexOutOfBoundsException("Not enough space in output buffer to encode UTF-8 string");
                        }
                        System.arraycopy(bytes, 0, bArr, i5, length);
                    } else {
                        if (charAt2 < 55296 || charAt2 > 57343 || ((i11 = i13 + 1) != str.length() && Character.isSurrogatePair(charAt2, str.charAt(i11)))) {
                            throw new ArrayIndexOutOfBoundsException("Not enough space in output buffer to encode UTF-8 string");
                        }
                        byte[] bytes2 = str.getBytes(StandardCharsets.UTF_8);
                        length = bytes2.length;
                        if (length - i5 > i6) {
                            throw new ArrayIndexOutOfBoundsException("Not enough space in output buffer to encode UTF-8 string");
                        }
                        System.arraycopy(bytes2, 0, bArr, i5, length);
                    }
                    return i5 + length;
                }
                bArr[i14] = (byte) ((charAt2 >>> '\f') | DiscordVideoMediaSource.DEFAULT_HEIGHT);
                bArr[i14 + 1] = (byte) (((charAt2 >>> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                bArr[i14 + 2] = (byte) ((charAt2 & '?') | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                i14 += 3;
            }
            i13++;
        }
        return i14;
    }

    public static boolean b(byte[] bArr, int i5, int i6) {
        while (i5 < i6 && bArr[i5] >= 0) {
            i5++;
        }
        if (i5 >= i6) {
            return true;
        }
        while (i5 < i6) {
            int i10 = i5 + 1;
            byte b10 = bArr[i5];
            if (b10 >= 0) {
                i5 = i10;
            } else {
                if (b10 < -32) {
                    if (i10 < i6 && b10 >= -62) {
                        i5 += 2;
                        if (bArr[i10] > -65) {
                        }
                    }
                    return false;
                }
                if (b10 >= -16) {
                    if (i10 >= i6 - 2) {
                        return false;
                    }
                    int i11 = i5 + 2;
                    byte b11 = bArr[i10];
                    if (b11 <= -65) {
                        if ((((b11 + 112) + (b10 << 28)) >> 30) == 0) {
                            int i12 = i5 + 3;
                            if (bArr[i11] <= -65) {
                                i5 += 4;
                                if (bArr[i12] > -65) {
                                }
                            }
                        }
                    }
                    return false;
                }
                if (i10 >= i6 - 1) {
                    return false;
                }
                int i13 = i5 + 2;
                byte b12 = bArr[i10];
                if (b12 > -65 || (b10 == -32 && b12 < -96)) {
                    return false;
                }
                if (b10 == -19 && b12 >= -96) {
                    return false;
                }
                i5 += 3;
                if (bArr[i13] > -65) {
                    return false;
                }
            }
        }
        return true;
    }
}
