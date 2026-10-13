package com.appsflyer.internal;

/* loaded from: classes.dex */
public final class AFk1dSDK {
    public int AFAdRevenueData;
    public int getCurrencyIso4217Code;
    public int getMonetizationNetwork;

    public static void AFAdRevenueData(int[] iArr) {
        for (int i5 = 0; i5 < iArr.length / 2; i5++) {
            int i6 = iArr[i5];
            iArr[i5] = iArr[(iArr.length - i5) - 1];
            iArr[(iArr.length - i5) - 1] = i6;
        }
    }

    public static int getCurrencyIso4217Code(int i5) {
        int[][] iArr = AFk1tSDK.getMediationNetwork.getMonetizationNetwork;
        return ((iArr[0][(i5 >>> 24) & 255] + iArr[1][(i5 >>> 16) & 255]) ^ iArr[2][(i5 >>> 8) & 255]) + iArr[3][i5 & 255];
    }
}
