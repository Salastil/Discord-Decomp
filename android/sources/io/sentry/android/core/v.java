package io.sentry.android.core;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class v {
    public static final /* synthetic */ int[] a;

    static {
        int[] iArr = new int[io.sentry.k0.values().length];
        a = iArr;
        try {
            iArr[io.sentry.k0.CONNECTED.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            a[io.sentry.k0.UNKNOWN.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            a[io.sentry.k0.NO_PERMISSION.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
    }
}
