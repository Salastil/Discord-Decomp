package com.appsflyer.internal;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import androidx.annotation.NonNull;
import com.appsflyer.AFLogger;
import com.appsflyer.AppsFlyerConversionListener;
import com.appsflyer.deeplink.DeepLink;
import com.appsflyer.deeplink.DeepLinkListener;
import com.appsflyer.deeplink.DeepLinkResult;
import com.appsflyer.internal.AFe1nSDK.AnonymousClass3;
import com.appsflyer.internal.AFf1vSDK;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class AFa1rSDK {
    public String[] areAllFieldsValid;
    public final AFc1bSDK component1;
    public long component2;
    public Intent getCurrencyIso4217Code;
    public Map<String, String> getMediationNetwork;
    public String getMonetizationNetwork;
    public DeepLinkListener getRevenue;

    @NonNull
    public List<List<String>> AFAdRevenueData = new ArrayList();

    @NonNull
    public final List<String> component4 = new ArrayList();

    public AFa1rSDK(@NonNull AFc1bSDK aFc1bSDK) {
        this.component1 = aFc1bSDK;
    }

    /* JADX WARN: Removed duplicated region for block: B:49:0x0075 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:54:? A[LOOP:0: B:42:0x0047->B:54:?, LOOP_END, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean h_(Intent intent, AFa1gSDK aFa1gSDK) {
        String string;
        Uri i_;
        Uri uri = null;
        Uri data = (intent == null || !"android.intent.action.VIEW".equals(intent.getAction())) ? null : intent.getData();
        Intent intent2 = this.getCurrencyIso4217Code;
        Uri data2 = (intent2 == null || !"android.intent.action.VIEW".equals(intent2.getAction())) ? null : intent2.getData();
        if (intent == null) {
            AFLogger.afDebugLog("Could not extract deeplink from null intent");
        } else {
            Bundle extras = intent.getExtras();
            if (!this.AFAdRevenueData.isEmpty() && extras != null) {
                Iterator<List<String>> it = this.AFAdRevenueData.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    List<String> next = it.next();
                    if (next != null) {
                        Iterator<String> it2 = next.iterator();
                        if (it2.hasNext() && (string = extras.getString(it2.next())) != null) {
                            i_ = i_(string, it2);
                            if (i_ == null) {
                                StringBuilder sb2 = new StringBuilder("Found deeplink in push payload at ");
                                sb2.append(next.toString());
                                AFLogger.afDebugLog(sb2.toString());
                                List<List<String>> list = this.AFAdRevenueData;
                                Intrinsics.checkNotNullParameter("payloadKey", "");
                                Map<String, Object> monetizationNetwork = AFa1uSDK.getMonetizationNetwork(aFa1gSDK.getMediationNetwork);
                                Intrinsics.checkNotNullExpressionValue(monetizationNetwork, "");
                                monetizationNetwork.put("payloadKey", list);
                                AFa1hSDK aFa1hSDK = aFa1gSDK.getMonetizationNetwork;
                                if (aFa1hSDK != null) {
                                    aFa1hSDK.getMonetizationNetwork(aFa1gSDK.getMediationNetwork);
                                }
                                uri = i_;
                            }
                        }
                    }
                    i_ = null;
                    if (i_ == null) {
                    }
                }
            }
        }
        if (data != null) {
            AFj1kSDK aFj1kSDK = new AFj1kSDK(intent);
            if (!aFj1kSDK.getRevenue("af_consumed")) {
                aFj1kSDK.I_("af_consumed", System.currentTimeMillis());
                g_(aFa1gSDK, data);
                return true;
            }
            StringBuilder sb3 = new StringBuilder("skipping re-use of previously consumed deep link: ");
            sb3.append(data.toString());
            sb3.append(" w/af_consumed");
            AFLogger.afInfoLog(sb3.toString());
            return false;
        }
        if (data2 != null) {
            AFj1kSDK aFj1kSDK2 = new AFj1kSDK(this.getCurrencyIso4217Code);
            if (!aFj1kSDK2.getRevenue("af_consumed")) {
                aFj1kSDK2.I_("af_consumed", System.currentTimeMillis());
                g_(aFa1gSDK, data2);
                return true;
            }
            StringBuilder sb4 = new StringBuilder("skipping re-use of previously consumed trampoline deep link: ");
            sb4.append(data2.toString());
            sb4.append(" w/af_consumed");
            AFLogger.afInfoLog(sb4.toString());
            return false;
        }
        if (uri == null) {
            AFLogger.afDebugLog("No deep link detected");
            return false;
        }
        AFj1kSDK aFj1kSDK3 = new AFj1kSDK(intent);
        if (!aFj1kSDK3.getRevenue("af_consumed")) {
            aFj1kSDK3.I_("af_consumed", System.currentTimeMillis());
            g_(aFa1gSDK, uri);
            return true;
        }
        StringBuilder sb5 = new StringBuilder("skipping re-use of previously consumed deep link from push: ");
        sb5.append(uri.toString());
        sb5.append(" w/af_consumed");
        AFLogger.afInfoLog(sb5.toString());
        return false;
    }

    private Uri i_(Object obj, Iterator<String> it) {
        while (obj != JSONObject.NULL) {
            if (!it.hasNext()) {
                Uri parse = Uri.parse(obj.toString());
                if (parse == null || parse.getScheme() == null || parse.getHost() == null) {
                    return null;
                }
                return parse;
            }
            try {
                obj = new JSONObject(obj.toString()).get(it.next());
            } catch (JSONException e9) {
                AFLogger.afErrorLogForExcManagerOnly("recursiveSearch error", e9);
                return null;
            }
        }
        return null;
    }

    public final void f_(AFa1gSDK aFa1gSDK, Intent intent, Context context) {
        AFc1dSDK aFc1dSDK = (AFc1dSDK) this.component1;
        if (context != null) {
            aFc1dSDK.getMonetizationNetwork.getRevenue = context.getApplicationContext();
        }
        if (!h_(intent, aFa1gSDK) && this.getRevenue != null && this.component1.getCurrencyIso4217Code().getMonetizationNetwork.getMediationNetwork("appsFlyerCount", 0) == 0 && !this.component1.component2().getMediationNetwork("ddl_sent", false)) {
            AFa1pSDK aFa1pSDK = new AFa1pSDK();
            AFe1nSDK copydefault = this.component1.copydefault();
            copydefault.AFAdRevenueData.execute(copydefault.new AnonymousClass3(new AFf1wSDK(aFa1pSDK, this.component1)));
        }
        this.component1.component2().getCurrencyIso4217Code("ddl_sent", true);
    }

    public final void g_(AFa1gSDK aFa1gSDK, Uri uri) {
        AFf1xSDK aFf1xSDK = new AFf1xSDK(this, aFa1gSDK, uri, this.component4);
        AFe1nSDK copydefault = this.component1.copydefault();
        copydefault.AFAdRevenueData.execute(copydefault.new AnonymousClass3(aFf1xSDK));
        this.getCurrencyIso4217Code = null;
    }

    public final void getMediationNetwork(String str, DeepLinkResult.Error error) {
        if (this.getRevenue == null) {
            getMediationNetwork(str);
        } else {
            AFLogger.INSTANCE.d(AFg1cSDK.DDL, "Error occurred: ".concat(String.valueOf(str)));
            getMonetizationNetwork(new DeepLinkResult(null, error));
        }
    }

    public final void getMonetizationNetwork(DeepLinkResult deepLinkResult) {
        if (this.getRevenue == null) {
            AFLogger.INSTANCE.d(AFg1cSDK.DDL, "skipping, no callback registered");
            return;
        }
        AFLogger aFLogger = AFLogger.INSTANCE;
        AFg1cSDK aFg1cSDK = AFg1cSDK.DDL;
        StringBuilder sb2 = new StringBuilder("Calling onDeepLinking with:\n");
        sb2.append(deepLinkResult.toString());
        aFLogger.d(aFg1cSDK, sb2.toString());
        try {
            this.getRevenue.onDeepLinking(deepLinkResult);
        } catch (Throwable th2) {
            AFLogger.afErrorLog(th2.getLocalizedMessage(), th2);
        }
    }

    public final void j_(AFa1gSDK aFa1gSDK, Uri uri, Uri uri2) {
        if (!aFa1gSDK.getCurrencyIso4217Code("af_deeplink")) {
            String obj = uri.toString();
            if (obj == null) {
                obj = null;
            } else if (obj.matches("fb\\d*?://authorize.*") && obj.contains("access_token")) {
                int indexOf = obj.indexOf(63);
                String substring = indexOf == -1 ? "" : obj.substring(indexOf);
                if (substring.length() != 0) {
                    ArrayList arrayList = new ArrayList();
                    if (substring.contains("&")) {
                        arrayList = new ArrayList(Arrays.asList(substring.split("&")));
                    } else {
                        arrayList.add(substring);
                    }
                    StringBuilder sb2 = new StringBuilder();
                    Iterator it = arrayList.iterator();
                    while (it.hasNext()) {
                        String str = (String) it.next();
                        if (str.contains("access_token")) {
                            it.remove();
                        } else {
                            if (sb2.length() != 0) {
                                sb2.append("&");
                            } else if (!str.startsWith("?")) {
                                sb2.append("?");
                            }
                            sb2.append(str);
                        }
                    }
                    obj = obj.replace(substring, sb2.toString());
                }
            }
            String str2 = this.getMonetizationNetwork;
            if (str2 != null && this.getMediationNetwork != null && obj.contains(str2)) {
                Uri.Builder buildUpon = Uri.parse(obj).buildUpon();
                Uri.Builder buildUpon2 = Uri.EMPTY.buildUpon();
                for (Map.Entry<String, String> entry : this.getMediationNetwork.entrySet()) {
                    buildUpon.appendQueryParameter(entry.getKey(), entry.getValue());
                    buildUpon2.appendQueryParameter(entry.getKey(), entry.getValue());
                }
                obj = buildUpon.build().toString();
                String encodedQuery = buildUpon2.build().getEncodedQuery();
                Intrinsics.checkNotNullParameter("appended_query_params", "");
                aFa1gSDK.getMediationNetwork.put("appended_query_params", encodedQuery);
                AFa1hSDK aFa1hSDK = aFa1gSDK.getMonetizationNetwork;
                if (aFa1hSDK != null) {
                    aFa1hSDK.getMonetizationNetwork(aFa1gSDK.getMediationNetwork);
                }
            }
            Intrinsics.checkNotNullParameter("af_deeplink", "");
            aFa1gSDK.getMediationNetwork.put("af_deeplink", obj);
            AFa1hSDK aFa1hSDK2 = aFa1gSDK.getMonetizationNetwork;
            if (aFa1hSDK2 != null) {
                aFa1hSDK2.getMonetizationNetwork(aFa1gSDK.getMediationNetwork);
            }
        }
        final HashMap hashMap = new HashMap();
        hashMap.put("link", uri.toString());
        if (uri2 != null) {
            hashMap.put("original_link", uri2.toString());
        }
        AFj1iSDK.M_(this.component1.getCurrencyIso4217Code().n_(), hashMap, uri);
        AFf1vSDK aFf1vSDK = new AFf1vSDK(this.component1, UUID.randomUUID(), uri);
        if (aFf1vSDK.copy()) {
            Boolean bool = Boolean.TRUE;
            Intrinsics.checkNotNullParameter("isBrandedDomain", "");
            aFa1gSDK.getMediationNetwork.put("isBrandedDomain", bool);
            AFa1hSDK aFa1hSDK3 = aFa1gSDK.getMonetizationNetwork;
            if (aFa1hSDK3 != null) {
                aFa1hSDK3.getMonetizationNetwork(aFa1gSDK.getMediationNetwork);
            }
        }
        if (!aFf1vSDK.equals()) {
            this.component1.i().getMediationNetwork(hashMap);
            return;
        }
        aFf1vSDK.areAllFieldsValid = new AFf1vSDK.AFa1vSDK() { // from class: com.appsflyer.internal.AFa1rSDK.4
            @Override // com.appsflyer.internal.AFf1vSDK.AFa1vSDK
            public final void getCurrencyIso4217Code(Map<String, String> map) {
                for (String str3 : map.keySet()) {
                    hashMap.put(str3, map.get(str3));
                }
                AFa1rSDK.this.getMediationNetwork(hashMap);
            }

            @Override // com.appsflyer.internal.AFf1vSDK.AFa1vSDK
            public final void getMediationNetwork(String str3) {
                AFa1rSDK.this.getMediationNetwork(str3, DeepLinkResult.Error.NETWORK);
            }
        };
        AFe1nSDK copydefault = this.component1.copydefault();
        copydefault.AFAdRevenueData.execute(copydefault.new AnonymousClass3(aFf1vSDK));
    }

    public final void getMediationNetwork(Map<String, String> map) {
        if (this.getRevenue != null) {
            try {
                try {
                    DeepLink mediationNetwork = DeepLink.getMediationNetwork(map);
                    mediationNetwork.getCurrencyIso4217Code.put("is_deferred", false);
                    getMonetizationNetwork(new DeepLinkResult(mediationNetwork, null));
                    return;
                } catch (JSONException e9) {
                    AFLogger.INSTANCE.e(AFg1cSDK.DDL, "Error occurred", e9, true);
                    getMonetizationNetwork(new DeepLinkResult(null, DeepLinkResult.Error.UNEXPECTED));
                    return;
                }
            } catch (Throwable th2) {
                getMonetizationNetwork(new DeepLinkResult(null, null));
                throw th2;
            }
        }
        AppsFlyerConversionListener appsFlyerConversionListener = AFa1uSDK.getMonetizationNetwork().getMediationNetwork;
        if (appsFlyerConversionListener != null) {
            try {
                StringBuilder sb2 = new StringBuilder("Calling onAppOpenAttribution with:\n");
                sb2.append(map.toString());
                AFLogger.afDebugLog(sb2.toString());
                appsFlyerConversionListener.onAppOpenAttribution(map);
            } catch (Throwable th3) {
                AFLogger.afErrorLog(th3.getLocalizedMessage(), th3);
            }
        }
    }

    private static void getMediationNetwork(String str) {
        AppsFlyerConversionListener appsFlyerConversionListener = AFa1uSDK.getMonetizationNetwork().getMediationNetwork;
        if (appsFlyerConversionListener != null) {
            try {
                AFLogger.afDebugLog("Calling onAppOpenAttributionFailure with: ".concat(String.valueOf(str)));
                appsFlyerConversionListener.onAttributionFailure(str);
            } catch (Throwable th2) {
                AFLogger.afErrorLog(th2.getLocalizedMessage(), th2);
            }
        }
    }
}
