package com.appsflyer.internal;

/* loaded from: classes.dex */
public final class AFk1vSDK {
    public static void getMonetizationNetwork(int i5, int i6, boolean z5, int i10, int[] iArr, int[][] iArr2, int[] iArr3) {
        if (!z5) {
            getRevenue(iArr);
        }
        int i11 = 0;
        while (i11 < i10) {
            int i12 = i5 ^ iArr[i11];
            int revenue = i6 ^ getRevenue(i12, iArr2);
            i11++;
            i6 = i12;
            i5 = revenue;
        }
        int i13 = i5 ^ iArr[iArr.length - 2];
        int i14 = i6 ^ iArr[iArr.length - 1];
        if (!z5) {
            getRevenue(iArr);
        }
        iArr3[0] = i14;
        iArr3[1] = i13;
    }

    private static void getRevenue(int[] iArr) {
        for (int i5 = 0; i5 < iArr.length / 2; i5++) {
            int i6 = iArr[i5];
            iArr[i5] = iArr[(iArr.length - i5) - 1];
            iArr[(iArr.length - i5) - 1] = i6;
        }
    }

    private static int getRevenue(int i5, int[][] iArr) {
        return ((iArr[0][i5 >>> 24] + iArr[1][(i5 >>> 16) & 255]) ^ iArr[2][(i5 >>> 8) & 255]) + iArr[3][i5 & 255];
    }
}
