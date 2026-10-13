package com.appsflyer.internal;

import androidx.recyclerview.widget.RecyclerView;
import java.io.BufferedInputStream;
import java.io.FilterInputStream;
import java.io.InputStream;

/* loaded from: classes.dex */
public final class AFk1pSDK extends FilterInputStream {
    private int AFInAppEventType;
    private int AFLogger;
    private final int areAllFieldsValid;
    private final int[] component1;
    private final byte[] component2;
    private final int[] component3;
    private final byte[][] component4;
    private final int copy;
    private final int copydefault;
    private int equals;
    private final byte[] hashCode;
    private int toString;
    private static final byte[] getCurrencyIso4217Code = AFk1nSDK.getMonetizationNetwork;
    private static final int[] getMonetizationNetwork = AFk1nSDK.AFAdRevenueData;
    private static final int[] getMediationNetwork = AFk1nSDK.getRevenue;
    private static final int[] AFAdRevenueData = AFk1nSDK.getCurrencyIso4217Code;
    private static final int[] getRevenue = AFk1nSDK.getMediationNetwork;

    public AFk1pSDK(InputStream inputStream, int i5, byte[] bArr, byte[][] bArr2) {
        this(inputStream, i5, bArr, bArr2, (byte) 0);
    }

    private int AFAdRevenueData() {
        if (this.toString == Integer.MAX_VALUE) {
            this.toString = ((FilterInputStream) this).in.read();
        }
        if (this.AFInAppEventType == 16) {
            byte[] bArr = this.component2;
            int i5 = this.toString;
            bArr[0] = (byte) i5;
            if (i5 < 0) {
                throw new IllegalStateException("unexpected block size");
            }
            int i6 = 1;
            do {
                int read = ((FilterInputStream) this).in.read(this.component2, i6, 16 - i6);
                if (read <= 0) {
                    break;
                }
                i6 += read;
            } while (i6 < 16);
            if (i6 < 16) {
                throw new IllegalStateException("unexpected block size");
            }
            int i10 = this.copydefault;
            if (i10 == this.copy) {
                AFAdRevenueData(this.component2, this.hashCode);
            } else {
                if (this.equals <= i10) {
                    AFAdRevenueData(this.component2, this.hashCode);
                } else {
                    byte[] bArr2 = this.component2;
                    System.arraycopy(bArr2, 0, this.hashCode, 0, bArr2.length);
                }
                int i11 = this.equals;
                if (i11 < this.copy) {
                    this.equals = i11 + 1;
                } else {
                    this.equals = 1;
                }
            }
            int read2 = ((FilterInputStream) this).in.read();
            this.toString = read2;
            this.AFInAppEventType = 0;
            this.AFLogger = read2 < 0 ? 16 - (this.hashCode[15] & 255) : 16;
        }
        return this.AFLogger;
    }

    private static byte[][] getMonetizationNetwork(byte[][] bArr) {
        byte[][] bArr2 = new byte[bArr.length][];
        for (int i5 = 0; i5 < bArr.length; i5++) {
            bArr2[i5] = new byte[bArr[i5].length];
            int i6 = 0;
            while (true) {
                byte[] bArr3 = bArr[i5];
                if (i6 < bArr3.length) {
                    bArr2[i5][bArr3[i6]] = (byte) i6;
                    i6++;
                }
            }
        }
        return bArr2;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int available() {
        AFAdRevenueData();
        return this.AFLogger - this.AFInAppEventType;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        super.close();
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final synchronized void mark(int i5) {
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final boolean markSupported() {
        return false;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read() {
        AFAdRevenueData();
        int i5 = this.AFInAppEventType;
        if (i5 >= this.AFLogger) {
            return -1;
        }
        byte[] bArr = this.hashCode;
        this.AFInAppEventType = i5 + 1;
        return bArr[i5] & 255;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final synchronized void reset() {
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final long skip(long j) {
        long j5 = 0;
        while (j5 < j && read() != -1) {
            j5++;
        }
        return j5;
    }

    private AFk1pSDK(InputStream inputStream, int i5, byte[] bArr, byte[][] bArr2, byte b10) {
        super(new BufferedInputStream(inputStream, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT));
        this.component3 = new int[4];
        this.component2 = new byte[16];
        this.hashCode = new byte[16];
        this.equals = 1;
        this.toString = Integer.MAX_VALUE;
        this.AFInAppEventType = 16;
        this.AFLogger = 16;
        this.areAllFieldsValid = i5;
        this.component1 = AFk1nSDK.getMonetizationNetwork(bArr, i5);
        this.component4 = getMonetizationNetwork(bArr2);
        this.copydefault = 100;
        this.copy = 100;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        int i10 = i5 + i6;
        for (int i11 = i5; i11 < i10; i11++) {
            AFAdRevenueData();
            int i12 = this.AFInAppEventType;
            if (i12 >= this.AFLogger) {
                if (i11 == i5) {
                    return -1;
                }
                return i6 - (i10 - i11);
            }
            byte[] bArr2 = this.hashCode;
            this.AFInAppEventType = i12 + 1;
            bArr[i11] = bArr2[i12];
        }
        return i6;
    }

    private void AFAdRevenueData(byte[] bArr, byte[] bArr2) {
        int[] iArr = this.component3;
        boolean z5 = true;
        char c6 = 2;
        char c8 = '\b';
        char c10 = 3;
        int i5 = (bArr[0] << 24) | ((bArr[1] & 255) << 16) | ((bArr[2] & 255) << 8) | (bArr[3] & 255);
        int[] iArr2 = this.component1;
        iArr[0] = i5 ^ iArr2[0];
        char c11 = 5;
        char c12 = 6;
        iArr[1] = ((((bArr[4] << 24) | ((bArr[5] & 255) << 16)) | ((bArr[6] & 255) << 8)) | (bArr[7] & 255)) ^ iArr2[1];
        iArr[2] = ((bArr[11] & 255) | (((bArr[8] << 24) | ((bArr[9] & 255) << 16)) | ((bArr[10] & 255) << 8))) ^ iArr2[2];
        char c13 = 14;
        iArr[3] = (((((bArr[13] & 255) << 16) | (bArr[12] << 24)) | ((bArr[14] & 255) << 8)) | (bArr[15] & 255)) ^ iArr2[3];
        int i6 = 1;
        int i10 = 4;
        while (i6 < this.areAllFieldsValid) {
            int[] iArr3 = getMonetizationNetwork;
            int[] iArr4 = this.component3;
            boolean z6 = z5;
            byte[][] bArr3 = this.component4;
            byte[] bArr4 = bArr3[0];
            int i11 = iArr3[iArr4[bArr4[0]] >>> 24];
            int[] iArr5 = getMediationNetwork;
            byte[] bArr5 = bArr3[z6 ? 1 : 0];
            char c14 = c6;
            int i12 = i11 ^ iArr5[(iArr4[bArr5[0]] >>> 16) & 255];
            int[] iArr6 = AFAdRevenueData;
            byte[] bArr6 = bArr3[c14];
            char c15 = c10;
            int i13 = i12 ^ iArr6[(iArr4[bArr6[0]] >>> 8) & 255];
            int[] iArr7 = getRevenue;
            byte[] bArr7 = bArr3[c15];
            char c16 = c8;
            int i14 = i13 ^ iArr7[iArr4[bArr7[0]] & 255];
            int[] iArr8 = this.component1;
            int i15 = i14 ^ iArr8[i10];
            char c17 = c13;
            char c18 = c11;
            int i16 = (((iArr3[iArr4[bArr4[z6 ? 1 : 0]] >>> 24] ^ iArr5[(iArr4[bArr5[z6 ? 1 : 0]] >>> 16) & 255]) ^ iArr6[(iArr4[bArr6[z6 ? 1 : 0]] >>> 8) & 255]) ^ iArr7[iArr4[bArr7[z6 ? 1 : 0]] & 255]) ^ iArr8[i10 + 1];
            int i17 = (((iArr3[iArr4[bArr4[c14]] >>> 24] ^ iArr5[(iArr4[bArr5[c14]] >>> 16) & 255]) ^ iArr6[(iArr4[bArr6[c14]] >>> 8) & 255]) ^ iArr7[iArr4[bArr7[c14]] & 255]) ^ iArr8[i10 + 2];
            int i18 = (((iArr3[iArr4[bArr4[c15]] >>> 24] ^ iArr5[(iArr4[bArr5[c15]] >>> 16) & 255]) ^ iArr6[(iArr4[bArr6[c15]] >>> 8) & 255]) ^ iArr7[iArr4[bArr7[c15]] & 255]) ^ iArr8[i10 + 3];
            iArr4[0] = i15;
            iArr4[z6 ? 1 : 0] = i16;
            iArr4[c14] = i17;
            iArr4[c15] = i18;
            i6++;
            i10 += 4;
            z5 = z6 ? 1 : 0;
            c6 = c14;
            c10 = c15;
            c8 = c16;
            c11 = c18;
            c13 = c17;
            c12 = c12;
        }
        boolean z7 = z5;
        char c19 = c6;
        char c20 = c10;
        char c21 = c8;
        char c22 = c13;
        int[] iArr9 = this.component1;
        int i19 = iArr9[i10];
        byte[] bArr8 = getCurrencyIso4217Code;
        int[] iArr10 = this.component3;
        byte[][] bArr9 = this.component4;
        byte[] bArr10 = bArr9[0];
        bArr2[0] = (byte) (bArr8[iArr10[bArr10[0]] >>> 24] ^ (i19 >>> 24));
        byte[] bArr11 = bArr9[z7 ? 1 : 0];
        bArr2[z7 ? 1 : 0] = (byte) (bArr8[(iArr10[bArr11[0]] >>> 16) & 255] ^ (i19 >>> 16));
        byte[] bArr12 = bArr9[c19];
        bArr2[c19] = (byte) (bArr8[(iArr10[bArr12[0]] >>> 8) & 255] ^ (i19 >>> 8));
        byte[] bArr13 = bArr9[c20];
        bArr2[c20] = (byte) (i19 ^ bArr8[iArr10[bArr13[0]] & 255]);
        int i20 = iArr9[i10 + 1];
        bArr2[4] = (byte) (bArr8[iArr10[bArr10[z7 ? 1 : 0]] >>> 24] ^ (i20 >>> 24));
        bArr2[c11] = (byte) (bArr8[(iArr10[bArr11[z7 ? 1 : 0]] >>> 16) & 255] ^ (i20 >>> 16));
        bArr2[c12] = (byte) (bArr8[(iArr10[bArr12[z7 ? 1 : 0]] >>> 8) & 255] ^ (i20 >>> 8));
        bArr2[7] = (byte) (i20 ^ bArr8[iArr10[bArr13[z7 ? 1 : 0]] & 255]);
        int i21 = iArr9[i10 + 2];
        bArr2[c21] = (byte) (bArr8[iArr10[bArr10[c19]] >>> 24] ^ (i21 >>> 24));
        bArr2[9] = (byte) (bArr8[(iArr10[bArr11[c19]] >>> 16) & 255] ^ (i21 >>> 16));
        bArr2[10] = (byte) (bArr8[(iArr10[bArr12[c19]] >>> 8) & 255] ^ (i21 >>> 8));
        bArr2[11] = (byte) (i21 ^ bArr8[iArr10[bArr13[c19]] & 255]);
        int i22 = iArr9[i10 + 3];
        bArr2[12] = (byte) (bArr8[iArr10[bArr10[c20]] >>> 24] ^ (i22 >>> 24));
        bArr2[13] = (byte) (bArr8[(iArr10[bArr11[c20]] >>> 16) & 255] ^ (i22 >>> 16));
        bArr2[c22] = (byte) (bArr8[(iArr10[bArr12[c20]] >>> 8) & 255] ^ (i22 >>> 8));
        bArr2[15] = (byte) (i22 ^ bArr8[iArr10[bArr13[c20]] & 255]);
    }
}
