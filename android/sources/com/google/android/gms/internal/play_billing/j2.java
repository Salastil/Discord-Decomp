package com.google.android.gms.internal.play_billing;

import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public abstract class j2 {
    public static final byte[] a;

    static {
        byte[] bArr = new byte[0];
        a = bArr;
        ByteBuffer.wrap(bArr);
    }

    public static int a(int i5, int i6, int i10, byte[] bArr) {
        for (int i11 = i6; i11 < i6 + i10; i11++) {
            i5 = (i5 * 31) + bArr[i11];
        }
        return i5;
    }
}
