package com.appsflyer.internal;

import android.content.ContentResolver;
import android.content.Context;
import android.os.Build;
import android.provider.Settings;
import com.appsflyer.AFLogger;
import com.appsflyer.AppsFlyerProperties;
import com.appsflyer.oaid.OaidClient;

/* loaded from: classes.dex */
public final class AFb1kSDK {
    public static Boolean getMediationNetwork;
    public static String getRevenue;

    /* JADX WARN: Removed duplicated region for block: B:11:0x005c A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0050  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static AFb1mSDK getCurrencyIso4217Code(Context context) {
        Boolean bool;
        OaidClient.Info fetch;
        AppsFlyerProperties appsFlyerProperties = AppsFlyerProperties.getInstance();
        String str = getRevenue;
        boolean z5 = str != null;
        if (!z5) {
            Boolean bool2 = getMediationNetwork;
            if ((bool2 != null && bool2.booleanValue()) || (getMediationNetwork == null && appsFlyerProperties.getBoolean(AppsFlyerProperties.COLLECT_OAID, true))) {
                try {
                    OaidClient oaidClient = new OaidClient(context);
                    oaidClient.setLogging(appsFlyerProperties.isEnableLog());
                    fetch = oaidClient.fetch();
                } catch (Throwable unused) {
                    str = null;
                }
                if (fetch != null) {
                    String id2 = fetch.getId();
                    try {
                        bool = fetch.getLat();
                        str = id2;
                    } catch (Throwable unused2) {
                        str = id2;
                        AFLogger.afDebugLog("No OAID library");
                        bool = null;
                        if (str != null) {
                        }
                    }
                    if (str != null) {
                        return null;
                    }
                    AFb1mSDK aFb1mSDK = new AFb1mSDK(str, bool);
                    aFb1mSDK.getMediationNetwork = Boolean.valueOf(z5);
                    return aFb1mSDK;
                }
            }
            bool = null;
            str = null;
            if (str != null) {
            }
        }
        bool = null;
        if (str != null) {
        }
    }

    private static boolean getMonetizationNetwork() {
        Boolean bool = getMediationNetwork;
        return bool == null || bool.booleanValue();
    }

    public static AFb1mSDK l_(ContentResolver contentResolver) {
        String str;
        if (!getMonetizationNetwork() || contentResolver == null || AppsFlyerProperties.getInstance().getString("amazon_aid") != null || !"Amazon".equals(Build.MANUFACTURER)) {
            return null;
        }
        int i5 = Settings.Secure.getInt(contentResolver, "limit_ad_tracking", 2);
        if (i5 == 0) {
            return new AFb1mSDK(Settings.Secure.getString(contentResolver, "advertising_id"), Boolean.FALSE);
        }
        if (i5 == 2) {
            return null;
        }
        try {
            str = Settings.Secure.getString(contentResolver, "advertising_id");
        } catch (Throwable th2) {
            AFLogger.afErrorLog("Couldn't fetch Amazon Advertising ID (Ad-Tracking is limited!)", th2);
            str = "";
        }
        return new AFb1mSDK(str, Boolean.TRUE);
    }
}
