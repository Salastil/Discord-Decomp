package com.horcrux.svg;

import com.facebook.react.bridge.ReadableType;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class w1 {
    public static final /* synthetic */ int[] a;

    static {
        int[] iArr = new int[ReadableType.values().length];
        a = iArr;
        try {
            iArr[ReadableType.Map.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            a[ReadableType.Number.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            a[ReadableType.Null.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
    }
}
