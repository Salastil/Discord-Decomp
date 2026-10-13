package com.appsflyer.internal;

/* loaded from: classes.dex */
public final class AFk1gSDK {
    public int getCurrencyIso4217Code;
    public int getMediationNetwork;

    public static char[] getCurrencyIso4217Code(long j, char[] cArr, int i5) {
        int length = cArr.length;
        char[] cArr2 = new char[length];
        int i6 = 0;
        int i10 = 4;
        for (int i11 = 0; i11 < cArr.length; i11++) {
            if (((j >>> i11) & 1) == i5 && i6 < 4) {
                cArr2[i6] = cArr[i11];
            } else if (i10 < length) {
                cArr2[i10] = cArr[i11];
                i10++;
            } else {
                cArr2[i6] = cArr[i11];
            }
            i6++;
        }
        return cArr2;
    }
}
