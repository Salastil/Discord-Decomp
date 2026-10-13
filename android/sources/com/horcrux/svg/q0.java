package com.horcrux.svg;

import com.facebook.react.bridge.ReadableType;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class q0 {
    public static final /* synthetic */ int[] a;

    static {
        int[] iArr = new int[ReadableType.values().length];
        a = iArr;
        try {
            iArr[ReadableType.Number.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            a[ReadableType.String.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            a[ReadableType.Array.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
    }
}
