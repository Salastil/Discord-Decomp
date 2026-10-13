package com.margelo.nitro.rive;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class w0 {
    public static final /* synthetic */ int[] a;

    static {
        int[] iArr = new int[DataBindMode.values().length];
        try {
            iArr[DataBindMode.AUTO.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            iArr[DataBindMode.NONE.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        a = iArr;
    }
}
