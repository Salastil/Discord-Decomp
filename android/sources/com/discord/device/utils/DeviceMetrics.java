package com.discord.device.utils;

import android.app.Activity;
import android.graphics.Insets;
import android.os.Build;
import android.view.WindowInsets;
import androidx.window.layout.WindowMetrics;
import com.discord.device.react_events.MetricsSize;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import t3.a;
import t3.b;
import t3.c;

@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0012\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007J\u0012\u0010\b\u001a\u0004\u0018\u00010\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007¨\u0006\t"}, d2 = {"Lcom/discord/device/utils/DeviceMetrics;", "", "<init>", "()V", "getScreenSize", "Lcom/discord/device/react_events/MetricsSize;", "currentActivity", "Landroid/app/Activity;", "getWindowSize", "device_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class DeviceMetrics {

    @NotNull
    public static final DeviceMetrics INSTANCE = new DeviceMetrics();

    private DeviceMetrics() {
    }

    public final MetricsSize getScreenSize(Activity currentActivity) {
        if (Build.VERSION.SDK_INT < 34 || currentActivity == null) {
            return null;
        }
        try {
            b.a.getClass();
            c it = a.f18169b;
            Intrinsics.checkNotNullParameter(it, "it");
            return new MetricsSize(it.a(currentActivity));
        } catch (Exception unused) {
            return null;
        }
    }

    public final MetricsSize getWindowSize(Activity currentActivity) {
        int i5;
        int i6;
        int i10;
        int i11;
        if (currentActivity == null) {
            return null;
        }
        try {
            b.a.getClass();
            c it = a.f18169b;
            Intrinsics.checkNotNullParameter(it, "it");
            WindowMetrics a = it.a(currentActivity);
            if (Build.VERSION.SDK_INT < 34) {
                return null;
            }
            Insets insetsIgnoringVisibility = currentActivity.getWindowManager().getCurrentWindowMetrics().getWindowInsets().getInsetsIgnoringVisibility(WindowInsets.Type.systemBars() | WindowInsets.Type.displayCutout());
            Intrinsics.checkNotNullExpressionValue(insetsIgnoringVisibility, "getInsetsIgnoringVisibility(...)");
            int width = a.a().width();
            i5 = insetsIgnoringVisibility.left;
            int i12 = width - i5;
            i6 = insetsIgnoringVisibility.right;
            int i13 = i12 - i6;
            int height = a.a().height();
            i10 = insetsIgnoringVisibility.top;
            i11 = insetsIgnoringVisibility.bottom;
            return new MetricsSize(i13, (height - i10) - i11);
        } catch (Exception unused) {
            return null;
        }
    }
}
