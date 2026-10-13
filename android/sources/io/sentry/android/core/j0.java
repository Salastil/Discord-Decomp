package io.sentry.android.core;

import android.os.Build;
import com.discord.jank_stats.JankScreenContext;
import io.sentry.ILogger;
import io.sentry.SentryLevel;

/* loaded from: classes3.dex */
public final class j0 {
    public final ILogger a;

    public j0(ILogger iLogger) {
        d9.a.L(iLogger, "The ILogger object is required.");
        this.a = iLogger;
    }

    public final Boolean a() {
        boolean z5;
        try {
            if (Build.BRAND.startsWith("generic")) {
                if (!Build.DEVICE.startsWith("generic")) {
                }
                z5 = true;
                return Boolean.valueOf(z5);
            }
            String str = Build.FINGERPRINT;
            if (!str.startsWith("generic") && !str.startsWith(JankScreenContext.UNKNOWN_SCREEN)) {
                String str2 = Build.HARDWARE;
                if (!str2.contains("goldfish") && !str2.contains("ranchu")) {
                    String str3 = Build.MODEL;
                    if (!str3.contains("google_sdk") && !str3.contains("Emulator") && !str3.contains("Android SDK built for x86") && !Build.MANUFACTURER.contains("Genymotion")) {
                        String str4 = Build.PRODUCT;
                        if (!str4.contains("sdk_google") && !str4.contains("google_sdk") && !str4.contains("sdk") && !str4.contains("sdk_x86") && !str4.contains("vbox86p") && !str4.contains("emulator") && !str4.contains("simulator")) {
                            z5 = false;
                            return Boolean.valueOf(z5);
                        }
                    }
                }
            }
            z5 = true;
            return Boolean.valueOf(z5);
        } catch (Throwable th2) {
            this.a.k(SentryLevel.ERROR, "Error checking whether application is running in an emulator.", th2);
            return null;
        }
    }
}
