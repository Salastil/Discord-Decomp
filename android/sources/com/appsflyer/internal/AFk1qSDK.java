package com.appsflyer.internal;

import androidx.recyclerview.widget.RecyclerView;
import java.io.BufferedInputStream;
import java.io.FilterInputStream;
import java.io.InputStream;

/* loaded from: classes.dex */
public final class AFk1qSDK extends FilterInputStream {
    private final int AFAdRevenueData;
    private int areAllFieldsValid;
    private short component1;
    private int component2;
    private byte[] component3;
    private long[] component4;
    private int equals;
    private final int getCurrencyIso4217Code;
    private int getMediationNetwork;
    private long[] getMonetizationNetwork;
    private final int getRevenue;

    public AFk1qSDK(InputStream inputStream, int i5, int i6, short s2, int i10, int i11) {
        this(inputStream, i5, i6, s2, i10, i11, (byte) 0);
    }

    private int getMediationNetwork() {
        int i5;
        if (this.component2 == Integer.MAX_VALUE) {
            this.component2 = ((FilterInputStream) this).in.read();
        }
        if (this.areAllFieldsValid == this.AFAdRevenueData) {
            byte[] bArr = this.component3;
            int i6 = this.component2;
            bArr[0] = (byte) i6;
            if (i6 < 0) {
                throw new IllegalStateException("unexpected block size");
            }
            int i10 = 1;
            do {
                int read = ((FilterInputStream) this).in.read(this.component3, i10, this.AFAdRevenueData - i10);
                if (read <= 0) {
                    break;
                }
                i10 += read;
            } while (i10 < this.AFAdRevenueData);
            if (i10 < this.AFAdRevenueData) {
                throw new IllegalStateException("unexpected block size");
            }
            int i11 = this.getRevenue;
            if (i11 == this.getCurrencyIso4217Code) {
                getMonetizationNetwork();
            } else {
                if (this.getMediationNetwork <= i11) {
                    getMonetizationNetwork();
                }
                int i12 = this.getMediationNetwork;
                if (i12 < this.getCurrencyIso4217Code) {
                    this.getMediationNetwork = i12 + 1;
                } else {
                    this.getMediationNetwork = 1;
                }
            }
            int read2 = ((FilterInputStream) this).in.read();
            this.component2 = read2;
            this.areAllFieldsValid = 0;
            if (read2 < 0) {
                int i13 = this.AFAdRevenueData;
                i5 = i13 - (this.component3[i13 - 1] & 255);
            } else {
                i5 = this.AFAdRevenueData;
            }
            this.equals = i5;
        }
        return this.equals;
    }

    private void getMonetizationNetwork() {
        long[] jArr = this.getMonetizationNetwork;
        long[] jArr2 = this.component4;
        short s2 = this.component1;
        long j = jArr[s2 % 4] * 2147483085;
        long j5 = jArr2[(s2 + 2) % 4];
        int i5 = (s2 + 3) % 4;
        jArr2[i5] = ((jArr[i5] * 2147483085) + j5) / 2147483647L;
        jArr[i5] = (j + j5) % 2147483647L;
        for (int i6 = 0; i6 < this.AFAdRevenueData; i6++) {
            this.component3[i6] = (byte) (r1[i6] ^ ((this.getMonetizationNetwork[this.component1] >> (i6 << 3)) & 255));
        }
        this.component1 = (short) ((this.component1 + 1) % 4);
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int available() {
        getMediationNetwork();
        return this.equals - this.areAllFieldsValid;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final boolean markSupported() {
        return false;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read() {
        getMediationNetwork();
        int i5 = this.areAllFieldsValid;
        if (i5 >= this.equals) {
            return -1;
        }
        byte[] bArr = this.component3;
        this.areAllFieldsValid = i5 + 1;
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

    private AFk1qSDK(InputStream inputStream, int i5, int i6, short s2, int i10, int i11, byte b10) {
        super(new BufferedInputStream(inputStream, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT));
        this.getMediationNetwork = 1;
        this.component2 = Integer.MAX_VALUE;
        int min = Math.min(Math.max((int) s2, 4), 8);
        this.AFAdRevenueData = min;
        this.component3 = new byte[min];
        this.getMonetizationNetwork = new long[4];
        this.component4 = new long[4];
        this.areAllFieldsValid = min;
        this.equals = min;
        this.getMonetizationNetwork = AFk1rSDK.AFAdRevenueData(i5 ^ i11, min ^ i11);
        this.component4 = AFk1rSDK.AFAdRevenueData(i6 ^ i11, i10 ^ i11);
        this.getRevenue = 100;
        this.getCurrencyIso4217Code = 100;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        int i10 = i5 + i6;
        for (int i11 = i5; i11 < i10; i11++) {
            getMediationNetwork();
            int i12 = this.areAllFieldsValid;
            if (i12 >= this.equals) {
                if (i11 == i5) {
                    return -1;
                }
                return i6 - (i10 - i11);
            }
            byte[] bArr2 = this.component3;
            this.areAllFieldsValid = i12 + 1;
            bArr[i11] = bArr2[i12];
        }
        return i6;
    }
}
