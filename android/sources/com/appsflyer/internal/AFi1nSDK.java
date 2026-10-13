package com.appsflyer.internal;

import android.app.Activity;
import android.net.Uri;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class AFi1nSDK implements AFi1kSDK {
    private String getMonetizationNetwork;

    private static String getRevenue(Activity activity) {
        Uri k_ = AFb1tSDK.k_(activity != null ? activity.getIntent() : null);
        String obj = k_ != null ? k_.toString() : null;
        if (obj == null) {
            obj = "";
        }
        if (getRevenue(obj)) {
            return null;
        }
        return obj;
    }

    @Override // com.appsflyer.internal.AFi1kSDK
    @NotNull
    public final String getCurrencyIso4217Code(Activity activity) {
        Uri referrer = (activity == null || activity.getIntent() == null) ? null : activity.getReferrer();
        String obj = referrer != null ? referrer.toString() : null;
        return obj == null ? "" : obj;
    }

    @Override // com.appsflyer.internal.AFi1kSDK
    public final String getMediationNetwork(Activity activity) {
        String str = this.getMonetizationNetwork;
        this.getMonetizationNetwork = null;
        return (str == null || str.length() == 0) ? getRevenue(activity) : str;
    }

    @Override // com.appsflyer.internal.AFi1kSDK
    public final void getMonetizationNetwork(@NotNull Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "");
        String str = this.getMonetizationNetwork;
        if (str == null || str.length() == 0) {
            this.getMonetizationNetwork = getRevenue(activity);
        }
    }

    private static boolean getRevenue(String str) {
        return x.o(str, "android-app://", false);
    }
}
