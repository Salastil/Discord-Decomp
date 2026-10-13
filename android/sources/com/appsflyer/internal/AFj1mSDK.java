package com.appsflyer.internal;

import android.content.Context;
import com.appsflyer.AFLogger;
import com.appsflyer.internal.AFj1qSDK;
import com.miui.referrer.api.GetAppsReferrerClient;
import com.miui.referrer.api.GetAppsReferrerDetails;
import com.miui.referrer.api.GetAppsReferrerStateListener;
import java.util.HashMap;

/* loaded from: classes.dex */
public final class AFj1mSDK extends AFi1aSDK {
    public AFj1mSDK(AFc1pSDK aFc1pSDK, Runnable runnable) {
        super("store", "xiaomi", aFc1pSDK, runnable);
    }

    private boolean AFAdRevenueData() {
        if (!getMediationNetwork()) {
            return false;
        }
        try {
            Class.forName("com.miui.referrer.api.GetAppsReferrerClient");
            AFLogger.INSTANCE.d(AFg1cSDK.REFERRER, "Xiaomi Install Referrer is allowed");
            return true;
        } catch (ClassNotFoundException unused) {
            AFLogger.INSTANCE.v(AFg1cSDK.REFERRER, "Class com.miui.referrer.api.GetAppsReferrerClient not found");
            return false;
        } catch (Throwable th2) {
            AFLogger.INSTANCE.e(AFg1cSDK.REFERRER, "An error occurred while trying to access GetAppsReferrerClient", th2);
            return false;
        }
    }

    @Override // com.appsflyer.internal.AFj1qSDK
    public final void getCurrencyIso4217Code(final Context context) {
        if (AFAdRevenueData()) {
            this.component1 = System.currentTimeMillis();
            this.areAllFieldsValid = AFj1qSDK.AFa1vSDK.STARTED;
            addObserver(new AFj1qSDK.AnonymousClass1());
            final GetAppsReferrerClient build = GetAppsReferrerClient.Companion.newBuilder(context).build();
            build.startConnection(new GetAppsReferrerStateListener() { // from class: com.appsflyer.internal.AFj1mSDK.5
                public final void onGetAppsReferrerSetupFinished(int i5) {
                    AFj1mSDK.this.AFAdRevenueData.put("api_ver", Long.valueOf(AFj1iSDK.getCurrencyIso4217Code(context, "com.xiaomi.mipicks")));
                    AFj1mSDK.this.AFAdRevenueData.put("api_ver_name", AFj1iSDK.getRevenue(context, "com.xiaomi.mipicks"));
                    if (i5 == -1) {
                        AFLogger.INSTANCE.w(AFg1cSDK.REFERRER, "XiaomiInstallReferrer SERVICE_DISCONNECTED");
                        AFj1mSDK.this.AFAdRevenueData.put("response", "SERVICE_DISCONNECTED");
                    } else if (i5 == 0) {
                        AFj1mSDK aFj1mSDK = AFj1mSDK.this;
                        GetAppsReferrerClient getAppsReferrerClient = build;
                        aFj1mSDK.AFAdRevenueData.put("response", "OK");
                        try {
                            AFLogger aFLogger = AFLogger.INSTANCE;
                            AFg1cSDK aFg1cSDK = AFg1cSDK.REFERRER;
                            aFLogger.d(aFg1cSDK, "XiaomiInstallReferrer connected");
                            if (getAppsReferrerClient.isReady()) {
                                GetAppsReferrerDetails installReferrer = getAppsReferrerClient.getInstallReferrer();
                                String installReferrer2 = installReferrer.getInstallReferrer();
                                if (installReferrer2 != null) {
                                    aFj1mSDK.AFAdRevenueData.put("referrer", installReferrer2);
                                }
                                aFj1mSDK.AFAdRevenueData.put("click_ts", Long.valueOf(installReferrer.getReferrerClickTimestampSeconds()));
                                aFj1mSDK.AFAdRevenueData.put("install_begin_ts", Long.valueOf(installReferrer.getInstallBeginTimestampSeconds()));
                                HashMap hashMap = new HashMap();
                                hashMap.put("click_server_ts", Long.valueOf(installReferrer.getReferrerClickTimestampServerSeconds()));
                                hashMap.put("install_begin_server_ts", Long.valueOf(installReferrer.getInstallBeginTimestampServerSeconds()));
                                hashMap.put("install_version", installReferrer.getInstallVersion());
                                aFj1mSDK.AFAdRevenueData.put("xiaomi_custom", hashMap);
                            } else {
                                aFLogger.w(aFg1cSDK, "XiaomiReferrerClient: XiaomiInstallReferrer is not ready");
                            }
                        } catch (Throwable th2) {
                            AFLogger aFLogger2 = AFLogger.INSTANCE;
                            AFg1cSDK aFg1cSDK2 = AFg1cSDK.REFERRER;
                            StringBuilder sb2 = new StringBuilder("Failed to get Xiaomi install referrer: ");
                            sb2.append(th2.getMessage());
                            aFLogger2.w(aFg1cSDK2, sb2.toString());
                        }
                    } else if (i5 == 1) {
                        AFj1mSDK.this.AFAdRevenueData.put("response", "SERVICE_UNAVAILABLE");
                        AFLogger.INSTANCE.w(AFg1cSDK.REFERRER, "XiaomiInstallReferrer not supported");
                    } else if (i5 == 2) {
                        AFLogger.INSTANCE.w(AFg1cSDK.REFERRER, "XiaomiInstallReferrer FEATURE_NOT_SUPPORTED");
                        AFj1mSDK.this.AFAdRevenueData.put("response", "FEATURE_NOT_SUPPORTED");
                    } else if (i5 == 3) {
                        AFLogger.INSTANCE.w(AFg1cSDK.REFERRER, "XiaomiInstallReferrer DEVELOPER_ERROR");
                        AFj1mSDK.this.AFAdRevenueData.put("response", "DEVELOPER_ERROR");
                    } else if (i5 != 4) {
                        AFLogger.INSTANCE.w(AFg1cSDK.REFERRER, "responseCode not found.");
                    } else {
                        AFLogger.INSTANCE.w(AFg1cSDK.REFERRER, "XiaomiInstallReferrer DEVELOPER_ERROR");
                        AFj1mSDK.this.AFAdRevenueData.put("response", "PERMISSION_ERROR");
                    }
                    AFLogger.INSTANCE.d(AFg1cSDK.REFERRER, "Xiaomi Install Referrer collected locally");
                    AFj1mSDK.this.getMonetizationNetwork();
                    build.endConnection();
                }

                public final void onGetAppsServiceDisconnected() {
                }
            });
        }
    }
}
