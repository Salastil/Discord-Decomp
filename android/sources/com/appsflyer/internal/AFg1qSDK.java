package com.appsflyer.internal;

import android.annotation.SuppressLint;
import android.app.UiModeManager;
import android.content.Context;
import android.media.AudioTrack;
import android.os.Build;
import android.os.Environment;
import android.os.StatFs;
import android.os.SystemClock;
import android.provider.Settings;
import android.text.TextUtils;
import com.appsflyer.AFLogger;
import com.appsflyer.AdRevenueScheme;
import com.appsflyer.AppsFlyerProperties;
import com.appsflyer.internal.AFg1sSDK;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.q;
import j$.util.DesugarTimeZone;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStreamReader;
import java.nio.charset.Charset;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Properties;
import java.util.concurrent.TimeUnit;
import kotlin.Lazy;
import kotlin.Pair;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class AFg1qSDK implements AFg1rSDK {
    private static int $10 = 0;
    private static int $11 = 1;

    /* renamed from: i, reason: collision with root package name */
    private static int f3660i = 1;

    /* renamed from: w, reason: collision with root package name */
    private static int f3661w;

    @NotNull
    private final AFg1sSDK AFAdRevenueData;

    @NotNull
    private final Lazy AFKeystoreWrapper;

    @NotNull
    private final AFc1pSDK areAllFieldsValid;

    @NotNull
    private final AFc1oSDK component1;

    @NotNull
    private final AFg1vSDK component2;

    @NotNull
    private final AFh1tSDK component3;

    @NotNull
    private final AFi1sSDK component4;

    @NotNull
    private final AFf1cSDK copy;

    @NotNull
    private final Lazy copydefault;

    @NotNull
    private final AFc1gSDK equals;

    @NotNull
    private final AFi1lSDK getCurrencyIso4217Code;

    @NotNull
    private final Context getMediationNetwork;

    @NotNull
    private final AFj1pSDK getMonetizationNetwork;

    @NotNull
    private final String getRevenue;

    @NotNull
    private final AFg1xSDK hashCode;

    @NotNull
    private final AFc1eSDK toString;
    private static char[] AFInAppEventType = {35909, 35928, 35921, 35926, 35927, 35903, 35904, 35924, 35933, 35910, 35931, 35879, 35908, 35905, 35911};
    private static int AFLogger = 1912311267;
    private static boolean AFInAppEventParameterName = true;
    private static boolean registerClient = true;

    public AFg1qSDK(@NotNull String str, @NotNull Context context, @NotNull AFi1lSDK aFi1lSDK, @NotNull AFg1sSDK aFg1sSDK, @NotNull AFj1pSDK aFj1pSDK, @NotNull AFg1vSDK aFg1vSDK, @NotNull AFh1tSDK aFh1tSDK, @NotNull AFc1oSDK aFc1oSDK, @NotNull AFc1pSDK aFc1pSDK, @NotNull AFi1sSDK aFi1sSDK, @NotNull AFf1cSDK aFf1cSDK, @NotNull AFc1gSDK aFc1gSDK, @NotNull AFg1xSDK aFg1xSDK, @NotNull AFc1eSDK aFc1eSDK) {
        Intrinsics.checkNotNullParameter(str, "");
        Intrinsics.checkNotNullParameter(context, "");
        Intrinsics.checkNotNullParameter(aFi1lSDK, "");
        Intrinsics.checkNotNullParameter(aFg1sSDK, "");
        Intrinsics.checkNotNullParameter(aFj1pSDK, "");
        Intrinsics.checkNotNullParameter(aFg1vSDK, "");
        Intrinsics.checkNotNullParameter(aFh1tSDK, "");
        Intrinsics.checkNotNullParameter(aFc1oSDK, "");
        Intrinsics.checkNotNullParameter(aFc1pSDK, "");
        Intrinsics.checkNotNullParameter(aFi1sSDK, "");
        Intrinsics.checkNotNullParameter(aFf1cSDK, "");
        Intrinsics.checkNotNullParameter(aFc1gSDK, "");
        Intrinsics.checkNotNullParameter(aFg1xSDK, "");
        Intrinsics.checkNotNullParameter(aFc1eSDK, "");
        this.getRevenue = str;
        this.getMediationNetwork = context;
        this.getCurrencyIso4217Code = aFi1lSDK;
        this.AFAdRevenueData = aFg1sSDK;
        this.getMonetizationNetwork = aFj1pSDK;
        this.component2 = aFg1vSDK;
        this.component3 = aFh1tSDK;
        this.component1 = aFc1oSDK;
        this.areAllFieldsValid = aFc1pSDK;
        this.component4 = aFi1sSDK;
        this.copy = aFf1cSDK;
        this.equals = aFc1gSDK;
        this.hashCode = aFg1xSDK;
        this.toString = aFc1eSDK;
        this.copydefault = fo.l.a(new Function0<AppsFlyerProperties>() { // from class: com.appsflyer.internal.AFg1qSDK.5
            @Override // kotlin.jvm.functions.Function0
            /* renamed from: getCurrencyIso4217Code, reason: merged with bridge method [inline-methods] */
            public final AppsFlyerProperties invoke() {
                return AppsFlyerProperties.getInstance();
            }
        });
        this.AFKeystoreWrapper = fo.l.a(new Function0<SimpleDateFormat>() { // from class: com.appsflyer.internal.AFg1qSDK.3
            @Override // kotlin.jvm.functions.Function0
            /* renamed from: AFAdRevenueData, reason: merged with bridge method [inline-methods] */
            public final SimpleDateFormat invoke() {
                return new SimpleDateFormat("yyyy-MM-dd_HHmmssZ", Locale.US);
            }
        });
    }

    private void AFInAppEventParameterName(@NotNull Map<String, Object> map) {
        Intrinsics.checkNotNullParameter(map, "");
        long j = this.component3.hashCode;
        if (j != 0) {
            f3661w = (f3660i + 41) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            map.put("prev_session_dur", Long.valueOf(j));
            f3660i = (f3661w + 31) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        f3661w = (f3660i + 111) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    private void AFInAppEventType(@NotNull Map<String, Object> map) {
        getMediationNetwork(new Object[]{this, map}, -2015365334, 2015365335, System.identityHashCode(this));
    }

    private static void AFKeystoreWrapper(@NotNull Map<String, Object> map) {
        int i5 = f3661w + 41;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            Intrinsics.checkNotNullParameter(map, "");
            AFa1zSDK.getMonetizationNetwork();
            AFa1zSDK.getRevenue();
            throw null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        Object monetizationNetwork = AFa1zSDK.getMonetizationNetwork();
        String revenue = AFa1zSDK.getRevenue();
        if (monetizationNetwork == null || revenue == null || Integer.parseInt(revenue) <= 0) {
            return;
        }
        f3661w = (f3660i + 57) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        map.put("reinstallCounter", revenue);
        map.put("originalAppsflyerId", monetizationNetwork);
    }

    private void AFLogger(@NotNull Map<String, Object> map) {
        Intrinsics.checkNotNullParameter(map, "");
        String string = getMonetizationNetwork().getString(AppsFlyerProperties.EXTENSION);
        if (string != null) {
            f3661w = (f3660i + 39) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (string.length() == 0) {
                return;
            }
            f3661w = (f3660i + 117) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            map.put(AppsFlyerProperties.EXTENSION, string);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x007a  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0091  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:22:0x007a -> B:19:0x006a). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void a(String str, String str2, int[] iArr, int i5, Object[] objArr) {
        int i6;
        char[] cArr;
        int i10;
        int i11;
        int i12 = $11 + 111;
        $10 = i12 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        byte[] bArr = str2;
        if (i12 % 2 != 0) {
            throw null;
        }
        if (str2 != null) {
            bArr = str2.getBytes("ISO-8859-1");
        }
        byte[] bArr2 = bArr;
        char[] cArr2 = str;
        if (str != null) {
            cArr2 = str.toCharArray();
        }
        char[] cArr3 = cArr2;
        AFk1iSDK aFk1iSDK = new AFk1iSDK();
        char[] cArr4 = AFInAppEventType;
        if (cArr4 != null) {
            $10 = ($11 + 115) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            int length = cArr4.length;
            char[] cArr5 = new char[length];
            for (int i13 = 0; i13 < length; i13++) {
                $10 = ($11 + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                cArr5[i13] = (char) (cArr4[i13] ^ 1825820251896122634L);
            }
            cArr4 = cArr5;
        }
        int i14 = (int) (1825820251896122634L ^ AFLogger);
        if (registerClient) {
            int i15 = $11 + 119;
            $10 = i15 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i15 % 2 != 0) {
                int length2 = bArr2.length;
                aFk1iSDK.getCurrencyIso4217Code = length2;
                cArr = new char[length2];
                int i16 = 1;
                aFk1iSDK.getMediationNetwork = i16;
                i10 = aFk1iSDK.getMediationNetwork;
                i11 = aFk1iSDK.getCurrencyIso4217Code;
                if (i10 < i11) {
                    $11 = ($10 + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    cArr[i10] = (char) (cArr4[bArr2[(i11 - 1) - i10] + i5] - i14);
                    i16 = i10 + 1;
                    aFk1iSDK.getMediationNetwork = i16;
                    i10 = aFk1iSDK.getMediationNetwork;
                    i11 = aFk1iSDK.getCurrencyIso4217Code;
                    if (i10 < i11) {
                        objArr[0] = new String(cArr);
                    }
                }
            } else {
                int length3 = bArr2.length;
                aFk1iSDK.getCurrencyIso4217Code = length3;
                cArr = new char[length3];
                aFk1iSDK.getMediationNetwork = 0;
                i10 = aFk1iSDK.getMediationNetwork;
                i11 = aFk1iSDK.getCurrencyIso4217Code;
                if (i10 < i11) {
                }
            }
        } else if (AFInAppEventParameterName) {
            int length4 = cArr3.length;
            aFk1iSDK.getCurrencyIso4217Code = length4;
            char[] cArr6 = new char[length4];
            aFk1iSDK.getMediationNetwork = 0;
            while (true) {
                int i17 = aFk1iSDK.getMediationNetwork;
                int i18 = aFk1iSDK.getCurrencyIso4217Code;
                if (i17 >= i18) {
                    objArr[0] = new String(cArr6);
                    return;
                }
                int i19 = $10 + 77;
                $11 = i19 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i19 % 2 == 0) {
                    cArr6[i17] = (char) (cArr4[cArr3[(i18 << 1) >>> i17] + i5] >>> i14);
                    i6 = i17 % 0;
                } else {
                    cArr6[i17] = (char) (cArr4[cArr3[(i18 - 1) - i17] - i5] - i14);
                    i6 = i17 + 1;
                }
                aFk1iSDK.getMediationNetwork = i6;
            }
        } else {
            int length5 = iArr.length;
            aFk1iSDK.getCurrencyIso4217Code = length5;
            char[] cArr7 = new char[length5];
            aFk1iSDK.getMediationNetwork = 0;
            while (true) {
                int i20 = aFk1iSDK.getMediationNetwork;
                int i21 = aFk1iSDK.getCurrencyIso4217Code;
                if (i20 >= i21) {
                    objArr[0] = new String(cArr7);
                    return;
                } else {
                    cArr7[i20] = (char) (cArr4[iArr[(i21 - 1) - i20] - i5] - i14);
                    aFk1iSDK.getMediationNetwork = i20 + 1;
                }
            }
        }
    }

    private void afDebugLog(@NotNull Map<String, Object> map) {
        String str;
        Intrinsics.checkNotNullParameter(map, "");
        if (getMonetizationNetwork().getBoolean(AppsFlyerProperties.COLLECT_FACEBOOK_ATTR_ID, true)) {
            f3660i = (f3661w + 113) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            try {
                this.getMediationNetwork.getPackageManager().getApplicationInfo("com.facebook.katana", 0);
                str = this.areAllFieldsValid.getRevenue(this.getMediationNetwork);
                f3661w = (f3660i + 105) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            } catch (Throwable unused) {
                str = null;
            }
            if (str != null) {
                f3661w = (f3660i + 119) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                map.put("fb", str);
            }
        }
    }

    private static long areAllFieldsValid() {
        f3660i = (f3661w + 121) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        long currentTimeMillis = System.currentTimeMillis() - SystemClock.elapsedRealtime();
        f3660i = (f3661w + 3) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return currentTimeMillis;
    }

    private void component1(@NotNull Map<String, Object> map) {
        f3660i = (f3661w + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(map, "");
        AFf1cSDK.getMonetizationNetwork(map, this.areAllFieldsValid);
        int i5 = f3660i + 43;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            throw null;
        }
    }

    private String component2() {
        String string = getMonetizationNetwork().getString(AppsFlyerProperties.AF_STORE_FROM_API);
        if (string == null) {
            f3660i = (f3661w + 75) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            string = getCurrencyIso4217Code("AF_STORE");
        }
        int i5 = f3660i + 95;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            return string;
        }
        throw null;
    }

    private static /* synthetic */ Object component3(Object[] objArr) {
        AFg1qSDK aFg1qSDK = (AFg1qSDK) objArr[0];
        Map map = (Map) objArr[1];
        String str = (String) objArr[2];
        f3660i = (f3661w + 85) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(map, "");
        if (aFg1qSDK.getMonetizationNetwork().getBoolean(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, false)) {
            map.put(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, "true");
            return null;
        }
        String mediationNetwork = aFg1qSDK.copy.getMediationNetwork(aFg1qSDK.component1);
        if (mediationNetwork != null && mediationNetwork.length() != 0) {
            int i5 = f3661w + 87;
            f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                map.put("imei", mediationNetwork);
                int i6 = 7 / 0;
            } else {
                map.put("imei", mediationNetwork);
            }
        }
        String revenue = aFg1qSDK.getRevenue(str);
        if (revenue != null) {
            int i10 = f3661w + 43;
            f3660i = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i10 % 2 == 0) {
                aFg1qSDK.component1.AFAdRevenueData("androidIdCached", revenue);
                map.put("android_id", revenue);
                int i11 = 37 / 0;
            } else {
                aFg1qSDK.component1.AFAdRevenueData("androidIdCached", revenue);
                map.put("android_id", revenue);
            }
        } else {
            AFLogger.afInfoLog("Android ID was not collected.");
        }
        AFb1mSDK currencyIso4217Code = AFb1kSDK.getCurrencyIso4217Code(aFg1qSDK.getMediationNetwork);
        if (currencyIso4217Code != null) {
            LinkedHashMap linkedHashMap = new LinkedHashMap();
            Boolean bool = currencyIso4217Code.getMediationNetwork;
            Intrinsics.checkNotNullExpressionValue(bool, "");
            linkedHashMap.put("isManual", bool);
            String str2 = currencyIso4217Code.getCurrencyIso4217Code;
            Intrinsics.checkNotNullExpressionValue(str2, "");
            linkedHashMap.put("val", str2);
            Boolean bool2 = currencyIso4217Code.getRevenue;
            if (bool2 != null) {
                linkedHashMap.put("isLat", bool2);
            }
            map.put("oaid", linkedHashMap);
        }
        return null;
    }

    private boolean component4() {
        f3661w = (f3660i + 59) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        boolean parseBoolean = Boolean.parseBoolean(this.component1.getMonetizationNetwork("sentSuccessfully", null));
        f3661w = (f3660i + 69) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return parseBoolean;
    }

    private final void copy(Map<String, Object> map) {
        UiModeManager uiModeManager;
        int i5 = f3661w + 19;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0 || Build.VERSION.SDK_INT >= 117) {
            uiModeManager = (UiModeManager) this.getMediationNetwork.getSystemService(UiModeManager.class);
        } else {
            Object systemService = this.getMediationNetwork.getSystemService("uimode");
            uiModeManager = systemService instanceof UiModeManager ? (UiModeManager) systemService : null;
        }
        if (uiModeManager == null || uiModeManager.getCurrentModeType() != 4) {
            return;
        }
        map.put("tv", Boolean.TRUE);
        f3660i = (f3661w + 63) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    private void copydefault(@NotNull Map<String, Object> map) {
        long j;
        TimeUnit timeUnit;
        long j5;
        Intrinsics.checkNotNullParameter(map, "");
        long currencyIso4217Code = this.component1.getCurrencyIso4217Code("AppsFlyerTimePassedSincePrevLaunch", 0L);
        long currentTimeMillis = System.currentTimeMillis();
        this.component1.getRevenue("AppsFlyerTimePassedSincePrevLaunch", currentTimeMillis);
        if (currencyIso4217Code > 0) {
            int i5 = f3661w + 121;
            f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                timeUnit = TimeUnit.MILLISECONDS;
                j5 = currentTimeMillis % currencyIso4217Code;
            } else {
                timeUnit = TimeUnit.MILLISECONDS;
                j5 = currentTimeMillis - currencyIso4217Code;
            }
            j = timeUnit.toSeconds(j5);
        } else {
            f3661w = (f3660i + 13) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            j = -1;
        }
        map.put("timepassedsincelastlaunch", String.valueOf(j));
    }

    private void d(@NotNull Map<String, Object> map) {
        Intrinsics.checkNotNullParameter(map, "");
        if (this.component1.getRevenue("is_stop_tracking_used")) {
            f3660i = (f3661w + 49) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            map.put("istu", String.valueOf(this.component1.getMediationNetwork("is_stop_tracking_used", false)));
            f3660i = (f3661w + 79) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        int i5 = f3660i + 125;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            throw null;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0058, code lost:
    
        r4.put("tokenRefreshConfigured", java.lang.Boolean.FALSE);
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x005e, code lost:
    
        r4.put("tokenRefreshConfigured", java.lang.Boolean.FALSE);
     */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x0064, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0047, code lost:
    
        if (r0 == false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x002c, code lost:
    
        if (r0 == false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0049, code lost:
    
        r0 = com.appsflyer.internal.AFg1qSDK.f3660i + 33;
        com.appsflyer.internal.AFg1qSDK.f3661w = r0 % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0056, code lost:
    
        if ((r0 % 2) != 0) goto L12;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void e(@NotNull Map<String, Object> map) {
        int i5 = f3661w + 5;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            Intrinsics.checkNotNullParameter(map, "");
            boolean mediationNetwork = AFg1tSDK.getMediationNetwork(this.getMediationNetwork);
            AFLogger.afDebugLog("didConfigureTokenRefreshService=" + mediationNetwork);
            int i6 = 45 / 0;
        } else {
            Intrinsics.checkNotNullParameter(map, "");
            boolean mediationNetwork2 = AFg1tSDK.getMediationNetwork(this.getMediationNetwork);
            AFLogger.afDebugLog("didConfigureTokenRefreshService=" + mediationNetwork2);
        }
        map.put("registeredUninstall", Boolean.valueOf(AFg1tSDK.getCurrencyIso4217Code(this.component1)));
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0023, code lost:
    
        r4.put("batteryLevel", java.lang.String.valueOf(r3.AFAdRevenueData.AFAdRevenueData(r3.getMediationNetwork).getRevenue));
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x0021, code lost:
    
        if (getMonetizationNetwork().isOtherSdkStringDisabled() == false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0016, code lost:
    
        if (getMonetizationNetwork().isOtherSdkStringDisabled() == false) goto L9;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final void equals(Map<String, Object> map) {
        int i5 = f3661w + 85;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            int i6 = 2 / 0;
        }
        int i10 = f3660i + 69;
        f3661w = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i10 % 2 != 0) {
            throw null;
        }
    }

    @NotNull
    private String getCurrencyIso4217Code(@NotNull SimpleDateFormat simpleDateFormat, int i5) {
        Intrinsics.checkNotNullParameter(simpleDateFormat, "");
        String monetizationNetwork = this.component1.getMonetizationNetwork("appsFlyerFirstInstall", null);
        if (monetizationNetwork == null) {
            int i6 = f3660i + 125;
            f3661w = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0 ? i5 > 1 : i5 > 0) {
                monetizationNetwork = "";
            } else {
                AFLogger.afDebugLog("AppsFlyer: first launch detected");
                String format = simpleDateFormat.format(new Date());
                f3661w = (f3660i + 121) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                monetizationNetwork = format;
            }
            this.component1.AFAdRevenueData("appsFlyerFirstInstall", monetizationNetwork);
            f3660i = (f3661w + 59) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        AFh1ySDK.i$default(AFLogger.INSTANCE, AFg1cSDK.GENERAL, a3.e.k("AppsFlyer: first launch date: ", monetizationNetwork), false, 4, null);
        Intrinsics.checkNotNullExpressionValue(monetizationNetwork, "");
        return monetizationNetwork;
    }

    public static /* synthetic */ Object getMediationNetwork(Object[] objArr, int i5, int i6, int i10) {
        int i11 = ~i6;
        int i12 = ~i10;
        switch ((((~(i5 | i6)) | (~(i10 | i11))) * 49) + (((~((~i5) | i12)) | i11 | (~(i5 | i10))) * (-49)) + (((~(i11 | i12)) | (~(i11 | i5))) * 98) + (i6 * (-97)) + (i5 * 50)) {
            case 1:
                return AFAdRevenueData(objArr);
            case 2:
                return getMonetizationNetwork(objArr);
            case 3:
                return getRevenue(objArr);
            case 4:
                return getMediationNetwork(objArr);
            case 5:
                return areAllFieldsValid(objArr);
            case 6:
                return component1(objArr);
            case 7:
                return component3(objArr);
            case 8:
                return component2(objArr);
            case 9:
                return component4(objArr);
            case 10:
                return copydefault(objArr);
            case 11:
                AFg1qSDK aFg1qSDK = (AFg1qSDK) objArr[0];
                if (!aFg1qSDK.getMonetizationNetwork().getBoolean(AppsFlyerProperties.COLLECT_ANDROID_ID_FORCE_BY_USER, false)) {
                    f3660i = (f3661w + 57) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (!aFg1qSDK.getMonetizationNetwork().getBoolean(AppsFlyerProperties.COLLECT_IMEI_FORCE_BY_USER, false)) {
                        f3661w = (f3660i + 81) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        AFa1uSDK.getMonetizationNetwork();
                        if (AFa1uSDK.getRevenue(aFg1qSDK.getMediationNetwork)) {
                            f3660i = (f3661w + 59) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                            return Boolean.FALSE;
                        }
                        return Boolean.TRUE;
                    }
                }
                f3661w = (f3660i + 93) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                return Boolean.TRUE;
            case 12:
                AFg1qSDK aFg1qSDK2 = (AFg1qSDK) objArr[0];
                f3661w = (f3660i + 83) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                Long valueOf = Long.valueOf(aFg1qSDK2.areAllFieldsValid.n_().firstInstallTime);
                f3660i = (f3661w + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                return valueOf;
            default:
                return getCurrencyIso4217Code(objArr);
        }
    }

    private final AppsFlyerProperties getMonetizationNetwork() {
        int i5 = f3660i + 79;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            return (AppsFlyerProperties) this.copydefault.getValue();
        }
        int i6 = 88 / 0;
        return (AppsFlyerProperties) this.copydefault.getValue();
    }

    private void hashCode(@NotNull Map<String, Object> map) {
        int i5 = f3661w + 101;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            map.put("is_pc", Boolean.valueOf(this.getMediationNetwork.getApplicationContext().getPackageManager().hasSystemFeature("com.google.android.play.feature.HPE_EXPERIENCE")));
        } else {
            Intrinsics.checkNotNullParameter(map, "");
            map.put("is_pc", Boolean.valueOf(this.getMediationNetwork.getApplicationContext().getPackageManager().hasSystemFeature("com.google.android.play.feature.HPE_EXPERIENCE")));
            throw null;
        }
    }

    private void i(@NotNull Map<String, Object> map) {
        AFb1mSDK l_;
        int i5 = f3660i + 57;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            l_ = AFb1kSDK.l_(this.getMediationNetwork.getContentResolver());
            int i6 = 54 / 0;
            if (l_ == null) {
                return;
            }
        } else {
            Intrinsics.checkNotNullParameter(map, "");
            l_ = AFb1kSDK.l_(this.getMediationNetwork.getContentResolver());
            if (l_ == null) {
                return;
            }
        }
        f3660i = (f3661w + 97) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        map.put("amazon_aid", l_.getCurrencyIso4217Code);
        map.put("amazon_aid_limit", String.valueOf(l_.getRevenue));
    }

    private void registerClient(@NotNull Map<String, Object> map) {
        f3660i = (f3661w + 51) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(map, "");
        map.put("af_preinstalled", String.valueOf(this.areAllFieldsValid.getMediationNetwork(this.getMediationNetwork)));
        int i5 = f3661w + 91;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            throw null;
        }
    }

    private final void toString(Map<String, Object> map) {
        int i5 = f3660i + 117;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            AFg1kSDK.AFAdRevenueData(this.getMediationNetwork);
            throw null;
        }
        if (AFg1kSDK.AFAdRevenueData(this.getMediationNetwork)) {
            map.put("inst_app", Boolean.TRUE);
            f3660i = (f3661w + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
    }

    private static void unregisterClient(@NotNull Map<String, Object> map) {
        getMediationNetwork(new Object[]{map}, -43428876, 43428885, (int) System.currentTimeMillis());
    }

    private void w(@NotNull Map<String, Object> map) {
        int i5 = f3660i + 31;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            this.copy.getMediationNetwork();
            throw null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        String mediationNetwork = this.copy.getMediationNetwork();
        if (mediationNetwork == null || mediationNetwork.length() == 0) {
            return;
        }
        int i6 = f3661w + 83;
        f3660i = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 != 0) {
            map.put("appsflyerKey", mediationNetwork);
        } else {
            map.put("appsflyerKey", mediationNetwork);
            throw null;
        }
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void AFAdRevenueData(@NotNull AFh1jSDK aFh1jSDK) {
        boolean z5;
        AFd1aSDK aFd1aSDK;
        Intrinsics.checkNotNullParameter(aFh1jSDK, "");
        if (this.areAllFieldsValid.component1()) {
            AFh1pSDK aFh1pSDK = this.areAllFieldsValid.AFAdRevenueData.component2;
            if (aFh1pSDK == null) {
                f3660i = (f3661w + 101) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                return;
            }
            String str = aFh1pSDK.getMonetizationNetwork;
            if (str != null && str.length() != 0) {
                aFh1jSDK.getMonetizationNetwork("gaidError", aFh1pSDK.getMonetizationNetwork);
            }
            String str2 = aFh1pSDK.getRevenue;
            if (str2 != null) {
                f3660i = (f3661w + 121) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (aFh1pSDK.getCurrencyIso4217Code != null) {
                    aFh1jSDK.getMonetizationNetwork("advertiserId", str2);
                    aFh1jSDK.getMonetizationNetwork("advertiserIdEnabled", String.valueOf(aFh1pSDK.getCurrencyIso4217Code));
                    aFh1jSDK.getMonetizationNetwork("isGaidWithGps", String.valueOf(aFh1pSDK.getMediationNetwork));
                }
            }
        } else {
            int i5 = f3660i + 37;
            f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                Map<String, Object> monetizationNetwork = AFa1uSDK.getMonetizationNetwork(aFh1jSDK.getCurrencyIso4217Code);
                Intrinsics.checkNotNullExpressionValue(monetizationNetwork, "");
                monetizationNetwork.put("ad_ids_disabled", Boolean.TRUE);
                throw null;
            }
            Map<String, Object> monetizationNetwork2 = AFa1uSDK.getMonetizationNetwork(aFh1jSDK.getCurrencyIso4217Code);
            Intrinsics.checkNotNullExpressionValue(monetizationNetwork2, "");
            monetizationNetwork2.put("ad_ids_disabled", Boolean.TRUE);
        }
        AFh1pSDK aFh1pSDK2 = this.areAllFieldsValid.AFAdRevenueData.component2;
        if (aFh1pSDK2 != null) {
            f3660i = (f3661w + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            z5 = Intrinsics.areEqual(aFh1pSDK2.component3, Boolean.TRUE);
        } else {
            z5 = false;
        }
        aFh1jSDK.getMonetizationNetwork("GAID_retry", String.valueOf(z5));
        if (!c0.g(AFe1mSDK.CONVERSION, AFe1mSDK.LAUNCH).contains(aFh1jSDK.getCurrencyIso4217Code()) || (aFd1aSDK = this.toString.component4) == null) {
            return;
        }
        int i6 = f3661w + 7;
        f3660i = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            Map<String, Object> monetizationNetwork3 = AFa1uSDK.getMonetizationNetwork(aFh1jSDK.getCurrencyIso4217Code);
            Intrinsics.checkNotNullExpressionValue(monetizationNetwork3, "");
            monetizationNetwork3.put("fetchAdIdLatency", Long.valueOf(aFd1aSDK.getRevenue));
            throw null;
        }
        Map<String, Object> monetizationNetwork4 = AFa1uSDK.getMonetizationNetwork(aFh1jSDK.getCurrencyIso4217Code);
        Intrinsics.checkNotNullExpressionValue(monetizationNetwork4, "");
        monetizationNetwork4.put("fetchAdIdLatency", Long.valueOf(aFd1aSDK.getRevenue));
        int i10 = f3660i + 33;
        f3661w = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i10 % 2 != 0) {
            int i11 = 92 / 0;
        }
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void getRevenue(@NotNull Map<String, Object> map) {
        Intrinsics.checkNotNullParameter(map, "");
        AFi1pSDK aFi1pSDK = this.component4.getMediationNetwork;
        AFi1tSDK AFAdRevenueData = aFi1pSDK != null ? aFi1pSDK.AFAdRevenueData() : null;
        if (AFAdRevenueData != null) {
            map.put("network", AFAdRevenueData.getRevenue);
            map.put("ivc", Boolean.valueOf(AFAdRevenueData.getCurrencyIso4217Code()));
            if (getMonetizationNetwork().getBoolean(AppsFlyerProperties.DISABLE_NETWORK_DATA, false)) {
                f3661w = (f3660i + 95) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            } else {
                f3661w = (f3660i + 89) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                String str = AFAdRevenueData.getCurrencyIso4217Code;
                if (str != null) {
                    map.put("operator", str);
                }
                String str2 = AFAdRevenueData.getMediationNetwork;
                if (str2 != null) {
                    map.put("carrier", str2);
                    return;
                }
            }
            int i5 = f3660i + 7;
            f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                throw null;
            }
        }
    }

    private static /* synthetic */ Object areAllFieldsValid(Object[] objArr) {
        AFg1qSDK aFg1qSDK = (AFg1qSDK) objArr[0];
        Map map = (Map) objArr[1];
        Intrinsics.checkNotNullParameter(map, "");
        AFh1tSDK aFh1tSDK = aFg1qSDK.component3;
        HashMap hashMap = new HashMap(aFh1tSDK.AFAdRevenueData);
        aFh1tSDK.AFAdRevenueData.clear();
        aFh1tSDK.getCurrencyIso4217Code.getCurrencyIso4217Code("gcd");
        Intrinsics.checkNotNullExpressionValue(hashMap, "");
        if (hashMap.isEmpty()) {
            f3661w = (f3660i + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return null;
        }
        int i5 = (f3660i + 111) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        f3661w = i5;
        int i6 = i5 + 31;
        f3660i = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 != 0) {
            Map<String, Object> monetizationNetwork = AFa1uSDK.getMonetizationNetwork((Map<String, Object>) map);
            Intrinsics.checkNotNullExpressionValue(monetizationNetwork, "");
            monetizationNetwork.put("gcd", hashMap);
            return null;
        }
        Map<String, Object> monetizationNetwork2 = AFa1uSDK.getMonetizationNetwork((Map<String, Object>) map);
        Intrinsics.checkNotNullExpressionValue(monetizationNetwork2, "");
        monetizationNetwork2.put("gcd", hashMap);
        int i10 = 88 / 0;
        return null;
    }

    private static /* synthetic */ Object component4(Object[] objArr) {
        Map map = (Map) objArr[0];
        int i5 = f3660i + 107;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        try {
        } catch (Exception e9) {
            AFLogger.afErrorLog("Exception while collecting display language name. ", e9);
        }
        if (i5 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            map.put("lang", Locale.getDefault().getDisplayLanguage());
            throw null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        map.put("lang", Locale.getDefault().getDisplayLanguage());
        try {
            map.put("lang_code", Locale.getDefault().getLanguage());
            f3660i = (f3661w + 51) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        } catch (Exception e10) {
            AFLogger.afErrorLog("Exception while collecting display language code. ", e10);
        }
        try {
            map.put(AdRevenueScheme.COUNTRY, Locale.getDefault().getCountry());
            return null;
        } catch (Exception e11) {
            AFLogger.afErrorLog("Exception while collecting country name. ", e11);
            return null;
        }
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void getMonetizationNetwork(@NotNull AFh1jSDK aFh1jSDK) {
        f3661w = (f3660i + 21) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(aFh1jSDK, "");
        Map<String, Object> map = aFh1jSDK.getCurrencyIso4217Code;
        if (aFh1jSDK.getMediationNetwork()) {
            String str = aFh1jSDK.areAllFieldsValid;
            AFc1eSDK aFc1eSDK = this.toString;
            getCurrencyIso4217Code(aFh1jSDK, str, aFc1eSDK.getMonetizationNetwork, aFc1eSDK.getCurrencyIso4217Code);
        } else if (!(aFh1jSDK instanceof AFh1fSDK)) {
            Intrinsics.checkNotNullExpressionValue(map, "");
            String str2 = aFh1jSDK.component4;
            Intrinsics.checkNotNullExpressionValue(str2, "");
            getMediationNetwork(new Object[]{this, map, str2}, 1127076864, -1127076862, System.identityHashCode(this));
        }
        if (c0.g(AFe1mSDK.CONVERSION, AFe1mSDK.LAUNCH, AFe1mSDK.INAPP).contains(aFh1jSDK.getCurrencyIso4217Code())) {
            Intrinsics.checkNotNullExpressionValue(map, "");
            hashCode(map);
        }
        if (aFh1jSDK.getMonetizationNetwork()) {
            f3660i = (f3661w + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            Intrinsics.checkNotNullExpressionValue(map, "");
            component1(map);
            f3660i = (f3661w + 81) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        Intrinsics.checkNotNullExpressionValue(map, "");
        w(map);
        AFKeystoreWrapper(map);
        getMediationNetwork(new Object[]{this, map}, -2015365334, 2015365335, System.identityHashCode(this));
        AFLogger(map);
        getMediationNetwork(map);
        AFAdRevenueData(map, aFh1jSDK.getMediationNetwork());
        e(map);
        d(map);
        AFAdRevenueData(map, aFh1jSDK);
        map.put("af_events_api", "1");
    }

    private static /* synthetic */ Object component2(Object[] objArr) {
        AFg1qSDK aFg1qSDK = (AFg1qSDK) objArr[0];
        f3661w = (f3660i + 79) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        String monetizationNetwork = aFg1qSDK.component1.getMonetizationNetwork("androidIdCached", null);
        try {
            String string = Settings.Secure.getString(aFg1qSDK.getMediationNetwork.getContentResolver(), "android_id");
            if (string != null) {
                f3661w = (f3660i + 13) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                return string;
            }
        } catch (Exception e9) {
            AFLogger.afErrorLog(e9.getMessage(), e9);
        }
        if (monetizationNetwork == null) {
            return null;
        }
        AFLogger.afDebugLog("use cached AndroidId: " + monetizationNetwork);
        int i5 = f3661w + 3;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return monetizationNetwork;
        }
        throw null;
    }

    private static /* synthetic */ Object component1(Object[] objArr) {
        AFg1qSDK aFg1qSDK = (AFg1qSDK) objArr[0];
        Map map = (Map) objArr[1];
        AFg1sSDK.AFa1uSDK AFAdRevenueData = aFg1qSDK.AFAdRevenueData.AFAdRevenueData(aFg1qSDK.getMediationNetwork);
        float f2 = AFAdRevenueData.getRevenue;
        String str = AFAdRevenueData.AFAdRevenueData;
        map.put("btl", String.valueOf(f2));
        if (str != null) {
            f3660i = (f3661w + 95) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            map.put("btch", str);
        }
        int i5 = f3660i + 31;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            int i6 = 14 / 0;
        }
        return null;
    }

    private final String equals() {
        File AFAdRevenueData = AFAdRevenueData(getMediationNetwork("ro.appsflyer.preinstall.path"));
        if (getMonetizationNetwork(AFAdRevenueData)) {
            AFAdRevenueData = AFAdRevenueData(getCurrencyIso4217Code("AF_PRE_INSTALL_PATH"));
        }
        if (getMonetizationNetwork(AFAdRevenueData)) {
            AFAdRevenueData = AFAdRevenueData("/data/local/tmp/pre_install.appsflyer");
        }
        if (getMonetizationNetwork(AFAdRevenueData)) {
            AFAdRevenueData = AFAdRevenueData("/etc/pre_install.appsflyer");
            f3661w = (f3660i + 51) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        if (getMonetizationNetwork(AFAdRevenueData)) {
            f3660i = (f3661w + 101) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return null;
        }
        String packageName = this.getMediationNetwork.getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "");
        return getMonetizationNetwork(AFAdRevenueData, packageName);
    }

    private final boolean copy() {
        return ((Boolean) getMediationNetwork(new Object[]{this}, -932948428, 932948439, System.identityHashCode(this))).booleanValue();
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x004f, code lost:
    
        if (r1.toString.equals != null) goto L14;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x007b, code lost:
    
        com.appsflyer.internal.AFh1ySDK.i$default(com.appsflyer.AFLogger.INSTANCE, com.appsflyer.internal.AFg1cSDK.APP_SET_ID, "App Set ID collection is disabled. Skipping inclusion in the event payload.", false, 4, null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x0089, code lost:
    
        return null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x0066, code lost:
    
        com.appsflyer.internal.AFg1qSDK.f3661w = (com.appsflyer.internal.AFg1qSDK.f3660i + 93) % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        com.appsflyer.internal.AFh1ySDK.i$default(com.appsflyer.AFLogger.INSTANCE, com.appsflyer.internal.AFg1cSDK.APP_SET_ID, "App Set Id was collected, but will not be included in the payload.To prevent collection entirely, call disableAppSetId() before initializing the SDK.", false, 4, null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x007a, code lost:
    
        return null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0064, code lost:
    
        if (r1.toString.equals != null) goto L14;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static Object copydefault(Object[] objArr) {
        AFg1qSDK aFg1qSDK = (AFg1qSDK) objArr[0];
        Map map = (Map) objArr[1];
        AFe1mSDK aFe1mSDK = (AFe1mSDK) objArr[2];
        Intrinsics.checkNotNullParameter(map, "");
        Intrinsics.checkNotNullParameter(aFe1mSDK, "");
        if (!copydefault().contains(aFe1mSDK)) {
            return null;
        }
        if (aFg1qSDK.toString.getMediationNetwork()) {
            int i5 = f3660i + 55;
            f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                map.put("app_set_id", u0.b(new Pair("app_set_id_disabled", Boolean.TRUE)));
                int i6 = 15 / 0;
            } else {
                map.put("app_set_id", u0.b(new Pair("app_set_id_disabled", Boolean.TRUE)));
            }
        } else {
            AFb1gSDK aFb1gSDK = aFg1qSDK.toString.equals;
            if (aFb1gSDK == null) {
                int i10 = f3661w + 103;
                f3660i = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i10 % 2 != 0) {
                    return null;
                }
                throw null;
            }
            map.put("app_set_id", v0.g(new Pair("scope", Integer.valueOf(aFb1gSDK.getRevenue)), new Pair(StackTraceHelper.ID_KEY, aFb1gSDK.getCurrencyIso4217Code)));
            int i11 = f3660i + 19;
            f3661w = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i11 % 2 == 0) {
                return null;
            }
            throw null;
        }
    }

    private final SimpleDateFormat getMediationNetwork() {
        f3661w = (f3660i + 87) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        SimpleDateFormat simpleDateFormat = (SimpleDateFormat) this.AFKeystoreWrapper.getValue();
        int i5 = f3661w + 45;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return simpleDateFormat;
        }
        throw null;
    }

    private void component2(@NotNull Map<String, ? extends Object> map) {
        getMediationNetwork(new Object[]{this, map}, -2029029470, 2029029475, System.identityHashCode(this));
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void getMediationNetwork(@NotNull AFh1jSDK aFh1jSDK) {
        f3661w = (f3660i + 55) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(aFh1jSDK, "");
        Map<String, Object> map = aFh1jSDK.getCurrencyIso4217Code;
        Intrinsics.checkNotNullExpressionValue(map, "");
        AFAdRevenueData(map);
        Map<String, Object> map2 = aFh1jSDK.getCurrencyIso4217Code;
        Intrinsics.checkNotNullExpressionValue(map2, "");
        getCurrencyIso4217Code(map2, aFh1jSDK.component1);
        Map<String, Object> map3 = aFh1jSDK.getCurrencyIso4217Code;
        Intrinsics.checkNotNullExpressionValue(map3, "");
        AFAdRevenueData(map3, aFh1jSDK.component1);
        Map<String, Object> map4 = aFh1jSDK.getCurrencyIso4217Code;
        Intrinsics.checkNotNullExpressionValue(map4, "");
        registerClient(map4);
        Map<String, Object> map5 = aFh1jSDK.getCurrencyIso4217Code;
        Intrinsics.checkNotNullExpressionValue(map5, "");
        afDebugLog(map5);
        Map<String, Object> map6 = aFh1jSDK.getCurrencyIso4217Code;
        Intrinsics.checkNotNullExpressionValue(map6, "");
        AFe1mSDK currencyIso4217Code = aFh1jSDK.getCurrencyIso4217Code();
        Intrinsics.checkNotNullExpressionValue(currencyIso4217Code, "");
        getMediationNetwork(new Object[]{this, map6, currencyIso4217Code}, -1926240735, 1926240745, System.identityHashCode(this));
        int i5 = f3660i + 119;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            throw null;
        }
    }

    @SuppressLint({"HardwareIds"})
    private final String component1() {
        return (String) getMediationNetwork(new Object[]{this}, 969328908, -969328900, System.identityHashCode(this));
    }

    private static void areAllFieldsValid(@NotNull Map<String, Object> map) {
        f3661w = (f3660i + 59) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(map, "");
        Object[] objArr = new Object[1];
        a(null, "\u008f\u0089\u0087\u0083\u008e", null, (AudioTrack.getMaxVolume() > 0.0f ? 1 : (AudioTrack.getMaxVolume() == 0.0f ? 0 : -1)) + 126, objArr);
        map.put(((String) objArr[0]).intern(), Build.BRAND);
        map.put("device", Build.DEVICE);
        map.put("product", Build.PRODUCT);
        map.put("sdk", String.valueOf(Build.VERSION.SDK_INT));
        map.put("model", Build.MODEL);
        map.put("deviceType", Build.TYPE);
        f3661w = (f3660i + 21) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    private final void component4(Map<String, Object> map) {
        getMediationNetwork(new Object[]{this, map}, -217749996, 217750002, System.identityHashCode(this));
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void getRevenue(@NotNull AFh1jSDK aFh1jSDK) {
        int i5 = f3660i + 89;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            Intrinsics.checkNotNullParameter(aFh1jSDK, "");
            Map<String, Object> map = aFh1jSDK.getCurrencyIso4217Code;
            Intrinsics.checkNotNullExpressionValue(map, "");
            map.put("open_referrer", aFh1jSDK.getMediationNetwork);
            String str = aFh1jSDK.component2;
            if (str == null || StringsKt.K(str)) {
                return;
            }
            int i6 = f3660i + 41;
            f3661w = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0) {
                map.put("af_web_referrer", aFh1jSDK.component2);
                return;
            } else {
                map.put("af_web_referrer", aFh1jSDK.component2);
                throw null;
            }
        }
        Intrinsics.checkNotNullParameter(aFh1jSDK, "");
        Map<String, Object> map2 = aFh1jSDK.getCurrencyIso4217Code;
        Intrinsics.checkNotNullExpressionValue(map2, "");
        map2.put("open_referrer", aFh1jSDK.getMediationNetwork);
        throw null;
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void getCurrencyIso4217Code(@NotNull Map<String, Object> map, int i5, int i6) {
        boolean z5;
        Intrinsics.checkNotNullParameter(map, "");
        map.put("counter", String.valueOf(i5));
        map.put("iaecounter", String.valueOf(i6));
        if (component4()) {
            f3661w = (f3660i + 61) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            z5 = false;
        } else {
            f3660i = (f3661w + 115) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            z5 = true;
        }
        map.put("isFirstCall", String.valueOf(z5));
        f3660i = (f3661w + 37) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x008f, code lost:
    
        r0.putAll(r6.getMonetizationNetwork.AFAdRevenueData());
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x0099, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0078, code lost:
    
        if (r6.areAllFieldsValid.getMonetizationNetwork.getMediationNetwork("appsFlyerCount", 0) <= 2) goto L11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x0061, code lost:
    
        if (r6.areAllFieldsValid.getMonetizationNetwork.getMediationNetwork("appsFlyerCount", 1) <= 5) goto L11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:7:0x007a, code lost:
    
        r8 = com.appsflyer.internal.AFg1qSDK.f3660i + 85;
        com.appsflyer.internal.AFg1qSDK.f3661w = r8 % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0083, code lost:
    
        if ((r8 % 2) != 0) goto L14;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0085, code lost:
    
        r0.putAll(r6.getMonetizationNetwork.AFAdRevenueData());
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void getCurrencyIso4217Code(@NotNull Map<String, Object> map, boolean z5) {
        Intrinsics.checkNotNullParameter(map, "");
        HashMap hashMap = new HashMap();
        hashMap.put("cpu_abi", getMediationNetwork("ro.product.cpu.abi"));
        hashMap.put("cpu_abi2", getMediationNetwork("ro.product.cpu.abi2"));
        hashMap.put("arch", getMediationNetwork("os.arch"));
        hashMap.put("build_display_id", getMediationNetwork("ro.build.display.id"));
        if (z5) {
            int i5 = f3661w + 41;
            f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                getMediationNetwork(new Object[]{this, hashMap}, -217749996, 217750002, System.identityHashCode(this));
            } else {
                getMediationNetwork(new Object[]{this, hashMap}, -217749996, 217750002, System.identityHashCode(this));
            }
        }
        hashMap.put("dim", this.component2.getMediationNetwork(this.getMediationNetwork));
        map.put("deviceData", hashMap);
    }

    private void component3(@NotNull Map<String, Object> map) {
        getMediationNetwork(new Object[]{this, map}, 1978462197, -1978462194, System.identityHashCode(this));
    }

    @NotNull
    private static String component3() {
        return (String) getMediationNetwork(new Object[0], -879088668, 879088672, (int) System.currentTimeMillis());
    }

    private static /* synthetic */ Object getMediationNetwork(Object[] objArr) {
        StatFs statFs = new StatFs(Environment.getDataDirectory().getAbsolutePath());
        long blockSizeLong = statFs.getBlockSizeLong();
        long availableBlocksLong = statFs.getAvailableBlocksLong() * blockSizeLong;
        long blockCountLong = statFs.getBlockCountLong() * blockSizeLong;
        double pow = Math.pow(2.0d, 20.0d);
        String str = ((long) (availableBlocksLong / pow)) + "/" + ((long) (blockCountLong / pow));
        int i5 = f3661w + 117;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return str;
        }
        throw null;
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void getMonetizationNetwork(@NotNull Map<String, Object> map) {
        Object i5;
        f3660i = (f3661w + 27) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(map, "");
        String str = this.toString.getMediationNetwork;
        if (str != null) {
            int i6 = f3660i + 25;
            f3661w = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0) {
                if (map.get("af_deeplink") != null) {
                    AFLogger.afDebugLog("Skip 'af' payload as deeplink was found by path");
                } else {
                    try {
                        q qVar = Result.f13476e;
                        JSONObject jSONObject = new JSONObject(str);
                        jSONObject.put("isPush", "true");
                        map.put("af_deeplink", jSONObject.toString());
                        i5 = Unit.a;
                    } catch (Throwable th2) {
                        q qVar2 = Result.f13476e;
                        i5 = ki.b.i(th2);
                    }
                    Throwable a = Result.a(i5);
                    if (a != null) {
                        f3660i = (f3661w + 123) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        AFh1ySDK.e$default(AFLogger.INSTANCE, AFg1cSDK.GENERAL, "Exception while trying to create JSONObject from pushPayload", a, false, false, false, false, 120, null);
                    }
                }
            } else {
                map.get("af_deeplink");
                throw null;
            }
        }
        this.toString.getMediationNetwork = null;
        f3661w = (f3660i + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    private static /* synthetic */ Object getRevenue(Object[] objArr) {
        AFg1qSDK aFg1qSDK = (AFg1qSDK) objArr[0];
        Map map = (Map) objArr[1];
        int i5 = f3660i + 77;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            Intrinsics.checkNotNullParameter(map, "");
            String string = aFg1qSDK.getMonetizationNetwork().getString(AppsFlyerProperties.ONELINK_ID);
            String string2 = aFg1qSDK.getMonetizationNetwork().getString(AppsFlyerProperties.ONELINK_VERSION);
            if (string != null) {
                map.put("onelink_id", string);
            }
            if (string2 != null) {
                map.put("onelink_ver", string2);
                f3661w = (f3660i + 121) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
            return null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        aFg1qSDK.getMonetizationNetwork().getString(AppsFlyerProperties.ONELINK_ID);
        aFg1qSDK.getMonetizationNetwork().getString(AppsFlyerProperties.ONELINK_VERSION);
        throw null;
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void getMediationNetwork(@NotNull Map<String, Object> map) {
        f3660i = (f3661w + 77) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(map, "");
        String revenue = AFb1jSDK.getRevenue(this.areAllFieldsValid.getMonetizationNetwork);
        if (revenue != null) {
            map.put("uid", revenue);
            boolean mediationNetwork = this.areAllFieldsValid.getMonetizationNetwork.getMediationNetwork("CUSTOM_INSTALL_ID_APPLIED", false);
            Intrinsics.checkNotNullExpressionValue(Boolean.valueOf(mediationNetwork), "");
            if (mediationNetwork) {
                map.put("custom_install_id", Boolean.TRUE);
                return;
            }
            return;
        }
        int i5 = f3661w + 93;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            throw null;
        }
    }

    private static List<AFe1mSDK> copydefault() {
        f3661w = (f3660i + 103) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        List<AFe1mSDK> g6 = c0.g(AFe1mSDK.CONVERSION, AFe1mSDK.LAUNCH, AFe1mSDK.INAPP, AFe1mSDK.MANUAL_PURCHASE_VALIDATION, AFe1mSDK.ARS_VALIDATE, AFe1mSDK.PURCHASE_VALIDATE, AFe1mSDK.ADREVENUE);
        f3661w = (f3660i + 67) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return g6;
    }

    private final void getCurrencyIso4217Code(Map<String, Object> map, int i5) {
        f3661w = (f3660i + 75) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        try {
            if (this.areAllFieldsValid.n_().versionCode > this.component1.getMediationNetwork("versionCode", 0)) {
                f3661w = (f3660i + 39) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                this.component1.getRevenue("versionCode", this.areAllFieldsValid.n_().versionCode);
            }
            map.put("app_version_code", String.valueOf(this.areAllFieldsValid.n_().versionCode));
            map.put("app_version_name", this.areAllFieldsValid.n_().versionName);
            map.put("targetSDKver", Integer.valueOf(this.areAllFieldsValid.getRevenue.getRevenue.getApplicationInfo().targetSdkVersion));
            map.put("date1", getMediationNetwork().format(new Date(((Long) getMediationNetwork(new Object[]{this}, -1521351773, 1521351785, System.identityHashCode(this))).longValue())));
            map.put("date2", getMediationNetwork().format(new Date(this.areAllFieldsValid.n_().lastUpdateTime)));
            Object[] objArr = new Object[1];
            a(null, "\u008d\u0085\u0087\u008c\u008b\u008a\u0089\u0088\u0087\u0086\u0085\u0084\u0083\u0082\u0081", null, 126 - TextUtils.lastIndexOf("", '0', 0), objArr);
            String intern = ((String) objArr[0]).intern();
            SimpleDateFormat mediationNetwork = getMediationNetwork();
            Intrinsics.checkNotNullExpressionValue(mediationNetwork, "");
            map.put(intern, getCurrencyIso4217Code(mediationNetwork, i5));
        } catch (Throwable th2) {
            AFLogger.afErrorLog("Exception while collecting app version data ", th2, true);
        }
    }

    private void AFAdRevenueData(@NotNull Map<String, Object> map, int i5) {
        boolean z5;
        Intrinsics.checkNotNullParameter(map, "");
        String areAllFieldsValid = this.areAllFieldsValid.areAllFieldsValid();
        String AFAdRevenueData = AFAdRevenueData(this.component1, areAllFieldsValid);
        boolean z6 = false;
        if (AFAdRevenueData == null || Intrinsics.areEqual(AFAdRevenueData, areAllFieldsValid)) {
            z5 = false;
        } else {
            f3660i = (f3661w + 17) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            z5 = true;
        }
        if (AFAdRevenueData == null) {
            int i6 = f3660i + 79;
            f3661w = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 != 0) {
                throw null;
            }
            if (areAllFieldsValid != null) {
                z6 = true;
            }
        }
        if (z5 || z6) {
            map.put("af_latestchannel", areAllFieldsValid);
        }
        String monetizationNetwork = getMonetizationNetwork(i5);
        if (monetizationNetwork != null) {
            Locale locale = Locale.getDefault();
            Intrinsics.checkNotNullExpressionValue(locale, "");
            Object lowerCase = monetizationNetwork.toLowerCase(locale);
            Intrinsics.checkNotNullExpressionValue(lowerCase, "");
            map.put("af_installstore", lowerCase);
        }
        String AFAdRevenueData2 = AFAdRevenueData(i5);
        if (AFAdRevenueData2 != null) {
            int i10 = f3660i + 11;
            f3661w = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i10 % 2 != 0) {
                Locale locale2 = Locale.getDefault();
                Intrinsics.checkNotNullExpressionValue(locale2, "");
                Object lowerCase2 = AFAdRevenueData2.toLowerCase(locale2);
                Intrinsics.checkNotNullExpressionValue(lowerCase2, "");
                map.put("af_preinstall_name", lowerCase2);
                throw null;
            }
            Locale locale3 = Locale.getDefault();
            Intrinsics.checkNotNullExpressionValue(locale3, "");
            Object lowerCase3 = AFAdRevenueData2.toLowerCase(locale3);
            Intrinsics.checkNotNullExpressionValue(lowerCase3, "");
            map.put("af_preinstall_name", lowerCase3);
        } else {
            f3660i = (f3661w + 77) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        String component2 = component2();
        if (component2 != null) {
            Locale locale4 = Locale.getDefault();
            Intrinsics.checkNotNullExpressionValue(locale4, "");
            Object lowerCase4 = component2.toLowerCase(locale4);
            Intrinsics.checkNotNullExpressionValue(lowerCase4, "");
            map.put("af_currentstore", lowerCase4);
        }
    }

    @SuppressLint({"PrivateApi"})
    private static String getMediationNetwork(String str) {
        f3661w = (f3660i + 95) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        try {
            Object invoke = Class.forName("android.os.SystemProperties").getMethod("get", String.class).invoke(null, str);
            Intrinsics.checkNotNull(invoke, "");
            String str2 = (String) invoke;
            int i5 = f3661w + 69;
            f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                return str2;
            }
            throw null;
        } catch (Throwable th2) {
            AFLogger.afErrorLog(th2.getMessage(), th2);
            return null;
        }
    }

    private final String getRevenue(String str) {
        int i5;
        if (getMonetizationNetwork().getBoolean(AppsFlyerProperties.COLLECT_ANDROID_ID, false) && (str == null || str.length() == 0)) {
            int i6 = f3661w + 39;
            f3660i = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0) {
                copy();
                throw null;
            }
            if (!copy()) {
                return null;
            }
            str = (String) getMediationNetwork(new Object[]{this}, 969328908, -969328900, System.identityHashCode(this));
            i5 = f3660i + 55;
        } else {
            if (str == null) {
                return null;
            }
            i5 = f3660i + 85;
        }
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return str;
    }

    private static /* synthetic */ Object getMonetizationNetwork(Object[] objArr) {
        AFg1qSDK aFg1qSDK = (AFg1qSDK) objArr[0];
        Map map = (Map) objArr[1];
        String str = (String) objArr[2];
        f3660i = (f3661w + 81) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(map, "");
        Intrinsics.checkNotNullParameter(str, "");
        try {
            String monetizationNetwork = aFg1qSDK.component1.getMonetizationNetwork("prev_event_name", null);
            if (monetizationNetwork != null) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("prev_event_timestamp", aFg1qSDK.component1.getCurrencyIso4217Code("prev_event_timestamp", -1L));
                jSONObject.put("prev_event_name", monetizationNetwork);
                map.put("prev_event", jSONObject);
            }
            aFg1qSDK.component1.AFAdRevenueData("prev_event_name", str);
            aFg1qSDK.component1.getRevenue("prev_event_timestamp", System.currentTimeMillis());
            int i5 = f3660i + 59;
            f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                return null;
            }
            throw null;
        } catch (Exception e9) {
            AFLogger.afErrorLog("Error while processing previous event.", e9);
            return null;
        }
    }

    private String getRevenue() {
        return (String) getMediationNetwork(new Object[]{this}, -1875348758, 1875348758, System.identityHashCode(this));
    }

    private void getMediationNetwork(@NotNull Map<String, Object> map, @NotNull String str) {
        getMediationNetwork(new Object[]{this, map, str}, 1127076864, -1127076862, System.identityHashCode(this));
    }

    private final void AFAdRevenueData(Map<String, Object> map) {
        try {
            long longValue = ((Long) getMediationNetwork(new Object[]{this}, -1521351773, 1521351785, System.identityHashCode(this))).longValue();
            SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd_HHmmssZ", Locale.US);
            simpleDateFormat.setTimeZone(DesugarTimeZone.getTimeZone("UTC"));
            map.put("installDate", simpleDateFormat.format(new Date(longValue)));
            int i5 = f3660i + 15;
            f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                throw null;
            }
        } catch (Exception e9) {
            AFLogger.afErrorLog("Exception while collecting install date. ", e9);
        }
    }

    private String getMonetizationNetwork(int i5) {
        int i6 = f3661w + 57;
        f3660i = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        String str = null;
        if (i6 % 2 == 0) {
            this.component1.getRevenue("INSTALL_STORE");
            throw null;
        }
        if (this.component1.getRevenue("INSTALL_STORE")) {
            return this.component1.getMonetizationNetwork("INSTALL_STORE", null);
        }
        if (i5 <= 1) {
            str = component2();
        } else {
            int i10 = (f3661w + 117) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            f3660i = i10;
            f3661w = (i10 + 23) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        this.component1.AFAdRevenueData("INSTALL_STORE", str);
        return str;
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void getCurrencyIso4217Code(@NotNull AFh1jSDK aFh1jSDK) {
        f3660i = (f3661w + 1) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(aFh1jSDK, "");
        Map<String, Object> map = aFh1jSDK.getCurrencyIso4217Code;
        Intrinsics.checkNotNullExpressionValue(map, "");
        getCurrencyIso4217Code(map, aFh1jSDK.getMediationNetwork());
        areAllFieldsValid(map);
        getMediationNetwork(new Object[]{map}, -43428876, 43428885, (int) System.currentTimeMillis());
        getRevenue(map);
        getMediationNetwork(new Object[]{this, map, this.toString.AFAdRevenueData}, -361587280, 361587287, System.identityHashCode(this));
        i(map);
        map.put("cell", v0.g(new Pair("mcc", Integer.valueOf(this.getMediationNetwork.getResources().getConfiguration().mcc)), new Pair("mnc", Integer.valueOf(this.getMediationNetwork.getResources().getConfiguration().mnc))));
        map.put("sig", (String) getMediationNetwork(new Object[]{this}, -1875348758, 1875348758, System.identityHashCode(this)));
        map.put("last_boot_time", Long.valueOf(areAllFieldsValid()));
        map.put("disk", (String) getMediationNetwork(new Object[0], -879088668, 879088672, (int) System.currentTimeMillis()));
        f3660i = (f3661w + 85) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    private void AFAdRevenueData(@NotNull Map<String, Object> map, boolean z5) {
        f3661w = (f3660i + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(map, "");
        map.put("platformextension", this.getRevenue);
        if (z5) {
            map.put("platform_extension_v2", this.getCurrencyIso4217Code.AFAdRevenueData());
            f3661w = (f3660i + 125) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
    }

    private static void getMonetizationNetwork(@NotNull Map<String, Object> map, String str) {
        f3660i = (f3661w + 43) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(map, "");
        if (str != null) {
            f3660i = (f3661w + 77) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            map.put("phone", str);
            f3661w = (f3660i + 1) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
    }

    private String AFAdRevenueData(int i5) {
        String str;
        f3661w = (f3660i + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        String string = getMonetizationNetwork().getString("preInstallName");
        if (string != null) {
            int i6 = f3661w + 15;
            f3660i = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0) {
                int i10 = 12 / 0;
            }
            return string;
        }
        if (this.component1.getRevenue("preInstallName")) {
            str = this.component1.getMonetizationNetwork("preInstallName", null);
        } else {
            if (i5 <= 1) {
                int i11 = f3660i + 99;
                f3661w = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i11 % 2 == 0) {
                    String equals = equals();
                    if (equals == null) {
                        int i12 = f3661w + 19;
                        f3660i = i12 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        if (i12 % 2 != 0) {
                            equals = getCurrencyIso4217Code("AF_PRE_INSTALL_NAME");
                        } else {
                            getCurrencyIso4217Code("AF_PRE_INSTALL_NAME");
                            throw null;
                        }
                    }
                    string = equals;
                } else {
                    equals();
                    throw null;
                }
            }
            if (string != null) {
                this.component1.AFAdRevenueData("preInstallName", string);
            }
            str = string;
        }
        if (str != null) {
            f3660i = (f3661w + 73) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            getMonetizationNetwork().set("preInstallName", str);
        }
        return str;
    }

    private static boolean getMonetizationNetwork(File file) {
        f3661w = (f3660i + 93) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (file == null || !file.exists()) {
            return true;
        }
        f3660i = (f3661w + 39) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:26:0x007c, code lost:
    
        if (r2 == null) goto L32;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v1, types: [int] */
    /* JADX WARN: Type inference failed for: r2v10 */
    /* JADX WARN: Type inference failed for: r2v2, types: [java.io.Reader] */
    /* JADX WARN: Type inference failed for: r2v6, types: [java.io.Reader] */
    /* JADX WARN: Type inference failed for: r2v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String getMonetizationNetwork(File file, String str) {
        InputStreamReader inputStreamReader;
        Properties properties;
        int i5 = f3661w;
        int i6 = i5 + 87;
        f3660i = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ?? r22 = i6 % 2;
        if (r22 == 0) {
            throw null;
        }
        try {
            if (file == null) {
                int i10 = i5 + 39;
                f3660i = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i10 % 2 == 0) {
                    int i11 = 58 / 0;
                }
                return null;
            }
            try {
                properties = new Properties();
                inputStreamReader = new InputStreamReader(new FileInputStream(file), Charset.defaultCharset());
            } catch (FileNotFoundException unused) {
                inputStreamReader = null;
            } catch (Throwable th2) {
                th = th2;
                inputStreamReader = null;
            }
            try {
                properties.load(inputStreamReader);
                AFLogger.afInfoLog("Found PreInstall property!");
                String property = properties.getProperty(str);
                try {
                    inputStreamReader.close();
                    return property;
                } catch (Throwable th3) {
                    AFLogger.afErrorLog(th3.getMessage(), th3);
                    return property;
                }
            } catch (FileNotFoundException unused2) {
                AFLogger.afDebugLog("PreInstall file wasn't found: " + file.getAbsolutePath());
                r22 = inputStreamReader;
            } catch (Throwable th4) {
                th = th4;
                AFLogger.afErrorLog(th.getMessage(), th);
                r22 = inputStreamReader;
            }
        } finally {
            if (r22 != 0) {
                try {
                    r22.close();
                } catch (Throwable th5) {
                    AFLogger.afErrorLog(th5.getMessage(), th5);
                }
            }
        }
        return null;
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void getCurrencyIso4217Code(@NotNull Map<String, Object> map) {
        String[] strArr;
        f3661w = (f3660i + 15) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(map, "");
        String string = getMonetizationNetwork().getString(AppsFlyerProperties.APP_ID);
        if (string != null) {
            f3660i = (f3661w + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            map.put(AppsFlyerProperties.APP_ID, string);
        }
        String string2 = getMonetizationNetwork().getString(AppsFlyerProperties.CURRENCY_CODE);
        if (string2 != null) {
            if (string2.length() != 3) {
                StringBuilder sb2 = new StringBuilder("WARNING: currency code should be 3 characters!!! '");
                sb2.append(string2);
                sb2.append("' is not a legal value.");
                String obj = sb2.toString();
                Intrinsics.checkNotNullExpressionValue(obj, "");
                AFLogger.afWarnLog(obj);
                f3661w = (f3660i + 87) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
            map.put("currency", string2);
        }
        String string3 = getMonetizationNetwork().getString(AppsFlyerProperties.IS_UPDATE);
        if (string3 != null) {
            map.put("isUpdate", string3);
        }
        String string4 = getMonetizationNetwork().getString(AppsFlyerProperties.ADDITIONAL_CUSTOM_DATA);
        if (string4 != null) {
            int i5 = f3661w + 123;
            f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                map.put("customData", string4);
            } else {
                map.put("customData", string4);
                throw null;
            }
        }
        String string5 = getMonetizationNetwork().getString(AppsFlyerProperties.APP_USER_ID);
        if (string5 != null) {
            map.put("appUserId", string5);
        }
        String string6 = getMonetizationNetwork().getString(AppsFlyerProperties.USER_EMAILS);
        if (string6 != null) {
            f3660i = (f3661w + 39) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            map.put("user_emails", string6);
        }
        AFb1uSDK aFb1uSDK = this.toString.getRevenue;
        if (aFb1uSDK == null || (strArr = aFb1uSDK.getMediationNetwork) == null) {
            return;
        }
        int i6 = f3660i + 19;
        f3661w = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            map.put("sharing_filter", strArr);
        } else {
            map.put("sharing_filter", strArr);
            throw null;
        }
    }

    private void AFAdRevenueData(@NotNull Map<String, Object> map, String str) {
        int i5 = f3661w + 101;
        f3660i = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            if (str != null && str.length() != 0) {
                int i6 = f3660i + 17;
                f3661w = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i6 % 2 == 0) {
                    map.put("referrer", str);
                    f3661w = (f3660i + 67) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                } else {
                    map.put("referrer", str);
                    throw null;
                }
            }
            String monetizationNetwork = this.component1.getMonetizationNetwork("extraReferrers", null);
            if (monetizationNetwork != null) {
                map.put("extraReferrers", monetizationNetwork);
            }
            String referrer = getMonetizationNetwork().getReferrer(this.component1);
            if (referrer != null && referrer.length() != 0) {
                int i10 = f3661w + 67;
                f3660i = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i10 % 2 == 0) {
                    int i11 = 10 / 0;
                    if (map.get("referrer") != null) {
                        return;
                    }
                } else if (map.get("referrer") != null) {
                    return;
                }
                map.put("referrer", referrer);
                return;
            }
            f3661w = (f3660i + 17) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return;
        }
        Intrinsics.checkNotNullParameter(map, "");
        throw null;
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final void getMonetizationNetwork(@NotNull Map<String, Object> map, @NotNull AFe1mSDK aFe1mSDK) {
        getMediationNetwork(new Object[]{this, map, aFe1mSDK}, -1926240735, 1926240745, System.identityHashCode(this));
    }

    private static /* synthetic */ Object AFAdRevenueData(Object[] objArr) {
        AFg1qSDK aFg1qSDK = (AFg1qSDK) objArr[0];
        Map map = (Map) objArr[1];
        int i5 = f3660i + 119;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            map.putAll(aFg1qSDK.hashCode.getCurrencyIso4217Code());
            int i6 = 68 / 0;
        } else {
            Intrinsics.checkNotNullParameter(map, "");
            map.putAll(aFg1qSDK.hashCode.getCurrencyIso4217Code());
        }
        int i10 = f3660i + 53;
        f3661w = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i10 % 2 != 0) {
            int i11 = 1 / 0;
        }
        return null;
    }

    private static String AFAdRevenueData(AFc1oSDK aFc1oSDK, String str) {
        f3661w = (f3660i + 77) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        String monetizationNetwork = aFc1oSDK.getMonetizationNetwork("CACHED_CHANNEL", null);
        if (monetizationNetwork != null) {
            f3660i = (f3661w + 27) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return monetizationNetwork;
        }
        aFc1oSDK.AFAdRevenueData("CACHED_CHANNEL", str);
        return str;
    }

    private static File AFAdRevenueData(String str) {
        if (str != null) {
            try {
                if (StringsKt.b0(str).toString().length() > 0) {
                    return new File(StringsKt.b0(str).toString());
                }
                f3660i = (f3661w + 3) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            } catch (Throwable th2) {
                AFLogger.afErrorLog(th2.getMessage(), th2);
            }
        }
        f3661w = (f3660i + 5) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return null;
    }

    private static /* synthetic */ Object getCurrencyIso4217Code(Object[] objArr) {
        AFg1qSDK aFg1qSDK = (AFg1qSDK) objArr[0];
        f3660i = (f3661w + 55) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        String N_ = AFj1iSDK.N_(aFg1qSDK.getMediationNetwork.getApplicationContext().getPackageManager(), aFg1qSDK.getMediationNetwork.getApplicationContext().getPackageName());
        int i5 = f3660i + 121;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            int i6 = 27 / 0;
        }
        return N_;
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    public final long getCurrencyIso4217Code() {
        f3661w = (f3660i + 7) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        long currentTimeMillis = System.currentTimeMillis();
        f3660i = (f3661w + 105) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return currentTimeMillis;
    }

    private void getCurrencyIso4217Code(@NotNull AFh1jSDK aFh1jSDK, String str, String str2, AFb1rSDK aFb1rSDK) {
        f3660i = (f3661w + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(aFh1jSDK, "");
        Map<String, Object> map = aFh1jSDK.getCurrencyIso4217Code;
        if (aFh1jSDK.getCurrencyIso4217Code() == AFe1mSDK.CONVERSION) {
            f3660i = (f3661w + 13) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            Intrinsics.checkNotNullExpressionValue(map, "");
            equals(map);
            copy(map);
            toString(map);
            AFa1zSDK.getMonetizationNetwork(this.equals, this.areAllFieldsValid);
            f3660i = (f3661w + 3) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        Intrinsics.checkNotNullExpressionValue(map, "");
        copydefault(map);
        getMediationNetwork(new Object[]{this, map}, 1978462197, -1978462194, System.identityHashCode(this));
        getMediationNetwork(new Object[]{this, map}, -2029029470, 2029029475, System.identityHashCode(this));
        getMonetizationNetwork(map, str2);
        AFAdRevenueData(map, str);
        AFInAppEventParameterName(map);
        if (aFb1rSDK != null) {
            int i5 = f3660i + 9;
            f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                aFb1rSDK.getMonetizationNetwork(map);
            } else {
                aFb1rSDK.getMonetizationNetwork(map);
                int i6 = 18 / 0;
            }
        }
    }

    private static void AFAdRevenueData(@NotNull Map<String, Object> map, @NotNull AFh1jSDK aFh1jSDK) {
        Intrinsics.checkNotNullParameter(map, "");
        Intrinsics.checkNotNullParameter(aFh1jSDK, "");
        String str = aFh1jSDK.component4;
        if (str != null) {
            map.put("eventName", str);
            Map map2 = aFh1jSDK.AFAdRevenueData;
            if (map2 == null) {
                map2 = new HashMap();
            }
            map.put("eventValue", new JSONObject(map2).toString());
        }
    }

    @Override // com.appsflyer.internal.AFg1rSDK
    @NotNull
    public final Long AFAdRevenueData() {
        return (Long) getMediationNetwork(new Object[]{this}, -1521351773, 1521351785, System.identityHashCode(this));
    }

    private final String getCurrencyIso4217Code(String str) {
        f3661w = (f3660i + 63) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        String monetizationNetwork = this.areAllFieldsValid.getMonetizationNetwork(str);
        int i5 = f3660i + 3;
        f3661w = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            return monetizationNetwork;
        }
        throw null;
    }

    private void getCurrencyIso4217Code(@NotNull Map<String, Object> map, String str) {
        getMediationNetwork(new Object[]{this, map, str}, -361587280, 361587287, System.identityHashCode(this));
    }
}
