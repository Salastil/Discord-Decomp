package com.appsflyer.internal;

import android.os.Build;
import android.view.ViewConfiguration;
import com.appsflyer.AFLogger;
import com.appsflyer.internal.AFd1xSDK;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.TimeUnit;
import kotlin.Lazy;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.MatchGroup;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class AFd1ySDK implements AFd1xSDK {
    private static int $10 = 0;
    private static int $11 = 1;
    private static long copy = -1417917781629150226L;
    private static int copydefault = 1;
    private static int equals;

    @NotNull
    private final Lazy AFAdRevenueData;

    @NotNull
    private final Lazy areAllFieldsValid;

    @NotNull
    private final String component1;

    @NotNull
    private final Lazy component2;

    @NotNull
    private final Lazy component3;
    private AFd1xSDK.AFa1ySDK component4;

    @NotNull
    private final Lazy getCurrencyIso4217Code;

    @NotNull
    private final Lazy getMediationNetwork;

    @NotNull
    private final Lazy getMonetizationNetwork;

    @NotNull
    private AFc1bSDK getRevenue;

    public AFd1ySDK(@NotNull AFc1bSDK aFc1bSDK) {
        Intrinsics.checkNotNullParameter(aFc1bSDK, "");
        this.getRevenue = aFc1bSDK;
        this.getCurrencyIso4217Code = fo.l.a(new Function0<AFf1lSDK>() { // from class: com.appsflyer.internal.AFd1ySDK.1
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            /* renamed from: getCurrencyIso4217Code, reason: merged with bridge method [inline-methods] */
            public final AFf1lSDK invoke() {
                AFf1lSDK component1 = AFd1ySDK.getMonetizationNetwork(AFd1ySDK.this).component1();
                Intrinsics.checkNotNullExpressionValue(component1, "");
                return component1;
            }
        });
        this.getMediationNetwork = fo.l.a(new Function0<AFc1pSDK>() { // from class: com.appsflyer.internal.AFd1ySDK.5
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            /* renamed from: getMonetizationNetwork, reason: merged with bridge method [inline-methods] */
            public final AFc1pSDK invoke() {
                AFc1pSDK currencyIso4217Code = AFd1ySDK.getMonetizationNetwork(AFd1ySDK.this).getCurrencyIso4217Code();
                Intrinsics.checkNotNullExpressionValue(currencyIso4217Code, "");
                return currencyIso4217Code;
            }
        });
        this.getMonetizationNetwork = fo.l.a(new Function0<AFc1oSDK>() { // from class: com.appsflyer.internal.AFd1ySDK.3
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            /* renamed from: getMonetizationNetwork, reason: merged with bridge method [inline-methods] */
            public final AFc1oSDK invoke() {
                AFc1oSDK component2 = AFd1ySDK.getMonetizationNetwork(AFd1ySDK.this).component2();
                Intrinsics.checkNotNullExpressionValue(component2, "");
                return component2;
            }
        });
        this.AFAdRevenueData = fo.l.a(new Function0<AFf1cSDK>() { // from class: com.appsflyer.internal.AFd1ySDK.9
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            /* renamed from: AFAdRevenueData, reason: merged with bridge method [inline-methods] */
            public final AFf1cSDK invoke() {
                AFf1cSDK AFKeystoreWrapper = AFd1ySDK.getMonetizationNetwork(AFd1ySDK.this).AFKeystoreWrapper();
                Intrinsics.checkNotNullExpressionValue(AFKeystoreWrapper, "");
                return AFKeystoreWrapper;
            }
        });
        this.component2 = fo.l.a(new Function0<ExecutorService>() { // from class: com.appsflyer.internal.AFd1ySDK.2
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            /* renamed from: getCurrencyIso4217Code, reason: merged with bridge method [inline-methods] */
            public final ExecutorService invoke() {
                ExecutorService mediationNetwork = AFd1ySDK.getMonetizationNetwork(AFd1ySDK.this).getMediationNetwork();
                Intrinsics.checkNotNullExpressionValue(mediationNetwork, "");
                return mediationNetwork;
            }
        });
        this.component1 = "6.17.3";
        this.areAllFieldsValid = fo.l.a(new Function0<AFd1uSDK>() { // from class: com.appsflyer.internal.AFd1ySDK.4
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            /* renamed from: getMediationNetwork, reason: merged with bridge method [inline-methods] */
            public final AFd1uSDK invoke() {
                AFc1gSDK registerClient = AFd1ySDK.getMonetizationNetwork(AFd1ySDK.this).registerClient();
                Intrinsics.checkNotNullExpressionValue(registerClient, "");
                return new AFd1uSDK(registerClient);
            }
        });
        this.component3 = fo.l.a(new Function0<AFd1vSDK>() { // from class: com.appsflyer.internal.AFd1ySDK.6
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            /* renamed from: AFAdRevenueData, reason: merged with bridge method [inline-methods] */
            public final AFd1vSDK invoke() {
                return new AFd1vSDK(AFd1ySDK.this.AFAdRevenueData());
            }
        });
    }

    private final AFh1aSDK areAllFieldsValid() {
        AFi1zSDK aFi1zSDK;
        int i5 = copydefault + 53;
        equals = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            AFi1wSDK aFi1wSDK = getMediationNetwork().AFAdRevenueData.AFAdRevenueData;
            throw null;
        }
        AFi1wSDK aFi1wSDK2 = getMediationNetwork().AFAdRevenueData.AFAdRevenueData;
        if (aFi1wSDK2 != null && (aFi1zSDK = aFi1wSDK2.getMonetizationNetwork) != null) {
            equals = (copydefault + 37) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return aFi1zSDK.getCurrencyIso4217Code;
        }
        int i6 = copydefault + 79;
        equals = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            return null;
        }
        throw null;
    }

    private final AFf1cSDK component1() {
        equals = (copydefault + 17) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFf1cSDK aFf1cSDK = (AFf1cSDK) this.AFAdRevenueData.getValue();
        int i5 = copydefault + 113;
        equals = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            return aFf1cSDK;
        }
        throw null;
    }

    @NotNull
    private AFd1wSDK component2() {
        int i5 = equals + 29;
        copydefault = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return (AFd1wSDK) this.component3.getValue();
        }
        throw null;
    }

    private final AFc1oSDK component3() {
        equals = (copydefault + 97) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFc1oSDK aFc1oSDK = (AFc1oSDK) this.getMonetizationNetwork.getValue();
        copydefault = (equals + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return aFc1oSDK;
    }

    private final ExecutorService component4() {
        return (ExecutorService) getRevenue(new Object[]{this}, -1221964614, 1221964616, System.identityHashCode(this));
    }

    private final void copy() {
        String mediationNetwork;
        int i5 = equals + 101;
        copydefault = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            areAllFieldsValid();
            throw null;
        }
        AFh1aSDK areAllFieldsValid = areAllFieldsValid();
        if (areAllFieldsValid != null) {
            if (!AFAdRevenueData(areAllFieldsValid)) {
                AFh1ySDK.v$default(AFLogger.INSTANCE, AFg1cSDK.EXCEPTION_MANAGER, "skipping", false, 4, null);
                return;
            }
            int i6 = equals + 23;
            copydefault = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 == 0) {
                mediationNetwork = component1().getMediationNetwork();
                int i10 = 66 / 0;
                if (mediationNetwork == null) {
                    return;
                }
            } else {
                mediationNetwork = component1().getMediationNetwork();
                if (mediationNetwork == null) {
                    return;
                }
            }
            String jSONObject = new JSONObject((Map) getRevenue(new Object[]{getCurrencyIso4217Code(areAllFieldsValid), AFAdRevenueData().getMediationNetwork()}, -1519321264, 1519321264, (int) System.currentTimeMillis())).toString();
            Intrinsics.checkNotNullExpressionValue(jSONObject, "");
            Intrinsics.checkNotNullExpressionValue(mediationNetwork, "");
            getRevenue(new Object[]{this, jSONObject, mediationNetwork}, -1047452469, 1047452473, System.identityHashCode(this));
        }
    }

    private final synchronized void copydefault() {
        boolean z5;
        try {
            AFh1aSDK areAllFieldsValid = areAllFieldsValid();
            if (areAllFieldsValid != null) {
                if (areAllFieldsValid.getRevenue == -1) {
                    equals = (copydefault + 109) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    component3().getCurrencyIso4217Code("af_send_exc_to_server_window");
                } else if (component3().getCurrencyIso4217Code("af_send_exc_to_server_window", -1L) == -1) {
                    getMediationNetwork(areAllFieldsValid);
                }
                z5 = getMonetizationNetwork(areAllFieldsValid);
            } else {
                z5 = false;
            }
            AFd1xSDK.AFa1ySDK aFa1ySDK = this.component4;
            if (aFa1ySDK != null) {
                int i5 = equals + 67;
                copydefault = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 != 0) {
                    aFa1ySDK.onConfigurationChanged(z5);
                } else {
                    aFa1ySDK.onConfigurationChanged(z5);
                    throw null;
                }
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:101:0x0095, code lost:
    
        if (r4 != null) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x00a6, code lost:
    
        if (r4 != null) goto L42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x00ad, code lost:
    
        r4 = kotlin.text.StringsKt.toIntOrNull(r4);
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x00b1, code lost:
    
        if (r4 == null) goto L45;
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x00b3, code lost:
    
        r4 = r4.intValue();
     */
    /* JADX WARN: Code restructure failed: missing block: B:91:0x013c, code lost:
    
        if (r0.intValue() != (-1)) goto L89;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x00ab, code lost:
    
        if (r4 != null) goto L42;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final synchronized void equals() {
        Integer num;
        String str;
        String str2;
        String str3;
        int i5;
        MatchGroup b10;
        MatchGroup b11;
        int i6;
        String str4;
        Integer intOrNull;
        String str5;
        Integer intOrNull2;
        String str6;
        try {
            int i10 = equals + 9;
            copydefault = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            Pair<Integer, Integer> pair = null;
            if (i10 % 2 == 0) {
                areAllFieldsValid();
                throw null;
            }
            AFh1aSDK areAllFieldsValid = areAllFieldsValid();
            if ((areAllFieldsValid != null ? areAllFieldsValid.getMediationNetwork : -1L) < TimeUnit.MILLISECONDS.toSeconds(System.currentTimeMillis())) {
                AFh1ySDK.v$default(AFLogger.INSTANCE, AFg1cSDK.EXCEPTION_MANAGER, "TTL is already passed", false, 4, null);
                component3().getCurrencyIso4217Code("af_send_exc_to_server_window");
                AFAdRevenueData().getCurrencyIso4217Code();
                return;
            }
            AFh1aSDK areAllFieldsValid2 = areAllFieldsValid();
            if (areAllFieldsValid2 == null || !getRevenue(areAllFieldsValid2)) {
                component3().getCurrencyIso4217Code("af_send_exc_to_server_window");
                AFAdRevenueData().getCurrencyIso4217Code();
            } else {
                equals = (copydefault + 107) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                AFh1aSDK areAllFieldsValid3 = areAllFieldsValid();
                if (areAllFieldsValid3 == null || (str3 = areAllFieldsValid3.AFAdRevenueData) == null) {
                    num = null;
                } else {
                    Intrinsics.checkNotNullParameter(str3, "");
                    kotlin.text.m c6 = new Regex("(\\d+).(\\d+).(\\d+).*").c(str3);
                    if (c6 != null) {
                        int i11 = copydefault + 89;
                        equals = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        if (i11 % 2 != 0) {
                            b10 = c6.f13584c.b(0);
                            if (b10 != null) {
                                int i12 = equals + 35;
                                copydefault = i12 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                if (i12 % 2 == 0) {
                                    str6 = b10.a;
                                    int i13 = 5 / 0;
                                } else {
                                    str6 = b10.a;
                                }
                                int i14 = r4 * 1000000;
                                b11 = c6.f13584c.b(2);
                                if (b11 != null || (str5 = b11.a) == null || (intOrNull2 = StringsKt.toIntOrNull(str5)) == null) {
                                    i6 = 0;
                                } else {
                                    equals = (copydefault + 63) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                    i6 = intOrNull2.intValue();
                                }
                                int i15 = (i6 * 1000) + i14;
                                MatchGroup b12 = c6.f13584c.b(3);
                                i5 = i15 + ((b12 != null || (str4 = b12.a) == null || (intOrNull = StringsKt.toIntOrNull(str4)) == null) ? 0 : intOrNull.intValue());
                            }
                            int i16 = 0;
                            int i142 = i16 * 1000000;
                            b11 = c6.f13584c.b(2);
                            if (b11 != null) {
                            }
                            i6 = 0;
                            int i152 = (i6 * 1000) + i142;
                            MatchGroup b122 = c6.f13584c.b(3);
                            i5 = i152 + ((b122 != null || (str4 = b122.a) == null || (intOrNull = StringsKt.toIntOrNull(str4)) == null) ? 0 : intOrNull.intValue());
                        } else {
                            b10 = c6.f13584c.b(1);
                        }
                    } else {
                        i5 = -1;
                    }
                    num = Integer.valueOf(i5);
                }
                AFh1aSDK areAllFieldsValid4 = areAllFieldsValid();
                Pair<Integer, Integer> currencyIso4217Code = (areAllFieldsValid4 == null || (str2 = areAllFieldsValid4.AFAdRevenueData) == null) ? null : AFd1rSDK.getCurrencyIso4217Code(str2);
                AFh1aSDK areAllFieldsValid5 = areAllFieldsValid();
                if (areAllFieldsValid5 != null && (str = areAllFieldsValid5.AFAdRevenueData) != null) {
                    int i17 = equals + 9;
                    copydefault = i17 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (i17 % 2 == 0) {
                        pair = AFd1rSDK.getMonetizationNetwork(str);
                        int i18 = 80 / 0;
                    } else {
                        pair = AFd1rSDK.getMonetizationNetwork(str);
                    }
                }
                if (num != null) {
                }
                if (currencyIso4217Code == null) {
                    AFAdRevenueData().getCurrencyIso4217Code(this.component1);
                }
                if (currencyIso4217Code != null) {
                    AFAdRevenueData().getMediationNetwork(((Number) currencyIso4217Code.f13474d).intValue(), ((Number) currencyIso4217Code.f13475e).intValue());
                } else if (pair != null) {
                    AFAdRevenueData().getMediationNetwork(((Number) pair.f13474d).intValue(), ((Number) pair.f13475e).intValue());
                } else {
                    component3().getCurrencyIso4217Code("af_send_exc_to_server_window");
                    AFAdRevenueData().getCurrencyIso4217Code();
                }
            }
            AFd1xSDK.AFa1ySDK aFa1ySDK = this.component4;
            if (aFa1ySDK != null) {
                AFh1aSDK areAllFieldsValid6 = areAllFieldsValid();
                aFa1ySDK.onConfigurationChanged(areAllFieldsValid6 != null ? getMonetizationNetwork(areAllFieldsValid6) : false);
                return;
            }
            return;
        } catch (Throwable th2) {
            throw th2;
        }
        throw th2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getCurrencyIso4217Code(AFd1ySDK aFd1ySDK) {
        equals = (copydefault + 119) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(aFd1ySDK, "");
        aFd1ySDK.copy();
        equals = (copydefault + 11) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    private final AFf1lSDK getMediationNetwork() {
        AFf1lSDK aFf1lSDK;
        int i5 = copydefault + 121;
        equals = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            aFf1lSDK = (AFf1lSDK) this.getCurrencyIso4217Code.getValue();
            int i6 = 71 / 0;
        } else {
            aFf1lSDK = (AFf1lSDK) this.getCurrencyIso4217Code.getValue();
        }
        equals = (copydefault + 31) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return aFf1lSDK;
    }

    public static final /* synthetic */ AFc1bSDK getMonetizationNetwork(AFd1ySDK aFd1ySDK) {
        int i5 = copydefault;
        equals = (i5 + 19) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFc1bSDK aFc1bSDK = aFd1ySDK.getRevenue;
        equals = (i5 + 97) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return aFc1bSDK;
    }

    public static Object getRevenue(Object[] objArr, int i5, int i6, int i10) {
        int i11 = (i6 * (-929)) + (i5 * (-464));
        int i12 = ~i5;
        int i13 = i6 | i10;
        int i14 = ((i12 | i13) * 465) + ((i6 | (~(i10 | i12))) * 930) + (((~i13) | i12) * (-465)) + i11;
        if (i14 == 1) {
            AFd1ySDK aFd1ySDK = (AFd1ySDK) objArr[0];
            AFd1xSDK.AFa1ySDK aFa1ySDK = (AFd1xSDK.AFa1ySDK) objArr[1];
            copydefault = (equals + 57) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            aFd1ySDK.component4 = aFa1ySDK;
            ((ExecutorService) getRevenue(new Object[]{aFd1ySDK}, -1221964614, 1221964616, System.identityHashCode(aFd1ySDK))).execute(new k(aFd1ySDK, 1));
            copydefault = (equals + 61) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            return null;
        }
        if (i14 == 2) {
            return getMediationNetwork(objArr);
        }
        if (i14 == 3) {
            return AFAdRevenueData(objArr);
        }
        if (i14 == 4) {
            return getCurrencyIso4217Code(objArr);
        }
        Map map = (Map) objArr[0];
        List list = (List) objArr[1];
        equals = (copydefault + 47) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Map g6 = v0.g(new Pair("deviceInfo", map), new Pair("excs", AFd1tSDK.AFAdRevenueData(list)));
        copydefault = (equals + 11) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return g6;
    }

    @NotNull
    public final AFd1zSDK AFAdRevenueData() {
        equals = (copydefault + 119) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        AFd1zSDK aFd1zSDK = (AFd1zSDK) this.areAllFieldsValid.getValue();
        int i5 = equals + 95;
        copydefault = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return aFd1zSDK;
        }
        throw null;
    }

    private static /* synthetic */ Object AFAdRevenueData(Object[] objArr) {
        AFd1ySDK aFd1ySDK = (AFd1ySDK) objArr[0];
        Throwable th2 = (Throwable) objArr[1];
        String str = (String) objArr[2];
        int i5 = equals + 121;
        copydefault = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            Intrinsics.checkNotNullParameter(th2, "");
            Intrinsics.checkNotNullParameter(str, "");
            ((ExecutorService) getRevenue(new Object[]{aFd1ySDK}, -1221964614, 1221964616, System.identityHashCode(aFd1ySDK))).execute(new androidx.fragment.app.e(aFd1ySDK, th2, str, 5));
            return null;
        }
        Intrinsics.checkNotNullParameter(th2, "");
        Intrinsics.checkNotNullParameter(str, "");
        ((ExecutorService) getRevenue(new Object[]{aFd1ySDK}, -1221964614, 1221964616, System.identityHashCode(aFd1ySDK))).execute(new androidx.fragment.app.e(aFd1ySDK, th2, str, 5));
        throw null;
    }

    private static void a(String str, int i5, Object[] objArr) {
        char[] cArr = str;
        if (str != null) {
            $11 = ($10 + 37) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            cArr = str.toCharArray();
        }
        char[] cArr2 = cArr;
        AFk1lSDK aFk1lSDK = new AFk1lSDK();
        aFk1lSDK.getMonetizationNetwork = i5;
        int length = cArr2.length;
        long[] jArr = new long[length];
        aFk1lSDK.getRevenue = 0;
        while (true) {
            int i6 = aFk1lSDK.getRevenue;
            if (i6 >= cArr2.length) {
                break;
            }
            $11 = ($10 + 29) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            jArr[i6] = (cArr2[i6] ^ (i6 * aFk1lSDK.getMonetizationNetwork)) ^ (copy ^ (-2523060390901184290L));
            aFk1lSDK.getRevenue = i6 + 1;
        }
        char[] cArr3 = new char[length];
        aFk1lSDK.getRevenue = 0;
        while (true) {
            int i10 = aFk1lSDK.getRevenue;
            if (i10 >= cArr2.length) {
                break;
            }
            $11 = ($10 + 77) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            cArr3[i10] = (char) jArr[i10];
            aFk1lSDK.getRevenue = i10 + 1;
        }
        String str2 = new String(cArr3);
        int i11 = $11 + 87;
        $10 = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i11 % 2 != 0) {
            throw null;
        }
        objArr[0] = str2;
    }

    private static /* synthetic */ Object getMediationNetwork(Object[] objArr) {
        AFd1ySDK aFd1ySDK = (AFd1ySDK) objArr[0];
        equals = (copydefault + 39) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        ExecutorService executorService = (ExecutorService) aFd1ySDK.component2.getValue();
        int i5 = copydefault + 45;
        equals = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            return executorService;
        }
        throw null;
    }

    private final AFc1pSDK getMonetizationNetwork() {
        AFc1pSDK aFc1pSDK;
        int i5 = copydefault + 49;
        equals = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            aFc1pSDK = (AFc1pSDK) this.getMediationNetwork.getValue();
            int i6 = 51 / 0;
        } else {
            aFc1pSDK = (AFc1pSDK) this.getMediationNetwork.getValue();
        }
        int i10 = equals + 63;
        copydefault = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i10 % 2 != 0) {
            return aFc1pSDK;
        }
        throw null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getMediationNetwork(AFd1ySDK aFd1ySDK, Throwable th2, String str) {
        copydefault = (equals + 67) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Intrinsics.checkNotNullParameter(aFd1ySDK, "");
        Intrinsics.checkNotNullParameter(th2, "");
        Intrinsics.checkNotNullParameter(str, "");
        AFh1aSDK areAllFieldsValid = aFd1ySDK.areAllFieldsValid();
        if (areAllFieldsValid == null || !aFd1ySDK.getMonetizationNetwork(areAllFieldsValid)) {
            return;
        }
        copydefault = (equals + 33) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        aFd1ySDK.AFAdRevenueData().getRevenue(th2, str);
    }

    private final boolean getMonetizationNetwork(AFh1aSDK aFh1aSDK) {
        int i5 = copydefault + 105;
        equals = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            long currentTimeMillis = System.currentTimeMillis();
            long currencyIso4217Code = component3().getCurrencyIso4217Code("af_send_exc_to_server_window", -1L);
            if (aFh1aSDK.getMediationNetwork >= TimeUnit.MILLISECONDS.toSeconds(currentTimeMillis)) {
                if (currencyIso4217Code == -1 || currencyIso4217Code < currentTimeMillis) {
                    return false;
                }
                return getRevenue(aFh1aSDK);
            }
            int i6 = equals + 123;
            copydefault = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 != 0) {
                return false;
            }
            throw null;
        }
        long currentTimeMillis2 = System.currentTimeMillis();
        component3().getCurrencyIso4217Code("af_send_exc_to_server_window", -1L);
        long j = aFh1aSDK.getMediationNetwork;
        TimeUnit.MILLISECONDS.toSeconds(currentTimeMillis2);
        throw null;
    }

    @Override // com.appsflyer.internal.AFd1xSDK
    public final void getCurrencyIso4217Code() {
        int i5 = copydefault + 51;
        equals = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            ((ExecutorService) getRevenue(new Object[]{this}, -1221964614, 1221964616, System.identityHashCode(this))).execute(new k(this, 2));
            equals = (copydefault + 113) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        } else {
            ((ExecutorService) getRevenue(new Object[]{this}, -1221964614, 1221964616, System.identityHashCode(this))).execute(new k(this, 2));
            throw null;
        }
    }

    private final boolean AFAdRevenueData(AFh1aSDK aFh1aSDK) {
        long currentTimeMillis = System.currentTimeMillis();
        long currencyIso4217Code = component3().getCurrencyIso4217Code("af_send_exc_to_server_window", -1L);
        if (aFh1aSDK.getMediationNetwork >= TimeUnit.MILLISECONDS.toSeconds(currentTimeMillis) && currencyIso4217Code != -1) {
            int i5 = copydefault + 51;
            equals = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 != 0) {
                throw null;
            }
            if (currencyIso4217Code >= currentTimeMillis) {
                int mediationNetwork = component3().getMediationNetwork("af_send_exc_min", -1);
                if (mediationNetwork != -1 && AFAdRevenueData().AFAdRevenueData() >= mediationNetwork) {
                    return getRevenue(aFh1aSDK);
                }
                int i6 = copydefault + 103;
                equals = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i6 % 2 != 0) {
                    int i10 = 15 / 0;
                }
                return false;
            }
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getMediationNetwork(AFd1ySDK aFd1ySDK) {
        int i5 = copydefault + 121;
        equals = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            Intrinsics.checkNotNullParameter(aFd1ySDK, "");
            aFd1ySDK.equals();
        } else {
            Intrinsics.checkNotNullParameter(aFd1ySDK, "");
            aFd1ySDK.equals();
            throw null;
        }
    }

    private final Map<String, String> getCurrencyIso4217Code(AFh1aSDK aFh1aSDK) {
        Object[] objArr = new Object[1];
        a("퍒䪹\ue0a7ắ뒸", (ViewConfiguration.getMaximumDrawingCacheSize() >> 24) + 39419, objArr);
        Map<String, String> g6 = v0.g(new Pair(((String) objArr[0]).intern(), Build.BRAND), new Pair("model", Build.MODEL), new Pair("app_id", getMonetizationNetwork().getRevenue.getRevenue.getPackageName()), new Pair("p_ex", new AFa1ySDK().getMediationNetwork()), new Pair("api", String.valueOf(Build.VERSION.SDK_INT)), new Pair("sdk", this.component1), new Pair("uid", AFb1jSDK.getRevenue(getMonetizationNetwork().getMonetizationNetwork)), new Pair("exc_config", aFh1aSDK.getMonetizationNetwork()));
        copydefault = (equals + 109) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return g6;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getRevenue(AFd1ySDK aFd1ySDK) {
        int i5 = equals + 85;
        copydefault = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            Intrinsics.checkNotNullParameter(aFd1ySDK, "");
            aFd1ySDK.copydefault();
        } else {
            Intrinsics.checkNotNullParameter(aFd1ySDK, "");
            aFd1ySDK.copydefault();
            throw null;
        }
    }

    private final void getMediationNetwork(AFh1aSDK aFh1aSDK) {
        int i5;
        AFc1oSDK component3;
        int i6 = equals + 93;
        copydefault = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i6 % 2 == 0) {
            i5 = aFh1aSDK.getCurrencyIso4217Code;
            long currentTimeMillis = System.currentTimeMillis() ^ TimeUnit.DAYS.toMillis(aFh1aSDK.getRevenue);
            component3 = component3();
            component3.getRevenue("af_send_exc_to_server_window", currentTimeMillis);
        } else {
            i5 = aFh1aSDK.getCurrencyIso4217Code;
            long millis = TimeUnit.DAYS.toMillis(aFh1aSDK.getRevenue) + System.currentTimeMillis();
            component3 = component3();
            component3.getRevenue("af_send_exc_to_server_window", millis);
        }
        component3.getRevenue("af_send_exc_min", i5);
    }

    private final void AFAdRevenueData(String str, String str2) {
        getRevenue(new Object[]{this, str, str2}, -1047452469, 1047452473, System.identityHashCode(this));
    }

    @Override // com.appsflyer.internal.AFd1xSDK
    public final void getRevenue() {
        int i5 = equals + 41;
        copydefault = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            ((ExecutorService) getRevenue(new Object[]{this}, -1221964614, 1221964616, System.identityHashCode(this))).execute(new k(this, 0));
            int i6 = 23 / 0;
        } else {
            ((ExecutorService) getRevenue(new Object[]{this}, -1221964614, 1221964616, System.identityHashCode(this))).execute(new k(this, 0));
        }
        equals = (copydefault + 121) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    private final boolean getRevenue(AFh1aSDK aFh1aSDK) {
        new AFd1sSDK();
        String str = this.component1;
        String str2 = aFh1aSDK.AFAdRevenueData;
        Intrinsics.checkNotNullExpressionValue(str2, "");
        boolean currencyIso4217Code = AFd1sSDK.getCurrencyIso4217Code(str, str2);
        int i5 = equals + 23;
        copydefault = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            return currencyIso4217Code;
        }
        throw null;
    }

    private static Map<String, Object> getRevenue(Map<String, ? extends Object> map, List<AFc1cSDK> list) {
        return (Map) getRevenue(new Object[]{map, list}, -1519321264, 1519321264, (int) System.currentTimeMillis());
    }

    @Override // com.appsflyer.internal.AFd1xSDK
    public final void getMediationNetwork(AFd1xSDK.AFa1ySDK aFa1ySDK) {
        getRevenue(new Object[]{this, aFa1ySDK}, -704073125, 704073126, System.identityHashCode(this));
    }

    @Override // com.appsflyer.internal.AFd1xSDK
    public final void getRevenue(@NotNull Throwable th2, @NotNull String str) {
        getRevenue(new Object[]{this, th2, str}, 1146782962, -1146782959, System.identityHashCode(this));
    }

    private static Object getCurrencyIso4217Code(Object[] objArr) {
        AFd1ySDK aFd1ySDK = (AFd1ySDK) objArr[0];
        String str = (String) objArr[1];
        String str2 = (String) objArr[2];
        equals = (copydefault + 41) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        byte[] bytes = str.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "");
        aFd1ySDK.component2().getRevenue(bytes, a3.e.u("Authorization", AFj1bSDK.getRevenue(str, str2)), 2000);
        int i5 = copydefault + 37;
        equals = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            return null;
        }
        throw null;
    }
}
