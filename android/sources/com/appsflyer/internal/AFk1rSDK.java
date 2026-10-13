package com.appsflyer.internal;

/* loaded from: classes.dex */
public final class AFk1rSDK {
    public static long[] AFAdRevenueData(int i5, int i6) {
        long[] jArr = new long[4];
        jArr[0] = (i6 & 4294967295L) | ((i5 & 4294967295L) << 32);
        for (int i10 = 1; i10 < 4; i10++) {
            long j = jArr[i10 - 1];
            jArr[i10] = ((j ^ (j >> 30)) * 1812433253) + i10;
        }
        return jArr;
    }
}
