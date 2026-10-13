package com.appsflyer.internal;

import android.graphics.Color;
import android.graphics.ImageFormat;
import android.widget.ExpandableListView;
import androidx.annotation.NonNull;
import com.appsflyer.AFLogger;
import com.appsflyer.attribution.AppsFlyerRequestListener;
import com.facebook.react.devsupport.StackTraceHelper;
import java.lang.reflect.Method;
import java.util.Map;
import java.util.Set;
import kotlin.text.StringsKt;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes.dex */
public class AFf1uSDK extends AFe1eSDK<String> {
    private static final AFe1mSDK[] AFLogger = {AFe1mSDK.DLSDK, AFe1mSDK.ONELINK, AFe1mSDK.REGISTER};
    private final AFf1gSDK AFInAppEventType;
    protected final AFc1oSDK areAllFieldsValid;
    protected final AFg1rSDK copy;
    private final AFe1ySDK copydefault;
    private final AFf1lSDK equals;

    @NonNull
    private final AFc1pSDK hashCode;
    private final AFc1gSDK registerClient;
    private final AFh1jSDK toString;

    public AFf1uSDK(@NonNull AFh1jSDK aFh1jSDK, @NonNull AFc1bSDK aFc1bSDK) {
        this(aFh1jSDK, aFc1bSDK, null);
    }

    public void AFAdRevenueData(AFh1jSDK aFh1jSDK) {
        this.copy.getMediationNetwork(aFh1jSDK);
    }

    @Override // com.appsflyer.internal.AFe1eSDK
    public final AppsFlyerRequestListener areAllFieldsValid() {
        return this.toString.getMonetizationNetwork;
    }

    @Override // com.appsflyer.internal.AFe1eSDK
    public boolean copydefault() {
        return true;
    }

    public void getCurrencyIso4217Code(AFh1jSDK aFh1jSDK) {
        this.copy.getCurrencyIso4217Code(aFh1jSDK);
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x009c A[Catch: all -> 0x0058, TryCatch #1 {all -> 0x0058, blocks: (B:3:0x001e, B:5:0x0024, B:7:0x0054, B:8:0x005d, B:10:0x0063, B:11:0x006c, B:13:0x0077, B:17:0x0083, B:20:0x008b, B:21:0x0096, B:23:0x009c, B:25:0x00b6, B:26:0x00bb, B:28:0x00d0, B:29:0x00d7, B:31:0x00db, B:34:0x00e2, B:35:0x00e9, B:36:0x00b9, B:37:0x00ec, B:39:0x00f6, B:40:0x0103, B:48:0x0012, B:2:0x0000), top: B:1:0x0000, inners: #0 }] */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00f6 A[Catch: all -> 0x0058, TryCatch #1 {all -> 0x0058, blocks: (B:3:0x001e, B:5:0x0024, B:7:0x0054, B:8:0x005d, B:10:0x0063, B:11:0x006c, B:13:0x0077, B:17:0x0083, B:20:0x008b, B:21:0x0096, B:23:0x009c, B:25:0x00b6, B:26:0x00bb, B:28:0x00d0, B:29:0x00d7, B:31:0x00db, B:34:0x00e2, B:35:0x00e9, B:36:0x00b9, B:37:0x00ec, B:39:0x00f6, B:40:0x0103, B:48:0x0012, B:2:0x0000), top: B:1:0x0000, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void getMediationNetwork(AFh1jSDK aFh1jSDK) {
        boolean z5;
        try {
            try {
                AFAdRevenueData(aFh1jSDK);
                getRevenue(aFh1jSDK);
                getMonetizationNetwork(aFh1jSDK);
                getCurrencyIso4217Code(aFh1jSDK);
                areAllFieldsValid(aFh1jSDK);
            } catch (Throwable th2) {
                AFLogger.INSTANCE.e(AFg1cSDK.QUEUE, "Error while collecting payload params", th2, true, true, false);
            }
            if (aFh1jSDK.getMonetizationNetwork()) {
                aFh1jSDK.getMonetizationNetwork((Map<String, ?>) ((AFe1eSDK) this).component2.getMediationNetwork(aFh1jSDK.getCurrencyIso4217Code));
                AFf1cSDK aFf1cSDK = ((AFe1eSDK) this).component2;
                aFh1jSDK.getMonetizationNetwork((Map<String, ?>) AFf1cSDK.getRevenue(new Object[]{aFf1cSDK, aFh1jSDK.getCurrencyIso4217Code}, 855506449, -855506448, System.identityHashCode(aFf1cSDK)));
                if (this.hashCode.getRevenue("com.appsflyer.security.enable")) {
                    AFf1cSDK.getCurrencyIso4217Code(aFh1jSDK);
                }
            }
            if (aFh1jSDK.areAllFieldsValid()) {
                aFh1jSDK.getMonetizationNetwork((Map<String, ?>) ((AFe1eSDK) this).component2.getRevenue());
            }
            Set<AFe1mSDK> set = this.getMediationNetwork;
            if (!set.contains(AFe1mSDK.LAUNCH) && !set.contains(AFe1mSDK.CONVERSION)) {
                z5 = false;
                if (component4() && z5) {
                    aFh1jSDK.getMonetizationNetwork(this.areAllFieldsValid.getMediationNetwork("appsFlyerCount", 0));
                }
                if (aFh1jSDK.component3()) {
                    Map<String, Object> AFAdRevenueData = AFj1aSDK.AFAdRevenueData(aFh1jSDK.getCurrencyIso4217Code);
                    AFe1ySDK aFe1ySDK = this.copydefault;
                    AFe1zSDK aFe1zSDK = new AFe1zSDK(aFe1ySDK.getCurrencyIso4217Code(), aFe1ySDK.getMonetizationNetwork(), AFe1ySDK.getRevenue() ? AFe1tSDK.DEFAULT : AFe1tSDK.API);
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put(StackTraceHelper.NAME_KEY, aFe1zSDK.getMonetizationNetwork);
                    AFe1tSDK aFe1tSDK = aFe1zSDK.AFAdRevenueData;
                    if (aFe1tSDK != AFe1tSDK.DEFAULT) {
                        jSONObject.put("method", aFe1tSDK.getMediationNetwork);
                    }
                    String str = aFe1zSDK.getMediationNetwork;
                    if (str != null && !StringsKt.K(str)) {
                        jSONObject.put("prefix", aFe1zSDK.getMediationNetwork);
                    }
                    AFAdRevenueData.put("host", jSONObject);
                }
                if (this.hashCode.getRevenue("AF_PREINSTALL_DISABLED")) {
                    AFj1aSDK.AFAdRevenueData(aFh1jSDK.getCurrencyIso4217Code).put("preinstall_disabled", Boolean.TRUE);
                }
                this.AFInAppEventType.getMediationNetwork(aFh1jSDK.getCurrencyIso4217Code, aFh1jSDK.getCurrencyIso4217Code());
            }
            z5 = true;
            if (component4()) {
                aFh1jSDK.getMonetizationNetwork(this.areAllFieldsValid.getMediationNetwork("appsFlyerCount", 0));
            }
            if (aFh1jSDK.component3()) {
            }
            if (this.hashCode.getRevenue("AF_PREINSTALL_DISABLED")) {
            }
            this.AFInAppEventType.getMediationNetwork(aFh1jSDK.getCurrencyIso4217Code, aFh1jSDK.getCurrencyIso4217Code());
        } catch (Throwable th3) {
            AFLogger.INSTANCE.e(AFg1cSDK.QUEUE, "Error while preparing to send event", th3, true, true, false);
        }
    }

    public void getMonetizationNetwork(AFh1jSDK aFh1jSDK) {
        this.copy.getMonetizationNetwork(aFh1jSDK);
    }

    public void getRevenue(AFh1jSDK aFh1jSDK) {
        this.copy.getCurrencyIso4217Code(aFh1jSDK.getCurrencyIso4217Code);
    }

    public AFf1uSDK(@NonNull AFh1jSDK aFh1jSDK, @NonNull AFc1bSDK aFc1bSDK, String str) {
        super(aFh1jSDK.getCurrencyIso4217Code(), new AFe1mSDK[]{AFe1mSDK.RC_CDN, AFe1mSDK.FETCH_ADVERTISING_ID}, aFc1bSDK, str);
        this.toString = aFh1jSDK;
        this.copydefault = aFc1bSDK.AFInAppEventParameterName();
        this.areAllFieldsValid = aFc1bSDK.component2();
        this.equals = aFc1bSDK.component1();
        this.registerClient = aFc1bSDK.registerClient();
        this.hashCode = aFc1bSDK.getCurrencyIso4217Code();
        this.copy = aFc1bSDK.component4();
        this.AFInAppEventType = aFc1bSDK.force();
        for (AFe1mSDK aFe1mSDK : AFLogger) {
            if (this.getCurrencyIso4217Code == aFe1mSDK) {
                return;
            }
        }
        int i5 = this.toString.component1;
        AFe1mSDK aFe1mSDK2 = this.getCurrencyIso4217Code;
        if (i5 > 0) {
            this.getRevenue.add(AFe1mSDK.CONVERSION);
        } else {
            AFe1mSDK aFe1mSDK3 = AFe1mSDK.CONVERSION;
            if (aFe1mSDK2 != aFe1mSDK3) {
                this.getMediationNetwork.add(aFe1mSDK3);
            }
        }
    }

    public void areAllFieldsValid(AFh1jSDK aFh1jSDK) {
        this.copy.AFAdRevenueData(aFh1jSDK);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0123  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x012a  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x015c  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0145  */
    @Override // com.appsflyer.internal.AFe1eSDK
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final AFd1jSDK<String> getRevenue(@NonNull String str) {
        double d6;
        JSONObject jSONObject;
        String str2;
        String str3;
        Exception exc;
        String replaceAll;
        String str4;
        getMediationNetwork(this.toString);
        if (this.toString.getCurrencyIso4217Code.containsKey("meta")) {
            try {
                d6 = this.equals.AFAdRevenueData.AFAdRevenueData.getMonetizationNetwork.AFAdRevenueData.getRevenue;
            } catch (NullPointerException unused) {
                d6 = 1.0d;
            }
            if (AFh1jSDK.getCurrencyIso4217Code(d6)) {
                this.toString.getCurrencyIso4217Code.remove("meta");
            }
        }
        AFd1jSDK<String> AFAdRevenueData = ((AFe1eSDK) this).component1.AFAdRevenueData(this.toString, str, this.registerClient);
        Map<String, Object> map = this.toString.getCurrencyIso4217Code;
        try {
            jSONObject = new JSONObject(map);
            try {
                str2 = jSONObject.toString();
                try {
                } catch (NullPointerException e9) {
                    e = e9;
                    AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "JSONObject return null String object. Trying to create AFJsonObject.", e);
                    try {
                        Object[] objArr = {map};
                        Map map2 = AFa1jSDK.unregisterClient;
                        Object obj = map2.get(-892712946);
                        if (obj == null) {
                            obj = ((Class) AFa1jSDK.AFAdRevenueData(Color.argb(0, 0, 0, 0) + 196, (char) (ImageFormat.getBitsPerPixel(0) + 29637), (ExpandableListView.getPackedPositionForChild(0, 0) > 0L ? 1 : (ExpandableListView.getPackedPositionForChild(0, 0) == 0L ? 0 : -1)) + 38)).getMethod("getCurrencyIso4217Code", Map.class);
                            map2.put(-892712946, obj);
                        }
                        String str5 = (String) ((Method) obj).invoke(null, objArr);
                        try {
                        } catch (NullPointerException e10) {
                            e = e10;
                            str2 = str5;
                            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "AFJsonObject return null String object.", e);
                            str3 = "";
                            if (str2 != null) {
                            }
                            if (str3.equals(str4)) {
                            }
                            StringBuilder sb2 = new StringBuilder();
                            sb2.append(this);
                            sb2.append(": preparing data: ");
                            AFg1bSDK.getMediationNetwork(sb2.toString(), jSONObject);
                            this.component4.getMonetizationNetwork(AFAdRevenueData != null ? AFAdRevenueData.getRevenue.getRevenue : null, str3);
                            return AFAdRevenueData;
                        } catch (Exception e11) {
                            exc = e11;
                            str2 = str5;
                            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "AFFinalizer: reflection init failed.", exc, false, false, true);
                            str3 = "";
                            if (str2 != null) {
                            }
                            if (str3.equals(str4)) {
                            }
                            StringBuilder sb22 = new StringBuilder();
                            sb22.append(this);
                            sb22.append(": preparing data: ");
                            AFg1bSDK.getMediationNetwork(sb22.toString(), jSONObject);
                            this.component4.getMonetizationNetwork(AFAdRevenueData != null ? AFAdRevenueData.getRevenue.getRevenue : null, str3);
                            return AFAdRevenueData;
                        } catch (Throwable th2) {
                            th = th2;
                            str2 = str5;
                            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "Unexpected error", th);
                            str3 = "";
                            if (str2 != null) {
                            }
                            if (str3.equals(str4)) {
                            }
                            StringBuilder sb222 = new StringBuilder();
                            sb222.append(this);
                            sb222.append(": preparing data: ");
                            AFg1bSDK.getMediationNetwork(sb222.toString(), jSONObject);
                            this.component4.getMonetizationNetwork(AFAdRevenueData != null ? AFAdRevenueData.getRevenue.getRevenue : null, str3);
                            return AFAdRevenueData;
                        }
                        if (str5 != null) {
                            replaceAll = str5.replaceAll("\\p{C}", "*Non-printing character*");
                            str2 = str5;
                            str3 = replaceAll;
                            if (str2 != null) {
                            }
                            if (str3.equals(str4)) {
                            }
                            StringBuilder sb2222 = new StringBuilder();
                            sb2222.append(this);
                            sb2222.append(": preparing data: ");
                            AFg1bSDK.getMediationNetwork(sb2222.toString(), jSONObject);
                            this.component4.getMonetizationNetwork(AFAdRevenueData != null ? AFAdRevenueData.getRevenue.getRevenue : null, str3);
                            return AFAdRevenueData;
                        }
                        throw new NullPointerException("JSON toString of eventParams map returns null");
                    } catch (Throwable th3) {
                        try {
                            Throwable cause = th3.getCause();
                            if (cause != null) {
                                throw cause;
                            }
                            throw th3;
                        } catch (NullPointerException e12) {
                            e = e12;
                            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "AFJsonObject return null String object.", e);
                            str3 = "";
                            if (str2 != null) {
                            }
                            if (str3.equals(str4)) {
                            }
                            StringBuilder sb22222 = new StringBuilder();
                            sb22222.append(this);
                            sb22222.append(": preparing data: ");
                            AFg1bSDK.getMediationNetwork(sb22222.toString(), jSONObject);
                            this.component4.getMonetizationNetwork(AFAdRevenueData != null ? AFAdRevenueData.getRevenue.getRevenue : null, str3);
                            return AFAdRevenueData;
                        } catch (Exception e13) {
                            exc = e13;
                            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "AFFinalizer: reflection init failed.", exc, false, false, true);
                            str3 = "";
                            if (str2 != null) {
                            }
                            if (str3.equals(str4)) {
                            }
                            StringBuilder sb222222 = new StringBuilder();
                            sb222222.append(this);
                            sb222222.append(": preparing data: ");
                            AFg1bSDK.getMediationNetwork(sb222222.toString(), jSONObject);
                            this.component4.getMonetizationNetwork(AFAdRevenueData != null ? AFAdRevenueData.getRevenue.getRevenue : null, str3);
                            return AFAdRevenueData;
                        } catch (Throwable th4) {
                            th = th4;
                            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "Unexpected error", th);
                            str3 = "";
                            if (str2 != null) {
                            }
                            if (str3.equals(str4)) {
                            }
                            StringBuilder sb2222222 = new StringBuilder();
                            sb2222222.append(this);
                            sb2222222.append(": preparing data: ");
                            AFg1bSDK.getMediationNetwork(sb2222222.toString(), jSONObject);
                            this.component4.getMonetizationNetwork(AFAdRevenueData != null ? AFAdRevenueData.getRevenue.getRevenue : null, str3);
                            return AFAdRevenueData;
                        }
                    }
                } catch (Throwable th5) {
                    th = th5;
                    AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "Unexpected error", th);
                    str3 = "";
                    if (str2 != null) {
                    }
                    if (str3.equals(str4)) {
                    }
                    StringBuilder sb22222222 = new StringBuilder();
                    sb22222222.append(this);
                    sb22222222.append(": preparing data: ");
                    AFg1bSDK.getMediationNetwork(sb22222222.toString(), jSONObject);
                    this.component4.getMonetizationNetwork(AFAdRevenueData != null ? AFAdRevenueData.getRevenue.getRevenue : null, str3);
                    return AFAdRevenueData;
                }
            } catch (NullPointerException e14) {
                e = e14;
                str2 = null;
            } catch (Throwable th6) {
                th = th6;
                str2 = null;
            }
        } catch (NullPointerException e15) {
            e = e15;
            jSONObject = null;
            str2 = null;
        } catch (Throwable th7) {
            th = th7;
            jSONObject = null;
            str2 = null;
        }
        if (str2 != null) {
            replaceAll = str2.replaceAll("\\p{C}", "*Non-printing character*");
            str3 = replaceAll;
            str4 = str2 != null ? str2 : "";
            if (str3.equals(str4)) {
                str3 = str4;
            } else {
                AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "Payload contains non-printing characters");
                try {
                    jSONObject = new JSONObject(str3);
                } catch (JSONException e16) {
                    AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "Couldn't parse the payload to a json object", e16);
                }
            }
            StringBuilder sb222222222 = new StringBuilder();
            sb222222222.append(this);
            sb222222222.append(": preparing data: ");
            AFg1bSDK.getMediationNetwork(sb222222222.toString(), jSONObject);
            this.component4.getMonetizationNetwork(AFAdRevenueData != null ? AFAdRevenueData.getRevenue.getRevenue : null, str3);
            return AFAdRevenueData;
        }
        throw new NullPointerException("JSON toString of eventParams map returns null");
    }
}
