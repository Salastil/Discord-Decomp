package io.sentry.android.core;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class n0 {
    public static final /* synthetic */ int[] a;

    static {
        int[] iArr = new int[io.sentry.k0.values().length];
        a = iArr;
        try {
            iArr[io.sentry.k0.DISCONNECTED.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            a[io.sentry.k0.CONNECTED.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
    }
}
