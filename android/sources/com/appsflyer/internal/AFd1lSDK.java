package com.appsflyer.internal;

import android.graphics.Color;
import android.graphics.PointF;
import android.graphics.drawable.Drawable;
import android.media.AudioTrack;
import android.os.Build;
import android.os.Process;
import android.os.SystemClock;
import android.text.TextUtils;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.widget.ExpandableListView;
import androidx.annotation.NonNull;
import com.appsflyer.AFLogger;
import com.appsflyer.AppsFlyerLib;
import com.appsflyer.AppsFlyerProperties;
import com.discord.js_watchdog.JSWatchdogManagerKt;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.lang.reflect.Method;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.Regex;

/* loaded from: classes.dex */
public final class AFd1lSDK {
    private static int $10 = 0;
    private static int $11 = 1;
    private static String AFAdRevenueData = null;
    private static boolean areAllFieldsValid = false;
    private static char[] component1 = null;
    private static int component3 = 0;
    private static int copy = 1;
    public static String getRevenue;
    private static int hashCode;
    private static boolean toString;
    private final AFj1eSDK component2;
    private final AFe1ySDK component4;
    private final AppsFlyerProperties getCurrencyIso4217Code;
    private final AFc1pSDK getMediationNetwork;
    private final AFd1kSDK getMonetizationNetwork;

    static {
        getMediationNetwork();
        getRevenue = "https://%sgcdsdk.%s/install_data/v5.0/";
        AFAdRevenueData = "https://%sonelink.%s/shortlink-sdk/v2";
        copy = (hashCode + 95) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    public AFd1lSDK(AFd1kSDK aFd1kSDK, AFc1pSDK aFc1pSDK, AppsFlyerProperties appsFlyerProperties, AFe1ySDK aFe1ySDK, AFj1eSDK aFj1eSDK) {
        this.getMonetizationNetwork = aFd1kSDK;
        this.getMediationNetwork = aFc1pSDK;
        this.getCurrencyIso4217Code = appsFlyerProperties;
        this.component4 = aFe1ySDK;
        this.component2 = aFj1eSDK;
    }

    private static void a(String str, String str2, int[] iArr, int i5, Object[] objArr) {
        byte[] bArr = str2;
        if (str2 != null) {
            $10 = ($11 + 93) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            bArr = str2.getBytes("ISO-8859-1");
        }
        byte[] bArr2 = bArr;
        char[] cArr = str;
        if (str != null) {
            $11 = ($10 + 3) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            cArr = str.toCharArray();
        }
        char[] cArr2 = cArr;
        AFk1iSDK aFk1iSDK = new AFk1iSDK();
        char[] cArr3 = component1;
        if (cArr3 != null) {
            int length = cArr3.length;
            char[] cArr4 = new char[length];
            for (int i6 = 0; i6 < length; i6++) {
                cArr4[i6] = (char) (cArr3[i6] ^ 1825820251896122634L);
            }
            cArr3 = cArr4;
        }
        int i10 = (int) (1825820251896122634L ^ component3);
        if (toString) {
            int length2 = bArr2.length;
            aFk1iSDK.getCurrencyIso4217Code = length2;
            char[] cArr5 = new char[length2];
            aFk1iSDK.getMediationNetwork = 0;
            while (true) {
                int i11 = aFk1iSDK.getMediationNetwork;
                int i12 = aFk1iSDK.getCurrencyIso4217Code;
                if (i11 >= i12) {
                    String str3 = new String(cArr5);
                    $11 = ($10 + 13) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    objArr[0] = str3;
                    return;
                }
                cArr5[i11] = (char) (cArr3[bArr2[(i12 - 1) - i11] + i5] - i10);
                aFk1iSDK.getMediationNetwork = i11 + 1;
            }
        } else if (areAllFieldsValid) {
            $11 = ($10 + 37) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            int length3 = cArr2.length;
            aFk1iSDK.getCurrencyIso4217Code = length3;
            char[] cArr6 = new char[length3];
            aFk1iSDK.getMediationNetwork = 0;
            while (true) {
                int i13 = aFk1iSDK.getMediationNetwork;
                int i14 = aFk1iSDK.getCurrencyIso4217Code;
                if (i13 >= i14) {
                    objArr[0] = new String(cArr6);
                    return;
                } else {
                    cArr6[i13] = (char) (cArr3[cArr2[(i14 - 1) - i13] - i5] - i10);
                    aFk1iSDK.getMediationNetwork = i13 + 1;
                }
            }
        } else {
            int length4 = iArr.length;
            aFk1iSDK.getCurrencyIso4217Code = length4;
            char[] cArr7 = new char[length4];
            aFk1iSDK.getMediationNetwork = 0;
            while (true) {
                int i15 = aFk1iSDK.getMediationNetwork;
                int i16 = aFk1iSDK.getCurrencyIso4217Code;
                if (i15 >= i16) {
                    objArr[0] = new String(cArr7);
                    return;
                }
                int i17 = $11 + 67;
                $10 = i17 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i17 % 2 != 0) {
                    cArr7[i15] = (char) (cArr3[iArr[i16 * i15] + i5] >>> i10);
                } else {
                    cArr7[i15] = (char) (cArr3[iArr[(i16 - 1) - i15] - i5] - i10);
                    i15++;
                }
                aFk1iSDK.getMediationNetwork = i15;
            }
        }
    }

    public static /* synthetic */ Object getRevenue(Object[] objArr, int i5, int i6, int i10) {
        int i11 = ~i5;
        int i12 = ~i6;
        int i13 = (~(i11 | i12)) | (~(i12 | i10));
        int i14 = ~i10;
        int i15 = i14 | i5;
        int i16 = ((~i15) * 886) + ((i5 | (~(i6 | i14))) * (-1772)) + ((i13 | (~(i15 | i6))) * 886) + (i6 * (-885)) + (i5 * 1773);
        if (i16 == 1) {
            return getRevenue(objArr);
        }
        if (i16 == 2) {
            return getCurrencyIso4217Code(objArr);
        }
        AFd1lSDK aFd1lSDK = (AFd1lSDK) objArr[0];
        String str = (String) objArr[1];
        String str2 = (String) objArr[2];
        UUID uuid = (UUID) objArr[3];
        String str3 = (String) objArr[4];
        String obj = uuid.toString();
        StringBuilder sb2 = new StringBuilder();
        sb2.append(String.format(AFAdRevenueData, AppsFlyerLib.getInstance().getHostPrefix(), AFa1uSDK.getMonetizationNetwork().getHostName()));
        sb2.append("/");
        sb2.append(str);
        sb2.append("?id=");
        sb2.append(str2);
        String obj2 = sb2.toString();
        Map<String, Object> AFAdRevenueData2 = aFd1lSDK.AFAdRevenueData();
        String valueOf = String.valueOf(AFAdRevenueData2.get("build_number"));
        HashMap hashMap = new HashMap();
        hashMap.put("Af-UUID", uuid.toString());
        hashMap.put("Af-Meta-Sdk-Ver", valueOf);
        hashMap.put("Af-Meta-Counter", String.valueOf(AFAdRevenueData2.get("counter")));
        hashMap.put("Af-Meta-Model", String.valueOf(AFAdRevenueData2.get("model")));
        hashMap.put("Af-Meta-Platform", String.valueOf(AFAdRevenueData2.get("platformextension")));
        hashMap.put("Af-Meta-System-Version", String.valueOf(AFAdRevenueData2.get("sdk")));
        Object[] objArr2 = new Object[1];
        a(null, "\u008c\u008b\u008a\u0089\u0088\u0087\u0086\u0085\u0084\u0083\u0082\u0081", null, 126 - MotionEvent.axisFromString(""), objArr2);
        hashMap.put(((String) objArr2[0]).intern(), getMediationNetwork(str3, obj, "GET", obj, str, str2, valueOf));
        AFd1jSDK aFd1jSDK = (AFd1jSDK) getRevenue(new Object[]{aFd1lSDK, new AFd1dSDK(obj2, null, "GET", hashMap, false), new AFd1bSDK()}, 865808376, -865808374, System.identityHashCode(aFd1lSDK));
        hashCode = (copy + 57) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return aFd1jSDK;
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0063, code lost:
    
        if (r14 != null) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x006e, code lost:
    
        if (r14.length() != 0) goto L18;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x0071, code lost:
    
        r4 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x0068, code lost:
    
        if (r14 != null) goto L15;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final AFd1jSDK<String> AFAdRevenueData(Map<String, Object> map, String str, String str2) {
        AFj1eSDK aFj1eSDK;
        String currencyIso4217Code;
        String monetizationNetwork;
        try {
            boolean z5 = true;
            Object[] objArr = {map, str};
            Map map2 = AFa1jSDK.unregisterClient;
            Object obj = map2.get(203186425);
            if (obj == null) {
                obj = ((Class) AFa1jSDK.AFAdRevenueData(Drawable.resolveOpacity(0, 0) + 196, (char) (29635 - (ExpandableListView.getPackedPositionForChild(0, 0) > 0L ? 1 : (ExpandableListView.getPackedPositionForChild(0, 0) == 0L ? 0 : -1))), (KeyEvent.getMaxKeyCode() >> 16) + 37)).getMethod("getRevenue", Map.class, String.class);
                map2.put(203186425, obj);
            }
            byte[] bArr = (byte[]) ((Method) obj).invoke(null, objArr);
            int i5 = hashCode + 41;
            copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                aFj1eSDK = this.component2;
                int i6 = 27 / 0;
            } else {
                aFj1eSDK = this.component2;
            }
            if (z5 || new Regex("4.?(\\d+)?.?(\\d+)").d(str2) || new Regex("3.?(\\d+)?.?(\\d+)").d(str2)) {
                currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code("https://%sars.%s/api/v2/android/validate_subscription?app_id=");
            } else {
                currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code("https://%sars.%s/api/v2/android/validate_subscription_v2?app_id=");
                copy = (hashCode + 37) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
            monetizationNetwork = aFj1eSDK.getMonetizationNetwork(aFj1eSDK.getRevenue(currencyIso4217Code), false);
            return (AFd1jSDK) getRevenue(new Object[]{this, new AFd1dSDK(monetizationNetwork, bArr, "POST", Collections.EMPTY_MAP, true), new AFd1cSDK()}, 865808376, -865808374, System.identityHashCode(this));
        } catch (Throwable th2) {
            try {
                Throwable cause = th2.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw th2;
            } catch (Throwable th3) {
                AFLogger.INSTANCE.e(AFg1cSDK.PURCHASE_VALIDATION, "AFFinalizer: reflection init failed.", th3, false, false);
                return null;
            }
        }
    }

    public final AFd1jSDK<String> getCurrencyIso4217Code(Map<String, Object> map, String str) {
        int i5 = copy + 47;
        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        try {
            if (i5 % 2 != 0) {
                try {
                    Object[] objArr = {map, str};
                    Map map2 = AFa1jSDK.unregisterClient;
                    Object obj = map2.get(203186425);
                    if (obj == null) {
                        obj = ((Class) AFa1jSDK.AFAdRevenueData(196 - ((Process.getThreadPriority(0) + 20) >> 6), (char) (TextUtils.indexOf("", "", 0) + 29636), (AudioTrack.getMaxVolume() > 0.0f ? 1 : (AudioTrack.getMaxVolume() == 0.0f ? 0 : -1)) + 36)).getMethod("getRevenue", Map.class, String.class);
                        map2.put(203186425, obj);
                    }
                    throw null;
                } catch (Throwable th2) {
                    Throwable cause = th2.getCause();
                    if (cause != null) {
                        throw cause;
                    }
                    throw th2;
                }
            }
            try {
                Object[] objArr2 = {map, str};
                Map map3 = AFa1jSDK.unregisterClient;
                Object obj2 = map3.get(203186425);
                if (obj2 == null) {
                    obj2 = ((Class) AFa1jSDK.AFAdRevenueData(Color.rgb(0, 0, 0) + 16777412, (char) (29636 - TextUtils.getOffsetAfter("", 0)), 38 - (SystemClock.uptimeMillis() > 0L ? 1 : (SystemClock.uptimeMillis() == 0L ? 0 : -1)))).getMethod("getRevenue", Map.class, String.class);
                    map3.put(203186425, obj2);
                }
                byte[] bArr = (byte[]) ((Method) obj2).invoke(null, objArr2);
                AFj1eSDK aFj1eSDK = this.component2;
                AFd1jSDK<String> aFd1jSDK = (AFd1jSDK) getRevenue(new Object[]{this, new AFd1dSDK(aFj1eSDK.getRevenue(aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code("https://%svalidate-and-log.%s/api/v4.0/android/subscription/validateAndLog?app_id=")), bArr, "POST", Collections.EMPTY_MAP, true), new AFd1cSDK()}, 865808376, -865808374, System.identityHashCode(this));
                int i6 = hashCode + 25;
                copy = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i6 % 2 == 0) {
                    int i10 = 17 / 0;
                }
                return aFd1jSDK;
            } catch (Throwable th3) {
                Throwable cause2 = th3.getCause();
                if (cause2 != null) {
                    throw cause2;
                }
                throw th3;
            }
        } catch (Throwable th4) {
            AFLogger.INSTANCE.e(AFg1cSDK.PURCHASE_VALIDATION, "AFFinalizer: reflection init failed.", th4, false, false);
            return null;
        }
        AFLogger.INSTANCE.e(AFg1cSDK.PURCHASE_VALIDATION, "AFFinalizer: reflection init failed.", th4, false, false);
        return null;
    }

    public final AFd1jSDK<String> getMediationNetwork(@NonNull String str, @NonNull Map<String, String> map, String str2, @NonNull UUID uuid, @NonNull String str3) {
        String obj = uuid.toString();
        HashMap hashMap = new HashMap();
        hashMap.put("ttl", "-1");
        hashMap.put("uuid", obj);
        hashMap.put("data", map);
        hashMap.put("meta", AFAdRevenueData());
        if (str2 != null) {
            int i5 = copy + 29;
            hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                hashMap.put("brand_domain", str2);
                throw null;
            }
            hashMap.put("brand_domain", str2);
        }
        String jSONObject = AFg1hSDK.getCurrencyIso4217Code(hashMap).toString();
        HashMap hashMap2 = new HashMap();
        Object[] objArr = new Object[1];
        a(null, "\u008c\u008b\u008a\u0089\u0088\u0087\u0086\u0085\u0084\u0083\u0082\u0081", null, 128 - (SystemClock.elapsedRealtime() > 0L ? 1 : (SystemClock.elapsedRealtime() == 0L ? 0 : -1)), objArr);
        hashMap2.put(((String) objArr[0]).intern(), getMediationNetwork(str3, obj, "POST", jSONObject));
        StringBuilder sb2 = new StringBuilder();
        sb2.append(String.format(AFAdRevenueData, AppsFlyerLib.getInstance().getHostPrefix(), AFa1uSDK.getMonetizationNetwork().getHostName()));
        sb2.append("/");
        sb2.append(str);
        AFd1jSDK<String> mediationNetwork = getMediationNetwork(new AFd1dSDK(sb2.toString(), jSONObject.getBytes(Charset.defaultCharset()), "POST", hashMap2, false), (AFe1vSDK) new AFd1cSDK(), true);
        hashCode = (copy + 95) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return mediationNetwork;
    }

    @NonNull
    public final AFd1jSDK<AFi1wSDK> getMonetizationNetwork(boolean z5, boolean z6, @NonNull String str, int i5) {
        String str2;
        String str3;
        int i6 = hashCode + 107;
        copy = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            Intrinsics.checkNotNullParameter(str, "");
            throw null;
        }
        AFe1ySDK aFe1ySDK = this.component4;
        Intrinsics.checkNotNullParameter(str, "");
        String str4 = z5 ? AFe1ySDK.getMonetizationNetwork : AFe1ySDK.getRevenue;
        if (z6) {
            copy = (hashCode + 93) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            str2 = "stg";
        } else {
            str2 = "";
        }
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        if (AFe1ySDK.getRevenue()) {
            copy = (hashCode + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            str3 = (String) aFe1ySDK.getCurrencyIso4217Code.getValue();
        } else {
            str3 = "";
        }
        String format = String.format(str4, Arrays.copyOf(new Object[]{str3, str2, aFe1ySDK.getCurrencyIso4217Code(), str}, 4));
        Intrinsics.checkNotNullExpressionValue(format, "");
        AFd1dSDK aFd1dSDK = new AFd1dSDK(format, "GET");
        aFd1dSDK.component3 = JSWatchdogManagerKt.FREEZE_CHECK_DELAY_MS;
        return (AFd1jSDK) getRevenue(new Object[]{this, aFd1dSDK, new AFd1eSDK()}, 865808376, -865808374, System.identityHashCode(this));
    }

    private static /* synthetic */ Object getCurrencyIso4217Code(Object[] objArr) {
        AFd1lSDK aFd1lSDK = (AFd1lSDK) objArr[0];
        AFd1dSDK aFd1dSDK = (AFd1dSDK) objArr[1];
        AFe1vSDK aFe1vSDK = (AFe1vSDK) objArr[2];
        copy = (hashCode + 83) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFd1jSDK mediationNetwork = aFd1lSDK.getMediationNetwork(aFd1dSDK, aFe1vSDK, aFd1lSDK.getMonetizationNetwork());
        int i5 = hashCode + 123;
        copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return mediationNetwork;
        }
        throw null;
    }

    private boolean getMonetizationNetwork() {
        hashCode = (copy + 99) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (this.getCurrencyIso4217Code.getBoolean(AppsFlyerProperties.HTTP_CACHE, true)) {
            return false;
        }
        hashCode = (copy + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return true;
    }

    public final AFd1jSDK<String> AFAdRevenueData(AFh1jSDK aFh1jSDK, String str, AFc1gSDK aFc1gSDK) {
        String currencyIso4217Code;
        String currencyIso4217Code2;
        try {
            Object[] objArr = {aFh1jSDK, str, aFc1gSDK};
            Map map = AFa1jSDK.unregisterClient;
            Object obj = map.get(-371358408);
            if (obj == null) {
                obj = ((Class) AFa1jSDK.AFAdRevenueData(View.resolveSizeAndState(0, 0, 0) + 196, (char) (TextUtils.lastIndexOf("", '0', 0, 0) + 29637), 37 - (ViewConfiguration.getLongPressTimeout() >> 16))).getMethod("getMediationNetwork", AFh1jSDK.class, String.class, AFc1gSDK.class);
                map.put(-371358408, obj);
            }
            byte[] bArr = (byte[]) ((Method) obj).invoke(null, objArr);
            AFj1eSDK aFj1eSDK = this.component2;
            Intrinsics.checkNotNullParameter(aFh1jSDK, "");
            boolean mediationNetwork = aFh1jSDK.getMediationNetwork();
            boolean z5 = aFh1jSDK instanceof AFh1nSDK;
            boolean z6 = aFh1jSDK instanceof AFh1lSDK;
            boolean z7 = aFh1jSDK instanceof AFh1kSDK;
            boolean z8 = aFh1jSDK instanceof AFh1bSDK;
            boolean z10 = aFh1jSDK instanceof AFh1dSDK;
            boolean z11 = aFh1jSDK instanceof AFg1uSDK;
            if (aFh1jSDK instanceof AFh1iSDK) {
                currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code("https://%spia.%s/api/v1.0/pia-android-event?app_id=");
            } else {
                if (!z7) {
                    int i5 = hashCode;
                    int i6 = (i5 + 89) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    copy = i6;
                    if (!z6) {
                        if (z5) {
                            currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code(AFj1eSDK.getCurrencyIso4217Code);
                        } else if (z8) {
                            int i10 = i6 + 77;
                            hashCode = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                            if (i10 % 2 == 0) {
                                currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code(AFj1eSDK.component4);
                            } else {
                                aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code(AFj1eSDK.component4);
                                throw null;
                            }
                        } else {
                            if (z10) {
                                int i11 = i5 + 111;
                                copy = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                if (i11 % 2 != 0) {
                                    currencyIso4217Code2 = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code("https://%ssdk-services.%s/validate-android-signature");
                                    return (AFd1jSDK) getRevenue(new Object[]{this, new AFd1dSDK(currencyIso4217Code2, bArr, "POST", Collections.EMPTY_MAP, aFh1jSDK.getRevenue()), new AFd1cSDK()}, 865808376, -865808374, System.identityHashCode(this));
                                }
                                aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code("https://%ssdk-services.%s/validate-android-signature");
                                throw null;
                            }
                            if (z11) {
                                currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code(AFj1eSDK.component1);
                            } else if (mediationNetwork) {
                                int i12 = i5 + 35;
                                copy = i12 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                if (i12 % 2 != 0 ? aFh1jSDK.component1 < 2 : aFh1jSDK.component1 < 5) {
                                    currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code(AFj1eSDK.getMediationNetwork);
                                } else {
                                    currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code(AFj1eSDK.component2);
                                }
                            } else {
                                currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code(AFj1eSDK.areAllFieldsValid);
                            }
                        }
                    }
                }
                currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code(AFj1eSDK.AFAdRevenueData);
                copy = (hashCode + 89) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
            currencyIso4217Code2 = aFj1eSDK.getMonetizationNetwork(AFj1eSDK.getMediationNetwork(aFj1eSDK.getRevenue(currencyIso4217Code), z5), z11);
            return (AFd1jSDK) getRevenue(new Object[]{this, new AFd1dSDK(currencyIso4217Code2, bArr, "POST", Collections.EMPTY_MAP, aFh1jSDK.getRevenue()), new AFd1cSDK()}, 865808376, -865808374, System.identityHashCode(this));
        } catch (Throwable th2) {
            try {
                Throwable cause = th2.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw th2;
            } catch (Throwable th3) {
                AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "AFFinalizer: reflection init failed.", th3, false, false);
                return null;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:9:0x00b4, code lost:
    
        if (r0 == null) goto L26;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final AFd1oSDK getMediationNetwork(Map<String, Object> map, String str) {
        byte[] bArr;
        int i5 = copy + 27;
        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        try {
            if (i5 % 2 == 0) {
                try {
                    Object[] objArr = {map, str};
                    Map map2 = AFa1jSDK.unregisterClient;
                    Object obj = map2.get(203186425);
                    if (obj == null) {
                        obj = ((Class) AFa1jSDK.AFAdRevenueData((AudioTrack.getMinVolume() > 0.0f ? 1 : (AudioTrack.getMinVolume() == 0.0f ? 0 : -1)) + 196, (char) (29636 - (KeyEvent.getMaxKeyCode() >> 16)), 37 - Drawable.resolveOpacity(0, 0))).getMethod("getRevenue", Map.class, String.class);
                        map2.put(203186425, obj);
                    }
                    bArr = (byte[]) ((Method) obj).invoke(null, objArr);
                } catch (Throwable th2) {
                    Throwable cause = th2.getCause();
                    if (cause != null) {
                        throw cause;
                    }
                    throw th2;
                }
            } else {
                try {
                    Object[] objArr2 = {map, str};
                    Map map3 = AFa1jSDK.unregisterClient;
                    Object obj2 = map3.get(203186425);
                    if (obj2 == null) {
                        obj2 = ((Class) AFa1jSDK.AFAdRevenueData((PointF.length(0.0f, 0.0f) > 0.0f ? 1 : (PointF.length(0.0f, 0.0f) == 0.0f ? 0 : -1)) + 196, (char) (29635 - TextUtils.indexOf((CharSequence) "", '0', 0, 0)), (SystemClock.elapsedRealtime() > 0L ? 1 : (SystemClock.elapsedRealtime() == 0L ? 0 : -1)) + 36)).getMethod("getRevenue", Map.class, String.class);
                        map3.put(203186425, obj2);
                    }
                    bArr = (byte[]) ((Method) obj2).invoke(null, objArr2);
                    int i6 = 63 / 0;
                    if (bArr == null) {
                        AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "AFFinalizer: failed to create bytes.", new IllegalArgumentException("Failed to create bytes from proxyData, bytes are null"), false, false);
                        return null;
                    }
                    copy = (hashCode + 87) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    AFd1oSDK aFd1oSDK = new AFd1oSDK(this.getMediationNetwork, bArr);
                    int i10 = hashCode + 3;
                    copy = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (i10 % 2 != 0) {
                        return aFd1oSDK;
                    }
                    throw null;
                } catch (Throwable th3) {
                    Throwable cause2 = th3.getCause();
                    if (cause2 != null) {
                        throw cause2;
                    }
                    throw th3;
                }
            }
        } catch (Throwable th4) {
            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "AFFinalizer: reflection init failed.", th4, false, false);
            return null;
        }
    }

    @NonNull
    public final AFd1jSDK<AFa1mSDK> getMonetizationNetwork(AFa1pSDK aFa1pSDK) {
        AFd1jSDK<AFa1mSDK> aFd1jSDK = (AFd1jSDK) getRevenue(new Object[]{this, new AFd1dSDK(aFa1pSDK.component3, AFg1hSDK.getCurrencyIso4217Code(aFa1pSDK.getCurrencyIso4217Code).toString().getBytes(Charset.defaultCharset()), "POST", Collections.EMPTY_MAP, aFa1pSDK.getRevenue()), new AFa1qSDK()}, 865808376, -865808374, System.identityHashCode(this));
        hashCode = (copy + 61) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return aFd1jSDK;
    }

    public final AFd1jSDK<String> getRevenue(Map<String, Object> map, String str, String str2) {
        String currencyIso4217Code;
        String monetizationNetwork;
        try {
            Object[] objArr = {map, str};
            Map map2 = AFa1jSDK.unregisterClient;
            Object obj = map2.get(203186425);
            if (obj == null) {
                obj = ((Class) AFa1jSDK.AFAdRevenueData((Process.myPid() >> 22) + 196, (char) (KeyEvent.getDeadChar(0, 0) + 29636), 37 - Color.red(0))).getMethod("getRevenue", Map.class, String.class);
                map2.put(203186425, obj);
            }
            byte[] bArr = (byte[]) ((Method) obj).invoke(null, objArr);
            copy = (hashCode + 75) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            AFj1eSDK aFj1eSDK = this.component2;
            if (str2 != null && str2.length() != 0 && !new Regex("4.?(\\d+)?.?(\\d+)").d(str2) && !new Regex("3.?(\\d+)?.?(\\d+)").d(str2)) {
                currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code("https://%sviap.%s/api/v1/android/validate_purchase_v2?app_id=");
                hashCode = (copy + 37) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            } else {
                hashCode = (copy + 49) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                currencyIso4217Code = aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code("https://%sviap.%s/api/v1/android/validate_purchase?app_id=");
            }
            monetizationNetwork = aFj1eSDK.getMonetizationNetwork(aFj1eSDK.getRevenue(currencyIso4217Code), false);
            return (AFd1jSDK) getRevenue(new Object[]{this, new AFd1dSDK(monetizationNetwork, bArr, "POST", Collections.EMPTY_MAP, true), new AFd1cSDK()}, 865808376, -865808374, System.identityHashCode(this));
        } catch (Throwable th2) {
            try {
                Throwable cause = th2.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw th2;
            } catch (Throwable th3) {
                AFLogger.INSTANCE.e(AFg1cSDK.ENGAGEMENT, "AFFinalizer: reflection init failed.", th3, false, false);
                return null;
            }
        }
    }

    private <T> AFd1jSDK<T> getCurrencyIso4217Code(AFd1dSDK aFd1dSDK, AFe1vSDK<T> aFe1vSDK) {
        return (AFd1jSDK) getRevenue(new Object[]{this, aFd1dSDK, aFe1vSDK}, 865808376, -865808374, System.identityHashCode(this));
    }

    private static String getMediationNetwork(String str, String str2, String... strArr) {
        ArrayList arrayList = new ArrayList(Arrays.asList(strArr));
        arrayList.add(1, "v2");
        String join = TextUtils.join("\u2063", (String[]) arrayList.toArray(new String[0]));
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        sb2.append(str2);
        sb2.append("v2");
        String revenue = AFj1bSDK.getRevenue(join, sb2.toString());
        int i5 = copy + 89;
        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            int i6 = 72 / 0;
        }
        return revenue;
    }

    private <T> AFd1jSDK<T> getMediationNetwork(AFd1dSDK aFd1dSDK, AFe1vSDK<T> aFe1vSDK, boolean z5) {
        aFd1dSDK.getMediationNetwork = z5;
        AFd1kSDK aFd1kSDK = this.getMonetizationNetwork;
        AFd1jSDK<T> aFd1jSDK = new AFd1jSDK<>(aFd1dSDK, aFd1kSDK.getMediationNetwork, aFd1kSDK.getRevenue, aFe1vSDK);
        int i5 = hashCode + 57;
        copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return aFd1jSDK;
        }
        throw null;
    }

    public final AFd1jSDK<String> getRevenue(Map<String, Object> map, String str) {
        try {
            Object[] objArr = {map, str};
            Map map2 = AFa1jSDK.unregisterClient;
            Object obj = map2.get(203186425);
            if (obj == null) {
                obj = ((Class) AFa1jSDK.AFAdRevenueData((Process.myTid() >> 22) + 196, (char) (TextUtils.lastIndexOf("", '0', 0) + 29637), View.resolveSizeAndState(0, 0, 0) + 37)).getMethod("getRevenue", Map.class, String.class);
                map2.put(203186425, obj);
            }
            byte[] bArr = (byte[]) ((Method) obj).invoke(null, objArr);
            hashCode = (copy + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            AFj1eSDK aFj1eSDK = this.component2;
            AFd1jSDK<String> aFd1jSDK = (AFd1jSDK) getRevenue(new Object[]{this, new AFd1dSDK(aFj1eSDK.getRevenue(aFj1eSDK.getMonetizationNetwork.getCurrencyIso4217Code("https://%svalidate-and-log.%s/api/v4.0/android/one_time_purchase/validateAndLog?app_id=")), bArr, "POST", Collections.EMPTY_MAP, true), new AFd1cSDK()}, 865808376, -865808374, System.identityHashCode(this));
            copy = (hashCode + 69) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return aFd1jSDK;
        } catch (Throwable th2) {
            try {
                Throwable cause = th2.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw th2;
            } catch (Throwable th3) {
                AFLogger.INSTANCE.e(AFg1cSDK.PURCHASE_VALIDATION, "AFFinalizer: reflection init failed.", th3, false, false);
                return null;
            }
        }
    }

    public static void getMediationNetwork() {
        component1 = new char[]{36301, 36326, 36281, 36307, 36325, 36327, 36350, 36333, 36336, 36337, 36338, 36321, 36322, 36320};
        component3 = 1912311180;
        areAllFieldsValid = true;
        toString = true;
    }

    public final AFd1jSDK<Map<String, String>> getMediationNetwork(@NonNull String str, @NonNull String str2, @NonNull UUID uuid, @NonNull String str3) {
        return (AFd1jSDK) getRevenue(new Object[]{this, str, str2, uuid, str3}, 1826287225, -1826287225, System.identityHashCode(this));
    }

    public final AFd1jSDK<Map<String, Object>> getMediationNetwork(String str, String str2) {
        return (AFd1jSDK) getRevenue(new Object[]{this, str, str2}, 2067226218, -2067226217, System.identityHashCode(this));
    }

    private static /* synthetic */ Object getRevenue(Object[] objArr) {
        AFd1lSDK aFd1lSDK = (AFd1lSDK) objArr[0];
        AFd1jSDK aFd1jSDK = (AFd1jSDK) getRevenue(new Object[]{aFd1lSDK, AFd1hSDK.AFAdRevenueData(aFd1lSDK.getMediationNetwork.getRevenue.getRevenue.getPackageName(), AFb1jSDK.getRevenue(aFd1lSDK.getMediationNetwork.getMonetizationNetwork), (String) objArr[1], (String) objArr[2]), new AFd1iSDK()}, 865808376, -865808374, System.identityHashCode(aFd1lSDK));
        int i5 = hashCode + 85;
        copy = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            int i6 = 21 / 0;
        }
        return aFd1jSDK;
    }

    public final AFd1jSDK<String> getRevenue(AFh1gSDK aFh1gSDK) {
        AFd1jSDK<String> aFd1jSDK = (AFd1jSDK) getRevenue(new Object[]{this, new AFd1dSDK(aFh1gSDK.component3, aFh1gSDK.AFAdRevenueData(), "POST", Collections.EMPTY_MAP, true), new AFd1cSDK()}, 865808376, -865808374, System.identityHashCode(this));
        int i5 = copy + 117;
        hashCode = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            int i6 = 59 / 0;
        }
        return aFd1jSDK;
    }

    public final AFd1jSDK<String> AFAdRevenueData(@NonNull String str) {
        AFd1dSDK aFd1dSDK = new AFd1dSDK(str, null, "GET", Collections.EMPTY_MAP, false);
        aFd1dSDK.component3 = 10000;
        aFd1dSDK.getCurrencyIso4217Code = false;
        AFd1jSDK<String> aFd1jSDK = (AFd1jSDK) getRevenue(new Object[]{this, aFd1dSDK, new AFd1cSDK()}, 865808376, -865808374, System.identityHashCode(this));
        copy = (hashCode + 125) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return aFd1jSDK;
    }

    private Map<String, Object> AFAdRevenueData() {
        HashMap hashMap = new HashMap();
        hashMap.put("build_number", "6.17.3");
        hashMap.put("counter", Integer.valueOf(this.getMediationNetwork.getMonetizationNetwork.getMediationNetwork("appsFlyerCount", 0)));
        hashMap.put("model", Build.MODEL);
        Object[] objArr = new Object[1];
        a(null, "\u008e\u0087\u0088\u008b\u008d", null, 126 - ((byte) KeyEvent.getModifierMetaStateMask()), objArr);
        hashMap.put(((String) objArr[0]).intern(), Build.BRAND);
        hashMap.put("sdk", Integer.toString(Build.VERSION.SDK_INT));
        hashMap.put("app_version_name", this.getMediationNetwork.n_().versionName);
        hashMap.put("app_id", this.getMediationNetwork.getRevenue.getRevenue.getPackageName());
        hashMap.put("platformextension", new AFa1ySDK().getMediationNetwork());
        copy = (hashCode + 13) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return hashMap;
    }
}
