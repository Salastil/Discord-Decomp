package com.appsflyer.internal;

import androidx.recyclerview.widget.RecyclerView;
import java.io.BufferedInputStream;
import java.io.FilterInputStream;
import java.io.InputStream;

/* loaded from: classes.dex */
public final class AFk1mSDK extends FilterInputStream {
    private static final short AFAdRevenueData = (short) (Math.pow(2.0d, 15.0d) * (Math.sqrt(5.0d) - 1.0d));
    private int AFInAppEventParameterName;
    private int areAllFieldsValid;
    private int component1;
    private int component2;
    private int component3;
    private int component4;
    private final int copy;
    private final int copydefault;
    private int equals;
    private byte[] getCurrencyIso4217Code;
    private byte[] getMediationNetwork;
    private byte[] getMonetizationNetwork;
    private int getRevenue;
    private int hashCode;
    private int toString;

    public AFk1mSDK(InputStream inputStream, int[] iArr, int i5, byte[] bArr, int i6, int i10) {
        this(inputStream, iArr, i5, bArr, i6, i10, (byte) 0);
    }

    private int getCurrencyIso4217Code() {
        if (this.component4 == Integer.MAX_VALUE) {
            this.component4 = ((FilterInputStream) this).in.read();
        }
        if (this.getRevenue == 8) {
            byte[] bArr = this.getMediationNetwork;
            int i5 = this.component4;
            bArr[0] = (byte) i5;
            if (i5 < 0) {
                throw new IllegalStateException("unexpected block size");
            }
            int i6 = 1;
            do {
                int read = ((FilterInputStream) this).in.read(this.getMediationNetwork, i6, 8 - i6);
                if (read <= 0) {
                    break;
                }
                i6 += read;
            } while (i6 < 8);
            if (i6 < 8) {
                throw new IllegalStateException("unexpected block size");
            }
            int i10 = this.copy;
            if (i10 == this.copydefault) {
                getMonetizationNetwork();
            } else {
                if (this.AFInAppEventParameterName <= i10) {
                    getMonetizationNetwork();
                }
                int i11 = this.AFInAppEventParameterName;
                if (i11 < this.copydefault) {
                    this.AFInAppEventParameterName = i11 + 1;
                } else {
                    this.AFInAppEventParameterName = 1;
                }
            }
            int read2 = ((FilterInputStream) this).in.read();
            this.component4 = read2;
            this.getRevenue = 0;
            this.areAllFieldsValid = read2 < 0 ? 8 - (this.getMediationNetwork[7] & 255) : 8;
        }
        return this.areAllFieldsValid;
    }

    private void getMonetizationNetwork() {
        if (this.component1 == 3) {
            byte[] bArr = this.getMediationNetwork;
            System.arraycopy(bArr, 0, this.getCurrencyIso4217Code, 0, bArr.length);
        }
        byte[] bArr2 = this.getMediationNetwork;
        boolean z5 = true;
        char c6 = 2;
        int i5 = ((bArr2[0] << 24) & (-16777216)) + ((bArr2[1] << 16) & 16711680) + ((bArr2[2] << 8) & 65280) + (bArr2[3] & 255);
        int i6 = ((-16777216) & (bArr2[4] << 24)) + (16711680 & (bArr2[5] << 16)) + (65280 & (bArr2[6] << 8)) + (bArr2[7] & 255);
        int i10 = 0;
        while (true) {
            int i11 = this.component2;
            if (i10 >= i11) {
                break;
            }
            short s2 = AFAdRevenueData;
            i6 -= ((((i11 - i10) * s2) + i5) ^ ((i5 << 4) + this.toString)) ^ ((i5 >>> 5) + this.hashCode);
            i5 -= (((i6 << 4) + this.component3) ^ (((i11 - i10) * s2) + i6)) ^ ((i6 >>> 5) + this.equals);
            i10++;
            c6 = c6;
            z5 = z5;
        }
        byte[] bArr3 = this.getMediationNetwork;
        bArr3[0] = (byte) (i5 >> 24);
        bArr3[z5 ? 1 : 0] = (byte) (i5 >> 16);
        bArr3[c6] = (byte) (i5 >> 8);
        bArr3[3] = (byte) i5;
        bArr3[4] = (byte) (i6 >> 24);
        bArr3[5] = (byte) (i6 >> 16);
        bArr3[6] = (byte) (i6 >> 8);
        bArr3[7] = (byte) i6;
        if (this.component1 == 3) {
            for (int i12 = 0; i12 < 8; i12++) {
                byte[] bArr4 = this.getMediationNetwork;
                bArr4[i12] = (byte) (bArr4[i12] ^ this.getMonetizationNetwork[i12]);
            }
            byte[] bArr5 = this.getCurrencyIso4217Code;
            System.arraycopy(bArr5, 0, this.getMonetizationNetwork, 0, bArr5.length);
        }
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int available() {
        getCurrencyIso4217Code();
        return this.areAllFieldsValid - this.getRevenue;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final boolean markSupported() {
        return false;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read() {
        getCurrencyIso4217Code();
        int i5 = this.getRevenue;
        if (i5 >= this.areAllFieldsValid) {
            return -1;
        }
        byte[] bArr = this.getMediationNetwork;
        this.getRevenue = i5 + 1;
        return bArr[i5] & 255;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final long skip(long j) {
        long j5 = 0;
        while (j5 < j && read() != -1) {
            j5++;
        }
        return j5;
    }

    private AFk1mSDK(InputStream inputStream, int[] iArr, int i5, byte[] bArr, int i6, int i10, byte b10) {
        super(new BufferedInputStream(inputStream, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT));
        this.component4 = Integer.MAX_VALUE;
        this.AFInAppEventParameterName = 1;
        this.getMediationNetwork = new byte[8];
        this.getMonetizationNetwork = new byte[8];
        this.getCurrencyIso4217Code = new byte[8];
        this.getRevenue = 8;
        this.areAllFieldsValid = 8;
        this.component2 = Math.min(Math.max(i6, 5), 16);
        this.component1 = i10;
        if (i10 == 3) {
            System.arraycopy(bArr, 0, this.getMonetizationNetwork, 0, 8);
        }
        long j = (iArr[1] & 4294967295L) | ((iArr[0] & 4294967295L) << 32);
        if (i5 == 0) {
            this.component3 = (int) j;
            long j5 = j >> 3;
            short s2 = AFAdRevenueData;
            this.equals = (int) ((s2 * j5) >> 32);
            this.toString = (int) (j >> 32);
            this.hashCode = (int) (j5 + s2);
        } else {
            int i11 = (int) j;
            this.component3 = i11;
            this.equals = i11 * i5;
            this.toString = i5 ^ i11;
            this.hashCode = (int) (j >> 32);
        }
        this.copy = 100;
        this.copydefault = 100;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        int i10 = i5 + i6;
        for (int i11 = i5; i11 < i10; i11++) {
            getCurrencyIso4217Code();
            int i12 = this.getRevenue;
            if (i12 >= this.areAllFieldsValid) {
                if (i11 == i5) {
                    return -1;
                }
                return i6 - (i10 - i11);
            }
            byte[] bArr2 = this.getMediationNetwork;
            this.getRevenue = i12 + 1;
            bArr[i11] = bArr2[i12];
        }
        return i6;
    }
}
