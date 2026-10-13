package com.appsflyer.internal;

/* loaded from: classes.dex */
public class AFk1oSDK {
    public static void AFAdRevenueData(byte[] bArr, byte b10, long j) {
        for (int i5 = 0; i5 < bArr.length; i5++) {
            if (((1 << i5) & j) != 0) {
                bArr[i5] = (byte) (bArr[i5] ^ b10);
            }
        }
    }
}
