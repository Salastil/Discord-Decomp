package com.appsflyer.internal;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes.dex */
public final class AFk1nSDK {
    private static byte[] component2 = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
    static final byte[] getMonetizationNetwork = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
    static final int[] AFAdRevenueData = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
    static final int[] getRevenue = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
    static final int[] getCurrencyIso4217Code = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
    static final int[] getMediationNetwork = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
    private static int[] areAllFieldsValid = new int[10];

    static {
        byte[] bArr;
        int i5;
        byte b10 = 1;
        byte b11 = 1;
        do {
            b10 = (byte) (((b10 & ByteCompanionObject.MIN_VALUE) != 0 ? 27 : 0) ^ ((b10 << 1) ^ b10));
            byte b12 = (byte) (b11 ^ (b11 << 1));
            byte b13 = (byte) (b12 ^ (b12 << 2));
            byte b14 = (byte) (b13 ^ (b13 << 4));
            b11 = (byte) (b14 ^ ((b14 & ByteCompanionObject.MIN_VALUE) != 0 ? (byte) 9 : (byte) 0));
            bArr = component2;
            i5 = b10 & 255;
            int i6 = b11 & 255;
            bArr[i5] = (byte) (((((b11 ^ 99) ^ ((i6 << 1) | (i6 >> 7))) ^ ((i6 << 2) | (i6 >> 6))) ^ ((i6 << 3) | (i6 >> 5))) ^ ((i6 >> 4) | (i6 << 4)));
        } while (i5 != 1);
        bArr[0] = 99;
        for (int i10 = 0; i10 < 256; i10++) {
            int i11 = component2[i10] & 255;
            getMonetizationNetwork[i11] = (byte) i10;
            int i12 = i10 << 1;
            if (i12 >= 256) {
                i12 ^= 283;
            }
            int i13 = i12 << 1;
            if (i13 >= 256) {
                i13 ^= 283;
            }
            int i14 = i13 << 1;
            if (i14 >= 256) {
                i14 ^= 283;
            }
            int i15 = i14 ^ i10;
            int i16 = ((i12 ^ (i13 ^ i14)) << 24) | (i15 << 16) | ((i15 ^ i13) << 8) | (i15 ^ i12);
            AFAdRevenueData[i11] = i16;
            getRevenue[i11] = (i16 >>> 8) | (i16 << 24);
            getCurrencyIso4217Code[i11] = (i16 >>> 16) | (i16 << 16);
            getMediationNetwork[i11] = (i16 << 8) | (i16 >>> 24);
        }
        areAllFieldsValid[0] = 16777216;
        int i17 = 1;
        for (int i18 = 1; i18 < 10; i18++) {
            i17 <<= 1;
            if (i17 >= 256) {
                i17 ^= 283;
            }
            areAllFieldsValid[i18] = i17 << 24;
        }
    }

    public static byte[][] getMediationNetwork(int i5) {
        byte[][] bArr = new byte[4][];
        for (int i6 = 0; i6 < 4; i6++) {
            int i10 = i5 >>> (i6 << 3);
            bArr[i6] = new byte[]{(byte) (i10 & 3), (byte) ((i10 >> 2) & 3), (byte) ((i10 >> 4) & 3), (byte) ((i10 >> 6) & 3)};
        }
        return bArr;
    }

    public static int[] getMonetizationNetwork(byte[] bArr, int i5) {
        if (bArr.length != 16) {
            throw new IllegalArgumentException();
        }
        int i6 = 4;
        int i10 = (i5 + 1) * 4;
        int[] iArr = new int[i10];
        int i11 = 0;
        for (int i12 = 0; i12 < 4; i12++) {
            int i13 = i11 + 3;
            int i14 = ((bArr[i11 + 1] & 255) << 16) | (bArr[i11] << 24) | ((bArr[i11 + 2] & 255) << 8);
            i11 += 4;
            iArr[i12] = i14 | (bArr[i13] & 255);
        }
        int i15 = 4;
        int i16 = 0;
        int i17 = 0;
        while (i15 < i10) {
            int i18 = iArr[i15 - 1];
            if (i16 == 0) {
                byte[] bArr2 = component2;
                i18 = ((bArr2[i18 >>> 24] & 255) | (((bArr2[(i18 >>> 16) & 255] << 24) | ((bArr2[(i18 >>> 8) & 255] & 255) << 16)) | ((bArr2[i18 & 255] & 255) << 8))) ^ areAllFieldsValid[i17];
                i16 = 4;
                i17++;
            }
            iArr[i15] = i18 ^ iArr[i15 - 4];
            i15++;
            i16--;
        }
        if (bArr.length != 16) {
            throw new IllegalArgumentException();
        }
        int[] iArr2 = new int[i10];
        int i19 = i5 * 4;
        iArr2[0] = iArr[i19];
        int i20 = 1;
        iArr2[1] = iArr[i19 + 1];
        iArr2[2] = iArr[i19 + 2];
        char c6 = 3;
        iArr2[3] = iArr[i19 + 3];
        int i21 = i19 - 4;
        while (i20 < i5) {
            int i22 = iArr[i21];
            int[] iArr3 = AFAdRevenueData;
            byte[] bArr3 = component2;
            int i23 = iArr3[bArr3[i22 >>> 24] & 255];
            int[] iArr4 = getRevenue;
            int i24 = i23 ^ iArr4[bArr3[(i22 >>> 16) & 255] & 255];
            int[] iArr5 = getCurrencyIso4217Code;
            int i25 = i24 ^ iArr5[bArr3[(i22 >>> 8) & 255] & 255];
            int[] iArr6 = getMediationNetwork;
            iArr2[i6] = iArr6[bArr3[i22 & 255] & 255] ^ i25;
            int i26 = iArr[i21 + 1];
            char c8 = c6;
            int[] iArr7 = iArr2;
            iArr7[i6 + 1] = ((iArr4[bArr3[(i26 >>> 16) & 255] & 255] ^ iArr3[bArr3[i26 >>> 24] & 255]) ^ iArr5[bArr3[(i26 >>> 8) & 255] & 255]) ^ iArr6[bArr3[i26 & 255] & 255];
            int i27 = iArr[i21 + 2];
            int i28 = i6 + 3;
            iArr7[i6 + 2] = iArr6[bArr3[i27 & 255] & 255] ^ ((iArr3[bArr3[i27 >>> 24] & 255] ^ iArr4[bArr3[(i27 >>> 16) & 255] & 255]) ^ iArr5[bArr3[(i27 >>> 8) & 255] & 255]);
            int i29 = iArr[i21 + 3];
            i6 += 4;
            iArr7[i28] = iArr6[bArr3[i29 & 255] & 255] ^ ((iArr3[bArr3[i29 >>> 24] & 255] ^ iArr4[bArr3[(i29 >>> 16) & 255] & 255]) ^ iArr5[bArr3[(i29 >>> 8) & 255] & 255]);
            i21 -= 4;
            i20++;
            c6 = c8;
            iArr2 = iArr7;
        }
        int[] iArr8 = iArr2;
        iArr8[i6] = iArr[i21];
        iArr8[i6 + 1] = iArr[i21 + 1];
        iArr8[i6 + 2] = iArr[i21 + 2];
        iArr8[i6 + 3] = iArr[i21 + 3];
        return iArr8;
    }
}
