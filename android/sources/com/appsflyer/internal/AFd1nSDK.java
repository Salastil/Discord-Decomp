package com.appsflyer.internal;

import android.content.pm.PackageManager;
import android.media.AudioTrack;
import android.os.Build;
import android.view.ViewConfiguration;
import androidx.annotation.NonNull;
import com.appsflyer.AFLogger;
import com.appsflyer.AppsFlyerProperties;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.security.SecureRandom;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class AFd1nSDK implements AFd1mSDK {
    private static int $10 = 0;
    private static int $11 = 1;
    private static char[] component2 = null;
    private static int copy = 1;
    private static char equals;
    private static final int getRevenue;
    private static int hashCode;
    private final AFc1bSDK component1;
    private List<String> getCurrencyIso4217Code = new ArrayList();
    private boolean AFAdRevenueData = true;

    @NonNull
    private final Map<String, Object> getMediationNetwork = new HashMap();
    private SecureRandom component3 = new SecureRandom();
    private boolean areAllFieldsValid = true ^ AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.DPM, false);
    private int getMonetizationNetwork = 0;
    private boolean component4 = false;

    static {
        component2();
        getRevenue = 98166;
        hashCode = (copy + 61) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    public AFd1nSDK(AFc1bSDK aFc1bSDK) {
        this.component1 = aFc1bSDK;
    }

    public static /* synthetic */ Object AFAdRevenueData(Object[] objArr, int i5, int i6, int i10) {
        int i11 = (i6 * (-755)) + (i5 * (-755));
        int i12 = ~((~i5) | (~i6));
        int i13 = i5 | i6;
        int i14 = ((~(i13 | i10)) | i12) * (-756);
        int i15 = ((i13 | (~i10)) * 756) + i14 + (i12 * 1512) + i11;
        if (i15 == 1) {
            return getMediationNetwork(objArr);
        }
        if (i15 == 2) {
            return getRevenue(objArr);
        }
        if (i15 != 3) {
            AFd1nSDK aFd1nSDK = (AFd1nSDK) objArr[0];
            int i16 = hashCode + 43;
            copy = i16 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            int i17 = i16 % 2;
            boolean mediationNetwork = aFd1nSDK.component1.component2().getMediationNetwork("participantInProxy", false);
            copy = (hashCode + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return Boolean.valueOf(mediationNetwork);
        }
        AFd1nSDK aFd1nSDK2 = (AFd1nSDK) objArr[0];
        String str = (String) objArr[1];
        String str2 = (String) objArr[2];
        int i18 = copy + 45;
        hashCode = i18 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i18 % 2 == 0) {
            aFd1nSDK2.getCurrencyIso4217Code("server_request", str, str2);
            return null;
        }
        String[] strArr = new String[0];
        strArr[0] = str2;
        aFd1nSDK2.getCurrencyIso4217Code("server_request", str, strArr);
        return null;
    }

    private boolean AFInAppEventParameterName() {
        return ((Boolean) AFAdRevenueData(new Object[]{this}, 59516456, -59516456, System.identityHashCode(this))).booleanValue();
    }

    private void AFKeystoreWrapper() {
        AFAdRevenueData(new Object[]{this}, -788691882, 788691884, System.identityHashCode(this));
    }

    private static void a(byte b10, String str, int i5, Object[] objArr) {
        int i6;
        int length;
        char[] cArr;
        int i10;
        char[] cArr2 = str;
        if (str != null) {
            cArr2 = str.toCharArray();
        }
        char[] cArr3 = cArr2;
        AFk1jSDK aFk1jSDK = new AFk1jSDK();
        char[] cArr4 = component2;
        if (cArr4 != null) {
            int i11 = $10 + 53;
            $11 = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i11 % 2 == 0) {
                length = cArr4.length;
                cArr = new char[length];
                i10 = 1;
            } else {
                length = cArr4.length;
                cArr = new char[length];
                i10 = 0;
            }
            while (i10 < length) {
                $10 = ($11 + 31) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                cArr[i10] = (char) (cArr4[i10] ^ (-8266694153104071789L));
                i10++;
            }
            cArr4 = cArr;
        }
        char c6 = (char) ((-8266694153104071789L) ^ equals);
        char[] cArr5 = new char[i5];
        if (i5 % 2 != 0) {
            i6 = i5 - 1;
            cArr5[i6] = (char) (cArr3[i6] - b10);
        } else {
            i6 = i5;
        }
        if (i6 > 1) {
            aFk1jSDK.getMonetizationNetwork = 0;
            while (true) {
                int i12 = aFk1jSDK.getMonetizationNetwork;
                if (i12 >= i6) {
                    break;
                }
                char c8 = cArr3[i12];
                aFk1jSDK.getCurrencyIso4217Code = c8;
                char c10 = cArr3[i12 + 1];
                aFk1jSDK.getMediationNetwork = c10;
                if (c8 == c10) {
                    $11 = ($10 + 115) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    cArr5[i12] = (char) (c8 - b10);
                    cArr5[i12 + 1] = (char) (c10 - b10);
                } else {
                    int i13 = c8 / c6;
                    aFk1jSDK.getRevenue = i13;
                    int i14 = c8 % c6;
                    aFk1jSDK.areAllFieldsValid = i14;
                    int i15 = c10 / c6;
                    aFk1jSDK.AFAdRevenueData = i15;
                    int i16 = c10 % c6;
                    aFk1jSDK.component2 = i16;
                    if (i14 == i16) {
                        int i17 = ((i13 + c6) - 1) % c6;
                        aFk1jSDK.getRevenue = i17;
                        int i18 = ((i15 + c6) - 1) % c6;
                        aFk1jSDK.AFAdRevenueData = i18;
                        cArr5[i12] = cArr4[(i17 * c6) + i14];
                        cArr5[i12 + 1] = cArr4[(i18 * c6) + i16];
                    } else if (i13 == i15) {
                        int i19 = ((i14 + c6) - 1) % c6;
                        aFk1jSDK.areAllFieldsValid = i19;
                        int i20 = ((i16 + c6) - 1) % c6;
                        aFk1jSDK.component2 = i20;
                        cArr5[i12] = cArr4[(i13 * c6) + i19];
                        cArr5[i12 + 1] = cArr4[(i15 * c6) + i20];
                    } else {
                        cArr5[i12] = cArr4[(i13 * c6) + i16];
                        cArr5[i12 + 1] = cArr4[(i15 * c6) + i14];
                    }
                }
                aFk1jSDK.getMonetizationNetwork = i12 + 2;
            }
        }
        $11 = ($10 + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        for (int i21 = 0; i21 < i5; i21++) {
            cArr5[i21] = (char) (cArr5[i21] ^ 13722);
        }
        objArr[0] = new String(cArr5);
    }

    private float component1() {
        int i5 = copy + 29;
        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            this.component3.nextFloat();
            throw null;
        }
        float nextFloat = this.component3.nextFloat();
        int i6 = copy + 123;
        hashCode = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            return nextFloat;
        }
        throw null;
    }

    public static void component2() {
        component2 = new char[]{58256, 58263, 54893, 58257, 54887, 54907, 54888, 58258, 54891};
        equals = (char) 58256;
    }

    private synchronized void component3() {
        int i5 = hashCode;
        copy = (i5 + 109) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (this.component4) {
            copy = (i5 + 103) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return;
        }
        this.component4 = true;
        try {
            getCurrencyIso4217Code("r_debugging_on", new SimpleDateFormat("yyyy-MM-dd HH:mm:ssZ", Locale.ENGLISH).format(Long.valueOf(System.currentTimeMillis())), new String[0]);
        } catch (Throwable th2) {
            AFLogger.INSTANCE.e(AFg1cSDK.PROXY, "Error while starting remote debugger", th2, true, true, true);
        }
    }

    private static String component4() {
        int i5 = (copy + 23) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        hashCode = i5;
        int i6 = i5 + 103;
        copy = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            int i10 = 65 / 0;
        }
        return "6.17.3";
    }

    private boolean copy() {
        if (!this.areAllFieldsValid) {
            return false;
        }
        int i5 = copy;
        hashCode = (i5 + 91) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (this.AFAdRevenueData) {
            return true;
        }
        int i6 = i5 + 111;
        hashCode = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            return this.component4;
        }
        throw null;
    }

    private synchronized void copydefault() {
        this.getCurrencyIso4217Code = new ArrayList();
        this.getMonetizationNetwork = 0;
        hashCode = (copy + 43) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @NonNull
    private synchronized Map<String, Object> equals() {
        int i5 = copy + 47;
        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            this.getMediationNetwork.put("data", this.getCurrencyIso4217Code);
            copydefault();
            throw null;
        }
        this.getMediationNetwork.put("data", this.getCurrencyIso4217Code);
        copydefault();
        return this.getMediationNetwork;
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x0053, code lost:
    
        if (r6 == null) goto L11;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static /* synthetic */ Object getMediationNetwork(Object[] objArr) {
        AFd1oSDK mediationNetwork;
        AFd1nSDK aFd1nSDK = (AFd1nSDK) objArr[0];
        String str = (String) objArr[1];
        int i5 = copy + 61;
        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        try {
            if (i5 % 2 != 0) {
                mediationNetwork = aFd1nSDK.component1.getRevenue().getMediationNetwork(aFd1nSDK.getMonetizationNetwork(str), aFd1nSDK.component1.AFKeystoreWrapper().getMediationNetwork());
                int i6 = 37 / 0;
                if (mediationNetwork == null) {
                    AFLogger.afErrorLogForExcManagerOnly("could not send null proxy data", new NullPointerException("request was null"));
                    return null;
                }
                aFd1nSDK.component1.getMediationNetwork().execute(new g(2, mediationNetwork));
                int i10 = hashCode + 75;
                copy = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i10 % 2 != 0) {
                    return null;
                }
                throw null;
            }
            mediationNetwork = aFd1nSDK.component1.getRevenue().getMediationNetwork(aFd1nSDK.getMonetizationNetwork(str), aFd1nSDK.component1.AFKeystoreWrapper().getMediationNetwork());
        } catch (Throwable th2) {
            AFLogger.afErrorLogForExcManagerOnly("could not send proxy data", th2);
            return null;
        }
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final boolean areAllFieldsValid() {
        int i5 = (copy + 17) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        hashCode = i5;
        boolean z5 = this.component4;
        copy = (i5 + 47) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return z5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0053, code lost:
    
        if (r0 != false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0030, code lost:
    
        if (r0 != false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x0059, code lost:
    
        getMediationNetwork();
        AFAdRevenueData();
        com.appsflyer.internal.AFd1nSDK.copy = (com.appsflyer.internal.AFd1nSDK.hashCode + 81) % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x0067, code lost:
    
        return r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0055, code lost:
    
        component3();
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0058, code lost:
    
        return r0;
     */
    @Override // com.appsflyer.internal.AFd1mSDK
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean getCurrencyIso4217Code() {
        boolean currencyIso4217Code;
        int i5 = hashCode + 45;
        copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            currencyIso4217Code = getCurrencyIso4217Code(getMonetizationNetwork(this.component1.component1().AFAdRevenueData.AFAdRevenueData), getMonetizationNetwork(this.component1.component1().AFAdRevenueData.getMediationNetwork));
            int i6 = 94 / 0;
        } else {
            currencyIso4217Code = getCurrencyIso4217Code(getMonetizationNetwork(this.component1.component1().AFAdRevenueData.AFAdRevenueData), getMonetizationNetwork(this.component1.component1().AFAdRevenueData.getMediationNetwork));
        }
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final void getMonetizationNetwork(Throwable th2) {
        String message;
        hashCode = (copy + 21) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Throwable cause = th2.getCause();
        String simpleName = th2.getClass().getSimpleName();
        if (cause == null) {
            message = th2.getMessage();
        } else {
            message = cause.getMessage();
            copy = (hashCode + 61) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        getCurrencyIso4217Code("exception", simpleName, getMediationNetwork(message, cause == null ? th2.getStackTrace() : cause.getStackTrace()));
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final synchronized void getRevenue() {
        hashCode = (copy + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        this.getMediationNetwork.clear();
        this.getCurrencyIso4217Code.clear();
        this.getMonetizationNetwork = 0;
        hashCode = (copy + 125) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final void q_(String str, PackageManager packageManager) {
        AFAdRevenueData(new Object[]{this, str, packageManager}, 389372347, -389372346, System.identityHashCode(this));
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final void getRevenue(String str, String str2) {
        int i5 = copy + 3;
        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            String[] strArr = new String[0];
            strArr[0] = str2;
            getCurrencyIso4217Code(null, str, strArr);
        } else {
            getCurrencyIso4217Code(null, str, str2);
        }
        int i6 = hashCode + 61;
        copy = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            int i10 = 81 / 0;
        }
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final synchronized void AFAdRevenueData() {
        try {
            if (!this.component4 && !this.AFAdRevenueData) {
                int i5 = copy + 93;
                hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 == 0) {
                    return;
                } else {
                    throw null;
                }
            }
            this.component4 = false;
            this.AFAdRevenueData = false;
            try {
                getCurrencyIso4217Code("r_debugging_off", new SimpleDateFormat("yyyy-MM-dd HH:mm:ssZ", Locale.ENGLISH).format(Long.valueOf(System.currentTimeMillis())), new String[0]);
                copy = (hashCode + 41) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                return;
            } catch (Throwable th2) {
                AFLogger.INSTANCE.e(AFg1cSDK.PROXY, "Error while stopping remote debugger", th2, true, true, true);
                return;
            }
        } catch (Throwable th3) {
            throw th3;
        }
        throw th3;
    }

    private synchronized void getRevenue(String str, String str2, String str3) {
        try {
            Map<String, Object> map = this.getMediationNetwork;
            Object[] objArr = new Object[1];
            a((byte) (114 - (ViewConfiguration.getMaximumDrawingCacheSize() >> 24)), "\u0002\b\u0007\u0003㙰", 6 - (AudioTrack.getMaxVolume() > 0.0f ? 1 : (AudioTrack.getMaxVolume() == 0.0f ? 0 : -1)), objArr);
            map.put(((String) objArr[0]).intern(), Build.BRAND);
            this.getMediationNetwork.put("model", Build.MODEL);
            this.getMediationNetwork.put("platform", "Android");
            this.getMediationNetwork.put("platform_version", Build.VERSION.RELEASE);
            if (str != null) {
                try {
                    hashCode = (copy + 43) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (str.length() > 0) {
                        hashCode = (copy + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        this.getMediationNetwork.put("advertiserId", str);
                    }
                } finally {
                }
            }
            if (str2 != null && str2.length() > 0) {
                this.getMediationNetwork.put("imei", str2);
            }
            if (str3 != null) {
                copy = (hashCode + 49) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (str3.length() > 0) {
                    this.getMediationNetwork.put("android_id", str3);
                    copy = (hashCode + 63) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                }
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final void getMonetizationNetwork(String str, int i5, String str2) {
        hashCode = (copy + 111) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        getCurrencyIso4217Code("server_response", str, String.valueOf(i5), str2);
        int i6 = hashCode + 5;
        copy = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final void getMonetizationNetwork() {
        int i5 = (copy + 83) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        hashCode = i5;
        this.areAllFieldsValid = false;
        copy = (i5 + 99) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    private Map<String, Object> getMonetizationNetwork(String str) {
        hashCode = (copy + 39) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        getMonetizationNetwork(str, this.component1.AFKeystoreWrapper(), this.component1.afInfoLog());
        Map<String, Object> equals2 = equals();
        int i5 = hashCode + 45;
        copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            int i6 = 30 / 0;
        }
        return equals2;
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final synchronized void getMediationNetwork() {
        try {
            int i5 = copy + 13;
            hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                this.AFAdRevenueData = false;
            } else {
                this.AFAdRevenueData = false;
            }
            getRevenue();
            copydefault();
            int i6 = copy + 81;
            hashCode = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 != 0) {
                int i10 = 88 / 0;
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    private synchronized void getMonetizationNetwork(String str, AFf1cSDK aFf1cSDK, AFc1eSDK aFc1eSDK) {
        try {
            AppsFlyerProperties appsFlyerProperties = AppsFlyerProperties.getInstance();
            String string = appsFlyerProperties.getString("remote_debug_static_data");
            this.getMediationNetwork.clear();
            if (string != null) {
                try {
                    this.getMediationNetwork.putAll(AFg1hSDK.getMonetizationNetwork(new JSONObject(string)));
                    copy = (hashCode + 49) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                } catch (Throwable unused) {
                }
            } else {
                getRevenue(this.component1.getCurrencyIso4217Code().component4(), aFf1cSDK.getCurrencyIso4217Code(), aFc1eSDK.AFAdRevenueData);
                StringBuilder sb2 = new StringBuilder("6.17.3.");
                sb2.append(AFa1uSDK.getRevenue);
                getRevenue(sb2.toString(), this.component1.AFKeystoreWrapper().getMediationNetwork(), appsFlyerProperties.getString("KSAppsFlyerId"), AFb1jSDK.getRevenue(this.component1.getCurrencyIso4217Code().getMonetizationNetwork));
                try {
                    int i5 = this.component1.getCurrencyIso4217Code().n_().versionCode;
                    getCurrencyIso4217Code(str, String.valueOf(i5), appsFlyerProperties.getString(AppsFlyerProperties.CHANNEL), appsFlyerProperties.getString("preInstallName"));
                } catch (Throwable unused2) {
                }
                appsFlyerProperties.set("remote_debug_static_data", new JSONObject(this.getMediationNetwork).toString());
            }
            this.getMediationNetwork.put("launch_counter", String.valueOf(this.component1.getCurrencyIso4217Code().getMonetizationNetwork.getMediationNetwork("appsFlyerCount", 0)));
            copy = (hashCode + 17) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x002f, code lost:
    
        r3 = com.appsflyer.internal.AFd1nSDK.copy + 17;
        com.appsflyer.internal.AFd1nSDK.hashCode = r3 % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x0039, code lost:
    
        if ((r3 % 2) == 0) goto L17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x003b, code lost:
    
        r3 = 26 / 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x003e, code lost:
    
        return r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0019, code lost:
    
        return new java.lang.String[]{r3};
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0013, code lost:
    
        if (r4 == null) goto L8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0010, code lost:
    
        if (r4 == null) goto L8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x001a, code lost:
    
        r2 = 1;
        r0 = new java.lang.String[r4.length + 1];
        r0[0] = r3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:7:0x0022, code lost:
    
        if (r2 >= r4.length) goto L18;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0024, code lost:
    
        r0[r2] = r4[r2].toString();
        r2 = r2 + 1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String[] getMediationNetwork(String str, StackTraceElement[] stackTraceElementArr) {
        int i5 = copy + 49;
        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            int i6 = 54 / 0;
        }
    }

    private synchronized void getRevenue(String str, String str2, String str3, String str4) {
        try {
            hashCode = (copy + 11) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            try {
                this.getMediationNetwork.put("sdk_version", str);
                if (str2 != null) {
                    copy = (hashCode + 109) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (str2.length() > 0) {
                        int i5 = copy + 101;
                        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        if (i5 % 2 == 0) {
                            this.getMediationNetwork.put("devkey", str2);
                        } else {
                            this.getMediationNetwork.put("devkey", str2);
                            throw null;
                        }
                    }
                }
                if (str3 != null && str3.length() > 0) {
                    this.getMediationNetwork.put("originalAppsFlyerId", str3);
                }
                if (str4 != null && str4.length() > 0) {
                    this.getMediationNetwork.put("uid", str4);
                }
            } catch (Throwable unused) {
            }
        } finally {
        }
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final void getCurrencyIso4217Code(String str, String... strArr) {
        int i5 = hashCode + 105;
        copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            getCurrencyIso4217Code("public_api_call", str, strArr);
            int i6 = 57 / 0;
        } else {
            getCurrencyIso4217Code("public_api_call", str, strArr);
        }
    }

    private synchronized void getCurrencyIso4217Code(String str, String str2, String str3, String str4) {
        try {
            copy = (hashCode + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (str != null) {
                try {
                    if (str.length() > 0) {
                        copy = (hashCode + 7) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        this.getMediationNetwork.put("app_id", str);
                    }
                } catch (Throwable unused) {
                    return;
                }
            }
            if (str2 != null && str2.length() > 0) {
                this.getMediationNetwork.put("app_version", str2);
                copy = (hashCode + 77) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
            if (str3 != null) {
                hashCode = (copy + 63) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (str3.length() > 0) {
                    copy = (hashCode + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    this.getMediationNetwork.put(AppsFlyerProperties.CHANNEL, str3);
                }
            }
            if (str4 != null && str4.length() > 0) {
                this.getMediationNetwork.put("preInstall", str4);
            }
        } finally {
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0029, code lost:
    
        return false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x002a, code lost:
    
        return true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x001b, code lost:
    
        if (com.appsflyer.internal.AFk1xSDK.getMonetizationNetwork(r4) != false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0014, code lost:
    
        if (com.appsflyer.internal.AFk1xSDK.getMonetizationNetwork(r4) != false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x002c, code lost:
    
        r4 = r4.equals(r3.component1.getCurrencyIso4217Code().n_().versionName);
        com.appsflyer.internal.AFd1nSDK.copy = (com.appsflyer.internal.AFd1nSDK.hashCode + 123) % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x0044, code lost:
    
        return r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x001d, code lost:
    
        r4 = com.appsflyer.internal.AFd1nSDK.copy + 29;
        com.appsflyer.internal.AFd1nSDK.hashCode = r4 % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0027, code lost:
    
        if ((r4 % 2) == 0) goto L12;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean getMediationNetwork(String str) {
        int i5 = hashCode + 97;
        copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            int i6 = 55 / 0;
        }
    }

    private boolean getRevenue(@NonNull AFi1ySDK aFi1ySDK, AFi1ySDK aFi1ySDK2) {
        boolean currencyIso4217Code;
        if (aFi1ySDK.equals(aFi1ySDK2)) {
            int i5 = hashCode + 51;
            copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                AFInAppEventParameterName();
                throw null;
            }
            currencyIso4217Code = AFInAppEventParameterName();
        } else {
            currencyIso4217Code = getCurrencyIso4217Code(aFi1ySDK.AFAdRevenueData);
            getMonetizationNetwork(currencyIso4217Code);
        }
        int i6 = copy + 61;
        hashCode = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 != 0) {
            int i10 = 53 / 0;
        }
        return currencyIso4217Code;
    }

    private static /* synthetic */ Object getRevenue(Object[] objArr) {
        AFd1nSDK aFd1nSDK = (AFd1nSDK) objArr[0];
        int i5 = hashCode + 33;
        copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            aFd1nSDK.component1.component2().getCurrencyIso4217Code("participantInProxy");
            int i6 = 63 / 0;
            return null;
        }
        aFd1nSDK.component1.component2().getCurrencyIso4217Code("participantInProxy");
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x001c, code lost:
    
        if (r4.getMonetizationNetwork >= 98304) goto L37;
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x002b, code lost:
    
        r0 = java.lang.System.currentTimeMillis();
        r7 = android.text.TextUtils.join(", ", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0035, code lost:
    
        if (r5 == null) goto L22;
     */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x0037, code lost:
    
        r3 = new java.lang.StringBuilder();
        r3.append(r0);
        r3.append(" ");
        r3.append(java.lang.Thread.currentThread().getId());
        r3.append(" _/AppsFlyer_6.17.3 [");
        r3.append(r5);
        r3.append("] ");
        r3.append(r6);
        r3.append(" ");
        r3.append(r7);
        r5 = r3.toString();
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0098, code lost:
    
        r6 = r4.getMonetizationNetwork + (r5.length() << 1);
        r7 = com.appsflyer.internal.AFd1nSDK.getRevenue;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x00a3, code lost:
    
        if (r6 <= r7) goto L26;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x00a5, code lost:
    
        r5 = r5.substring(0, (r7 - r4.getMonetizationNetwork) / 2);
        r2 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x00af, code lost:
    
        r4.getCurrencyIso4217Code.add(r5);
        r4.getMonetizationNetwork += r5.length() << 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x00be, code lost:
    
        if (r2 == false) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x00c0, code lost:
    
        r5 = com.appsflyer.internal.AFd1nSDK.hashCode + 101;
        com.appsflyer.internal.AFd1nSDK.copy = r5 % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x00ca, code lost:
    
        if ((r5 % 2) != 0) goto L31;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x00cc, code lost:
    
        r4.getCurrencyIso4217Code.add("+~+~ The limit has been exceeded, and no more data is available. +~+~");
        r4.getMonetizationNetwork *= 10496;
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x00e7, code lost:
    
        com.appsflyer.internal.AFd1nSDK.copy = (com.appsflyer.internal.AFd1nSDK.hashCode + 11) % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x00da, code lost:
    
        r4.getCurrencyIso4217Code.add("+~+~ The limit has been exceeded, and no more data is available. +~+~");
        r4.getMonetizationNetwork += 138;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x00f0, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x006c, code lost:
    
        r5 = new java.lang.StringBuilder();
        r5.append(r0);
        r5.append(" ");
        r5.append(java.lang.Thread.currentThread().getId());
        r5.append(" ");
        r5.append(r6);
        r5.append("/AppsFlyer_6.17.3 ");
        r5.append(r7);
        r5 = r5.toString();
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x00f2, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x0027, code lost:
    
        if (r4.getMonetizationNetwork >= 98304) goto L37;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized void getCurrencyIso4217Code(String str, String str2, String... strArr) {
        try {
            if (copy()) {
                int i5 = copy + 49;
                hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                boolean z5 = false;
                if (i5 % 2 != 0) {
                    int i6 = 41 / 0;
                }
            }
            hashCode = (copy + 69) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        } finally {
        }
    }

    private static AFi1ySDK getMonetizationNetwork(AFi1wSDK aFi1wSDK) {
        AFi1zSDK aFi1zSDK;
        int i5 = hashCode + 65;
        int i6 = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        copy = i6;
        if (i5 % 2 == 0) {
            throw null;
        }
        if (aFi1wSDK != null && (aFi1zSDK = aFi1wSDK.getMonetizationNetwork) != null) {
            return aFi1zSDK.getMediationNetwork;
        }
        hashCode = (i6 + 85) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return null;
    }

    private void getMonetizationNetwork(boolean z5) {
        copy = (hashCode + 47) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        this.component1.component2().getCurrencyIso4217Code("participantInProxy", z5);
        int i5 = copy + 39;
        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.internal.AFd1mSDK
    public final void getMonetizationNetwork(String str, String str2) {
        AFAdRevenueData(new Object[]{this, str, str2}, 115232387, -115232384, System.identityHashCode(this));
    }

    private synchronized boolean getCurrencyIso4217Code(AFi1ySDK aFi1ySDK, AFi1ySDK aFi1ySDK2) {
        boolean z5 = true;
        try {
            if (aFi1ySDK == null) {
                int i5 = hashCode + 9;
                copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 == 0) {
                    AFAdRevenueData(new Object[]{this}, -788691882, 788691884, System.identityHashCode(this));
                } else {
                    AFAdRevenueData(new Object[]{this}, -788691882, 788691884, System.identityHashCode(this));
                    z5 = false;
                }
                copy = (hashCode + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                return z5;
            }
            if (!aFi1ySDK.getMonetizationNetwork()) {
                int i6 = hashCode + 99;
                copy = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                return i6 % 2 == 0 ? false : false;
            }
            if (this.component1.getCurrencyIso4217Code().getMonetizationNetwork.getMediationNetwork("appsFlyerCount", 0) > aFi1ySDK.getMonetizationNetwork) {
                copy = (hashCode + 47) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                return false;
            }
            copy = (hashCode + 25) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (!getRevenue(aFi1ySDK, aFi1ySDK2)) {
                return false;
            }
            if (getMediationNetwork(aFi1ySDK.getMediationNetwork)) {
                return getCurrencyIso4217Code(aFi1ySDK.getRevenue);
            }
            return false;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    private static boolean getCurrencyIso4217Code(String str) {
        hashCode = (copy + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (AFk1xSDK.getMonetizationNetwork(str)) {
            copy = (hashCode + 43) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return true;
        }
        new AFd1sSDK();
        return AFd1sSDK.getCurrencyIso4217Code(component4(), str);
    }

    private boolean getCurrencyIso4217Code(float f2) {
        int i5 = hashCode;
        copy = (i5 + 39) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        double d6 = f2;
        if (d6 >= 1.0d) {
            return true;
        }
        if (d6 <= 0.0d) {
            int i6 = i5 + 121;
            copy = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return i6 % 2 == 0;
        }
        if (component1() > f2) {
            return false;
        }
        int i10 = hashCode + 123;
        copy = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return i10 % 2 != 0;
    }
}
