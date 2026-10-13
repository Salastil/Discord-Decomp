package com.appsflyer.internal;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.view.Gravity;
import android.view.ViewConfiguration;
import android.widget.ExpandableListView;
import androidx.annotation.NonNull;
import com.appsflyer.AFLogger;
import com.appsflyer.AppsFlyerProperties;
import com.appsflyer.internal.components.network.http.ResponseNetwork;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes.dex */
public final class AFf1pSDK extends AFf1uSDK {
    private static int $10 = 0;
    private static int $11 = 1;
    private static int AFInAppEventParameterName = 1760829264;
    private static int AFInAppEventType = 2059786070;
    private static byte[] AFKeystoreWrapper = {-102, 97, -125, 124, 108};
    private static short[] AFLogger = null;

    /* renamed from: d, reason: collision with root package name */
    private static int f3654d = 0;
    private static int registerClient = -1524191679;
    private static int unregisterClient = 1;
    private final AFc1pSDK copydefault;
    private final AFg1rSDK equals;
    private final String hashCode;
    private final AFc1gSDK toString;

    public AFf1pSDK(@NonNull String str, @NonNull AFc1bSDK aFc1bSDK) {
        super(new AFg1uSDK(), aFc1bSDK, str);
        this.copydefault = aFc1bSDK.getCurrencyIso4217Code();
        this.toString = aFc1bSDK.registerClient();
        this.hashCode = str;
        this.equals = aFc1bSDK.component4();
    }

    /* JADX WARN: Removed duplicated region for block: B:30:0x00c7  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void a(int i5, byte b10, short s2, int i6, int i10, Object[] objArr) {
        boolean z5;
        AFk1kSDK aFk1kSDK = new AFk1kSDK();
        StringBuilder sb2 = new StringBuilder();
        int i11 = i6 + ((int) (AFInAppEventParameterName ^ 6918351348135370604L));
        int i12 = i11 == -1 ? 1 : 0;
        if (i12 != 0) {
            $11 = ($10 + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            byte[] bArr = AFKeystoreWrapper;
            if (bArr != null) {
                int length = bArr.length;
                byte[] bArr2 = new byte[length];
                for (int i13 = 0; i13 < length; i13++) {
                    $10 = ($11 + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    bArr2[i13] = (byte) (bArr[i13] ^ 6918351348135370604L);
                }
                bArr = bArr2;
            }
            i11 = bArr != null ? (byte) (((byte) (AFKeystoreWrapper[((int) (registerClient ^ 6918351348135370604L)) + i5] ^ 6918351348135370604L)) + ((int) (AFInAppEventParameterName ^ 6918351348135370604L))) : (short) (((short) (AFLogger[((int) (registerClient ^ 6918351348135370604L)) + i5] ^ 6918351348135370604L)) + ((int) (AFInAppEventParameterName ^ 6918351348135370604L)));
        }
        if (i11 > 0) {
            aFk1kSDK.getCurrencyIso4217Code = ((i5 + i11) - 2) + ((int) (registerClient ^ 6918351348135370604L)) + i12;
            char c6 = (char) (i10 + ((int) (AFInAppEventType ^ 6918351348135370604L)));
            aFk1kSDK.getRevenue = c6;
            sb2.append(c6);
            aFk1kSDK.getMediationNetwork = aFk1kSDK.getRevenue;
            byte[] bArr3 = AFKeystoreWrapper;
            if (bArr3 != null) {
                int length2 = bArr3.length;
                byte[] bArr4 = new byte[length2];
                $11 = ($10 + 117) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                for (int i14 = 0; i14 < length2; i14++) {
                    bArr4[i14] = (byte) (bArr3[i14] ^ 6918351348135370604L);
                }
                bArr3 = bArr4;
            }
            if (bArr3 != null) {
                int i15 = $10 + 25;
                $11 = i15 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i15 % 2 != 0) {
                    z5 = true;
                    aFk1kSDK.AFAdRevenueData = 1;
                    while (aFk1kSDK.AFAdRevenueData < i11) {
                        if (z5) {
                            byte[] bArr5 = AFKeystoreWrapper;
                            aFk1kSDK.getCurrencyIso4217Code = aFk1kSDK.getCurrencyIso4217Code - 1;
                            aFk1kSDK.getRevenue = (char) (aFk1kSDK.getMediationNetwork + (((byte) (((byte) (bArr5[r8] ^ 6918351348135370604L)) + s2)) ^ b10));
                        } else {
                            short[] sArr = AFLogger;
                            aFk1kSDK.getCurrencyIso4217Code = aFk1kSDK.getCurrencyIso4217Code - 1;
                            aFk1kSDK.getRevenue = (char) (aFk1kSDK.getMediationNetwork + (((short) (((short) (sArr[r8] ^ 6918351348135370604L)) + s2)) ^ b10));
                        }
                        sb2.append(aFk1kSDK.getRevenue);
                        aFk1kSDK.getMediationNetwork = aFk1kSDK.getRevenue;
                        aFk1kSDK.AFAdRevenueData++;
                    }
                }
            }
            z5 = false;
            aFk1kSDK.AFAdRevenueData = 1;
            while (aFk1kSDK.AFAdRevenueData < i11) {
            }
        }
        objArr[0] = sb2.toString();
    }

    private void equals() {
        unregisterClient = (f3654d + 41) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFf1uSDK) this).areAllFieldsValid.getCurrencyIso4217Code("sentRegisterRequestToAF", true);
        AFLogger.afDebugLog("[register] Successfully registered for Uninstall Tracking");
        unregisterClient = (f3654d + 9) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    public static /* synthetic */ Object getMediationNetwork(Object[] objArr, int i5, int i6, int i10) {
        int i11 = ~i6;
        int i12 = (((~((~i5) | i10)) | i11) * (-318)) + (i6 * (-317)) + (i5 * 319);
        int i13 = ~(i11 | i10);
        int i14 = ~i10;
        return (((~((i5 | i6) | i10)) | (~((i11 | i14) | i5))) * 318) + (((i13 | (~((i14 | i5) | i6))) * 318) + i12) != 1 ? getMonetizationNetwork(objArr) : getMediationNetwork(objArr);
    }

    private static /* synthetic */ Object getMonetizationNetwork(Object[] objArr) {
        AFf1pSDK aFf1pSDK = (AFf1pSDK) objArr[0];
        PackageManager packageManager = (PackageManager) objArr[1];
        ApplicationInfo applicationInfo = aFf1pSDK.copydefault.n_().applicationInfo;
        if (applicationInfo == null) {
            int i5 = unregisterClient + 103;
            f3654d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                return "";
            }
            throw null;
        }
        String charSequence = packageManager.getApplicationLabel(applicationInfo).toString();
        int i6 = f3654d + 73;
        unregisterClient = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 != 0) {
            return charSequence;
        }
        throw null;
    }

    @NonNull
    private String s_(PackageManager packageManager) {
        return (String) getMediationNetwork(new Object[]{this, packageManager}, -182789500, 182789500, System.identityHashCode(this));
    }

    @Override // com.appsflyer.internal.AFf1uSDK
    public final void AFAdRevenueData(AFh1jSDK aFh1jSDK) {
        int i5 = unregisterClient + 29;
        f3654d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.internal.AFf1uSDK
    public final void areAllFieldsValid(AFh1jSDK aFh1jSDK) {
        int i5 = unregisterClient + 23;
        f3654d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            this.copydefault.component4();
            throw null;
        }
        String component4 = this.copydefault.component4();
        if (component4 != null) {
            aFh1jSDK.getMonetizationNetwork("advertiserId", component4);
            unregisterClient = (f3654d + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
    }

    @Override // com.appsflyer.internal.AFf1uSDK, com.appsflyer.internal.AFe1eSDK
    public final boolean copydefault() {
        return ((Boolean) getMediationNetwork(new Object[]{this}, 222839034, -222839033, System.identityHashCode(this))).booleanValue();
    }

    @Override // com.appsflyer.internal.AFf1uSDK
    public final void getCurrencyIso4217Code(AFh1jSDK aFh1jSDK) {
        f3654d = (unregisterClient + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.internal.AFe1eSDK, com.appsflyer.internal.AFe1lSDK
    public final void getRevenue() {
        f3654d = (unregisterClient + 55) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        super.getRevenue();
        ResponseNetwork responseNetwork = ((AFe1eSDK) this).component3;
        if (responseNetwork != null && responseNetwork.isSuccessful()) {
            equals();
        }
        unregisterClient = (f3654d + 49) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0036, code lost:
    
        r13.getMonetizationNetwork("app_version_code", java.lang.Integer.toString(r12.copydefault.n_().versionCode));
        r13.getMonetizationNetwork("app_version_name", r12.copydefault.n_().versionName);
        r13.getMonetizationNetwork("app_name", (java.lang.String) getMediationNetwork(new java.lang.Object[]{r12, r2.getPackageManager()}, -182789500, 182789500, java.lang.System.identityHashCode(r12)));
        r13.getMonetizationNetwork("installDate", com.appsflyer.internal.AFa1uSDK.getMediationNetwork(new java.text.SimpleDateFormat("yyyy-MM-dd_HHmmssZ", java.util.Locale.US), r12.copydefault.n_().firstInstallTime));
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x008d, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x008e, code lost:
    
        com.appsflyer.AFLogger.afErrorLog("Exception while collecting application version info.", r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x019b, code lost:
    
        throw new java.lang.IllegalStateException("Context is not provided, can't send register request");
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x002c, code lost:
    
        if (r0 != null) goto L6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x001b, code lost:
    
        if (r0 != null) goto L6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x001d, code lost:
    
        r11 = r2;
        r2 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:7:0x0034, code lost:
    
        if (r11.getRevenue() != false) goto L36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0187, code lost:
    
        com.appsflyer.AFLogger.afInfoLog("CustomerUserId not set, Tracking is disabled", true);
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0193, code lost:
    
        throw new java.lang.IllegalStateException("CustomerUserId not set, register is not sent");
     */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0100  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0110  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x016e  */
    /* JADX WARN: Removed duplicated region for block: B:32:? A[RETURN, SYNTHETIC] */
    @Override // com.appsflyer.internal.AFf1uSDK
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void getMediationNetwork(AFh1jSDK aFh1jSDK) {
        Context context;
        AFa1uSDK monetizationNetwork;
        Context context2;
        AFb1mSDK l_;
        String areAllFieldsValid;
        int i5 = unregisterClient + 63;
        f3654d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            super.getMediationNetwork(aFh1jSDK);
            context = this.toString.getRevenue;
            monetizationNetwork = AFa1uSDK.getMonetizationNetwork();
            int i6 = 98 / 0;
        } else {
            super.getMediationNetwork(aFh1jSDK);
            context = this.toString.getRevenue;
            monetizationNetwork = AFa1uSDK.getMonetizationNetwork();
        }
        this.equals.getRevenue(aFh1jSDK.getCurrencyIso4217Code);
        aFh1jSDK.getCurrencyIso4217Code.remove("ivc");
        String mediationNetwork = AFa1uSDK.getMediationNetwork();
        if (mediationNetwork != null) {
            aFh1jSDK.getMonetizationNetwork("appUserId", mediationNetwork);
        }
        try {
            aFh1jSDK.getMonetizationNetwork("model", Build.MODEL);
            Object[] objArr = new Object[1];
            a(841830099 - ExpandableListView.getPackedPositionType(0L), (byte) Drawable.resolveOpacity(0, 0), (short) (ViewConfiguration.getTapTimeout() >> 16), (-55) - Gravity.getAbsoluteGravity(0, 0), (-305252312) - (ViewConfiguration.getTouchSlop() >> 8), objArr);
            aFh1jSDK.getMonetizationNetwork(((String) objArr[0]).intern(), Build.BRAND);
        } catch (Throwable th2) {
            AFLogger.afErrorLog("Exception while collecting device brand and model.", th2);
        }
        if (AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, false)) {
            aFh1jSDK.getMonetizationNetwork(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, "true");
        }
        l_ = AFb1kSDK.l_(context2.getContentResolver());
        if (l_ != null) {
            aFh1jSDK.getMonetizationNetwork("amazon_aid", l_.getCurrencyIso4217Code);
            aFh1jSDK.getMonetizationNetwork("amazon_aid_limit", String.valueOf(l_.getRevenue));
            unregisterClient = (f3654d + 81) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        aFh1jSDK.getMonetizationNetwork("devkey", ((AFe1eSDK) this).component2.getMediationNetwork());
        aFh1jSDK.getMonetizationNetwork("uid", AFb1jSDK.getRevenue(this.copydefault.getMonetizationNetwork));
        aFh1jSDK.getMonetizationNetwork("af_gcm_token", this.hashCode);
        aFh1jSDK.getMonetizationNetwork("launch_counter", Integer.toString(((AFf1uSDK) this).areAllFieldsValid.getMediationNetwork("appsFlyerCount", 0)));
        aFh1jSDK.getMonetizationNetwork("sdk", Integer.toString(Build.VERSION.SDK_INT));
        areAllFieldsValid = this.copydefault.areAllFieldsValid();
        if (areAllFieldsValid == null) {
            int i10 = f3654d + 59;
            unregisterClient = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i10 % 2 != 0) {
                aFh1jSDK.getMonetizationNetwork(AppsFlyerProperties.CHANNEL, areAllFieldsValid);
                return;
            } else {
                aFh1jSDK.getMonetizationNetwork(AppsFlyerProperties.CHANNEL, areAllFieldsValid);
                int i11 = 93 / 0;
                return;
            }
        }
        return;
        if (AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, false)) {
        }
        l_ = AFb1kSDK.l_(context2.getContentResolver());
        if (l_ != null) {
        }
        aFh1jSDK.getMonetizationNetwork("devkey", ((AFe1eSDK) this).component2.getMediationNetwork());
        aFh1jSDK.getMonetizationNetwork("uid", AFb1jSDK.getRevenue(this.copydefault.getMonetizationNetwork));
        aFh1jSDK.getMonetizationNetwork("af_gcm_token", this.hashCode);
        aFh1jSDK.getMonetizationNetwork("launch_counter", Integer.toString(((AFf1uSDK) this).areAllFieldsValid.getMediationNetwork("appsFlyerCount", 0)));
        aFh1jSDK.getMonetizationNetwork("sdk", Integer.toString(Build.VERSION.SDK_INT));
        areAllFieldsValid = this.copydefault.areAllFieldsValid();
        if (areAllFieldsValid == null) {
        }
    }

    @Override // com.appsflyer.internal.AFf1uSDK
    public final void getMonetizationNetwork(AFh1jSDK aFh1jSDK) {
        unregisterClient = (f3654d + 103) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.internal.AFf1uSDK
    public final void getRevenue(AFh1jSDK aFh1jSDK) {
        int i5 = unregisterClient + 7;
        f3654d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            throw null;
        }
    }

    private static /* synthetic */ Object getMediationNetwork(Object[] objArr) {
        int i5 = (f3654d + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        unregisterClient = i5;
        int i6 = i5 + 69;
        f3654d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            return Boolean.FALSE;
        }
        int i10 = 75 / 0;
        return Boolean.FALSE;
    }
}
