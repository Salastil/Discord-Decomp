package io.sentry.util;

/* loaded from: classes3.dex */
public abstract class h {
    public static final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public static final boolean f12041b;

    static {
        try {
            a = "The Android Project".equals(System.getProperty("java.vendor"));
        } catch (Throwable unused) {
            a = false;
        }
        try {
            String property = System.getProperty("java.specification.version");
            if (property != null) {
                f12041b = Double.valueOf(property).doubleValue() >= 9.0d;
            } else {
                f12041b = false;
            }
        } catch (Throwable unused2) {
            f12041b = false;
        }
    }
}
