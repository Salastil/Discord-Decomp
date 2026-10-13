package com.appsflyer.internal;

import android.content.ContentResolver;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import com.appsflyer.AFLogger;
import com.appsflyer.internal.AFj1qSDK;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes.dex */
public final class AFj1lSDK extends AFi1cSDK {
    private final AFc1bSDK getMediationNetwork;

    public AFj1lSDK(Runnable runnable, AFc1bSDK aFc1bSDK) {
        super("store", "samsung", runnable);
        this.getMediationNetwork = aFc1bSDK;
    }

    @Override // com.appsflyer.internal.AFj1qSDK
    public final void getCurrencyIso4217Code(Context context) {
        AFb1vSDK<Map<String, Object>> aFb1vSDK = new AFb1vSDK<Map<String, Object>>(context, this.getMediationNetwork.getMediationNetwork(), "com.sec.android.app.samsungapps.referrer", "FBA3AF4E7757D9016E953FB3EE4671CA2BD9AF725F9A53D52ED4A38EAAA08901") { // from class: com.appsflyer.internal.AFj1lSDK.2
            /* JADX INFO: Access modifiers changed from: private */
            /* JADX WARN: Code restructure failed: missing block: B:15:0x00c3, code lost:
            
                if (r3 != null) goto L22;
             */
            /* JADX WARN: Code restructure failed: missing block: B:16:0x00c5, code lost:
            
                r3.close();
             */
            /* JADX WARN: Code restructure failed: missing block: B:17:0x00dc, code lost:
            
                r0 = ((android.content.pm.PackageItemInfo) r10.getCurrencyIso4217Code.getPackageManager().resolveContentProvider(r10.getRevenue, com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT)).packageName;
                r10.AFAdRevenueData.AFAdRevenueData.put("api_ver", java.lang.Long.valueOf(com.appsflyer.internal.AFj1iSDK.getCurrencyIso4217Code(r10.getCurrencyIso4217Code, r0)));
                r10.AFAdRevenueData.AFAdRevenueData.put("api_ver_name", com.appsflyer.internal.AFj1iSDK.getRevenue(r10.getCurrencyIso4217Code, r0));
                r10.AFAdRevenueData.getMonetizationNetwork();
             */
            /* JADX WARN: Code restructure failed: missing block: B:18:0x0117, code lost:
            
                return r10.AFAdRevenueData.AFAdRevenueData;
             */
            /* JADX WARN: Code restructure failed: missing block: B:30:0x00d9, code lost:
            
                if (0 == 0) goto L26;
             */
            @Override // com.appsflyer.internal.AFb1vSDK
            /* renamed from: AFAdRevenueData, reason: merged with bridge method [inline-methods] */
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public Map<String, Object> getCurrencyIso4217Code() {
                String string;
                Cursor cursor = null;
                try {
                    try {
                        ContentResolver contentResolver = this.getCurrencyIso4217Code.getContentResolver();
                        StringBuilder sb2 = new StringBuilder("content://");
                        sb2.append(this.getRevenue);
                        cursor = contentResolver.query(Uri.parse(sb2.toString()), null, null, null, null);
                        if (cursor == null) {
                            AFj1lSDK.this.AFAdRevenueData.put("response", "SERVICE_UNAVAILABLE");
                        } else if (cursor.moveToFirst()) {
                            AFj1lSDK.this.AFAdRevenueData.put("response", "OK");
                            E_("referrer", AFj1lSDK.this.AFAdRevenueData, cursor);
                            D_("click_ts", AFj1lSDK.this.AFAdRevenueData, cursor);
                            D_("install_begin_ts", AFj1lSDK.this.AFAdRevenueData, cursor);
                            D_("install_end_ts", AFj1lSDK.this.AFAdRevenueData, cursor);
                            E_("organic_keywords", AFj1lSDK.this.AFAdRevenueData, cursor);
                            E_("attr_type", AFj1lSDK.this.AFAdRevenueData, cursor);
                            HashMap hashMap = new HashMap();
                            int columnIndex = cursor.getColumnIndex("instant");
                            if (columnIndex != -1 && (string = cursor.getString(columnIndex)) != null) {
                                hashMap.put("instant", Boolean.valueOf(Boolean.parseBoolean(string)));
                            }
                            D_("click_server_ts", hashMap, cursor);
                            D_("install_begin_server_ts", hashMap, cursor);
                            E_("install_version", hashMap, cursor);
                            if (!hashMap.isEmpty()) {
                                AFj1lSDK.this.AFAdRevenueData.put("custom", hashMap);
                            }
                        } else {
                            AFj1lSDK.this.AFAdRevenueData.put("response", "FEATURE_NOT_SUPPORTED");
                        }
                    } catch (Exception e9) {
                        AFj1lSDK.this.AFAdRevenueData.put("response", "FEATURE_NOT_SUPPORTED");
                        AFLogger.afErrorLog(e9.getMessage(), e9, false, true);
                    }
                } catch (Throwable th2) {
                    if (0 != 0) {
                        cursor.close();
                    }
                    throw th2;
                }
            }

            private static void D_(String str, Map<String, Object> map, Cursor cursor) {
                int columnIndex = cursor.getColumnIndex(str);
                if (columnIndex == -1) {
                    return;
                }
                long j = cursor.getLong(columnIndex);
                if (j == 0) {
                    return;
                }
                map.put(str, Long.valueOf(j));
            }

            private static void E_(String str, Map<String, Object> map, Cursor cursor) {
                String string;
                int columnIndex = cursor.getColumnIndex(str);
                if (columnIndex == -1 || (string = cursor.getString(columnIndex)) == null) {
                    return;
                }
                map.put(str, string);
            }
        };
        AFc1oSDK component2 = this.getMediationNetwork.component2();
        AFa1uSDK.getMonetizationNetwork();
        if (AFa1uSDK.getMonetizationNetwork(component2, false) > 0 || !aFb1vSDK.getMediationNetwork()) {
            return;
        }
        aFb1vSDK.getMediationNetwork.execute(aFb1vSDK.getMonetizationNetwork);
        this.component1 = System.currentTimeMillis();
        this.areAllFieldsValid = AFj1qSDK.AFa1vSDK.STARTED;
        addObserver(new AFj1qSDK.AnonymousClass1());
    }
}
