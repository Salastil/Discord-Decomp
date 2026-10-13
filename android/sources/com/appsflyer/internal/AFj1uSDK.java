package com.appsflyer.internal;

import android.annotation.SuppressLint;
import android.content.ContentProviderClient;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import com.appsflyer.AFLogger;
import com.appsflyer.AdRevenueScheme;
import com.appsflyer.internal.AFj1qSDK;
import java.util.Date;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class AFj1uSDK extends AFi1aSDK {

    @NotNull
    private final ExecutorService getMediationNetwork;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public AFj1uSDK(@NotNull ExecutorService executorService, @NotNull AFc1pSDK aFc1pSDK, @NotNull Runnable runnable) {
        super("preload", "samsung", aFc1pSDK, runnable);
        Intrinsics.checkNotNullParameter(executorService, "");
        Intrinsics.checkNotNullParameter(aFc1pSDK, "");
        Intrinsics.checkNotNullParameter(runnable, "");
        this.getMediationNetwork = executorService;
    }

    private static boolean AFAdRevenueData(Context context) {
        return context.getPackageManager().resolveContentProvider("com.samsung.android.mapsagent.providers.apptracking", 0) != null;
    }

    private static boolean C_(Cursor cursor) {
        int columnIndex = cursor.getColumnIndex("RESULT");
        if (columnIndex != -1) {
            return Boolean.parseBoolean(cursor.getString(columnIndex));
        }
        AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.SAMSUNG_PRELOAD_REFERRER, "No such column", false, 4, null);
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:10:0x011e, code lost:
    
        if (r4 != null) goto L45;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0109, code lost:
    
        r4.close();
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x0107, code lost:
    
        if (r4 != null) goto L45;
     */
    /* JADX WARN: Removed duplicated region for block: B:53:0x0134  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0139  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final void getMonetizationNetwork(AFj1uSDK aFj1uSDK, Context context) {
        Throwable th2;
        ContentProviderClient contentProviderClient;
        Cursor query;
        Date mediationNetwork;
        Intrinsics.checkNotNullParameter(aFj1uSDK, "");
        Intrinsics.checkNotNullParameter(context, "");
        aFj1uSDK.component1 = System.currentTimeMillis();
        aFj1uSDK.areAllFieldsValid = AFj1qSDK.AFa1vSDK.STARTED;
        aFj1uSDK.addObserver(new AFj1qSDK.AnonymousClass1());
        Cursor cursor = null;
        r2 = null;
        Long l6 = null;
        cursor = null;
        try {
            Uri parse = Uri.parse("content://com.samsung.android.mapsagent.providers.apptracking/info");
            ContentProviderClient acquireUnstableContentProviderClient = context.getContentResolver().acquireUnstableContentProviderClient(parse);
            if (acquireUnstableContentProviderClient != null) {
                try {
                    query = acquireUnstableContentProviderClient.query(parse, null, context.getPackageName(), new String[]{"appsflyer001"}, null);
                } catch (Throwable th3) {
                    th2 = th3;
                    contentProviderClient = acquireUnstableContentProviderClient;
                    try {
                        AFLogger.INSTANCE.e(AFg1cSDK.SAMSUNG_PRELOAD_REFERRER, "Error while collecting referrer data", th2, false, false, true, true);
                        if (cursor != null) {
                        }
                        if (contentProviderClient != null) {
                        }
                        aFj1uSDK.getMonetizationNetwork();
                        return;
                    } finally {
                    }
                }
            } else {
                query = null;
            }
            if (query != null) {
                try {
                    if (query.moveToFirst()) {
                        if (C_(query)) {
                            String P_ = AFj1fSDK.P_(query, "INSTALLED_TIME_TEXT");
                            if (P_ != null && (mediationNetwork = AFj1hSDK.getMediationNetwork(P_, "yy:MM:dd:hh:mm")) != null) {
                                l6 = Long.valueOf(TimeUnit.MILLISECONDS.toSeconds(mediationNetwork.getTime()));
                            }
                            if (l6 != null) {
                                long longValue = l6.longValue();
                                Map<String, Object> map = aFj1uSDK.AFAdRevenueData;
                                Intrinsics.checkNotNullExpressionValue(map, "");
                                map.put("install_begin_ts", Long.valueOf(longValue));
                            }
                            LinkedHashMap linkedHashMap = new LinkedHashMap();
                            String P_2 = AFj1fSDK.P_(query, "MAPS_ID");
                            if (P_2 != null) {
                                linkedHashMap.put("maps_id", P_2);
                            }
                            String P_3 = AFj1fSDK.P_(query, "DEVICE_NAME");
                            if (P_3 != null) {
                                linkedHashMap.put("device_model", P_3);
                            }
                            String P_4 = AFj1fSDK.P_(query, "COUNTRY");
                            if (P_4 != null) {
                                linkedHashMap.put(AdRevenueScheme.COUNTRY, P_4);
                            }
                            String P_5 = AFj1fSDK.P_(query, "CAMPAIGN_ID");
                            if (P_5 != null) {
                                linkedHashMap.put("campaign_id", P_5);
                            }
                            if (!linkedHashMap.isEmpty()) {
                                Map<String, Object> map2 = aFj1uSDK.AFAdRevenueData;
                                Intrinsics.checkNotNullExpressionValue(map2, "");
                                map2.put("samsung_custom", linkedHashMap);
                            }
                            Map<String, Object> map3 = aFj1uSDK.AFAdRevenueData;
                            Intrinsics.checkNotNullExpressionValue(map3, "");
                            map3.put("api_ver", Long.valueOf(AFj1iSDK.getCurrencyIso4217Code(context, "com.samsung.android.mapsagent")));
                            Map<String, Object> map4 = aFj1uSDK.AFAdRevenueData;
                            Intrinsics.checkNotNullExpressionValue(map4, "");
                            map4.put("api_ver_name", AFj1iSDK.getRevenue(context, "com.samsung.android.mapsagent"));
                        } else {
                            AFh1ySDK.i$default(AFLogger.INSTANCE, AFg1cSDK.SAMSUNG_PRELOAD_REFERRER, "App was not installed via Samsung MAPS.", false, 4, null);
                        }
                        query.close();
                    }
                } catch (Throwable th4) {
                    th2 = th4;
                    cursor = query;
                    contentProviderClient = acquireUnstableContentProviderClient;
                    AFLogger.INSTANCE.e(AFg1cSDK.SAMSUNG_PRELOAD_REFERRER, "Error while collecting referrer data", th2, false, false, true, true);
                    if (cursor != null) {
                        cursor.close();
                    }
                    if (contentProviderClient != null) {
                        contentProviderClient.close();
                    }
                    aFj1uSDK.getMonetizationNetwork();
                    return;
                }
            }
            AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.SAMSUNG_PRELOAD_REFERRER, "Content provider returned no data", false, 4, null);
            if (query != null) {
                query.close();
            }
        } catch (Throwable th5) {
            th2 = th5;
            contentProviderClient = null;
        }
    }

    private final boolean getRevenue(Context context) {
        if (!getMediationNetwork()) {
            AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.SAMSUNG_PRELOAD_REFERRER, "Referrer collection disallowed by counter.", false, 4, null);
            return false;
        }
        if (AFAdRevenueData(context)) {
            return true;
        }
        AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.SAMSUNG_PRELOAD_REFERRER, "Referrer collection disallowed by missing content provider.", false, 4, null);
        return false;
    }

    @Override // com.appsflyer.internal.AFj1qSDK
    public final void getCurrencyIso4217Code() {
    }

    @Override // com.appsflyer.internal.AFj1qSDK
    @SuppressLint({"NewApi"})
    public final void getCurrencyIso4217Code(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "");
        if (getRevenue(context)) {
            this.getMediationNetwork.execute(new h(3, this, context));
        }
    }
}
