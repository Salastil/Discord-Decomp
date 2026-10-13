package com.appsflyer.internal;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.StrictMode;
import android.text.TextUtils;
import android.view.MotionEvent;
import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;
import com.appsflyer.AFAdRevenueData;
import com.appsflyer.AFInAppEventParameterName;
import com.appsflyer.AFInAppEventType;
import com.appsflyer.AFLogger;
import com.appsflyer.AFPurchaseDetails;
import com.appsflyer.AppsFlyerConsent;
import com.appsflyer.AppsFlyerConversionListener;
import com.appsflyer.AppsFlyerInAppPurchaseValidationCallback;
import com.appsflyer.AppsFlyerInAppPurchaseValidatorListener;
import com.appsflyer.AppsFlyerLib;
import com.appsflyer.AppsFlyerProperties;
import com.appsflyer.PurchaseHandler;
import com.appsflyer.attribution.AppsFlyerRequestListener;
import com.appsflyer.deeplink.DeepLinkListener;
import com.appsflyer.deeplink.DeepLinkResult;
import com.appsflyer.internal.AFb1aSDK;
import com.appsflyer.internal.AFd1xSDK;
import com.appsflyer.internal.AFe1nSDK.AnonymousClass3;
import com.appsflyer.internal.AFj1qSDK;
import com.appsflyer.internal.components.network.http.ResponseNetwork;
import com.appsflyer.internal.platform_extension.PluginInfo;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import j$.util.DesugarTimeZone;
import java.net.URI;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Objects;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;
import kotlin.Unit;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;
import org.webrtc.PeerConnection;

/* loaded from: classes.dex */
public final class AFa1uSDK extends AppsFlyerLib {
    private static int $10 = 0;
    private static int $11 = 1;
    public static final String AFAdRevenueData;
    private static char[] AFInAppEventParameterName = null;
    private static int AFInAppEventType = 0;
    private static int AFKeystoreWrapper = 0;
    private static boolean AFLogger = false;
    private static AFa1uSDK areAllFieldsValid = null;

    /* renamed from: d, reason: collision with root package name */
    private static int f3646d = 1;
    static AppsFlyerInAppPurchaseValidatorListener getCurrencyIso4217Code;
    public static final String getRevenue;
    private static boolean registerClient;
    Application component3;
    private volatile SharedPreferences copy;
    private Map<Long, String> copydefault;
    private AFf1nSDK equals;
    private boolean toString;
    public volatile AppsFlyerConversionListener getMediationNetwork = null;
    private long component4 = -1;
    long getMonetizationNetwork = -1;
    private long component2 = TimeUnit.SECONDS.toMillis(5);
    boolean component1 = false;

    @NonNull
    private final AFc1dSDK hashCode = new AFc1dSDK();

    /* renamed from: com.appsflyer.internal.AFa1uSDK$2, reason: invalid class name */
    public static /* synthetic */ class AnonymousClass2 {
        static final /* synthetic */ int[] getRevenue;

        static {
            int[] iArr = new int[AppsFlyerProperties.EmailsCryptType.values().length];
            getRevenue = iArr;
            try {
                iArr[AppsFlyerProperties.EmailsCryptType.SHA256.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                getRevenue[AppsFlyerProperties.EmailsCryptType.NONE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    /* renamed from: com.appsflyer.internal.AFa1uSDK$AFa1uSDK, reason: collision with other inner class name */
    public class C0010AFa1uSDK implements AFe1sSDK {
        public C0010AFa1uSDK() {
        }

        @Override // com.appsflyer.internal.AFe1sSDK
        public final void getMediationNetwork(AFe1lSDK<?> aFe1lSDK) {
        }

        @Override // com.appsflyer.internal.AFe1sSDK
        public final void getMonetizationNetwork(AFe1lSDK<?> aFe1lSDK, AFe1uSDK aFe1uSDK) {
            JSONObject AFAdRevenueData;
            AFf1aSDK revenue;
            if (!(aFe1lSDK instanceof AFf1uSDK)) {
                if (!(aFe1lSDK instanceof AFg1iSDK) || aFe1uSDK == AFe1uSDK.SUCCESS) {
                    return;
                }
                AFg1nSDK aFg1nSDK = new AFg1nSDK(AFa1uSDK.this.getCurrencyIso4217Code());
                AFa1uSDK aFa1uSDK = AFa1uSDK.this;
                AFe1nSDK copydefault = ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).copydefault();
                copydefault.AFAdRevenueData.execute(copydefault.new AnonymousClass3(aFg1nSDK));
                return;
            }
            AFf1uSDK aFf1uSDK = (AFf1uSDK) aFe1lSDK;
            boolean z5 = aFe1lSDK instanceof AFf1rSDK;
            if (z5 && getMediationNetwork()) {
                AFf1rSDK aFf1rSDK = (AFf1rSDK) aFe1lSDK;
                if (aFf1rSDK.AFAdRevenueData == AFe1uSDK.SUCCESS || aFf1rSDK.getMonetizationNetwork == 1) {
                    AFg1iSDK aFg1iSDK = new AFg1iSDK(aFf1rSDK, AFa1uSDK.this.getCurrencyIso4217Code().component2());
                    AFa1uSDK aFa1uSDK2 = AFa1uSDK.this;
                    AFe1nSDK copydefault2 = ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK2}, 389316487, -389316474, System.identityHashCode(aFa1uSDK2))).copydefault();
                    copydefault2.AFAdRevenueData.execute(copydefault2.new AnonymousClass3(aFg1iSDK));
                }
            }
            AFa1uSDK aFa1uSDK3 = AFa1uSDK.this;
            AFh1qSDK afLogForce = ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK3}, 389316487, -389316474, System.identityHashCode(aFa1uSDK3))).afLogForce();
            if (afLogForce != null && z5) {
                afLogForce.getMonetizationNetwork((AFf1rSDK) aFe1lSDK, new e(0, this));
            }
            if (aFe1uSDK == AFe1uSDK.SUCCESS) {
                AFa1uSDK aFa1uSDK4 = AFa1uSDK.this;
                ((AFc1oSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK4, aFa1uSDK4.component3}, -1595266545, 1595266567, System.identityHashCode(aFa1uSDK4))).AFAdRevenueData("sentSuccessfully", "true");
                if (!(aFe1lSDK instanceof AFf1pSDK) && (revenue = new AFg1tSDK(AFa1uSDK.this.component3).getRevenue()) != null && revenue.getMediationNetwork) {
                    String str = revenue.getMonetizationNetwork;
                    AFLogger.INSTANCE.d(AFg1cSDK.UNINSTALL, "Resending Uninstall token to AF servers: ".concat(String.valueOf(str)));
                    AFa1uSDK monetizationNetwork = AFa1uSDK.getMonetizationNetwork();
                    AFc1bSDK aFc1bSDK = (AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{monetizationNetwork}, 389316487, -389316474, System.identityHashCode(monetizationNetwork));
                    AFf1pSDK aFf1pSDK = new AFf1pSDK(str, aFc1bSDK);
                    AFe1nSDK copydefault3 = aFc1bSDK.copydefault();
                    copydefault3.AFAdRevenueData.execute(copydefault3.new AnonymousClass3(aFf1pSDK));
                }
                ResponseNetwork responseNetwork = ((AFe1eSDK) aFf1uSDK).component3;
                if (responseNetwork != null && (AFAdRevenueData = AFa1oSDK.AFAdRevenueData((String) responseNetwork.getBody())) != null) {
                    AFa1uSDK.this.component1 = AFAdRevenueData.optBoolean("send_background", false);
                }
                if (z5) {
                    AFa1uSDK.this.getMonetizationNetwork = System.currentTimeMillis();
                }
            }
        }

        private boolean getMediationNetwork() {
            return AFa1uSDK.this.getMediationNetwork != null;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public /* synthetic */ Unit getMonetizationNetwork() {
            AFa1uSDK.this.getCurrencyIso4217Code(new AFh1kSDK());
            return Unit.a;
        }
    }

    static {
        component3();
        getRevenue = "356";
        AFAdRevenueData = "6.17";
        getCurrencyIso4217Code = null;
        areAllFieldsValid = new AFa1uSDK();
        int i5 = f3646d + 61;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            int i6 = 48 / 0;
        }
    }

    public AFa1uSDK() {
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afErrorLog().getMediationNetwork();
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afErrorLog().getRevenue();
        AFe1nSDK copydefault = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).copydefault();
        copydefault.getMonetizationNetwork.add(new C0010AFa1uSDK());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void AFAdRevenueData(AFf1oSDK aFf1oSDK) {
        int i5 = f3646d + 61;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            AFf1oSDK aFf1oSDK2 = AFf1oSDK.SUCCESS;
            throw null;
        }
        AFc1bSDK aFc1bSDK = (AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this));
        if (aFf1oSDK == AFf1oSDK.SUCCESS) {
            int i6 = AFKeystoreWrapper + 103;
            f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0) {
                aFc1bSDK.afWarnLog().getRevenue();
                throw null;
            }
            aFc1bSDK.afWarnLog().getRevenue();
        }
        if (aFc1bSDK.equals().getCurrencyIso4217Code()) {
            aFc1bSDK.afErrorLog().getMediationNetwork();
        } else {
            f3646d = (AFKeystoreWrapper + 77) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            aFc1bSDK.afErrorLog().AFAdRevenueData();
        }
    }

    private static /* synthetic */ Object areAllFieldsValid(Object[] objArr) {
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        String[] strArr = (String[]) objArr[1];
        int i5 = f3646d + 47;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).i().AFAdRevenueData.contains(Arrays.asList(strArr));
            throw null;
        }
        List<String> asList = Arrays.asList(strArr);
        List<List<String>> list = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).i().AFAdRevenueData;
        if (!list.contains(asList)) {
            list.add(asList);
            f3646d = (AFKeystoreWrapper + 71) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        return null;
    }

    @SuppressLint({"DiscouragedApi"})
    private static void c_(Context context, PackageInfo packageInfo) {
        try {
            ApplicationInfo applicationInfo = packageInfo.applicationInfo;
            if (applicationInfo != null) {
                int i5 = AFKeystoreWrapper + 7;
                f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 == 0) {
                    int i6 = applicationInfo.flags;
                    throw null;
                }
                if ((applicationInfo.flags & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0) {
                    if (Build.VERSION.SDK_INT < 31) {
                        if (context.getResources().getIdentifier("appsflyer_backup_rules", "xml", context.getPackageName()) != 0) {
                            AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "appsflyer_backup_rules.xml detected, using AppsFlyer defined backup rules for AppsFlyer SDK data", true);
                            return;
                        } else {
                            AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "'allowBackup' is set to true; appsflyer_backup_rules.xml is NOT detected.\nAppsFlyer shared preferences should be excluded from auto backup by adding: <exclude domain=\"sharedpref\" path=\"appsflyer-data\"/> to the Application's <full-backup-content> rules.\nIf Appsflyer's Purchase Connector is in use then you also must add the following to your rules: <exclude domain=\"sharedpref\" path=\"appsflyer-purchase-data\"/> AND <exclude domain=\"database\" path=\"afpurchases.db\"/>", true);
                            return;
                        }
                    }
                    if (context.getResources().getIdentifier("appsflyer_data_extraction_rules", "xml", context.getPackageName()) == 0) {
                        AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "'allowBackup' is set to true; appsflyer_data_extraction_rules.xml is NOT detected.\nAppsFlyer shared preferences should be excluded from auto backup by adding: <exclude domain=\"sharedpref\" path=\"appsflyer-data\"/> to the Application's <data-extraction-rules> both in <device-transfer> and <cloud-backup>.\nIf Appsflyer's Purchase Connector is in use then you also must add to <device-transfer> and <cloud-backup> the following excludes: <exclude domain=\"sharedpref\" path=\"appsflyer-purchase-data\"/> AND <exclude domain=\"database\" path=\"afpurchases.db\"/>", true);
                    } else {
                        AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "appsflyer_data_extraction_rules.xml detected, using AppsFlyer data extraction rules for AppsFlyer SDK data", true);
                        AFKeystoreWrapper = (f3646d + 109) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    }
                }
            }
        } catch (Throwable th2) {
            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "Exception while checking BackupRules: ", th2);
        }
    }

    private static /* synthetic */ Object component1(Object[] objArr) {
        int i5 = 0;
        final AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        String str = (String) objArr[1];
        AppsFlyerConversionListener appsFlyerConversionListener = (AppsFlyerConversionListener) objArr[2];
        Context context = (Context) objArr[3];
        int i6 = AFKeystoreWrapper + 65;
        f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            boolean z5 = aFa1uSDK.toString;
            throw null;
        }
        if (!aFa1uSDK.toString) {
            aFa1uSDK.toString = true;
            ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).AFKeystoreWrapper().getMonetizationNetwork(str);
            if (context != null) {
                aFa1uSDK.getMediationNetwork(context);
                Application O_ = AFj1iSDK.O_(context);
                if (O_ != null) {
                    aFa1uSDK.component3 = O_;
                    final int i10 = 0;
                    ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).getMediationNetwork().execute(new Runnable(aFa1uSDK) { // from class: com.appsflyer.internal.c

                        /* renamed from: e, reason: collision with root package name */
                        public final /* synthetic */ AFa1uSDK f3669e;

                        {
                            this.f3669e = aFa1uSDK;
                        }

                        @Override // java.lang.Runnable
                        public final void run() {
                            switch (i10) {
                                case 0:
                                    this.f3669e.copy();
                                    break;
                                default:
                                    this.f3669e.equals();
                                    break;
                            }
                        }
                    });
                    AFe1nSDK copydefault = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).copydefault();
                    copydefault.AFAdRevenueData.execute(copydefault.new AnonymousClass3(new AFe1fSDK(aFa1uSDK.getCurrencyIso4217Code())));
                    ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).afWarnLog().getMediationNetwork(new AFd1xSDK.AFa1ySDK() { // from class: com.appsflyer.internal.d
                        @Override // com.appsflyer.internal.AFd1xSDK.AFa1ySDK
                        public final void onConfigurationChanged(boolean z6) {
                            AFa1uSDK.this.getMediationNetwork(z6);
                        }
                    });
                    ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).component1().getRevenue(aFa1uSDK.AFAdRevenueData());
                    AFj1rSDK AFLogger2 = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).AFLogger();
                    final int i11 = 1;
                    Runnable runnable = new Runnable(aFa1uSDK) { // from class: com.appsflyer.internal.c

                        /* renamed from: e, reason: collision with root package name */
                        public final /* synthetic */ AFa1uSDK f3669e;

                        {
                            this.f3669e = aFa1uSDK;
                        }

                        @Override // java.lang.Runnable
                        public final void run() {
                            switch (i11) {
                                case 0:
                                    this.f3669e.copy();
                                    break;
                                default:
                                    this.f3669e.equals();
                                    break;
                            }
                        }
                    };
                    AFi1bSDK monetizationNetwork = AFLogger2.getMonetizationNetwork(runnable);
                    Runnable revenue = AFLogger2.getRevenue(monetizationNetwork, runnable);
                    AFLogger2.getCurrencyIso4217Code.add(monetizationNetwork);
                    AFLogger2.getCurrencyIso4217Code.add(new AFj1mSDK(AFLogger2.getMonetizationNetwork.getCurrencyIso4217Code(), revenue));
                    AFLogger2.getCurrencyIso4217Code.add(new AFj1zSDK(revenue, AFLogger2.getMonetizationNetwork, new AFj1vSDK()));
                    AFLogger2.getCurrencyIso4217Code.add(new AFj1lSDK(revenue, AFLogger2.getMonetizationNetwork));
                    AFLogger2.getCurrencyIso4217Code.add(new AFj1uSDK(AFLogger2.getMonetizationNetwork.getMediationNetwork(), AFLogger2.getMonetizationNetwork.getCurrencyIso4217Code(), revenue));
                    AFLogger2.getMediationNetwork(revenue);
                    AFj1qSDK[] aFj1qSDKArr = (AFj1qSDK[]) AFLogger2.getCurrencyIso4217Code.toArray(new AFj1qSDK[0]);
                    int length = aFj1qSDKArr.length;
                    while (i5 < length) {
                        int i12 = AFKeystoreWrapper + 89;
                        f3646d = i12 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        if (i12 % 2 == 0) {
                            aFj1qSDKArr[i5].getCurrencyIso4217Code(AFLogger2.getMonetizationNetwork.registerClient().getRevenue);
                            i5 += 21;
                        } else {
                            aFj1qSDKArr[i5].getCurrencyIso4217Code(AFLogger2.getMonetizationNetwork.registerClient().getRevenue);
                            i5++;
                        }
                    }
                    if (!AFLogger2.getMediationNetwork()) {
                        AFLogger2.AFAdRevenueData(AFLogger2.getMonetizationNetwork.registerClient().getRevenue, revenue, AFLogger2.getMonetizationNetwork);
                        f3646d = (AFKeystoreWrapper + 47) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    }
                }
            } else {
                AFLogger.INSTANCE.w(AFg1cSDK.REFERRER, "context is null, Google Install Referrer will be not initialized");
            }
            ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).equals().getCurrencyIso4217Code("init", str, appsFlyerConversionListener == null ? "null" : "conversionDataListener");
            AFLogger.INSTANCE.force(AFg1cSDK.GENERAL, "Initializing AppsFlyer SDK: (v6.17.3." + getRevenue + ")");
            aFa1uSDK.getMediationNetwork = appsFlyerConversionListener;
            return aFa1uSDK;
        }
        return aFa1uSDK;
    }

    private static /* synthetic */ Object component2(Object[] objArr) {
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        int i5 = (f3646d + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFKeystoreWrapper = i5;
        AFc1dSDK aFc1dSDK = aFa1uSDK.hashCode;
        int i6 = i5 + 73;
        f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            int i10 = 82 / 0;
        }
        return aFc1dSDK;
    }

    private static /* synthetic */ Object component3(Object[] objArr) {
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        DeepLinkListener deepLinkListener = (DeepLinkListener) objArr[1];
        f3646d = (AFKeystoreWrapper + 59) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        aFa1uSDK.subscribeForDeepLink(deepLinkListener, TimeUnit.SECONDS.toMillis(3L));
        int i5 = AFKeystoreWrapper + 11;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return null;
        }
        throw null;
    }

    private static /* synthetic */ Object component4(Object[] objArr) {
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        int i5 = AFKeystoreWrapper + 21;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).equals().getCurrencyIso4217Code("unregisterConversionListener", new String[0]);
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).equals().getCurrencyIso4217Code("unregisterConversionListener", new String[0]);
        }
        aFa1uSDK.getMediationNetwork = null;
        int i6 = f3646d + 57;
        AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 != 0) {
            int i10 = 95 / 0;
        }
        return null;
    }

    private static /* synthetic */ Object copy(Object[] objArr) {
        String str = (String) objArr[0];
        boolean booleanValue = ((Boolean) objArr[1]).booleanValue();
        int i5 = AFKeystoreWrapper + 83;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            AppsFlyerProperties.getInstance().set(str, booleanValue);
            return null;
        }
        AppsFlyerProperties.getInstance().set(str, booleanValue);
        throw null;
    }

    private static /* synthetic */ Object copydefault(Object[] objArr) {
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        Context context = (Context) objArr[1];
        int i5 = AFKeystoreWrapper + 51;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            aFa1uSDK.getMediationNetwork(context);
            ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).component2();
            throw null;
        }
        aFa1uSDK.getMediationNetwork(context);
        AFc1oSDK component2 = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).component2();
        int i6 = AFKeystoreWrapper + 47;
        f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            int i10 = 57 / 0;
        }
        return component2;
    }

    public static SharedPreferences d_(Context context) {
        int i5 = AFKeystoreWrapper + 43;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            SharedPreferences sharedPreferences = getMonetizationNetwork().copy;
            throw null;
        }
        if (getMonetizationNetwork().copy == null) {
            StrictMode.ThreadPolicy allowThreadDiskReads = StrictMode.allowThreadDiskReads();
            try {
                getMonetizationNetwork().copy = context.getApplicationContext().getSharedPreferences("appsflyer-data", 0);
            } finally {
                StrictMode.setThreadPolicy(allowThreadDiskReads);
            }
        }
        SharedPreferences sharedPreferences2 = getMonetizationNetwork().copy;
        int i6 = AFKeystoreWrapper + 21;
        f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 != 0) {
            return sharedPreferences2;
        }
        throw null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void e_(Context context, Intent intent) {
        getRevenue(new Object[]{this, context, intent}, 253751881, -253751860, System.identityHashCode(this));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void equals() {
        getCurrencyIso4217Code(new AFh1kSDK());
        int i5 = AFKeystoreWrapper + 69;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            int i6 = 11 / 0;
        }
    }

    private static void getCurrencyIso4217Code(String str, String str2) {
        int i5 = AFKeystoreWrapper + 5;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            AppsFlyerProperties.getInstance().set(str, str2);
            throw null;
        }
        AppsFlyerProperties.getInstance().set(str, str2);
        int i6 = AFKeystoreWrapper + 105;
        f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            int i10 = 84 / 0;
        }
    }

    public static AFa1uSDK getMonetizationNetwork() {
        int i5 = (f3646d + 87) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFKeystoreWrapper = i5;
        AFa1uSDK aFa1uSDK = areAllFieldsValid;
        f3646d = (i5 + 85) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return aFa1uSDK;
    }

    public static /* synthetic */ Object getRevenue(Object[] objArr, int i5, int i6, int i10) {
        int i11 = (i6 * (-667)) + (i5 * (-1335));
        int i12 = ~i6;
        int i13 = i5 | i10;
        switch (((i12 | i13) * 668) + ((i5 | (~(i10 | i12))) * 1336) + (((~i13) | i12) * (-668)) + i11) {
            case 1:
                break;
            case 2:
                AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
                String[] strArr = (String[]) objArr[1];
                f3646d = (AFKeystoreWrapper + 89) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                aFa1uSDK.setSharingFilterForPartners(strArr);
                f3646d = (AFKeystoreWrapper + 21) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                break;
            case 3:
                boolean booleanValue = ((Boolean) objArr[1]).booleanValue();
                AFKeystoreWrapper = (f3646d + 109) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                getCurrencyIso4217Code(AppsFlyerProperties.ENABLE_TCF_DATA_COLLECTION, Boolean.toString(booleanValue));
                AFKeystoreWrapper = (f3646d + 105) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                AFa1uSDK aFa1uSDK2 = (AFa1uSDK) objArr[0];
                int intValue = ((Number) objArr[1]).intValue();
                f3646d = (AFKeystoreWrapper + 61) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                aFa1uSDK2.component2 = TimeUnit.SECONDS.toMillis(intValue);
                AFKeystoreWrapper = (f3646d + 111) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                AFa1uSDK aFa1uSDK3 = (AFa1uSDK) objArr[0];
                Context context = (Context) objArr[1];
                String str = (String) objArr[2];
                Map<String, Object> map = (Map) objArr[3];
                f3646d = (AFKeystoreWrapper + 7) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                aFa1uSDK3.logEvent(context, str, map, null);
                f3646d = (AFKeystoreWrapper + 119) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                break;
            case 11:
                break;
            case 12:
                Boolean bool = (Boolean) objArr[1];
                boolean booleanValue2 = bool.booleanValue();
                AFKeystoreWrapper = (f3646d + 111) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                AFLogger.afDebugLog("setDisableNetworkData: ".concat(String.valueOf(booleanValue2)));
                getRevenue(new Object[]{AppsFlyerProperties.DISABLE_NETWORK_DATA, bool}, -222394073, 222394090, (int) System.currentTimeMillis());
                f3646d = (AFKeystoreWrapper + 69) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                break;
            case 13:
                break;
            case 14:
                break;
            case 15:
                break;
            case 16:
                AFa1uSDK aFa1uSDK4 = (AFa1uSDK) objArr[0];
                Context context2 = (Context) objArr[1];
                URI uri = (URI) objArr[2];
                int i14 = (AFKeystoreWrapper + 37) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                f3646d = i14;
                if (uri != null) {
                    AFKeystoreWrapper = (i14 + 1) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (!uri.toString().isEmpty()) {
                        if (context2 != null) {
                            aFa1uSDK4.getMediationNetwork(context2);
                            ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK4}, 389316487, -389316474, System.identityHashCode(aFa1uSDK4))).i().g_(AFa1gSDK.getMonetizationNetwork(((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK4}, 389316487, -389316474, System.identityHashCode(aFa1uSDK4))).afErrorLogForExcManagerOnly()), Uri.parse(uri.toString()));
                            break;
                        } else {
                            AFa1rSDK i15 = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK4}, 389316487, -389316474, System.identityHashCode(aFa1uSDK4))).i();
                            StringBuilder sb2 = new StringBuilder("Context is \"");
                            sb2.append(context2);
                            sb2.append("\"");
                            i15.getMediationNetwork(sb2.toString(), DeepLinkResult.Error.NETWORK);
                            break;
                        }
                    }
                }
                AFa1rSDK i16 = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK4}, 389316487, -389316474, System.identityHashCode(aFa1uSDK4))).i();
                StringBuilder sb3 = new StringBuilder("Link is \"");
                sb3.append(uri);
                sb3.append("\"");
                i16.getMediationNetwork(sb3.toString(), DeepLinkResult.Error.NETWORK);
                break;
            case 17:
                break;
            case 18:
                AFa1uSDK aFa1uSDK5 = (AFa1uSDK) objArr[0];
                int i17 = f3646d + 47;
                AFKeystoreWrapper = i17 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                break;
            case 19:
                break;
            case 20:
                AFa1uSDK aFa1uSDK6 = (AFa1uSDK) objArr[0];
                ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK6}, 389316487, -389316474, System.identityHashCode(aFa1uSDK6))).afInfoLog().getRevenue = new AFb1uSDK((String[]) objArr[1]);
                AFKeystoreWrapper = (f3646d + 31) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                break;
            case 21:
                break;
            case 22:
                break;
            case 23:
                AFa1uSDK aFa1uSDK7 = (AFa1uSDK) objArr[0];
                Context context3 = (Context) objArr[1];
                String str2 = (String) objArr[2];
                aFa1uSDK7.getMediationNetwork(context3);
                AFg1tSDK aFg1tSDK = new AFg1tSDK(context3);
                if (str2 != null && !str2.trim().isEmpty()) {
                    AFLogger.INSTANCE.i(AFg1cSDK.UNINSTALL, "Firebase Refreshed Token = ".concat(str2));
                    AFf1aSDK revenue = aFg1tSDK.getRevenue();
                    if (revenue == null || !str2.equals(revenue.getMonetizationNetwork)) {
                        long currentTimeMillis = System.currentTimeMillis();
                        boolean z5 = revenue == null || currentTimeMillis - revenue.getCurrencyIso4217Code > TimeUnit.SECONDS.toMillis(2L);
                        AFf1aSDK aFf1aSDK = new AFf1aSDK(str2, currentTimeMillis, !z5);
                        aFg1tSDK.getMonetizationNetwork.AFAdRevenueData("afUninstallToken", aFf1aSDK.getMonetizationNetwork);
                        aFg1tSDK.getMonetizationNetwork.getRevenue("afUninstallToken_received_time", aFf1aSDK.getCurrencyIso4217Code);
                        aFg1tSDK.getMonetizationNetwork.getCurrencyIso4217Code("afUninstallToken_queued", aFf1aSDK.getMediationNetwork);
                        if (z5) {
                            AFa1uSDK monetizationNetwork = getMonetizationNetwork();
                            AFc1bSDK aFc1bSDK = (AFc1bSDK) getRevenue(new Object[]{monetizationNetwork}, 389316487, -389316474, System.identityHashCode(monetizationNetwork));
                            AFf1pSDK aFf1pSDK = new AFf1pSDK(str2, aFc1bSDK);
                            AFe1nSDK copydefault = aFc1bSDK.copydefault();
                            copydefault.AFAdRevenueData.execute(copydefault.new AnonymousClass3(aFf1pSDK));
                            break;
                        }
                    }
                } else {
                    AFLogger.INSTANCE.w(AFg1cSDK.UNINSTALL, "Firebase Token is either empty or null and was not registered.");
                    break;
                }
                break;
            case 24:
                AFa1uSDK aFa1uSDK8 = (AFa1uSDK) objArr[0];
                Context context4 = (Context) objArr[1];
                Map<String, Object> map2 = (Map) objArr[2];
                PurchaseHandler.PurchaseValidationCallback purchaseValidationCallback = (PurchaseHandler.PurchaseValidationCallback) objArr[3];
                AFKeystoreWrapper = (f3646d + 5) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                aFa1uSDK8.getMediationNetwork(context4);
                PurchaseHandler areAllFieldsValid2 = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK8}, 389316487, -389316474, System.identityHashCode(aFa1uSDK8))).areAllFieldsValid();
                if (areAllFieldsValid2.getMonetizationNetwork(map2, purchaseValidationCallback, "purchases")) {
                    AFe1bSDK aFe1bSDK = new AFe1bSDK(map2, purchaseValidationCallback, areAllFieldsValid2.AFAdRevenueData);
                    AFe1nSDK aFe1nSDK = areAllFieldsValid2.getCurrencyIso4217Code;
                    aFe1nSDK.AFAdRevenueData.execute(aFe1nSDK.new AnonymousClass3(aFe1bSDK));
                }
                AFKeystoreWrapper = (f3646d + 65) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                break;
            default:
                AFa1uSDK aFa1uSDK9 = (AFa1uSDK) objArr[0];
                boolean booleanValue3 = ((Boolean) objArr[1]).booleanValue();
                int i18 = AFKeystoreWrapper + 57;
                f3646d = i18 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i18 % 2 == 0) {
                    AFd1mSDK equals = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK9}, 389316487, -389316474, System.identityHashCode(aFa1uSDK9))).equals();
                    String[] strArr2 = new String[1];
                    strArr2[1] = String.valueOf(booleanValue3);
                    equals.getCurrencyIso4217Code("setCollectAndroidID", strArr2);
                } else {
                    ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK9}, 389316487, -389316474, System.identityHashCode(aFa1uSDK9))).equals().getCurrencyIso4217Code("setCollectAndroidID", String.valueOf(booleanValue3));
                }
                getCurrencyIso4217Code(AppsFlyerProperties.COLLECT_ANDROID_ID, Boolean.toString(booleanValue3));
                getCurrencyIso4217Code(AppsFlyerProperties.COLLECT_ANDROID_ID_FORCE_BY_USER, Boolean.toString(booleanValue3));
                break;
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0095 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0066  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static /* synthetic */ Object hashCode(Object[] objArr) {
        Uri uri;
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        boolean z5 = true;
        Context context = (Context) objArr[1];
        Intent intent = (Intent) objArr[2];
        aFa1uSDK.getMediationNetwork(context);
        AFa1rSDK i5 = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).i();
        AFc1oSDK component2 = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).component2();
        if (intent != null) {
            int i6 = AFKeystoreWrapper + 35;
            f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0) {
                "android.intent.action.VIEW".equals(intent.getAction());
                throw null;
            }
            if ("android.intent.action.VIEW".equals(intent.getAction())) {
                uri = intent.getData();
                if (uri != null) {
                    int i10 = AFKeystoreWrapper + 7;
                    f3646d = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (i10 % 2 == 0) {
                        uri.toString().isEmpty();
                        throw null;
                    }
                    if (!uri.toString().isEmpty()) {
                        AFKeystoreWrapper = (f3646d + 93) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        if (component2.getMediationNetwork("ddl_sent", false) || z5) {
                            i5.f_(AFa1gSDK.getMonetizationNetwork(i5.component1.afErrorLogForExcManagerOnly()), intent, context);
                            return null;
                        }
                        int i11 = AFKeystoreWrapper + 93;
                        f3646d = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        if (i11 % 2 == 0) {
                            i5.getMediationNetwork("No direct deep link", null);
                            int i12 = 37 / 0;
                        } else {
                            i5.getMediationNetwork("No direct deep link", null);
                        }
                        return null;
                    }
                }
                z5 = false;
                if (component2.getMediationNetwork("ddl_sent", false)) {
                }
                i5.f_(AFa1gSDK.getMonetizationNetwork(i5.component1.afErrorLogForExcManagerOnly()), intent, context);
                return null;
            }
        }
        uri = null;
        if (uri != null) {
        }
        z5 = false;
        if (component2.getMediationNetwork("ddl_sent", false)) {
        }
        i5.f_(AFa1gSDK.getMonetizationNetwork(i5.component1.afErrorLogForExcManagerOnly()), intent, context);
        return null;
    }

    private static /* synthetic */ Object toString(Object[] objArr) {
        boolean monetizationNetwork;
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        int i5 = AFKeystoreWrapper + 99;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            monetizationNetwork = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).AFKeystoreWrapper().getMonetizationNetwork();
            int i6 = 64 / 0;
        } else {
            monetizationNetwork = ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).AFKeystoreWrapper().getMonetizationNetwork();
        }
        int i10 = AFKeystoreWrapper + 107;
        f3646d = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i10 % 2 != 0) {
            return Boolean.valueOf(monetizationNetwork);
        }
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void addPushNotificationDeepLinkPath(String... strArr) {
        getRevenue(new Object[]{this, strArr}, -503631880, 503631889, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void anonymizeUser(boolean z5) {
        int i5 = f3646d + 67;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            AFd1mSDK equals = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals();
            String[] strArr = new String[1];
            strArr[1] = String.valueOf(z5);
            equals.getCurrencyIso4217Code("anonymizeUser", strArr);
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("anonymizeUser", String.valueOf(z5));
        }
        AppsFlyerProperties.getInstance().set(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, z5);
        int i6 = AFKeystoreWrapper + 87;
        f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            int i10 = 42 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void appendParametersToDeepLinkingURL(String str, Map<String, String> map) {
        int i5 = f3646d + 45;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            AFa1rSDK i6 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i();
            i6.getMonetizationNetwork = str;
            i6.getMediationNetwork = map;
            throw null;
        }
        AFa1rSDK i10 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i();
        i10.getMonetizationNetwork = str;
        i10.getMediationNetwork = map;
        f3646d = (AFKeystoreWrapper + 99) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    public final void b_(Context context, Intent intent) {
        getRevenue(new Object[]{this, context, intent}, -1666869813, 1666869820, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void disableAppSetId() {
        int i5 = AFKeystoreWrapper + 11;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) (i5 % 2 == 0 ? getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this)) : getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this)))).afInfoLog().component1 = true;
        int i6 = AFKeystoreWrapper + 33;
        f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void enableFacebookDeferredApplinks(boolean z5) {
        f3646d = (AFKeystoreWrapper + 47) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).unregisterClient().getMonetizationNetwork(z5);
        f3646d = (AFKeystoreWrapper + 73) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void enableTCFDataCollection(boolean z5) {
        getRevenue(new Object[]{this, Boolean.valueOf(z5)}, 163982159, -163982156, System.identityHashCode(this));
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0046, code lost:
    
        if (r7 == null) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x002c, code lost:
    
        if (r7 == null) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x0052, code lost:
    
        getMediationNetwork(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x006d, code lost:
    
        return com.appsflyer.internal.AFb1jSDK.getRevenue(((com.appsflyer.internal.AFc1bSDK) getRevenue(new java.lang.Object[]{r6}, 389316487, -389316474, java.lang.System.identityHashCode(r6))).getCurrencyIso4217Code().getMonetizationNetwork);
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0048, code lost:
    
        com.appsflyer.internal.AFa1uSDK.AFKeystoreWrapper = (com.appsflyer.internal.AFa1uSDK.f3646d + 115) % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0051, code lost:
    
        return null;
     */
    @Override // com.appsflyer.AppsFlyerLib
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String getAppsFlyerUID(@NonNull Context context) {
        int i5 = f3646d + 55;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("getAppsFlyerUID", new String[0]);
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("getAppsFlyerUID", new String[0]);
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final String getAttributionId(Context context) {
        int i5 = f3646d + 21;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            getMediationNetwork(context);
            return ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).getCurrencyIso4217Code().getRevenue(context);
        }
        getMediationNetwork(context);
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).getCurrencyIso4217Code().getRevenue(context);
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final String getHostName() {
        int i5 = f3646d + 59;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            return ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFInAppEventParameterName().getCurrencyIso4217Code();
        }
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFInAppEventParameterName().getCurrencyIso4217Code();
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final String getHostPrefix() {
        return (String) getRevenue(new Object[]{this}, 103305784, -103305776, System.identityHashCode(this));
    }

    public final void getMediationNetwork(@NonNull Context context) {
        int i5 = (f3646d + 37) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFKeystoreWrapper = i5;
        AFc1dSDK aFc1dSDK = this.hashCode;
        if (context != null) {
            int i6 = i5 + 25;
            f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0) {
                AFc1gSDK aFc1gSDK = aFc1dSDK.getMonetizationNetwork;
                throw null;
            }
            AFc1gSDK aFc1gSDK2 = aFc1dSDK.getMonetizationNetwork;
            int i10 = i5 + 3;
            f3646d = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i10 % 2 != 0) {
                aFc1gSDK2.getRevenue = context.getApplicationContext();
            } else {
                aFc1gSDK2.getRevenue = context.getApplicationContext();
                throw null;
            }
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final String getOutOfStore(Context context) {
        int i5 = AFKeystoreWrapper + 107;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            AppsFlyerProperties.getInstance().getString(AppsFlyerProperties.AF_STORE_FROM_API);
            throw null;
        }
        String string = AppsFlyerProperties.getInstance().getString(AppsFlyerProperties.AF_STORE_FROM_API);
        if (string != null) {
            return string;
        }
        String currencyIso4217Code = getCurrencyIso4217Code(context, "AF_STORE");
        if (currencyIso4217Code == null) {
            AFLogger.afInfoLog("No out-of-store value set");
            return null;
        }
        int i6 = AFKeystoreWrapper + 71;
        f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            int i10 = 72 / 0;
        }
        return currencyIso4217Code;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final String getSdkVersion() {
        f3646d = (AFKeystoreWrapper + 105) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("getSdkVersion", new String[0]);
        String component2 = AFc1pSDK.component2();
        int i5 = AFKeystoreWrapper + 125;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return component2;
        }
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final AppsFlyerLib init(@NonNull String str, AppsFlyerConversionListener appsFlyerConversionListener, @NonNull Context context) {
        return (AppsFlyerLib) getRevenue(new Object[]{this, str, appsFlyerConversionListener, context}, 519263238, -519263223, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final boolean isPreInstalledApp(Context context) {
        f3646d = (AFKeystoreWrapper + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        getMediationNetwork(context);
        boolean mediationNetwork = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).getCurrencyIso4217Code().getMediationNetwork(context);
        f3646d = (AFKeystoreWrapper + 15) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return mediationNetwork;
    }

    @Override // com.appsflyer.AppsFlyerLib
    @Deprecated
    public final boolean isStopped() {
        return ((Boolean) getRevenue(new Object[]{this}, 224962975, -224962956, System.identityHashCode(this))).booleanValue();
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void logAdRevenue(@NonNull AFAdRevenueData aFAdRevenueData, Map<String, Object> map) {
        if (!this.toString) {
            getMediationNetwork("logAdRevenue");
            f3646d = (AFKeystoreWrapper + 119) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return;
        }
        if (!aFAdRevenueData.areAllFieldsValid()) {
            int i5 = AFKeystoreWrapper + 9;
            f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                AFLogger.INSTANCE.w(AFg1cSDK.AD_REVENUE, "Invalid ad revenue parameters provided");
                return;
            } else {
                AFLogger.INSTANCE.w(AFg1cSDK.AD_REVENUE, "Invalid ad revenue parameters provided");
                int i6 = 32 / 0;
                return;
            }
        }
        if (!((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMonetizationNetwork()) {
            if (AFk1xSDK.getRevenue(((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMediationNetwork())) {
                copydefault();
                return;
            } else {
                getMonetizationNetwork(new AFh1nSDK(aFAdRevenueData, map));
                return;
            }
        }
        int i10 = AFKeystoreWrapper + 87;
        f3646d = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i10 % 2 != 0) {
            AFLogger.INSTANCE.w(AFg1cSDK.AD_REVENUE, "SDK is stopped");
        } else {
            AFLogger.INSTANCE.w(AFg1cSDK.AD_REVENUE, "SDK is stopped");
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void logEvent(@NonNull Context context, String str, Map<String, Object> map, AppsFlyerRequestListener appsFlyerRequestListener) {
        HashMap hashMap = map == null ? null : new HashMap(map);
        getMediationNetwork(context);
        AFh1hSDK aFh1hSDK = new AFh1hSDK();
        aFh1hSDK.component4 = str;
        aFh1hSDK.getMonetizationNetwork = appsFlyerRequestListener;
        if (hashMap != null && hashMap.containsKey(AFInAppEventParameterName.TOUCH_OBJ)) {
            HashMap hashMap2 = new HashMap();
            Object obj = hashMap.get(AFInAppEventParameterName.TOUCH_OBJ);
            if (obj instanceof MotionEvent) {
                MotionEvent motionEvent = (MotionEvent) obj;
                HashMap hashMap3 = new HashMap();
                hashMap3.put("x", Float.valueOf(motionEvent.getX()));
                hashMap3.put("y", Float.valueOf(motionEvent.getY()));
                hashMap2.put("loc", hashMap3);
                hashMap2.put("pf", Float.valueOf(motionEvent.getPressure()));
                hashMap2.put("rad", Float.valueOf(motionEvent.getTouchMajor() / 2.0f));
            } else {
                hashMap2.put("error", "Parsing failed due to invalid input in 'af_touch_obj'.");
                AFLogger.INSTANCE.w(AFg1cSDK.PREDICT, "Parsing failed due to invalid input in 'af_touch_obj'.", true);
            }
            Map<String, ?> singletonMap = Collections.singletonMap("tch_data", hashMap2);
            hashMap.remove(AFInAppEventParameterName.TOUCH_OBJ);
            aFh1hSDK.getMonetizationNetwork(singletonMap);
        }
        aFh1hSDK.AFAdRevenueData = hashMap;
        AFd1mSDK equals = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals();
        Map map2 = aFh1hSDK.AFAdRevenueData;
        if (map2 == null) {
            map2 = new HashMap();
        }
        equals.getCurrencyIso4217Code("logEvent", str, new JSONObject(map2).toString());
        if (str == null) {
            getMediationNetwork(context, AFh1xSDK.logEvent);
        }
        getMediationNetwork(aFh1hSDK, AFAdRevenueData(context));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void logLocation(Context context, double d6, double d7) {
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("logLocation", String.valueOf(d6), String.valueOf(d7));
        HashMap hashMap = new HashMap();
        hashMap.put(AFInAppEventParameterName.LONGITUDE, Double.toString(d7));
        hashMap.put(AFInAppEventParameterName.LATITUDE, Double.toString(d6));
        AFAdRevenueData(context, AFInAppEventType.LOCATION_COORDINATES, hashMap);
        int i5 = f3646d + 59;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            int i6 = 60 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void logSession(Context context) {
        f3646d = (AFKeystoreWrapper + 25) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("logSession", new String[0]);
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getMonetizationNetwork();
        getMediationNetwork(context, AFh1xSDK.logSession);
        AFAdRevenueData(context, (String) null, (Map<String, Object>) null);
        int i5 = AFKeystoreWrapper + 107;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            int i6 = 63 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void onPause(Context context) {
        int i5 = f3646d + 57;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afDebugLog().getMonetizationNetwork();
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afDebugLog().getMonetizationNetwork();
            int i6 = 92 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    @Deprecated
    public final void performOnAppAttribution(@NonNull Context context, @NonNull URI uri) {
        getRevenue(new Object[]{this, context, uri}, 1798513644, -1798513628, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void performOnDeepLinking(@NonNull Intent intent, @NonNull Context context) {
        int i5 = (AFKeystoreWrapper + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        f3646d = i5;
        if (intent == null) {
            int i6 = i5 + 71;
            AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0) {
                ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i().getMediationNetwork("performOnDeepLinking was called with null intent", DeepLinkResult.Error.DEVELOPER_ERROR);
                return;
            } else {
                ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i().getMediationNetwork("performOnDeepLinking was called with null intent", DeepLinkResult.Error.DEVELOPER_ERROR);
                throw null;
            }
        }
        if (context == null) {
            int i10 = i5 + 123;
            AFKeystoreWrapper = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i10 % 2 == 0) {
                ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i().getMediationNetwork("performOnDeepLinking was called with null context", DeepLinkResult.Error.DEVELOPER_ERROR);
                return;
            } else {
                ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i().getMediationNetwork("performOnDeepLinking was called with null context", DeepLinkResult.Error.DEVELOPER_ERROR);
                int i11 = 4 / 0;
                return;
            }
        }
        Context applicationContext = context.getApplicationContext();
        getMediationNetwork(applicationContext);
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).getMediationNetwork().execute(new androidx.fragment.app.e(this, applicationContext, intent, 4));
        int i12 = f3646d + 97;
        AFKeystoreWrapper = i12 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i12 % 2 != 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void registerConversionListener(Context context, AppsFlyerConversionListener appsFlyerConversionListener) {
        int i5 = f3646d + 111;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("registerConversionListener", new String[1]);
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("registerConversionListener", new String[0]);
        }
        getRevenue(appsFlyerConversionListener);
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x004e, code lost:
    
        if (r8 == null) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0031, code lost:
    
        if (r8 == null) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x005e, code lost:
    
        com.appsflyer.internal.AFa1uSDK.getCurrencyIso4217Code = r8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x0060, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0050, code lost:
    
        com.appsflyer.internal.AFa1uSDK.f3646d = (com.appsflyer.internal.AFa1uSDK.AFKeystoreWrapper + 9) % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        com.appsflyer.AFLogger.afDebugLog("registerValidatorListener null listener");
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x005d, code lost:
    
        return;
     */
    @Override // com.appsflyer.AppsFlyerLib
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void registerValidatorListener(Context context, AppsFlyerInAppPurchaseValidatorListener appsFlyerInAppPurchaseValidatorListener) {
        int i5 = AFKeystoreWrapper + 97;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("registerValidatorListener", new String[0]);
            AFLogger.afDebugLog("registerValidatorListener called");
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("registerValidatorListener", new String[0]);
            AFLogger.afDebugLog("registerValidatorListener called");
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void sendInAppPurchaseData(Context context, Map<String, Object> map, PurchaseHandler.PurchaseValidationCallback purchaseValidationCallback) {
        getRevenue(new Object[]{this, context, map, purchaseValidationCallback}, 788315212, -788315188, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void sendPurchaseData(Context context, Map<String, Object> map, PurchaseHandler.PurchaseValidationCallback purchaseValidationCallback) {
        AFKeystoreWrapper = (f3646d + 65) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        getMediationNetwork(context);
        PurchaseHandler areAllFieldsValid2 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).areAllFieldsValid();
        if (areAllFieldsValid2.getMonetizationNetwork(map, purchaseValidationCallback, "subscriptions")) {
            AFe1jSDK aFe1jSDK = new AFe1jSDK(map, purchaseValidationCallback, areAllFieldsValid2.AFAdRevenueData);
            AFe1nSDK aFe1nSDK = areAllFieldsValid2.getCurrencyIso4217Code;
            aFe1nSDK.AFAdRevenueData.execute(aFe1nSDK.new AnonymousClass3(aFe1jSDK));
            f3646d = (AFKeystoreWrapper + 91) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:4:0x001e, code lost:
    
        if (r19 != null) goto L8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x0087, code lost:
    
        ((com.appsflyer.internal.AFc1bSDK) getRevenue(new java.lang.Object[]{r18}, 389316487, -389316474, java.lang.System.identityHashCode(r18))).equals().getCurrencyIso4217Code("sendPushNotificationData", "activity_null");
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x0065, code lost:
    
        if (r19 == null) goto L13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0027, code lost:
    
        if (r19.getIntent() == null) goto L11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0029, code lost:
    
        r3 = ((com.appsflyer.internal.AFc1bSDK) getRevenue(new java.lang.Object[]{r18}, 389316487, -389316474, java.lang.System.identityHashCode(r18))).equals();
        r8 = r19.getLocalClassName();
        r9 = new java.lang.StringBuilder("activity_intent_");
        r9.append(r19.getIntent().toString());
        r3.getCurrencyIso4217Code("sendPushNotificationData", r8, r9.toString());
        com.appsflyer.internal.AFa1uSDK.f3646d = (com.appsflyer.internal.AFa1uSDK.AFKeystoreWrapper + 85) % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x0021, code lost:
    
        if (r19 != null) goto L8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x0067, code lost:
    
        ((com.appsflyer.internal.AFc1bSDK) getRevenue(new java.lang.Object[]{r18}, 389316487, -389316474, java.lang.System.identityHashCode(r18))).equals().getCurrencyIso4217Code("sendPushNotificationData", r19.getLocalClassName(), "activity_intent_null");
     */
    /* JADX WARN: Removed duplicated region for block: B:14:0x01af  */
    @Override // com.appsflyer.AppsFlyerLib
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void sendPushNotificationData(Activity activity) {
        long j;
        long j5;
        int i5 = f3646d + 91;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            int i6 = 72 / 0;
        }
        AFc1eSDK afInfoLog = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afInfoLog();
        String currencyIso4217Code = getCurrencyIso4217Code(activity);
        afInfoLog.getMediationNetwork = currencyIso4217Code;
        if (currencyIso4217Code != null) {
            long currentTimeMillis = System.currentTimeMillis();
            if (this.copydefault == null) {
                AFLogger.afInfoLog("pushes: initializing pushes history..");
                this.copydefault = new ConcurrentHashMap();
                j5 = currentTimeMillis;
                j = j5;
            } else {
                try {
                    long j7 = AppsFlyerProperties.getInstance().getLong("pushPayloadMaxAging", 1800000L);
                    AFKeystoreWrapper = (f3646d + 79) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    j5 = currentTimeMillis;
                    for (Long l6 : this.copydefault.keySet()) {
                        try {
                            JSONObject jSONObject = new JSONObject(afInfoLog.getMediationNetwork);
                            JSONObject jSONObject2 = new JSONObject(this.copydefault.get(l6));
                            j = currentTimeMillis;
                            try {
                                if (jSONObject.opt("pid").equals(jSONObject2.opt("pid")) && jSONObject.opt("c").equals(jSONObject2.opt("c"))) {
                                    StringBuilder sb2 = new StringBuilder("PushNotificationMeasurement: A previous payload with same PID and campaign was already acknowledged! (old: ");
                                    sb2.append(jSONObject2);
                                    sb2.append(", new: ");
                                    sb2.append(jSONObject);
                                    sb2.append(")");
                                    AFLogger.afInfoLog(sb2.toString());
                                    afInfoLog.getMediationNetwork = null;
                                    return;
                                }
                                if (j - l6.longValue() > j7) {
                                    AFKeystoreWrapper = (f3646d + 63) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                    this.copydefault.remove(l6);
                                }
                                if (l6.longValue() <= j5) {
                                    j5 = l6.longValue();
                                }
                                currentTimeMillis = j;
                            } catch (Throwable th2) {
                                th = th2;
                                AFLogger.afErrorLog("Error while handling push notification measurement: ".concat(th.getClass().getSimpleName()), th);
                                if (this.copydefault.size() == AppsFlyerProperties.getInstance().getInt("pushPayloadHistorySize", 2)) {
                                }
                                this.copydefault.put(Long.valueOf(j), afInfoLog.getMediationNetwork);
                                start(activity);
                            }
                        } catch (Throwable th3) {
                            th = th3;
                            j = currentTimeMillis;
                        }
                    }
                    j = currentTimeMillis;
                } catch (Throwable th4) {
                    th = th4;
                    j = currentTimeMillis;
                    j5 = j;
                }
            }
            if (this.copydefault.size() == AppsFlyerProperties.getInstance().getInt("pushPayloadHistorySize", 2)) {
                StringBuilder sb3 = new StringBuilder("pushes: removing oldest overflowing push (oldest push:");
                sb3.append(j5);
                sb3.append(")");
                AFLogger.afInfoLog(sb3.toString());
                this.copydefault.remove(Long.valueOf(j5));
            }
            this.copydefault.put(Long.valueOf(j), afInfoLog.getMediationNetwork);
            start(activity);
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setAdditionalData(Map<String, Object> map) {
        AFKeystoreWrapper = (f3646d + 23) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (map != null) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setAdditionalData", map.toString());
            AppsFlyerProperties.getInstance().setCustomData(new JSONObject(map).toString());
        }
        f3646d = (AFKeystoreWrapper + 9) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setAndroidIdData(String str) {
        f3646d = (AFKeystoreWrapper + 25) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setAndroidIdData", str);
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afInfoLog().AFAdRevenueData = str;
        AFKeystoreWrapper = (f3646d + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setAppId(String str) {
        int i5 = AFKeystoreWrapper + 111;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            AFd1mSDK equals = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals();
            String[] strArr = new String[0];
            strArr[0] = str;
            equals.getCurrencyIso4217Code("setAppId", strArr);
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setAppId", str);
        }
        getCurrencyIso4217Code(AppsFlyerProperties.APP_ID, str);
        AFKeystoreWrapper = (f3646d + 89) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setAppInviteOneLink(String str) {
        AFKeystoreWrapper = (f3646d + 89) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setAppInviteOneLink", str);
        AFLogger.afInfoLog("setAppInviteOneLink = ".concat(String.valueOf(str)));
        if (str == null || !str.equals(AppsFlyerProperties.getInstance().getString(AppsFlyerProperties.ONELINK_ID))) {
            AppsFlyerProperties.getInstance().remove(AppsFlyerProperties.ONELINK_DOMAIN);
            AppsFlyerProperties.getInstance().remove(AppsFlyerProperties.ONELINK_VERSION);
            AppsFlyerProperties.getInstance().remove(AppsFlyerProperties.ONELINK_SCHEME);
        }
        getCurrencyIso4217Code(AppsFlyerProperties.ONELINK_ID, str);
        AFKeystoreWrapper = (f3646d + 91) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setCollectAndroidID(boolean z5) {
        getRevenue(new Object[]{this, Boolean.valueOf(z5)}, 454542992, -454542992, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setCollectIMEI(boolean z5) {
        f3646d = (AFKeystoreWrapper + 111) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setCollectIMEI", String.valueOf(z5));
        getCurrencyIso4217Code(AppsFlyerProperties.COLLECT_IMEI, Boolean.toString(z5));
        getCurrencyIso4217Code(AppsFlyerProperties.COLLECT_IMEI_FORCE_BY_USER, Boolean.toString(z5));
        AFKeystoreWrapper = (f3646d + 115) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    @Deprecated
    public final void setCollectOaid(boolean z5) {
        AFKeystoreWrapper = (f3646d + 43) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setCollectOaid", String.valueOf(z5));
        getCurrencyIso4217Code(AppsFlyerProperties.COLLECT_OAID, Boolean.toString(z5));
        f3646d = (AFKeystoreWrapper + 55) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setConsentData(@NonNull AppsFlyerConsent appsFlyerConsent) {
        f3646d = (AFKeystoreWrapper + 117) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Objects.requireNonNull(appsFlyerConsent);
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afInfoLog().areAllFieldsValid = appsFlyerConsent;
        f3646d = (AFKeystoreWrapper + 63) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setCurrencyCode(String str) {
        f3646d = (AFKeystoreWrapper + 117) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setCurrencyCode", str);
        AppsFlyerProperties.getInstance().set(AppsFlyerProperties.CURRENCY_CODE, str);
        AFKeystoreWrapper = (f3646d + 15) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setCustomerIdAndLogSession(String str, @NonNull Context context) {
        if (context != null) {
            int i5 = f3646d + 101;
            AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                getRevenue();
                throw null;
            }
            if (!getRevenue()) {
                setCustomerUserId(str);
                AFLogger.afInfoLog("waitForCustomerUserId is false; setting CustomerUserID: ".concat(String.valueOf(str)), true);
                f3646d = (AFKeystoreWrapper + 51) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                return;
            }
            setCustomerUserId(str);
            StringBuilder sb2 = new StringBuilder("CustomerUserId set: ");
            sb2.append(str);
            sb2.append(" - Initializing AppsFlyer Tacking");
            AFLogger.afInfoLog(sb2.toString(), true);
            String referrer = AppsFlyerProperties.getInstance().getReferrer(((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).component2());
            getMediationNetwork(context, AFh1xSDK.setCustomerIdAndLogSession);
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMediationNetwork();
            if (referrer == null) {
                referrer = "";
            }
            if (context instanceof Activity) {
                int i6 = f3646d + 113;
                AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i6 % 2 != 0) {
                    ((Activity) context).getIntent();
                    int i10 = 4 / 0;
                } else {
                    ((Activity) context).getIntent();
                }
            }
            getRevenue(context, referrer);
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setCustomerUserId(String str) {
        f3646d = (AFKeystoreWrapper + 25) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setCustomerUserId", str);
        AFLogger.afInfoLog("setCustomerUserId = ".concat(String.valueOf(str)));
        getCurrencyIso4217Code(AppsFlyerProperties.APP_USER_ID, str);
        getRevenue(new Object[]{AppsFlyerProperties.AF_WAITFOR_CUSTOMERID, Boolean.FALSE}, -222394073, 222394090, (int) System.currentTimeMillis());
        f3646d = (AFKeystoreWrapper + 5) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setDebugLog(boolean z5) {
        AFKeystoreWrapper = (f3646d + 65) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        setLogLevel(z5 ? AFLogger.LogLevel.DEBUG : AFLogger.LogLevel.NONE);
        f3646d = (AFKeystoreWrapper + 3) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x002d, code lost:
    
        r1 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x002b, code lost:
    
        if (r5 == false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x001d, code lost:
    
        if (r5 == false) goto L9;
     */
    @Override // com.appsflyer.AppsFlyerLib
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void setDisableAdvertisingIdentifiers(boolean z5) {
        int i5 = AFKeystoreWrapper + 39;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        boolean z6 = false;
        if (i5 % 2 == 0) {
            AFLogger.afDebugLog("setDisableAdvertisingIdentifiers: ".concat(String.valueOf(z5)));
            int i6 = 82 / 0;
        } else {
            AFLogger.afDebugLog("setDisableAdvertisingIdentifiers: ".concat(String.valueOf(z5)));
        }
        AFb1kSDK.getMediationNetwork = Boolean.valueOf(z6);
        AFc1bSDK aFc1bSDK = (AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this));
        aFc1bSDK.afInfoLog().component3 = z5;
        if (!z5) {
            AFe1nSDK copydefault = aFc1bSDK.copydefault();
            copydefault.AFAdRevenueData.execute(copydefault.new AnonymousClass3(new AFe1fSDK(getCurrencyIso4217Code())));
            return;
        }
        int i10 = f3646d + 109;
        AFKeystoreWrapper = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i10 % 2 != 0) {
            aFc1bSDK.afInfoLog().component2 = null;
            throw null;
        }
        aFc1bSDK.afInfoLog().component2 = null;
        int i11 = f3646d + 7;
        AFKeystoreWrapper = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i11 % 2 != 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setDisableNetworkData(boolean z5) {
        getRevenue(new Object[]{this, Boolean.valueOf(z5)}, 775079759, -775079747, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setExtension(String str) {
        AFKeystoreWrapper = (f3646d + 9) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setExtension", str);
        AppsFlyerProperties.getInstance().set(AppsFlyerProperties.EXTENSION, str);
        int i5 = AFKeystoreWrapper + 23;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            int i6 = 59 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setHost(String str, @NonNull String str2) {
        String str3;
        if (AFk1xSDK.getMonetizationNetwork(str2)) {
            AFLogger.afWarnLog("hostname was empty or null - call for setHost is skipped");
            return;
        }
        int i5 = f3646d;
        AFKeystoreWrapper = (i5 + 5) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (str != null) {
            AFKeystoreWrapper = (i5 + 67) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            str3 = str.trim();
        } else {
            str3 = "";
        }
        AFe1ySDK.getMediationNetwork(new AFe1wSDK(str3, str2.trim()));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setImeiData(String str) {
        Object revenue;
        int i5 = f3646d + 37;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setImeiData", str);
            revenue = getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this));
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setImeiData", str);
            revenue = getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this));
        }
        ((AFc1bSDK) revenue).AFKeystoreWrapper().getCurrencyIso4217Code(str);
        int i6 = AFKeystoreWrapper + 61;
        f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            throw null;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0089, code lost:
    
        if (r7 != null) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x008b, code lost:
    
        r7 = com.appsflyer.internal.AFa1uSDK.AFKeystoreWrapper + 83;
        com.appsflyer.internal.AFa1uSDK.f3646d = r7 % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x0097, code lost:
    
        if ((r7 % 2) == 0) goto L22;
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x0099, code lost:
    
        com.appsflyer.AFLogger.INSTANCE.d(com.appsflyer.internal.AFg1cSDK.GENERAL, "AppsFlyer installId can't be null");
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x00a0, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x00a1, code lost:
    
        com.appsflyer.AFLogger.INSTANCE.d(com.appsflyer.internal.AFg1cSDK.GENERAL, "AppsFlyer installId can't be null");
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x00a9, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x00aa, code lost:
    
        com.appsflyer.internal.AFb1jSDK.getCurrencyIso4217Code(r7, ((com.appsflyer.internal.AFc1bSDK) getRevenue(new java.lang.Object[]{r6}, 389316487, -389316474, java.lang.System.identityHashCode(r6))).component2());
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x00bf, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x004c, code lost:
    
        com.appsflyer.AFLogger.INSTANCE.d(com.appsflyer.internal.AFg1cSDK.GENERAL, "AppsFlyerLib.init() method should be called first");
        r7 = com.appsflyer.internal.AFa1uSDK.f3646d + 57;
        com.appsflyer.internal.AFa1uSDK.AFKeystoreWrapper = r7 % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x005f, code lost:
    
        if ((r7 % 2) == 0) goto L26;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x0061, code lost:
    
        r7 = 52 / 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x0064, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:?, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x004a, code lost:
    
        if (r6.toString == false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x002e, code lost:
    
        if (r6.toString == false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x007d, code lost:
    
        if (((com.appsflyer.internal.AFc1bSDK) getRevenue(new java.lang.Object[]{r6}, 389316487, -389316474, java.lang.System.identityHashCode(r6))).getCurrencyIso4217Code().getRevenue("APPSFLYER_ALLOW_CUSTOM_INSTALL_ID") != false) goto L17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:7:0x007f, code lost:
    
        com.appsflyer.AFLogger.INSTANCE.d(com.appsflyer.internal.AFg1cSDK.GENERAL, "APPSFLYER_ALLOW_CUSTOM_INSTALL_ID Manifest flag should be set to true first");
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0088, code lost:
    
        return;
     */
    @Override // com.appsflyer.AppsFlyerLib
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void setInstallId(@NonNull String str) {
        int i5 = AFKeystoreWrapper + 95;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setInstallId", new String[0]);
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setInstallId", new String[0]);
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setIsUpdate(boolean z5) {
        int i5 = f3646d + 55;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setIsUpdate", String.valueOf(z5));
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setIsUpdate", String.valueOf(z5));
        }
        AppsFlyerProperties.getInstance().set(AppsFlyerProperties.IS_UPDATE, z5);
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setLogLevel(@NonNull AFLogger.LogLevel logLevel) {
        boolean z5;
        if (logLevel.getLevel() > AFLogger.LogLevel.NONE.getLevel()) {
            AFKeystoreWrapper = (f3646d + 125) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            z5 = true;
        } else {
            AFKeystoreWrapper = (f3646d + 43) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            z5 = false;
        }
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("log", String.valueOf(z5));
        AppsFlyerProperties.getInstance().set("logLevel", logLevel.getLevel());
        if (z5) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afErrorLog().areAllFieldsValid();
            return;
        }
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afErrorLog().getRevenue();
        int i5 = AFKeystoreWrapper + 11;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setMinTimeBetweenSessions(int i5) {
        getRevenue(new Object[]{this, Integer.valueOf(i5)}, 1308989660, -1308989654, i5);
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setOaidData(String str) {
        f3646d = (AFKeystoreWrapper + 3) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setOaidData", str);
        AFb1kSDK.getRevenue = str;
        int i5 = AFKeystoreWrapper + 3;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setOneLinkCustomDomain(String... strArr) {
        Object revenue;
        int i5 = f3646d + 91;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            AFLogger.afDebugLog("setOneLinkCustomDomain " + Arrays.toString(strArr));
            revenue = getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this));
        } else {
            AFLogger.afDebugLog("setOneLinkCustomDomain " + Arrays.toString(strArr));
            revenue = getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this));
        }
        ((AFc1bSDK) revenue).i().areAllFieldsValid = strArr;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setOutOfStore(String str) {
        int i5 = f3646d;
        AFKeystoreWrapper = (i5 + 75) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (str == null) {
            AFLogger.afWarnLog("Cannot set setOutOfStore with null", true);
            return;
        }
        int i6 = i5 + 1;
        AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 != 0) {
            String lowerCase = str.toLowerCase(Locale.getDefault());
            AppsFlyerProperties.getInstance().set(AppsFlyerProperties.AF_STORE_FROM_API, lowerCase);
            AFLogger.afInfoLog("Store API set with value: ".concat(String.valueOf(lowerCase)), true);
        } else {
            String lowerCase2 = str.toLowerCase(Locale.getDefault());
            AppsFlyerProperties.getInstance().set(AppsFlyerProperties.AF_STORE_FROM_API, lowerCase2);
            AFLogger.afInfoLog("Store API set with value: ".concat(String.valueOf(lowerCase2)), true);
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setPartnerData(@NonNull String str, Map<String, Object> map) {
        f3646d = (AFKeystoreWrapper + 9) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFc1eSDK afInfoLog = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afInfoLog();
        if (afInfoLog.getCurrencyIso4217Code == null) {
            afInfoLog.getCurrencyIso4217Code = new AFb1rSDK();
        }
        AFb1rSDK aFb1rSDK = afInfoLog.getCurrencyIso4217Code;
        if (str != null) {
            AFKeystoreWrapper = (f3646d + 53) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (!str.isEmpty()) {
                if (map != null) {
                    int i5 = f3646d + 5;
                    AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (i5 % 2 != 0) {
                        map.isEmpty();
                        throw null;
                    }
                    if (!map.isEmpty()) {
                        StringBuilder sb2 = new StringBuilder("Setting partner data for ");
                        sb2.append(str);
                        sb2.append(": ");
                        sb2.append(map);
                        AFLogger.afDebugLog(sb2.toString());
                        int length = new JSONObject(map).toString().length();
                        if (length <= 1000) {
                            aFb1rSDK.getRevenue.put(str, map);
                            aFb1rSDK.getCurrencyIso4217Code.remove(str);
                            return;
                        } else {
                            AFLogger.afWarnLog("Partner data 1000 characters limit exceeded");
                            HashMap hashMap = new HashMap();
                            hashMap.put("error", "limit exceeded: ".concat(String.valueOf(length)));
                            aFb1rSDK.getCurrencyIso4217Code.put(str, hashMap);
                            return;
                        }
                    }
                }
                AFLogger.afWarnLog(aFb1rSDK.getRevenue.remove(str) == null ? "Partner data is missing or `null`" : "Cleared partner data for ".concat(str));
                int i6 = f3646d + 65;
                AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i6 % 2 != 0) {
                    throw null;
                }
                return;
            }
        }
        AFLogger.afWarnLog("Partner ID is missing or `null`");
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setPhoneNumber(String str) {
        int i5 = AFKeystoreWrapper + 23;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afInfoLog().getMonetizationNetwork = AFj1bSDK.getCurrencyIso4217Code(str);
            throw null;
        }
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afInfoLog().getMonetizationNetwork = AFj1bSDK.getCurrencyIso4217Code(str);
        f3646d = (AFKeystoreWrapper + 5) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setPluginInfo(@NonNull PluginInfo pluginInfo) {
        getRevenue(new Object[]{this, pluginInfo}, 1343916491, -1343916486, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setPreinstallAttribution(String str, String str2, String str3) {
        AFLogger.afDebugLog("setPreinstallAttribution API called");
        JSONObject jSONObject = new JSONObject();
        try {
            if (str != null) {
                int i5 = f3646d + 73;
                AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 != 0) {
                    jSONObject.put("pid", str);
                    int i6 = 48 / 0;
                } else {
                    jSONObject.put("pid", str);
                }
            }
            if (str2 != null) {
                jSONObject.put("c", str2);
                AFKeystoreWrapper = (f3646d + 69) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
            if (str3 != null) {
                jSONObject.put("af_siteid", str3);
            }
        } catch (JSONException e9) {
            AFLogger.afErrorLog(e9.getMessage(), e9);
        }
        if (!jSONObject.has("pid")) {
            AFLogger.afWarnLog("Cannot set preinstall attribution data without a media source");
        } else {
            AFKeystoreWrapper = (f3646d + 77) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            getCurrencyIso4217Code("preInstallName", jSONObject.toString());
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setResolveDeepLinkURLs(String... strArr) {
        AFKeystoreWrapper = (f3646d + 51) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFLogger.afDebugLog("setResolveDeepLinkURLs " + Arrays.toString(strArr));
        AFa1rSDK i5 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i();
        i5.component4.clear();
        i5.component4.addAll(Arrays.asList(strArr));
        f3646d = (AFKeystoreWrapper + 37) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    @Deprecated
    public final void setSharingFilter(@NonNull String... strArr) {
        getRevenue(new Object[]{this, strArr}, -134062068, 134062070, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    @Deprecated
    public final void setSharingFilterForAllPartners() {
        AFKeystoreWrapper = (f3646d + 113) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        setSharingFilterForPartners("all");
        int i5 = AFKeystoreWrapper + 57;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setSharingFilterForPartners(String... strArr) {
        getRevenue(new Object[]{this, strArr}, -251208297, 251208317, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setUserEmails(String... strArr) {
        int i5 = f3646d + 89;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setUserEmails", strArr);
            setUserEmails(AppsFlyerProperties.EmailsCryptType.NONE, strArr);
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setUserEmails", strArr);
            setUserEmails(AppsFlyerProperties.EmailsCryptType.NONE, strArr);
            int i6 = 48 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void start(@NonNull Context context) {
        int i5 = f3646d + 27;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            start(context, null);
            throw null;
        }
        start(context, null);
        AFKeystoreWrapper = (f3646d + 61) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void stop(boolean z5, Context context) {
        AFc1oSDK component2;
        boolean z6;
        f3646d = (AFKeystoreWrapper + 63) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        getMediationNetwork(context);
        AFc1bSDK aFc1bSDK = (AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this));
        aFc1bSDK.AFKeystoreWrapper().getRevenue(z5);
        aFc1bSDK.getMediationNetwork().submit(new g(1, aFc1bSDK));
        if (z5) {
            int i5 = AFKeystoreWrapper + 31;
            f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                component2 = aFc1bSDK.component2();
                z6 = false;
            } else {
                component2 = aFc1bSDK.component2();
                z6 = true;
            }
            component2.getCurrencyIso4217Code("is_stop_tracking_used", z6);
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void subscribeForDeepLink(@NonNull DeepLinkListener deepLinkListener, long j) {
        int i5 = AFKeystoreWrapper + 61;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i().getRevenue = deepLinkListener;
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i().component2 = j;
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i().getRevenue = deepLinkListener;
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).i().component2 = j;
            int i6 = 45 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void unregisterConversionListener() {
        getRevenue(new Object[]{this}, 1122585742, -1122585731, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void updateServerUninstallToken(Context context, String str) {
        getRevenue(new Object[]{this, context, str}, 912251885, -912251862, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void validateAndLogInAppPurchase(Context context, String str, String str2, String str3, String str4, String str5, Map<String, String> map) {
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("validateAndTrackInAppPurchase", str, str2, str3, str4, str5, map == null ? "" : map.toString());
        if (!((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMonetizationNetwork()) {
            AFLogger aFLogger = AFLogger.INSTANCE;
            AFg1cSDK aFg1cSDK = AFg1cSDK.PURCHASE_VALIDATION;
            StringBuilder t5 = a3.e.t("Validate in app called with parameters: ", str3, " ", str4, " ");
            t5.append(str5);
            aFLogger.i(aFg1cSDK, t5.toString());
        }
        if (str != null && str4 != null) {
            int i5 = AFKeystoreWrapper;
            f3646d = (i5 + 55) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (str2 != null) {
                int i6 = i5 + 105;
                int i10 = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                f3646d = i10;
                if (i6 % 2 == 0) {
                    throw null;
                }
                if (str5 != null) {
                    AFKeystoreWrapper = (i10 + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (str3 != null) {
                        new Thread(new AFa1vSDK(context.getApplicationContext(), getCurrencyIso4217Code().AFKeystoreWrapper().getMediationNetwork(), str, str2, str3, str4, str5, map)).start();
                        return;
                    }
                }
            }
        }
        AppsFlyerInAppPurchaseValidatorListener appsFlyerInAppPurchaseValidatorListener = getCurrencyIso4217Code;
        if (appsFlyerInAppPurchaseValidatorListener != null) {
            appsFlyerInAppPurchaseValidatorListener.onValidateInAppFailure("Please provide purchase parameters");
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void waitForCustomerUserId(boolean z5) {
        AFKeystoreWrapper = (f3646d + 43) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFLogger.afInfoLog("initAfterCustomerUserID: ".concat(String.valueOf(z5)), true);
        getRevenue(new Object[]{AppsFlyerProperties.AF_WAITFOR_CUSTOMERID, Boolean.valueOf(z5)}, -222394073, 222394090, (int) System.currentTimeMillis());
        f3646d = (AFKeystoreWrapper + 107) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x007f  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:25:0x0070 -> B:22:0x0060). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void a(String str, String str2, int[] iArr, int i5, Object[] objArr) {
        char[] cArr;
        int i6;
        int i10;
        byte[] bArr = str2;
        if (str2 != null) {
            bArr = str2.getBytes("ISO-8859-1");
        }
        byte[] bArr2 = bArr;
        char[] cArr2 = str;
        if (str != null) {
            int i11 = $10 + 117;
            $11 = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i11 % 2 == 0) {
                str.toCharArray();
                throw null;
            }
            cArr2 = str.toCharArray();
        }
        char[] cArr3 = cArr2;
        AFk1iSDK aFk1iSDK = new AFk1iSDK();
        char[] cArr4 = AFInAppEventParameterName;
        if (cArr4 != null) {
            int length = cArr4.length;
            char[] cArr5 = new char[length];
            for (int i12 = 0; i12 < length; i12++) {
                cArr5[i12] = (char) (cArr4[i12] ^ 1825820251896122634L);
            }
            cArr4 = cArr5;
        }
        int i13 = (int) (1825820251896122634L ^ AFInAppEventType);
        if (AFLogger) {
            int i14 = $11 + 21;
            $10 = i14 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i14 % 2 != 0) {
                int length2 = bArr2.length;
                aFk1iSDK.getCurrencyIso4217Code = length2;
                cArr = new char[length2];
                int i15 = 1;
                aFk1iSDK.getMediationNetwork = i15;
                i6 = aFk1iSDK.getMediationNetwork;
                i10 = aFk1iSDK.getCurrencyIso4217Code;
                if (i6 < i10) {
                    cArr[i6] = (char) (cArr4[bArr2[(i10 - 1) - i6] + i5] - i13);
                    i15 = i6 + 1;
                    aFk1iSDK.getMediationNetwork = i15;
                    i6 = aFk1iSDK.getMediationNetwork;
                    i10 = aFk1iSDK.getCurrencyIso4217Code;
                    if (i6 < i10) {
                        objArr[0] = new String(cArr);
                    }
                }
            } else {
                int length3 = bArr2.length;
                aFk1iSDK.getCurrencyIso4217Code = length3;
                cArr = new char[length3];
                aFk1iSDK.getMediationNetwork = 0;
                i6 = aFk1iSDK.getMediationNetwork;
                i10 = aFk1iSDK.getCurrencyIso4217Code;
                if (i6 < i10) {
                }
            }
        } else if (registerClient) {
            int length4 = cArr3.length;
            aFk1iSDK.getCurrencyIso4217Code = length4;
            char[] cArr6 = new char[length4];
            aFk1iSDK.getMediationNetwork = 0;
            $11 = ($10 + 121) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            while (true) {
                int i16 = aFk1iSDK.getMediationNetwork;
                int i17 = aFk1iSDK.getCurrencyIso4217Code;
                if (i16 >= i17) {
                    objArr[0] = new String(cArr6);
                    return;
                }
                int i18 = $10;
                $11 = (i18 + 115) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                cArr6[i16] = (char) (cArr4[cArr3[(i17 - 1) - i16] - i5] - i13);
                aFk1iSDK.getMediationNetwork = i16 + 1;
                $11 = (i18 + 115) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
        } else {
            int length5 = iArr.length;
            aFk1iSDK.getCurrencyIso4217Code = length5;
            char[] cArr7 = new char[length5];
            aFk1iSDK.getMediationNetwork = 0;
            while (true) {
                int i19 = aFk1iSDK.getMediationNetwork;
                int i20 = aFk1iSDK.getCurrencyIso4217Code;
                if (i19 >= i20) {
                    objArr[0] = new String(cArr7);
                    return;
                } else {
                    cArr7[i19] = (char) (cArr4[iArr[(i20 - 1) - i19] - i5] - i13);
                    aFk1iSDK.getMediationNetwork = i19 + 1;
                }
            }
        }
    }

    private void component2() {
        f3646d = (AFKeystoreWrapper + 77) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        try {
            final AFi1jSDK v5 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).v();
            if (v5 == null) {
                return;
            }
            if (v5.getMonetizationNetwork()) {
                AFKeystoreWrapper = (f3646d + 9) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                v5.getMonetizationNetwork(new AFi1eSDK() { // from class: com.appsflyer.internal.a
                    @Override // com.appsflyer.internal.AFi1eSDK
                    public final void onRequestFinished() {
                        AFa1uSDK.this.getMediationNetwork(v5);
                    }
                });
            } else {
                if (v5.getMediationNetwork()) {
                    return;
                }
                getMonetizationNetwork(v5);
            }
        } catch (Throwable th2) {
            AFLogger.afErrorLogForExcManagerOnly("Error at attempt to request PIA token", th2);
            AFLogger.afRDLog("Get PIA token failed with exception:".concat(String.valueOf(th2)));
        }
    }

    public final void getMonetizationNetwork(Context context, String str) {
        JSONArray jSONArray;
        JSONObject jSONObject;
        AFLogger.afDebugLog("received a new (extra) referrer: ".concat(String.valueOf(str)));
        try {
            long currentTimeMillis = System.currentTimeMillis();
            String monetizationNetwork = ((AFc1oSDK) getRevenue(new Object[]{this, context}, -1595266545, 1595266567, System.identityHashCode(this))).getMonetizationNetwork("extraReferrers", null);
            if (monetizationNetwork == null) {
                jSONObject = new JSONObject();
                jSONArray = new JSONArray();
            } else {
                JSONObject jSONObject2 = new JSONObject(monetizationNetwork);
                jSONArray = jSONObject2.has(str) ? new JSONArray((String) jSONObject2.get(str)) : new JSONArray();
                jSONObject = jSONObject2;
            }
            if (jSONArray.length() < 5) {
                f3646d = (AFKeystoreWrapper + 21) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                jSONArray.put(currentTimeMillis);
                AFKeystoreWrapper = (f3646d + 57) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
            if (jSONObject.length() >= 4) {
                int i5 = AFKeystoreWrapper + 117;
                f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 == 0) {
                    AFAdRevenueData(jSONObject);
                    int i6 = 14 / 0;
                } else {
                    AFAdRevenueData(jSONObject);
                }
            }
            jSONObject.put(str, jSONArray.toString());
            ((AFc1oSDK) getRevenue(new Object[]{this, context}, -1595266545, 1595266567, System.identityHashCode(this))).AFAdRevenueData("extraReferrers", jSONObject.toString());
        } catch (JSONException e9) {
            AFLogger.afErrorLogForExcManagerOnly("error at addReferrer", e9);
        } catch (Throwable th2) {
            StringBuilder sb2 = new StringBuilder("Couldn't save referrer - ");
            sb2.append(str);
            sb2.append(": ");
            AFLogger.afErrorLog(sb2.toString(), th2);
        }
    }

    public static void component3() {
        AFInAppEventParameterName = new char[]{35848, 35853, 35850, 35871, 35840, 35844, 35852, 35870, 35867};
        AFInAppEventType = 1912311211;
        registerClient = true;
        AFLogger = true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void copy() {
        AFi1pSDK aFi1qSDK;
        int i5 = AFKeystoreWrapper + 125;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            if (((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afRDLog().getMonetizationNetwork()) {
                ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afRDLog().getRevenue();
            }
            AFi1sSDK w5 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).w();
            if (Build.VERSION.SDK_INT >= 31) {
                aFi1qSDK = new AFi1oSDK(w5.getCurrencyIso4217Code);
            } else {
                aFi1qSDK = new AFi1qSDK(w5.getCurrencyIso4217Code);
                AFKeystoreWrapper = (f3646d + 67) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
            w5.getMediationNetwork = aFi1qSDK;
            AFf1cSDK AFKeystoreWrapper2 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper();
            AFf1cSDK.getRevenue(new Object[]{AFKeystoreWrapper2, ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).getCurrencyIso4217Code()}, 826598914, -826598912, System.identityHashCode(AFKeystoreWrapper2));
            AFh1tSDK component3 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).component3();
            component3.component2 = System.currentTimeMillis();
            int mediationNetwork = component3.getMediationNetwork.getMonetizationNetwork.getMediationNetwork("appsFlyerCount", 0);
            if (mediationNetwork == 1 && component3.getCurrencyIso4217Code.getRevenue("first_launch")) {
                AFKeystoreWrapper = (f3646d + 71) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                component3.getMonetizationNetwork.putAll(component3.AFAdRevenueData("first_launch"));
            }
            if (mediationNetwork > 0 && component3.getCurrencyIso4217Code.getRevenue("gcd")) {
                AFKeystoreWrapper = (f3646d + 75) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                component3.AFAdRevenueData.putAll(component3.AFAdRevenueData("gcd"));
            }
            component3.hashCode = component3.getCurrencyIso4217Code.getCurrencyIso4217Code("prev_session_dur", 0L);
            component2();
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFInAppEventType().getCurrencyIso4217Code();
            return;
        }
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afRDLog().getMonetizationNetwork();
        throw null;
    }

    private static void copydefault() {
        int i5 = f3646d + 121;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            AFLogger.INSTANCE.w(AFg1cSDK.SDK_LIFECYCLE, "ERROR: AppsFlyer SDK is not initialized! You must provide AppsFlyer Dev-Key either in the 'init' API method (should be called on Application's onCreate),or in the start() API (should be called on Activity's onCreate).");
        } else {
            AFLogger.INSTANCE.w(AFg1cSDK.SDK_LIFECYCLE, "ERROR: AppsFlyer SDK is not initialized! You must provide AppsFlyer Dev-Key either in the 'init' API method (should be called on Application's onCreate),or in the start() API (should be called on Activity's onCreate).");
            throw null;
        }
    }

    private static String getCurrencyIso4217Code(String str) {
        int i5 = AFKeystoreWrapper + 105;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return AppsFlyerProperties.getInstance().getString(str);
        }
        AppsFlyerProperties.getInstance().getString(str);
        throw null;
    }

    public final void component4() {
        f3646d = (AFKeystoreWrapper + 9) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (AFe1dSDK.component2()) {
            int i5 = AFKeystoreWrapper + 45;
            f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                int i6 = 68 / 0;
                return;
            }
            return;
        }
        AFc1bSDK aFc1bSDK = (AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this));
        AFe1nSDK copydefault = aFc1bSDK.copydefault();
        copydefault.AFAdRevenueData.execute(copydefault.new AnonymousClass3(new AFe1dSDK(aFc1bSDK)));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void start(@NonNull Context context, String str) {
        f3646d = (AFKeystoreWrapper + 1) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        start(context, str, null);
        f3646d = (AFKeystoreWrapper + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    public final void getCurrencyIso4217Code(AFh1jSDK aFh1jSDK) {
        long j;
        Context context = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).registerClient().getRevenue;
        boolean z5 = true;
        if (context == null) {
            int i5 = f3646d + 71;
            AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                AFLogger.INSTANCE.d(AFg1cSDK.ATTRIBUTION, "sendWithEvent - got null context. skipping event/launch.", true);
                return;
            } else {
                AFLogger.INSTANCE.d(AFg1cSDK.ATTRIBUTION, "sendWithEvent - got null context. skipping event/launch.", true);
                return;
            }
        }
        String mediationNetwork = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMediationNetwork();
        AppsFlyerRequestListener appsFlyerRequestListener = aFh1jSDK.getMonetizationNetwork;
        if (mediationNetwork != null && mediationNetwork.length() != 0) {
            AFc1oSDK aFc1oSDK = (AFc1oSDK) getRevenue(new Object[]{this, context}, -1595266545, 1595266567, System.identityHashCode(this));
            AppsFlyerProperties.getInstance().saveProperties(aFc1oSDK);
            if (!((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMonetizationNetwork()) {
                AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "sendWithEvent from activity: ".concat(context.getClass().getName()), true);
            }
            boolean mediationNetwork2 = aFh1jSDK.getMediationNetwork();
            Map<String, ?> revenue = getRevenue(aFh1jSDK);
            if (((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMonetizationNetwork()) {
                AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "AppsFlyerLib.sendWithEvent");
                AFKeystoreWrapper = (f3646d + 109) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
            int monetizationNetwork = getMonetizationNetwork(aFc1oSDK, false);
            getRevenue(new Object[]{this, revenue}, 1290570600, -1290570599, System.identityHashCode(this));
            AFa1tSDK aFa1tSDK = new AFa1tSDK(getCurrencyIso4217Code(), aFh1jSDK.getMonetizationNetwork(revenue).getMonetizationNetwork(monetizationNetwork), getCurrencyIso4217Code().unregisterClient().getCurrencyIso4217Code());
            if (mediationNetwork2) {
                boolean z6 = false;
                for (AFj1qSDK aFj1qSDK : (AFj1qSDK[]) getRevenue(new Object[]{this}, -187960988, 187961006, System.identityHashCode(this))) {
                    if (aFj1qSDK.areAllFieldsValid == AFj1qSDK.AFa1vSDK.STARTED) {
                        AFLogger aFLogger = AFLogger.INSTANCE;
                        AFg1cSDK aFg1cSDK = AFg1cSDK.REFERRER;
                        StringBuilder sb2 = new StringBuilder("Failed to get ");
                        sb2.append(aFj1qSDK.getCurrencyIso4217Code);
                        sb2.append(" referrer, wait ...");
                        aFLogger.d(aFg1cSDK, sb2.toString());
                        z6 = true;
                    }
                }
                if (((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).unregisterClient().getRevenue()) {
                    AFLogger.INSTANCE.d(AFg1cSDK.REFERRER, "fetching Facebook deferred AppLink data, wait ...");
                    z6 = true;
                }
                if (((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().AFAdRevenueData()) {
                    AFKeystoreWrapper = (f3646d + 15) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                } else {
                    z5 = z6;
                }
            } else {
                z5 = false;
            }
            ScheduledExecutorService monetizationNetwork2 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).getMonetizationNetwork();
            if (z5) {
                int i6 = AFKeystoreWrapper + 99;
                f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i6 % 2 == 0) {
                    int i10 = 29 / 0;
                }
                j = 500;
            } else {
                j = 0;
            }
            AFj1aSDK.AFAdRevenueData(monetizationNetwork2, aFa1tSDK, j, TimeUnit.MILLISECONDS);
            return;
        }
        AFLogger aFLogger2 = AFLogger.INSTANCE;
        AFg1cSDK aFg1cSDK2 = AFg1cSDK.GENERAL;
        aFLogger2.i(aFg1cSDK2, "AppsFlyer dev key is missing!!! Please use  AppsFlyerLib.getInstance().setAppsFlyerKey(...) to set it. ", true);
        aFLogger2.i(aFg1cSDK2, "AppsFlyer will not track this event.", true);
        if (appsFlyerRequestListener != null) {
            appsFlyerRequestListener.onError(41, "No dev key");
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setUserEmails(AppsFlyerProperties.EmailsCryptType emailsCryptType, String... strArr) {
        ArrayList arrayList = new ArrayList(strArr.length + 1);
        arrayList.add(emailsCryptType.toString());
        arrayList.addAll(Arrays.asList(strArr));
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code("setUserEmails", (String[]) arrayList.toArray(new String[strArr.length + 1]));
        AppsFlyerProperties.getInstance().set(AppsFlyerProperties.EMAIL_CRYPT_TYPE, emailsCryptType.getValue());
        HashMap hashMap = new HashMap();
        ArrayList arrayList2 = new ArrayList();
        int length = strArr.length;
        String str = null;
        for (int i5 = 0; i5 < length; i5++) {
            int i6 = f3646d + 121;
            AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0) {
                String str2 = strArr[i5];
                if (AnonymousClass2.getRevenue[emailsCryptType.ordinal()] != 2) {
                    arrayList2.add(AFj1bSDK.getCurrencyIso4217Code(str2));
                    str = "sha256_el_arr";
                } else {
                    arrayList2.add(str2);
                    str = "plain_el_arr";
                }
            } else {
                String str3 = strArr[i5];
                int i10 = AnonymousClass2.getRevenue[emailsCryptType.ordinal()];
                throw null;
            }
        }
        hashMap.put(str, arrayList2);
        AppsFlyerProperties.getInstance().setUserEmails(new JSONObject(hashMap).toString());
        int i11 = f3646d + 35;
        AFKeystoreWrapper = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i11 % 2 != 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void start(@NonNull Context context, String str, final AppsFlyerRequestListener appsFlyerRequestListener) {
        if (((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afDebugLog().getCurrencyIso4217Code()) {
            return;
        }
        if (!this.toString) {
            getMediationNetwork(ViewProps.START);
            if (str == null) {
                int i5 = AFKeystoreWrapper + 79;
                int i6 = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                f3646d = i6;
                if (i5 % 2 == 0) {
                    throw null;
                }
                if (appsFlyerRequestListener != null) {
                    int i10 = i6 + 21;
                    AFKeystoreWrapper = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (i10 % 2 != 0) {
                        appsFlyerRequestListener.onError(88, "No dev key");
                        return;
                    } else {
                        appsFlyerRequestListener.onError(41, "No dev key");
                        return;
                    }
                }
                return;
            }
        }
        getMediationNetwork(context);
        final AFh1tSDK component3 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).component3();
        component3.getRevenue(AFh1uSDK.getRevenue(context));
        if (this.component3 == null) {
            f3646d = (AFKeystoreWrapper + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            Application O_ = AFj1iSDK.O_(context);
            if (O_ == null) {
                return;
            }
            f3646d = (AFKeystoreWrapper + 109) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            this.component3 = O_;
        }
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).equals().getCurrencyIso4217Code(ViewProps.START, str);
        AFLogger aFLogger = AFLogger.INSTANCE;
        AFg1cSDK aFg1cSDK = AFg1cSDK.GENERAL;
        String str2 = getRevenue;
        aFLogger.i(aFg1cSDK, "Starting AppsFlyer: (v6.17.3." + str2 + ")");
        StringBuilder sb2 = new StringBuilder("Build Number: ");
        sb2.append(str2);
        aFLogger.i(aFg1cSDK, sb2.toString());
        AppsFlyerProperties.getInstance().loadProperties(((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).component2());
        if (!TextUtils.isEmpty(str)) {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMonetizationNetwork(str);
        } else if (TextUtils.isEmpty(((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMediationNetwork())) {
            int i11 = AFKeystoreWrapper + 63;
            f3646d = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i11 % 2 == 0) {
                copydefault();
                int i12 = 69 / 0;
                if (appsFlyerRequestListener == null) {
                    return;
                }
            } else {
                copydefault();
                if (appsFlyerRequestListener == null) {
                    return;
                }
            }
            AFKeystoreWrapper = (f3646d + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            appsFlyerRequestListener.onError(41, "No dev key");
            return;
        }
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).component1().getRevenue(AFAdRevenueData());
        component4();
        c_(this.component3.getBaseContext(), this.hashCode.getCurrencyIso4217Code().n_());
        ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).unregisterClient().getMediationNetwork();
        this.hashCode.afDebugLog().getCurrencyIso4217Code(context, new AFb1aSDK.AFa1ySDK() { // from class: com.appsflyer.internal.AFa1uSDK.3
            @Override // com.appsflyer.internal.AFb1aSDK.AFa1ySDK
            public final void getMediationNetwork() {
                AFa1uSDK aFa1uSDK = AFa1uSDK.this;
                Context context2 = ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).registerClient().getRevenue;
                AFLogger.afInfoLog("onBecameBackground");
                AFh1tSDK aFh1tSDK = component3;
                long currentTimeMillis = System.currentTimeMillis();
                long j = aFh1tSDK.component3;
                if (j != 0) {
                    long j5 = currentTimeMillis - j;
                    if (j5 > 0 && j5 < 1000) {
                        j5 = 1000;
                    }
                    long seconds = TimeUnit.MILLISECONDS.toSeconds(j5);
                    aFh1tSDK.hashCode = seconds;
                    aFh1tSDK.getCurrencyIso4217Code.getRevenue("prev_session_dur", seconds);
                } else {
                    AFLogger.afInfoLog("Metrics: fg ts is missing");
                }
                AFLogger.afInfoLog("callStatsBackground background call");
                AFa1uSDK aFa1uSDK2 = AFa1uSDK.this;
                ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK2}, 389316487, -389316474, System.identityHashCode(aFa1uSDK2))).afWarnLog().getCurrencyIso4217Code();
                AFa1uSDK aFa1uSDK3 = AFa1uSDK.this;
                AFd1mSDK equals = ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK3}, 389316487, -389316474, System.identityHashCode(aFa1uSDK3))).equals();
                if (equals.areAllFieldsValid()) {
                    equals.AFAdRevenueData();
                    if (context2 != null && !AppsFlyerLib.getInstance().isStopped()) {
                        equals.q_(context2.getPackageName(), context2.getPackageManager());
                    }
                    equals.getRevenue();
                } else {
                    AFLogger.afDebugLog("RD status is OFF");
                }
                AFa1uSDK aFa1uSDK4 = AFa1uSDK.this;
                ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK4}, 389316487, -389316474, System.identityHashCode(aFa1uSDK4))).copy().getMediationNetwork();
                AFa1uSDK aFa1uSDK5 = AFa1uSDK.this;
                ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK5}, 389316487, -389316474, System.identityHashCode(aFa1uSDK5))).afErrorLogForExcManagerOnly().getMediationNetwork();
                AFa1uSDK aFa1uSDK6 = AFa1uSDK.this;
                ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK6}, 389316487, -389316474, System.identityHashCode(aFa1uSDK6))).AFAdRevenueData().AFAdRevenueData();
                AFa1uSDK aFa1uSDK7 = AFa1uSDK.this;
                AFh1qSDK afLogForce = ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK7}, 389316487, -389316474, System.identityHashCode(aFa1uSDK7))).afLogForce();
                if (afLogForce != null) {
                    afLogForce.getCurrencyIso4217Code();
                }
            }

            @Override // com.appsflyer.internal.AFb1aSDK.AFa1ySDK
            public final void getMonetizationNetwork(@NonNull AFh1rSDK aFh1rSDK) {
                Intent intent;
                component3.getMonetizationNetwork();
                AFa1uSDK aFa1uSDK = AFa1uSDK.this;
                AFc1bSDK aFc1bSDK = (AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK));
                aFc1bSDK.component1().getRevenue(AFa1uSDK.this.AFAdRevenueData());
                AFa1uSDK.this.component4();
                int mediationNetwork = aFc1bSDK.getCurrencyIso4217Code().getMonetizationNetwork.getMediationNetwork("appsFlyerCount", 0);
                AFLogger.afInfoLog("onBecameForeground");
                if (mediationNetwork < 2) {
                    AFa1uSDK aFa1uSDK2 = AFa1uSDK.this;
                    ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK2}, 389316487, -389316474, System.identityHashCode(aFa1uSDK2))).copy().getMonetizationNetwork();
                }
                AFh1eSDK aFh1eSDK = new AFh1eSDK();
                AFa1uSDK aFa1uSDK3 = AFa1uSDK.this;
                ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK3}, 389316487, -389316474, System.identityHashCode(aFa1uSDK3))).i().f_(AFa1gSDK.AFAdRevenueData(aFh1eSDK), aFh1rSDK.getMediationNetwork, aFc1bSDK.registerClient().getRevenue);
                AFh1qSDK afLogForce = aFc1bSDK.afLogForce();
                if (afLogForce != null && (intent = aFh1rSDK.getMediationNetwork) != null) {
                    AFa1uSDK aFa1uSDK4 = AFa1uSDK.this;
                    afLogForce.u_(intent, ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK4}, 389316487, -389316474, System.identityHashCode(aFa1uSDK4))).i());
                }
                AFa1uSDK aFa1uSDK5 = AFa1uSDK.this;
                aFh1eSDK.getMonetizationNetwork = appsFlyerRequestListener;
                aFa1uSDK5.getMediationNetwork(aFh1eSDK, aFh1rSDK);
                AFa1uSDK aFa1uSDK6 = AFa1uSDK.this;
                ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK6}, 389316487, -389316474, System.identityHashCode(aFa1uSDK6))).AFAdRevenueData().AFAdRevenueData();
                AFa1uSDK aFa1uSDK7 = AFa1uSDK.this;
                ((AFc1bSDK) AFa1uSDK.getRevenue(new Object[]{aFa1uSDK7}, 389316487, -389316474, System.identityHashCode(aFa1uSDK7))).AFAdRevenueData().getRevenue.getCurrencyIso4217Code("didSendRevenueTriggerOnLastBackground", false);
            }
        });
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void subscribeForDeepLink(@NonNull DeepLinkListener deepLinkListener) {
        getRevenue(new Object[]{this, deepLinkListener}, 1831672072, -1831672058, System.identityHashCode(this));
    }

    private boolean areAllFieldsValid() {
        f3646d = (AFKeystoreWrapper + 19) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (this.component4 > 0) {
            long currentTimeMillis = System.currentTimeMillis() - this.component4;
            Locale locale = Locale.US;
            SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy/MM/dd HH:mm:ss.SSS Z", locale);
            String mediationNetwork = getMediationNetwork(simpleDateFormat, this.component4);
            String mediationNetwork2 = getMediationNetwork(simpleDateFormat, this.getMonetizationNetwork);
            if (currentTimeMillis < this.component2 && !isStopped()) {
                int i5 = AFKeystoreWrapper + 121;
                f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 == 0) {
                    Object[] objArr = new Object[4];
                    objArr[1] = mediationNetwork;
                    objArr[1] = mediationNetwork2;
                    objArr[4] = Long.valueOf(currentTimeMillis);
                    objArr[2] = Long.valueOf(this.component2);
                    AFLogger.afInfoLog(String.format(locale, "Last Launch attempt: %s;\nLast successful Launch event: %s;\nThis launch is blocked: %s ms < %s ms", objArr));
                    return false;
                }
                long j = this.component2;
                StringBuilder t5 = a3.e.t("Last Launch attempt: ", mediationNetwork, ";\nLast successful Launch event: ", mediationNetwork2, ";\nThis launch is blocked: ");
                t5.append(currentTimeMillis);
                t5.append(" ms < ");
                t5.append(j);
                t5.append(" ms");
                AFLogger.afInfoLog(t5.toString());
                return true;
            }
            if (!isStopped()) {
                AFKeystoreWrapper = (f3646d + 97) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                StringBuilder t10 = a3.e.t("Last Launch attempt: ", mediationNetwork, ";\nLast successful Launch event: ", mediationNetwork2, ";\nSending launch (+");
                t10.append(currentTimeMillis);
                t10.append(" ms)");
                AFLogger.afInfoLog(t10.toString());
            }
        } else if (!isStopped()) {
            int i6 = AFKeystoreWrapper + 77;
            f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 != 0) {
                AFLogger.afInfoLog("Sending first launch for this session!");
            } else {
                AFLogger.afInfoLog("Sending first launch for this session!");
                throw null;
            }
        }
        return false;
    }

    private static /* synthetic */ Object getMediationNetwork(Object[] objArr) {
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        Context context = (Context) objArr[1];
        AFj1kSDK aFj1kSDK = new AFj1kSDK((Intent) objArr[2]);
        if (aFj1kSDK.getCurrencyIso4217Code("appsflyer_preinstall") != null) {
            int i5 = AFKeystoreWrapper + 53;
            f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                getRevenue(new Object[]{aFj1kSDK.getCurrencyIso4217Code("appsflyer_preinstall")}, 698517988, -698517984, (int) System.currentTimeMillis());
                throw null;
            }
            getRevenue(new Object[]{aFj1kSDK.getCurrencyIso4217Code("appsflyer_preinstall")}, 698517988, -698517984, (int) System.currentTimeMillis());
        }
        AFLogger.afInfoLog("****** onReceive called *******");
        AppsFlyerProperties.getInstance();
        String currencyIso4217Code = aFj1kSDK.getCurrencyIso4217Code("referrer");
        AFLogger.afInfoLog("Play store referrer: ".concat(String.valueOf(currencyIso4217Code)));
        if (currencyIso4217Code != null) {
            f3646d = (AFKeystoreWrapper + 87) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            ((AFc1oSDK) getRevenue(new Object[]{aFa1uSDK, context}, -1595266545, 1595266567, System.identityHashCode(aFa1uSDK))).AFAdRevenueData("referrer", currencyIso4217Code);
            AppsFlyerProperties appsFlyerProperties = AppsFlyerProperties.getInstance();
            appsFlyerProperties.set("AF_REFERRER", currencyIso4217Code);
            appsFlyerProperties.AFAdRevenueData = currencyIso4217Code;
            if (AppsFlyerProperties.getInstance().AFAdRevenueData()) {
                AFLogger.afInfoLog("onReceive: isLaunchCalled");
                aFa1uSDK.getMediationNetwork(context, AFh1xSDK.onReceive);
                aFa1uSDK.getRevenue(currencyIso4217Code);
                AFKeystoreWrapper = (f3646d + 55) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
        }
        int i6 = f3646d + 35;
        AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 != 0) {
            int i10 = 83 / 0;
        }
        return null;
    }

    private static void component2(Context context) {
        try {
            List asList = Arrays.asList(context.getPackageManager().getPackageInfo(context.getPackageName(), RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT).requestedPermissions);
            if (!asList.contains("android.permission.INTERNET")) {
                f3646d = (AFKeystoreWrapper + 73) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "Permission android.permission.INTERNET is missing in the AndroidManifest.xml");
            }
            if (!asList.contains("android.permission.ACCESS_NETWORK_STATE")) {
                AFKeystoreWrapper = (f3646d + 95) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "Permission android.permission.ACCESS_NETWORK_STATE is missing in the AndroidManifest.xml");
            }
            if (Build.VERSION.SDK_INT <= 32 || asList.contains("com.google.android.gms.permission.AD_ID")) {
                return;
            }
            AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "Permission com.google.android.gms.permission.AD_ID is missing in the AndroidManifest.xml");
            f3646d = (AFKeystoreWrapper + 33) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        } catch (Exception e9) {
            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "Exception while validation permissions. ", e9);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x001e, code lost:
    
        r1 = r1 + 123;
        com.appsflyer.internal.AFa1uSDK.AFKeystoreWrapper = r1 % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x0026, code lost:
    
        if ((r1 % 2) != 0) goto L19;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0028, code lost:
    
        r3.equals = new com.appsflyer.internal.b(r3);
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0030, code lost:
    
        r3.equals = new com.appsflyer.internal.b(r3);
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x0038, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x001c, code lost:
    
        if (r3.equals == null) goto L16;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0013, code lost:
    
        if (r3.equals == null) goto L16;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized AFf1nSDK AFAdRevenueData() {
        try {
            int i5 = AFKeystoreWrapper + 83;
            int i6 = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            f3646d = i6;
            if (i5 % 2 == 0) {
                int i10 = 14 / 0;
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return this.equals;
    }

    /* JADX WARN: Removed duplicated region for block: B:41:0x00db A[LOOP:4: B:27:0x006f->B:41:0x00db, LOOP_END] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void AFAdRevenueData(JSONObject jSONObject) {
        String str;
        ArrayList arrayList = new ArrayList();
        Iterator<String> keys = jSONObject.keys();
        while (true) {
            int i5 = 0;
            if (!keys.hasNext()) {
                break;
            }
            try {
                JSONArray jSONArray = new JSONArray((String) jSONObject.get(keys.next()));
                while (i5 < jSONArray.length()) {
                    arrayList.add(Long.valueOf(jSONArray.getLong(i5)));
                    i5++;
                    AFKeystoreWrapper = (f3646d + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                }
            } catch (JSONException e9) {
                AFLogger.afErrorLogForExcManagerOnly("error at timeStampArr", e9);
            }
        }
        Collections.sort(arrayList);
        Iterator<String> keys2 = jSONObject.keys();
        loop2: while (true) {
            str = null;
            while (keys2.hasNext()) {
                f3646d = (AFKeystoreWrapper + 1) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (str != null) {
                    break loop2;
                }
                String next = keys2.next();
                try {
                    JSONArray jSONArray2 = new JSONArray((String) jSONObject.get(next));
                    int i6 = 0;
                    while (i6 < jSONArray2.length()) {
                        if (jSONArray2.getLong(i6) != ((Long) arrayList.get(0)).longValue()) {
                            int i10 = f3646d + 21;
                            AFKeystoreWrapper = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                            if (i10 % 2 == 0) {
                                if (jSONArray2.getLong(i6) == ((Long) arrayList.get(1)).longValue()) {
                                    break;
                                }
                                AFKeystoreWrapper = (f3646d + 61) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                if (jSONArray2.getLong(i6) != ((Long) arrayList.get(arrayList.size() - 1)).longValue()) {
                                }
                            } else if (jSONArray2.getLong(i6) != ((Long) arrayList.get(1)).longValue()) {
                                AFKeystoreWrapper = (f3646d + 61) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                if (jSONArray2.getLong(i6) != ((Long) arrayList.get(arrayList.size() - 1)).longValue()) {
                                    break;
                                }
                                i6++;
                                str = next;
                            }
                        }
                    }
                } catch (JSONException e10) {
                    AFLogger.afErrorLogForExcManagerOnly("error at manageExtraReferrers", e10);
                }
            }
            break loop2;
        }
        if (str != null) {
            jSONObject.remove(str);
            f3646d = (AFKeystoreWrapper + 113) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void validateAndLogInAppPurchase(@NonNull AFPurchaseDetails aFPurchaseDetails, Map<String, String> map, AppsFlyerInAppPurchaseValidationCallback appsFlyerInAppPurchaseValidationCallback) {
        AFe1nSDK copydefault = this.hashCode.copydefault();
        copydefault.AFAdRevenueData.execute(copydefault.new AnonymousClass3(new AFf1zSDK(this.hashCode, AppsFlyerProperties.getInstance(), aFPurchaseDetails, map, appsFlyerInAppPurchaseValidationCallback)));
        int i5 = f3646d + 119;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            throw null;
        }
    }

    private void getMonetizationNetwork(AFi1jSDK aFi1jSDK) {
        AFf1ySDK aFf1ySDK = new AFf1ySDK(aFi1jSDK, getCurrencyIso4217Code().getCurrencyIso4217Code(), getCurrencyIso4217Code(), getCurrencyIso4217Code().component4(), getCurrencyIso4217Code().registerClient());
        AFe1nSDK copydefault = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).copydefault();
        copydefault.AFAdRevenueData.execute(copydefault.new AnonymousClass3(aFf1ySDK));
        f3646d = (AFKeystoreWrapper + 1) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void getMediationNetwork(AFc1bSDK aFc1bSDK) {
        int i5 = f3646d + 49;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        int i6 = i5 % 2;
        aFc1bSDK.AFInAppEventType().getMonetizationNetwork();
        if (i6 != 0) {
            int i10 = 22 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void logEvent(Context context, String str, Map<String, Object> map) {
        getRevenue(new Object[]{this, context, str, map}, -1613836572, 1613836582, System.identityHashCode(this));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void getMediationNetwork(boolean z5) {
        int i5 = AFKeystoreWrapper;
        f3646d = (i5 + 113) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (z5) {
            f3646d = (i5 + 99) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afErrorLog().getCurrencyIso4217Code();
        } else {
            ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).afErrorLog().getMonetizationNetwork();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void getMediationNetwork(AFi1jSDK aFi1jSDK) {
        int i5 = f3646d + 57;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        int i6 = i5 % 2;
        getMonetizationNetwork(aFi1jSDK);
        if (i6 != 0) {
            throw null;
        }
    }

    public static String getMediationNetwork() {
        AFKeystoreWrapper = (f3646d + 63) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        String currencyIso4217Code = getCurrencyIso4217Code(AppsFlyerProperties.APP_USER_ID);
        int i5 = AFKeystoreWrapper + 85;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            int i6 = 76 / 0;
        }
        return currencyIso4217Code;
    }

    private void getMediationNetwork(Context context, AFh1xSDK aFh1xSDK) {
        AFKeystoreWrapper = (f3646d + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        getMediationNetwork(context);
        AFh1tSDK component3 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).component3();
        AFh1uSDK revenue = AFh1uSDK.getRevenue(context);
        if (component3.getCurrencyIso4217Code()) {
            int i5 = f3646d + 125;
            AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                component3.getMonetizationNetwork.put("api_name", aFh1xSDK.toString());
                component3.getRevenue(revenue);
                int i6 = 2 / 0;
            } else {
                component3.getMonetizationNetwork.put("api_name", aFh1xSDK.toString());
                component3.getRevenue(revenue);
            }
        }
        component3.getMonetizationNetwork();
    }

    @Deprecated
    public static Map<String, Object> getMonetizationNetwork(Map<String, Object> map) {
        Map<String, Object> map2;
        AFKeystoreWrapper = (f3646d + 27) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (map.containsKey("meta")) {
            f3646d = (AFKeystoreWrapper + 109) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            map2 = (Map) map.get("meta");
        } else {
            HashMap hashMap = new HashMap();
            map.put("meta", hashMap);
            map2 = hashMap;
        }
        int i5 = AFKeystoreWrapper + 7;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            int i6 = 71 / 0;
        }
        return map2;
    }

    private static /* synthetic */ Object getMonetizationNetwork(Object[] objArr) {
        String str = (String) objArr[0];
        try {
            if (new JSONObject(str).has("pid")) {
                int i5 = AFKeystoreWrapper + 45;
                f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 != 0) {
                    getCurrencyIso4217Code("preInstallName", str);
                    AFKeystoreWrapper = (f3646d + 43) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    return null;
                }
                getCurrencyIso4217Code("preInstallName", str);
                throw null;
            }
            AFLogger.afWarnLog("Cannot set preinstall attribution data without a media source");
            f3646d = (AFKeystoreWrapper + 113) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return null;
        } catch (JSONException e9) {
            AFLogger.afErrorLog("Error parsing JSON for preinstall", e9);
            return null;
        }
    }

    private static boolean AFAdRevenueData(String str) {
        int i5 = AFKeystoreWrapper + 63;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        int i6 = i5 % 2;
        boolean z5 = AppsFlyerProperties.getInstance().getBoolean(str, false);
        AFKeystoreWrapper = (f3646d + 87) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return z5;
    }

    private AFh1rSDK AFAdRevenueData(Context context) {
        f3646d = (AFKeystoreWrapper + 87) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (!(context instanceof Activity)) {
            return null;
        }
        AFh1rSDK aFh1rSDK = new AFh1rSDK((Activity) context, getCurrencyIso4217Code().d());
        int i5 = AFKeystoreWrapper + 67;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return aFh1rSDK;
        }
        throw null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0070, code lost:
    
        if (com.appsflyer.internal.AFk1xSDK.getRevenue(((com.appsflyer.internal.AFc1bSDK) getRevenue(new java.lang.Object[]{r1}, 389316487, -389316474, java.lang.System.identityHashCode(r1))).afInfoLog().AFAdRevenueData) != false) goto L27;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x00b9, code lost:
    
        if (com.appsflyer.internal.AFk1xSDK.getRevenue(((com.appsflyer.internal.AFc1bSDK) getRevenue(new java.lang.Object[]{r1}, 389316487, -389316474, java.lang.System.identityHashCode(r1))).AFKeystoreWrapper().getCurrencyIso4217Code()) == false) goto L36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x00c1, code lost:
    
        if (r7.remove("imei") == null) goto L36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x00c3, code lost:
    
        com.appsflyer.AFLogger.afInfoLog("validateGaidAndIMEI :: removing: imei");
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x00c9, code lost:
    
        com.appsflyer.internal.AFa1uSDK.f3646d = (com.appsflyer.internal.AFa1uSDK.AFKeystoreWrapper + 55) % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x00d1, code lost:
    
        return null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x0097, code lost:
    
        if (r7.remove("android_id") == null) goto L30;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x0099, code lost:
    
        com.appsflyer.AFLogger.afInfoLog("validateGaidAndIMEI :: removing: android_id");
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x008f, code lost:
    
        if (com.appsflyer.internal.AFk1xSDK.getRevenue(((com.appsflyer.internal.AFc1bSDK) getRevenue(new java.lang.Object[]{r1}, 389316487, -389316474, java.lang.System.identityHashCode(r1))).afInfoLog().AFAdRevenueData) != false) goto L27;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static /* synthetic */ Object getCurrencyIso4217Code(Object[] objArr) {
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        Map map = (Map) objArr[1];
        int i5 = AFKeystoreWrapper + 85;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0 ? !AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.COLLECT_ANDROID_ID_FORCE_BY_USER, false) : !AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.COLLECT_ANDROID_ID_FORCE_BY_USER, true)) {
            if (!AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.COLLECT_IMEI_FORCE_BY_USER, false) && map.get("advertiserId") != null) {
                int i6 = AFKeystoreWrapper + 39;
                f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                try {
                    if (i6 % 2 == 0) {
                        int i10 = 3 / 0;
                    }
                } catch (Exception e9) {
                    AFLogger.afErrorLog("failed to remove IMEI or AndroidID key from params; ", e9);
                }
            }
        }
        return null;
    }

    public final void getMediationNetwork(@NonNull AFh1jSDK aFh1jSDK, AFh1rSDK aFh1rSDK) {
        AppsFlyerRequestListener appsFlyerRequestListener;
        AFAdRevenueData(aFh1jSDK, aFh1rSDK);
        if (((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMediationNetwork() == null) {
            int i5 = AFKeystoreWrapper + 117;
            f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                AFLogger.afWarnLog("[LogEvent/Launch] AppsFlyer's SDK cannot send any event without providing DevKey.");
                appsFlyerRequestListener = aFh1jSDK.getMonetizationNetwork;
                int i6 = 1 / 0;
                if (appsFlyerRequestListener == null) {
                    return;
                }
            } else {
                AFLogger.afWarnLog("[LogEvent/Launch] AppsFlyer's SDK cannot send any event without providing DevKey.");
                appsFlyerRequestListener = aFh1jSDK.getMonetizationNetwork;
                if (appsFlyerRequestListener == null) {
                    return;
                }
            }
            appsFlyerRequestListener.onError(41, "No dev key");
            return;
        }
        String referrer = AppsFlyerProperties.getInstance().getReferrer(((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).component2());
        if (referrer == null) {
            int i10 = f3646d + 117;
            AFKeystoreWrapper = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i10 % 2 == 0) {
                referrer = "";
            } else {
                throw null;
            }
        }
        aFh1jSDK.areAllFieldsValid = referrer;
        getMonetizationNetwork(aFh1jSDK);
    }

    @NonNull
    private AFj1qSDK[] component1() {
        return (AFj1qSDK[]) getRevenue(new Object[]{this}, -187960988, 187961006, System.identityHashCode(this));
    }

    private void AFAdRevenueData(Context context, String str, Map<String, Object> map) {
        AFh1hSDK aFh1hSDK = new AFh1hSDK();
        aFh1hSDK.component4 = str;
        aFh1hSDK.AFAdRevenueData = map;
        getMediationNetwork(aFh1hSDK, AFAdRevenueData(context));
        int i5 = f3646d + 7;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            int i6 = 38 / 0;
        }
    }

    public static int getMonetizationNetwork(AFc1oSDK aFc1oSDK, boolean z5) {
        int i5 = f3646d + 95;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            AFAdRevenueData(aFc1oSDK, "appsFlyerCount", z5);
            throw null;
        }
        int AFAdRevenueData2 = AFAdRevenueData(aFc1oSDK, "appsFlyerCount", z5);
        AFKeystoreWrapper = (f3646d + 97) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return AFAdRevenueData2;
    }

    /* JADX WARN: Code restructure failed: missing block: B:19:0x004e, code lost:
    
        if (areAllFieldsValid() != false) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x0057, code lost:
    
        r5 = r5.getMonetizationNetwork;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x0059, code lost:
    
        if (r5 == null) goto L32;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x005b, code lost:
    
        com.appsflyer.internal.AFa1uSDK.AFKeystoreWrapper = (com.appsflyer.internal.AFa1uSDK.f3646d + 7) % com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        r5.onError(10, "Event timeout. Check 'minTimeBetweenSessions' param");
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x006a, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:?, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x0055, code lost:
    
        if (areAllFieldsValid() != false) goto L24;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void getMonetizationNetwork(AFh1jSDK aFh1jSDK) {
        boolean z5;
        if (aFh1jSDK.component4 == null) {
            f3646d = (AFKeystoreWrapper + 25) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            z5 = true;
        } else {
            z5 = false;
        }
        if (getRevenue()) {
            int i5 = AFKeystoreWrapper + 107;
            f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
                AFLogger.afInfoLog("CustomerUserId not set, reporting is disabled", false);
                return;
            } else {
                AFLogger.afInfoLog("CustomerUserId not set, reporting is disabled", true);
                return;
            }
        }
        if (z5) {
            if (AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.LAUNCH_PROTECT_ENABLED, true)) {
                int i6 = AFKeystoreWrapper + 105;
                f3646d = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i6 % 2 == 0) {
                    int i10 = 53 / 0;
                }
            } else {
                AFLogger.afInfoLog("Allowing multiple launches within a 5 second time window.");
            }
            this.component4 = System.currentTimeMillis();
        }
        getCurrencyIso4217Code(aFh1jSDK);
    }

    private static void AFAdRevenueData(@NonNull AFh1jSDK aFh1jSDK, AFh1rSDK aFh1rSDK) {
        int i5 = f3646d + 89;
        int i6 = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFKeystoreWrapper = i6;
        if (i5 % 2 != 0) {
            throw null;
        }
        if (aFh1rSDK != null) {
            aFh1jSDK.getMediationNetwork = aFh1rSDK.AFAdRevenueData;
            aFh1jSDK.component2 = aFh1rSDK.getMonetizationNetwork;
            f3646d = (i6 + 95) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x001b, code lost:
    
        r0 = r0 + 1;
        r3.getRevenue(r4, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x0019, code lost:
    
        if (r5 != false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0012, code lost:
    
        if (r5 != false) goto L9;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static int AFAdRevenueData(AFc1oSDK aFc1oSDK, String str, boolean z5) {
        int mediationNetwork;
        int i5 = AFKeystoreWrapper + 33;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            mediationNetwork = aFc1oSDK.getMediationNetwork(str, 1);
        } else {
            mediationNetwork = aFc1oSDK.getMediationNetwork(str, 0);
        }
        int i6 = f3646d + 99;
        AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 != 0) {
            int i10 = 63 / 0;
        }
        return mediationNetwork;
    }

    public static String getMediationNetwork(SimpleDateFormat simpleDateFormat, long j) {
        simpleDateFormat.setTimeZone(DesugarTimeZone.getTimeZone("UTC"));
        String format = simpleDateFormat.format(new Date(j));
        f3646d = (AFKeystoreWrapper + 35) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return format;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void getMediationNetwork(AFh1jSDK aFh1jSDK) {
        int i5 = f3646d + 11;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        int i6 = i5 % 2;
        getCurrencyIso4217Code(aFh1jSDK);
        if (i6 != 0) {
            throw null;
        }
    }

    public final boolean getRevenue() {
        AFKeystoreWrapper = (f3646d + 27) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (!AFAdRevenueData(AppsFlyerProperties.AF_WAITFOR_CUSTOMERID) || getMediationNetwork() != null) {
            return false;
        }
        int i5 = f3646d + 49;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return i5 % 2 == 0;
    }

    private static int getMediationNetwork(AFc1oSDK aFc1oSDK, boolean z5) {
        int i5 = AFKeystoreWrapper + 15;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return AFAdRevenueData(aFc1oSDK, "appsFlyerInAppEventCount", z5);
        }
        AFAdRevenueData(aFc1oSDK, "appsFlyerInAppEventCount", z5);
        throw null;
    }

    private void getRevenue(AppsFlyerConversionListener appsFlyerConversionListener) {
        if (appsFlyerConversionListener == null) {
            AFKeystoreWrapper = (f3646d + 13) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return;
        }
        this.getMediationNetwork = appsFlyerConversionListener;
        int i5 = f3646d + 109;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            int i6 = 20 / 0;
        }
    }

    private static /* synthetic */ Object AFAdRevenueData(Object[] objArr) {
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        int i5 = f3646d + 11;
        AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            return ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).AFInAppEventParameterName().getMonetizationNetwork();
        }
        int i6 = 26 / 0;
        return ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).AFInAppEventParameterName().getMonetizationNetwork();
    }

    private static void getMediationNetwork(String str) {
        AFLogger aFLogger = AFLogger.INSTANCE;
        AFg1cSDK aFg1cSDK = AFg1cSDK.SDK_LIFECYCLE;
        StringBuilder sb2 = new StringBuilder("ERROR: AppsFlyer SDK is not initialized! The API call '");
        sb2.append(str);
        sb2.append("()' must be called after the 'init(String, AppsFlyerConversionListener)' API method, which should be called on the Application's onCreate.");
        aFLogger.w(aFg1cSDK, sb2.toString());
        int i5 = AFKeystoreWrapper + 3;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            throw null;
        }
    }

    private static void getMonetizationNetwork(String str) {
        getRevenue(new Object[]{str}, 698517988, -698517984, (int) System.currentTimeMillis());
    }

    private void getRevenue(Context context, String str) {
        AFh1eSDK aFh1eSDK = new AFh1eSDK();
        getMediationNetwork(context);
        aFh1eSDK.component4 = null;
        aFh1eSDK.AFAdRevenueData = null;
        aFh1eSDK.areAllFieldsValid = str;
        aFh1eSDK.getMediationNetwork = null;
        getMonetizationNetwork(aFh1eSDK);
        f3646d = (AFKeystoreWrapper + 5) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    /* JADX WARN: Code restructure failed: missing block: B:19:0x0036, code lost:
    
        if (r0 != null) goto L18;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String getCurrencyIso4217Code(Activity activity) {
        Intent intent;
        Bundle extras;
        String str = null;
        if (activity != null && (intent = activity.getIntent()) != null) {
            AFKeystoreWrapper = (f3646d + 123) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            try {
                extras = intent.getExtras();
            } catch (Throwable th2) {
                AFLogger.INSTANCE.e(AFg1cSDK.ENGAGEMENT, th2.getMessage(), th2);
            }
            if (extras != null) {
                int i5 = AFKeystoreWrapper + 125;
                f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 == 0) {
                    str = extras.getString("af");
                    int i6 = 53 / 0;
                    if (str != null) {
                        AFKeystoreWrapper = (f3646d + 11) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        AFLogger.INSTANCE.w(AFg1cSDK.ENGAGEMENT, "Push Notification received af payload = ".concat(str));
                        extras.remove("af");
                        activity.setIntent(intent.putExtras(extras));
                        AFKeystoreWrapper = (f3646d + 69) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    }
                } else {
                    str = extras.getString("af");
                }
                AFLogger.INSTANCE.e(AFg1cSDK.ENGAGEMENT, th2.getMessage(), th2);
            }
            return str;
        }
        return str;
    }

    private void getRevenue(String str) {
        AFh1jSDK monetizationNetwork = new AFh1lSDK().getMonetizationNetwork(((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).getCurrencyIso4217Code().getMonetizationNetwork.getMediationNetwork("appsFlyerCount", 0));
        monetizationNetwork.areAllFieldsValid = str;
        if (str != null) {
            int i5 = f3646d + 39;
            AFKeystoreWrapper = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0 ? str.length() > 5 : str.length() > 2) {
                int i6 = f3646d + 35;
                AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i6 % 2 == 0) {
                    if (((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFLogger().AFAdRevenueData(monetizationNetwork)) {
                        AFj1aSDK.AFAdRevenueData(((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).getMonetizationNetwork(), new h(1, this, monetizationNetwork), 5L, TimeUnit.MILLISECONDS);
                    }
                } else {
                    ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFLogger().AFAdRevenueData(monetizationNetwork);
                    throw null;
                }
            }
        }
        f3646d = (AFKeystoreWrapper + 111) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    private String getCurrencyIso4217Code(Context context, String str) {
        f3646d = (AFKeystoreWrapper + 117) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (context == null) {
            return null;
        }
        getMediationNetwork(context);
        String monetizationNetwork = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).getCurrencyIso4217Code().getMonetizationNetwork(str);
        f3646d = (AFKeystoreWrapper + 33) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return monetizationNetwork;
    }

    public static String getCurrencyIso4217Code(AFc1oSDK aFc1oSDK, String str) {
        String monetizationNetwork = aFc1oSDK.getMonetizationNetwork("CACHED_CHANNEL", null);
        if (monetizationNetwork != null) {
            int i5 = f3646d;
            int i6 = i5 + 99;
            AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 != 0) {
                int i10 = 83 / 0;
            }
            int i11 = i5 + 111;
            AFKeystoreWrapper = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i11 % 2 == 0) {
                return monetizationNetwork;
            }
            throw null;
        }
        aFc1oSDK.AFAdRevenueData("CACHED_CHANNEL", str);
        int i12 = f3646d + 77;
        AFKeystoreWrapper = i12 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i12 % 2 == 0) {
            return str;
        }
        throw null;
    }

    @NonNull
    public final Map<String, Object> getRevenue(AFh1jSDK aFh1jSDK) {
        int i5;
        Context context = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).registerClient().getRevenue;
        AFc1oSDK aFc1oSDK = (AFc1oSDK) getRevenue(new Object[]{this, context}, -1595266545, 1595266567, System.identityHashCode(this));
        AFg1rSDK component4 = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).component4();
        boolean monetizationNetwork = ((AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this))).AFKeystoreWrapper().getMonetizationNetwork();
        boolean mediationNetwork = aFh1jSDK.getMediationNetwork();
        Map<String, Object> map = aFh1jSDK.getCurrencyIso4217Code;
        long time = new Date().getTime();
        Object[] objArr = new Object[1];
        a(null, "\u0089\u0086\u0081\u0084\u0088\u0087\u0086\u0085\u0084\u0083\u0082\u0081", null, TextUtils.indexOf((CharSequence) "", '0', 0, 0) + IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, objArr);
        map.put(((String) objArr[0]).intern(), Long.toString(time));
        try {
            if (monetizationNetwork) {
                f3646d = (AFKeystoreWrapper + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "AppsFlyer SDK Reporting has been stopped", true);
                i5 = AFKeystoreWrapper + 123;
            } else {
                AFLogger aFLogger = AFLogger.INSTANCE;
                AFg1cSDK aFg1cSDK = AFg1cSDK.GENERAL;
                StringBuilder sb2 = new StringBuilder("******* sendTrackingWithEvent: ");
                sb2.append(mediationNetwork ? "Launch" : aFh1jSDK.component4);
                aFLogger.i(aFg1cSDK, sb2.toString(), true);
                i5 = AFKeystoreWrapper + 57;
            }
            f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            component2(context);
            int monetizationNetwork2 = getMonetizationNetwork(aFc1oSDK, mediationNetwork);
            int mediationNetwork2 = getMediationNetwork(aFc1oSDK, aFh1jSDK.component4 != null);
            if (mediationNetwork && monetizationNetwork2 == 1) {
                AppsFlyerProperties.getInstance().getRevenue = true;
            }
            component4.getCurrencyIso4217Code(map, monetizationNetwork2, mediationNetwork2);
        } catch (Throwable th2) {
            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "Error while preparing to send event", th2, true, true, true);
        }
        f3646d = (AFKeystoreWrapper + 115) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return map;
    }

    public final AFc1oSDK getCurrencyIso4217Code(Context context) {
        return (AFc1oSDK) getRevenue(new Object[]{this, context}, -1595266545, 1595266567, System.identityHashCode(this));
    }

    public final AFc1bSDK getCurrencyIso4217Code() {
        return (AFc1bSDK) getRevenue(new Object[]{this}, 389316487, -389316474, System.identityHashCode(this));
    }

    public static boolean getRevenue(Context context) {
        try {
            if (ye.e.f20918d.b(context, ye.f.a) == 0) {
                int i5 = AFKeystoreWrapper + 71;
                f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 != 0) {
                    return true;
                }
                throw null;
            }
        } catch (Throwable th2) {
            AFLogger.afErrorLog("WARNING:  Google play services is unavailable. ", th2);
        }
        try {
            context.getPackageManager().getPackageInfo("com.google.android.gms", 0);
            int i6 = f3646d + 107;
            AFKeystoreWrapper = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 != 0) {
                int i10 = 15 / 0;
            }
            return true;
        } catch (PackageManager.NameNotFoundException e9) {
            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "WARNING:  Google Play Services is unavailable. ", e9);
            return false;
        }
    }

    private static /* synthetic */ Object getRevenue(Object[] objArr) {
        AFa1uSDK aFa1uSDK = (AFa1uSDK) objArr[0];
        PluginInfo pluginInfo = (PluginInfo) objArr[1];
        int i5 = AFKeystoreWrapper + 79;
        f3646d = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            Objects.requireNonNull(pluginInfo);
            ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).e().getMediationNetwork(pluginInfo);
            return null;
        }
        Objects.requireNonNull(pluginInfo);
        ((AFc1bSDK) getRevenue(new Object[]{aFa1uSDK}, 389316487, -389316474, System.identityHashCode(aFa1uSDK))).e().getMediationNetwork(pluginInfo);
        throw null;
    }

    private void getRevenue(Map<String, Object> map) {
        getRevenue(new Object[]{this, map}, 1290570600, -1290570599, System.identityHashCode(this));
    }

    private static void getRevenue(String str, boolean z5) {
        getRevenue(new Object[]{str, Boolean.valueOf(z5)}, -222394073, 222394090, (int) System.currentTimeMillis());
    }
}
