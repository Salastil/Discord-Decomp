package io.sentry.android.core;

import io.sentry.f3;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class f {
    public static final /* synthetic */ int[] a;

    static {
        int[] iArr = new int[f3.values().length];
        a = iArr;
        try {
            iArr[f3.TRACE.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            a[f3.MANUAL.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
    }
}
