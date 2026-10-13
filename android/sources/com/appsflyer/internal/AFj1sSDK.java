package com.appsflyer.internal;

import android.content.ContentProviderClient;
import android.content.Context;
import android.content.pm.PackageItemInfo;
import android.content.pm.ProviderInfo;
import android.database.Cursor;
import android.net.Uri;
import android.os.DeadObjectException;
import android.os.RemoteException;
import com.appsflyer.AFLogger;
import com.appsflyer.internal.AFj1qSDK;

/* loaded from: classes.dex */
public final class AFj1sSDK extends AFj1qSDK {
    private final AFc1bSDK getMediationNetwork;
    final ProviderInfo getRevenue;

    public AFj1sSDK(ProviderInfo providerInfo, Runnable runnable, AFc1bSDK aFc1bSDK) {
        super("af_referrer", providerInfo.authority, runnable);
        this.getMediationNetwork = aFc1bSDK;
        this.getRevenue = providerInfo;
    }

    public static ContentProviderClient B_(Context context, Uri uri) {
        try {
            return context.getContentResolver().acquireUnstableContentProviderClient(uri);
        } catch (SecurityException e9) {
            AFLogger.INSTANCE.e(AFg1cSDK.PREINSTALL, "Failed to acquire unstable content providerClient due to SecurityException", e9, false, true, false);
            return null;
        } catch (Throwable th2) {
            AFLogger.INSTANCE.e(AFg1cSDK.PREINSTALL, "Failed to acquire unstable content providerClient due to unexpected throwable", th2, false, true, false);
            return null;
        }
    }

    @Override // com.appsflyer.internal.AFj1qSDK
    public final void getCurrencyIso4217Code(final Context context) {
        this.getMediationNetwork.getMediationNetwork().execute(new Runnable() { // from class: com.appsflyer.internal.AFj1sSDK.5
            /* JADX WARN: Removed duplicated region for block: B:21:0x00de  */
            /* JADX WARN: Removed duplicated region for block: B:7:0x0096  */
            @Override // java.lang.Runnable
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public final void run() {
                Cursor query;
                AFj1sSDK aFj1sSDK = AFj1sSDK.this;
                aFj1sSDK.component1 = System.currentTimeMillis();
                aFj1sSDK.areAllFieldsValid = AFj1qSDK.AFa1vSDK.STARTED;
                aFj1sSDK.addObserver(new AFj1qSDK.AnonymousClass1());
                StringBuilder sb2 = new StringBuilder("content://");
                sb2.append(AFj1sSDK.this.getRevenue.authority);
                sb2.append("/transaction_id");
                Uri parse = Uri.parse(sb2.toString());
                ContentProviderClient B_ = AFj1sSDK.B_(context, parse);
                try {
                    if (B_ != null) {
                        try {
                            try {
                                StringBuilder sb3 = new StringBuilder("app_id=");
                                sb3.append(context.getPackageName());
                                query = B_.query(parse, null, sb3.toString(), null, null);
                                B_.close();
                            } catch (RemoteException e9) {
                                AFLogger.INSTANCE.e(AFg1cSDK.PREINSTALL, "Failed to query unstable content providerClient", e9, false, true, false);
                                B_.close();
                                query = null;
                                if (query != null) {
                                }
                                AFj1sSDK aFj1sSDK2 = AFj1sSDK.this;
                                aFj1sSDK2.AFAdRevenueData.put("api_ver", Long.valueOf(AFj1iSDK.getCurrencyIso4217Code(context, ((PackageItemInfo) aFj1sSDK2.getRevenue).packageName)));
                                AFj1sSDK aFj1sSDK3 = AFj1sSDK.this;
                                aFj1sSDK3.AFAdRevenueData.put("api_ver_name", AFj1iSDK.getRevenue(context, ((PackageItemInfo) aFj1sSDK3.getRevenue).packageName));
                                AFj1sSDK.this.getMonetizationNetwork();
                            }
                        } catch (DeadObjectException e10) {
                            AFLogger.INSTANCE.e(AFg1cSDK.PREINSTALL, "Failed to acquire unstable content providerClient", e10, false, true, false);
                            B_.close();
                            query = null;
                            if (query != null) {
                            }
                            AFj1sSDK aFj1sSDK22 = AFj1sSDK.this;
                            aFj1sSDK22.AFAdRevenueData.put("api_ver", Long.valueOf(AFj1iSDK.getCurrencyIso4217Code(context, ((PackageItemInfo) aFj1sSDK22.getRevenue).packageName)));
                            AFj1sSDK aFj1sSDK32 = AFj1sSDK.this;
                            aFj1sSDK32.AFAdRevenueData.put("api_ver_name", AFj1iSDK.getRevenue(context, ((PackageItemInfo) aFj1sSDK32.getRevenue).packageName));
                            AFj1sSDK.this.getMonetizationNetwork();
                        } catch (Throwable th2) {
                            AFLogger.INSTANCE.e(AFg1cSDK.PREINSTALL, "Error to get data from providerClient ", th2, false, true, false);
                            B_.close();
                            query = null;
                            if (query != null) {
                            }
                            AFj1sSDK aFj1sSDK222 = AFj1sSDK.this;
                            aFj1sSDK222.AFAdRevenueData.put("api_ver", Long.valueOf(AFj1iSDK.getCurrencyIso4217Code(context, ((PackageItemInfo) aFj1sSDK222.getRevenue).packageName)));
                            AFj1sSDK aFj1sSDK322 = AFj1sSDK.this;
                            aFj1sSDK322.AFAdRevenueData.put("api_ver_name", AFj1iSDK.getRevenue(context, ((PackageItemInfo) aFj1sSDK322.getRevenue).packageName));
                            AFj1sSDK.this.getMonetizationNetwork();
                        }
                        if (query != null) {
                            int columnIndex = query.getColumnIndex("transaction_id");
                            if (columnIndex == -1) {
                                AFLogger.INSTANCE.w(AFg1cSDK.PREINSTALL, "Wrong column name");
                                AFj1sSDK.this.AFAdRevenueData.put("response", "FEATURE_NOT_SUPPORTED");
                            } else {
                                AFj1sSDK.this.AFAdRevenueData.put("response", "OK");
                                if (query.moveToFirst()) {
                                    String string = query.getString(columnIndex);
                                    query.close();
                                    if (string != null && !string.isEmpty()) {
                                        AFj1sSDK.this.AFAdRevenueData.put("referrer", string);
                                    }
                                }
                            }
                            query.close();
                        } else {
                            AFLogger.INSTANCE.w(AFg1cSDK.PREINSTALL, "ContentProvider query failed, got null Cursor");
                            AFj1sSDK.this.AFAdRevenueData.put("response", "SERVICE_UNAVAILABLE");
                        }
                        AFj1sSDK aFj1sSDK2222 = AFj1sSDK.this;
                        aFj1sSDK2222.AFAdRevenueData.put("api_ver", Long.valueOf(AFj1iSDK.getCurrencyIso4217Code(context, ((PackageItemInfo) aFj1sSDK2222.getRevenue).packageName)));
                        AFj1sSDK aFj1sSDK3222 = AFj1sSDK.this;
                        aFj1sSDK3222.AFAdRevenueData.put("api_ver_name", AFj1iSDK.getRevenue(context, ((PackageItemInfo) aFj1sSDK3222.getRevenue).packageName));
                        AFj1sSDK.this.getMonetizationNetwork();
                    }
                    query = null;
                    if (query != null) {
                    }
                    AFj1sSDK aFj1sSDK22222 = AFj1sSDK.this;
                    aFj1sSDK22222.AFAdRevenueData.put("api_ver", Long.valueOf(AFj1iSDK.getCurrencyIso4217Code(context, ((PackageItemInfo) aFj1sSDK22222.getRevenue).packageName)));
                    AFj1sSDK aFj1sSDK32222 = AFj1sSDK.this;
                    aFj1sSDK32222.AFAdRevenueData.put("api_ver_name", AFj1iSDK.getRevenue(context, ((PackageItemInfo) aFj1sSDK32222.getRevenue).packageName));
                    AFj1sSDK.this.getMonetizationNetwork();
                } catch (Throwable th3) {
                    B_.close();
                    throw th3;
                }
            }
        });
    }
}
