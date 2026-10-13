package com.appsflyer.internal;

import android.annotation.SuppressLint;
import android.content.ContentProviderClient;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import com.appsflyer.AFLogger;
import com.appsflyer.internal.AFj1qSDK;
import com.appsflyer.internal.AFj1tSDK;
import com.discord.intents.BuildConfig;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@SourceDebugExtension({"SMAP\nMetaReferrer.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MetaReferrer.kt\ncom/appsflyer/internal/referrer/MetaReferrer\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,295:1\n1#2:296\n*E\n"})
/* loaded from: classes.dex */
public final class AFj1wSDK extends AFi1aSDK {

    @NotNull
    private final AFj1xSDK component2;

    @NotNull
    private final Runnable component3;

    @NotNull
    private final AFc1pSDK getMediationNetwork;

    @NotNull
    private final ExecutorService getRevenue;
    private String toString;

    public /* synthetic */ class AFa1vSDK {
        public static final /* synthetic */ int[] getRevenue;

        static {
            int[] iArr = new int[AFj1xSDK.values().length];
            try {
                iArr[AFj1xSDK.FACEBOOK.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[AFj1xSDK.INSTAGRAM.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[AFj1xSDK.FACEBOOK_LITE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            getRevenue = iArr;
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public AFj1wSDK(@NotNull AFc1pSDK aFc1pSDK, @NotNull ExecutorService executorService, @NotNull AFj1xSDK aFj1xSDK, @NotNull Runnable runnable, @NotNull Runnable runnable2) {
        super("app", r0, aFc1pSDK, runnable);
        String str;
        Intrinsics.checkNotNullParameter(aFc1pSDK, "");
        Intrinsics.checkNotNullParameter(executorService, "");
        Intrinsics.checkNotNullParameter(aFj1xSDK, "");
        Intrinsics.checkNotNullParameter(runnable, "");
        Intrinsics.checkNotNullParameter(runnable2, "");
        int i5 = AFj1tSDK.AFa1zSDK.AFAdRevenueData[aFj1xSDK.ordinal()];
        if (i5 == 1) {
            str = "facebook";
        } else if (i5 == 2) {
            str = "instagram";
        } else {
            if (i5 != 3) {
                throw new fo.n();
            }
            str = "facebook_lite";
        }
        this.getMediationNetwork = aFc1pSDK;
        this.getRevenue = executorService;
        this.component2 = aFj1xSDK;
        this.component3 = runnable2;
    }

    private final boolean AFAdRevenueData(Context context) {
        int i5 = AFa1vSDK.getRevenue[this.component2.ordinal()];
        if (i5 == 1) {
            return getRevenue(context);
        }
        if (i5 == 2) {
            return getMediationNetwork(context);
        }
        if (i5 == 3) {
            return component2(context);
        }
        throw new fo.n();
    }

    private static boolean component2(Context context) {
        return context.getPackageManager().resolveContentProvider("com.facebook.lite.provider.InstallReferrerProvider", 0) != null;
    }

    private static boolean getMediationNetwork(Context context) {
        return context.getPackageManager().resolveContentProvider("com.instagram.contentprovider.InstallReferrerProvider", 0) != null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:26:0x008a, code lost:
    
        if (r0 == null) goto L35;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final boolean getMonetizationNetwork(Context context) {
        if (!getMediationNetwork()) {
            AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Referrer collection disallowed by counter.", false, 4, null);
            return false;
        }
        String monetizationNetwork = this.getMediationNetwork.getMonetizationNetwork("com.facebook.sdk.ApplicationId");
        String str = null;
        String N = monetizationNetwork != null ? StringsKt.N(monetizationNetwork, "fb") : null;
        if (N == null || N.length() == 0) {
            AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Facebook app id Manifest metadata is not found.", false, 4, null);
            N = null;
        }
        if (N == null) {
            String mediationNetwork = this.getMediationNetwork.getMediationNetwork("facebook_application_id");
            N = mediationNetwork != null ? StringsKt.N(mediationNetwork, "fb") : null;
            if (N == null || N.length() == 0) {
                AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Facebook app id string resource is not found.", false, 4, null);
                N = null;
            }
            if (N == null) {
                String monetizationNetwork2 = this.getMediationNetwork.getMonetizationNetwork("com.appsflyer.FacebookApplicationId");
                N = monetizationNetwork2 != null ? StringsKt.N(monetizationNetwork2, "fb") : null;
                if (N == null || N.length() == 0) {
                    AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "AF Facebook app id Manifest metadata is not found.", false, 4, null);
                    N = null;
                }
            }
        }
        str = N;
        this.toString = str;
        if (str == null) {
            AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Referrer collection disallowed by missing Facebook app id.", false, 4, null);
            return false;
        }
        if (AFAdRevenueData(context)) {
            return true;
        }
        AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Referrer collection disallowed by missing content providers.", false, 4, null);
        return false;
    }

    private static boolean getRevenue(Context context) {
        return context.getPackageManager().resolveContentProvider("com.facebook.katana.provider.InstallReferrerProvider", 0) != null;
    }

    @Override // com.appsflyer.internal.AFj1qSDK
    @SuppressLint({"NewApi"})
    public final void getCurrencyIso4217Code(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "");
        if (getMonetizationNetwork(context)) {
            this.getRevenue.execute(new h(4, this, context));
        } else {
            this.component3.run();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x023d, code lost:
    
        if (r25 != null) goto L72;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x0228, code lost:
    
        r25.close();
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0226, code lost:
    
        if (r25 != null) goto L72;
     */
    /* JADX WARN: Code restructure failed: missing block: B:69:0x026f, code lost:
    
        if (r25 == null) goto L85;
     */
    /* JADX WARN: Removed duplicated region for block: B:14:0x00ff  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0101 A[Catch: all -> 0x0073, TRY_LEAVE, TryCatch #1 {all -> 0x0073, blocks: (B:10:0x004c, B:12:0x0052, B:18:0x0101, B:81:0x007a, B:83:0x008b, B:84:0x0090, B:85:0x0091, B:87:0x0097, B:88:0x00b7, B:89:0x00c7, B:91:0x00cd, B:92:0x00ed), top: B:5:0x0045 }] */
    /* JADX WARN: Removed duplicated region for block: B:68:0x026c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final void getCurrencyIso4217Code(AFj1wSDK aFj1wSDK, Context context) {
        String str;
        Throwable th2;
        Cursor cursor;
        ContentProviderClient contentProviderClient;
        int[] iArr;
        int i5;
        Uri parse;
        String str2;
        String str3;
        Intrinsics.checkNotNullParameter(aFj1wSDK, "");
        Intrinsics.checkNotNullParameter(context, "");
        aFj1wSDK.component1 = System.currentTimeMillis();
        aFj1wSDK.areAllFieldsValid = AFj1qSDK.AFa1vSDK.STARTED;
        aFj1wSDK.addObserver(new AFj1qSDK.AnonymousClass1());
        String str4 = aFj1wSDK.toString;
        Intrinsics.checkNotNull(str4);
        try {
            AFj1xSDK aFj1xSDK = aFj1wSDK.component2;
            iArr = AFa1vSDK.getRevenue;
            i5 = iArr[aFj1xSDK.ordinal()];
            str = "Error while collecting Meta Install Referrer for ";
        } catch (Throwable th3) {
            th = th3;
            str = "Error while collecting Meta Install Referrer for ";
        }
        try {
            if (i5 != 1) {
                if (i5 != 2) {
                    if (i5 == 3) {
                        if (component2(context)) {
                            AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Found Facebook Lite content provider", false, 4, null);
                            parse = Uri.parse("content://com.facebook.lite.provider.InstallReferrerProvider/" + str4);
                            if (parse == null) {
                                contentProviderClient = context.getContentResolver().acquireUnstableContentProviderClient(parse);
                                try {
                                    Cursor query = contentProviderClient != null ? contentProviderClient.query(parse, new String[]{"install_referrer", "is_ct", "actual_timestamp"}, null, null, null) : null;
                                    if (query != null) {
                                        try {
                                            if (query.moveToFirst()) {
                                                int columnIndex = query.getColumnIndex("install_referrer");
                                                if (columnIndex != -1) {
                                                    str2 = query.getString(columnIndex);
                                                } else {
                                                    AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "No such column, " + aFj1wSDK.component2 + " provider", false, 4, null);
                                                    str2 = null;
                                                }
                                                if (str2 != null) {
                                                    AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Collected " + aFj1wSDK.component2 + " attribution data.", false, 4, null);
                                                    Map<String, Object> map = aFj1wSDK.AFAdRevenueData;
                                                    Intrinsics.checkNotNullExpressionValue(map, "");
                                                    map.put("response", "OK");
                                                    Map<String, Object> map2 = aFj1wSDK.AFAdRevenueData;
                                                    Intrinsics.checkNotNullExpressionValue(map2, "");
                                                    map2.put("referrer", str2);
                                                    int columnIndex2 = query.getColumnIndex("actual_timestamp");
                                                    Long valueOf = columnIndex2 != -1 ? Long.valueOf(query.getLong(columnIndex2)) : null;
                                                    if (valueOf != null) {
                                                        aFj1wSDK.AFAdRevenueData.put("click_ts", Long.valueOf(valueOf.longValue()));
                                                    }
                                                    int columnIndex3 = query.getColumnIndex("is_ct");
                                                    Integer valueOf2 = columnIndex3 != -1 ? Integer.valueOf(query.getInt(columnIndex3)) : null;
                                                    if (valueOf2 != null) {
                                                        aFj1wSDK.AFAdRevenueData.put("meta_custom", v0.h(new Pair("is_ct", Integer.valueOf(valueOf2.intValue()))));
                                                    }
                                                    int i6 = iArr[aFj1wSDK.component2.ordinal()];
                                                    if (i6 == 1) {
                                                        str3 = "com.facebook.katana";
                                                    } else if (i6 == 2) {
                                                        str3 = BuildConfig.PACKAGE_INSTAGRAM;
                                                    } else if (i6 == 3) {
                                                        str3 = "com.facebook.lite";
                                                    } else {
                                                        throw new fo.n();
                                                    }
                                                    Map<String, Object> map3 = aFj1wSDK.AFAdRevenueData;
                                                    Intrinsics.checkNotNullExpressionValue(map3, "");
                                                    map3.put("api_ver", Long.valueOf(AFj1iSDK.getCurrencyIso4217Code(context, str3)));
                                                    Map<String, Object> map4 = aFj1wSDK.AFAdRevenueData;
                                                    Intrinsics.checkNotNullExpressionValue(map4, "");
                                                    map4.put("api_ver_name", AFj1iSDK.getRevenue(context, str3));
                                                }
                                                query.close();
                                            }
                                        } catch (Throwable th4) {
                                            th2 = th4;
                                            cursor = query;
                                            try {
                                                AFh1ySDK.e$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, str + aFj1wSDK.component2.name() + " provider", th2, false, false, false, false, 120, null);
                                                if (cursor != null) {
                                                }
                                            } catch (Throwable th5) {
                                                if (cursor != null) {
                                                    cursor.close();
                                                }
                                                if (contentProviderClient != null) {
                                                    contentProviderClient.close();
                                                }
                                                throw th5;
                                            }
                                        }
                                    }
                                    AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Content provider returned no data", false, 4, null);
                                    if (query != null) {
                                        query.close();
                                    }
                                } catch (Throwable th6) {
                                    th2 = th6;
                                    cursor = null;
                                }
                            }
                        } else {
                            AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Facebook Lite content provider not found", false, 4, null);
                            parse = null;
                            if (parse == null) {
                            }
                        }
                    } else {
                        throw new fo.n();
                    }
                } else if (getMediationNetwork(context)) {
                    AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Found Instagram content provider", false, 4, null);
                    parse = Uri.parse("content://com.instagram.contentprovider.InstallReferrerProvider/" + str4);
                    if (parse == null) {
                    }
                } else {
                    AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Instagram content provider not found", false, 4, null);
                    parse = null;
                    if (parse == null) {
                    }
                }
            } else if (getRevenue(context)) {
                AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Found Facebook content provider", false, 4, null);
                parse = Uri.parse("content://com.facebook.katana.provider.InstallReferrerProvider/" + str4);
                if (parse == null) {
                }
            } else {
                AFh1ySDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Facebook content provider not found", false, 4, null);
                parse = null;
                if (parse == null) {
                }
            }
        } catch (Throwable th7) {
            th = th7;
            th2 = th;
            cursor = null;
            contentProviderClient = null;
            AFh1ySDK.e$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, str + aFj1wSDK.component2.name() + " provider", th2, false, false, false, false, 120, null);
            if (cursor != null) {
                cursor.close();
            }
        }
        aFj1wSDK.getMonetizationNetwork();
        aFj1wSDK.component3.run();
    }
}
