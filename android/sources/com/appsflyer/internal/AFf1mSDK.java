package com.appsflyer.internal;

import android.text.TextUtils;
import android.util.Base64;
import androidx.annotation.NonNull;
import com.appsflyer.AFLogger;
import com.appsflyer.internal.components.network.http.exceptions.HttpException;
import com.appsflyer.internal.components.network.http.exceptions.ParsingException;
import com.discord.js_watchdog.JSWatchdogManagerKt;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.SocketTimeoutException;
import java.nio.charset.Charset;

/* loaded from: classes.dex */
public final class AFf1mSDK extends AFe1lSDK<AFf1oSDK> {
    private final AFc1pSDK areAllFieldsValid;
    public final AFf1nSDK component1;
    public AFf1oSDK component2;
    public AFi1vSDK component3;
    private final AFf1qSDK component4;
    private final String copy;
    private final AFf1iSDK copydefault;
    private final AFf1hSDK equals;
    private final AFf1cSDK hashCode;
    private final AFd1lSDK toString;

    public AFf1mSDK(@NonNull AFf1qSDK aFf1qSDK, @NonNull AFc1pSDK aFc1pSDK, @NonNull AFf1cSDK aFf1cSDK, @NonNull AFf1iSDK aFf1iSDK, @NonNull AFd1lSDK aFd1lSDK, @NonNull AFf1hSDK aFf1hSDK, @NonNull String str, AFf1nSDK aFf1nSDK) {
        super(AFe1mSDK.RC_CDN, new AFe1mSDK[0], "UpdateRemoteConfiguration");
        this.component2 = null;
        this.component4 = aFf1qSDK;
        this.areAllFieldsValid = aFc1pSDK;
        this.hashCode = aFf1cSDK;
        this.copydefault = aFf1iSDK;
        this.toString = aFd1lSDK;
        this.equals = aFf1hSDK;
        this.copy = str;
        this.component1 = aFf1nSDK;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x005e A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0052  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private AFf1oSDK component2() {
        String str;
        long currentTimeMillis = System.currentTimeMillis();
        String str2 = this.copy;
        String mediationNetwork = this.hashCode.getMediationNetwork();
        if (mediationNetwork == null || mediationNetwork.trim().length() == 0) {
            AFLogger.INSTANCE.w(AFg1cSDK.REMOTE_CONTROL, "Dev key is not set, SDK is not started.");
        } else if (str2 == null) {
            AFLogger.INSTANCE.w(AFg1cSDK.REMOTE_CONTROL, "Can't create CDN token, domain or version is not provided.");
        } else {
            str = AFj1bSDK.getRevenue(TextUtils.join("\u2063", new String[]{"appsflyersdk.com", str2, this.areAllFieldsValid.getRevenue.getRevenue.getPackageName()}), mediationNetwork);
            if (str != null) {
                AFLogger.INSTANCE.v(AFg1cSDK.REMOTE_CONTROL, "can't create CDN token, skipping fetch config");
                return AFf1oSDK.FAILURE;
            }
            try {
                if (!this.equals.getRevenue()) {
                    AFLogger.INSTANCE.d(AFg1cSDK.REMOTE_CONTROL, "active config is valid, skipping fetch");
                    return AFf1oSDK.USE_CACHED;
                }
                AFLogger aFLogger = AFLogger.INSTANCE;
                AFg1cSDK aFg1cSDK = AFg1cSDK.REMOTE_CONTROL;
                aFLogger.i(aFg1cSDK, "Cached config is expired, updating...");
                AFe1xSDK<AFi1wSDK> AFAdRevenueData = this.toString.getMonetizationNetwork(this.equals.getCurrencyIso4217Code(), this.equals.AFAdRevenueData(), str, JSWatchdogManagerKt.FREEZE_CHECK_DELAY_MS).AFAdRevenueData();
                if (!AFAdRevenueData.isSuccessful()) {
                    getRevenue(str, currentTimeMillis, null, null, AFAdRevenueData);
                    StringBuilder sb2 = new StringBuilder("failed to fetch remote config from CDN with status code: ");
                    sb2.append(AFAdRevenueData.getStatusCode());
                    aFLogger.w(aFg1cSDK, sb2.toString());
                    return AFf1oSDK.FAILURE;
                }
                AFi1wSDK body = AFAdRevenueData.getBody();
                String mediationNetwork2 = AFAdRevenueData.getMediationNetwork("x-amz-meta-af-auth-v1");
                String mediationNetwork3 = AFAdRevenueData.getMediationNetwork("CF-Cache-Status");
                String mediationNetwork4 = this.hashCode.getMediationNetwork();
                if (mediationNetwork4 == null || mediationNetwork4.trim().length() == 0) {
                    aFLogger.w(aFg1cSDK, "Dev key is not set, SDK is not started.");
                    return AFf1oSDK.FAILURE;
                }
                AFi1rSDK revenue = this.component4.getRevenue(body, mediationNetwork2, str, mediationNetwork4);
                if (!revenue.getRevenue()) {
                    getRevenue(str, currentTimeMillis, revenue.getMediationNetwork, mediationNetwork3, AFAdRevenueData);
                    aFLogger.w(aFg1cSDK, "fetched config is not valid (MITM?) refuse to use it.");
                    return AFf1oSDK.FAILURE;
                }
                long monetizationNetwork = this.equals.getMonetizationNetwork();
                StringBuilder sb3 = new StringBuilder("using max-age fallback: ");
                sb3.append(monetizationNetwork);
                sb3.append(" seconds");
                aFLogger.v(aFg1cSDK, sb3.toString());
                long currentTimeMillis2 = System.currentTimeMillis();
                AFf1iSDK aFf1iSDK = this.copydefault;
                String str3 = str;
                try {
                    try {
                        aFf1iSDK.getMonetizationNetwork.AFAdRevenueData("af_remote_config", Base64.encodeToString(body.getRevenue.getBytes(Charset.defaultCharset()), 2));
                        aFf1iSDK.getMediationNetwork = aFf1iSDK.AFAdRevenueData;
                        aFf1iSDK.getMonetizationNetwork.getRevenue("af_rc_timestamp", currentTimeMillis2);
                        aFf1iSDK.getMonetizationNetwork.getRevenue("af_rc_max_age", monetizationNetwork);
                        aFf1iSDK.AFAdRevenueData = body;
                        aFf1iSDK.getCurrencyIso4217Code = currentTimeMillis2;
                        aFf1iSDK.getRevenue = monetizationNetwork;
                        StringBuilder sb4 = new StringBuilder("Config successfully updated, timeToLive: ");
                        sb4.append(monetizationNetwork);
                        sb4.append(" seconds");
                        aFLogger.d(aFg1cSDK, sb4.toString());
                        getRevenue(str3, currentTimeMillis, revenue.getMediationNetwork, mediationNetwork3, AFAdRevenueData);
                        return AFf1oSDK.SUCCESS;
                    } catch (IOException e9) {
                        e = e9;
                        str = str3;
                        currentTimeMillis = currentTimeMillis;
                        IOException iOException = e;
                        AFLogger aFLogger2 = AFLogger.INSTANCE;
                        AFg1cSDK aFg1cSDK2 = AFg1cSDK.REMOTE_CONTROL;
                        StringBuilder sb5 = new StringBuilder("failed to fetch remote config: ");
                        sb5.append(iOException.getMessage());
                        aFLogger2.e(aFg1cSDK2, sb5.toString(), iOException, true, false, false);
                        getMediationNetwork(str, currentTimeMillis, iOException instanceof ParsingException ? ((ParsingException) iOException).getRawResponse() : null, null, null, null, iOException);
                        if (iOException.getCause() instanceof InterruptedIOException) {
                            throw ((InterruptedIOException) iOException.getCause());
                        }
                        return AFf1oSDK.FAILURE;
                    } catch (Throwable th2) {
                        th = th2;
                        str = str3;
                        currentTimeMillis = currentTimeMillis;
                        Throwable th3 = th;
                        AFLogger aFLogger3 = AFLogger.INSTANCE;
                        AFg1cSDK aFg1cSDK3 = AFg1cSDK.REMOTE_CONTROL;
                        StringBuilder sb6 = new StringBuilder("failed to update remote config: ");
                        sb6.append(th3.getMessage());
                        aFLogger3.e(aFg1cSDK3, sb6.toString(), th3, true, false, false);
                        getMediationNetwork(str, currentTimeMillis, null, null, null, null, th3);
                        if (th3.getCause() instanceof InterruptedException) {
                            throw ((InterruptedException) th3.getCause());
                        }
                        return AFf1oSDK.FAILURE;
                    }
                } catch (IOException e10) {
                    e = e10;
                    str = str3;
                } catch (Throwable th4) {
                    th = th4;
                    str = str3;
                }
            } catch (IOException e11) {
                e = e11;
            } catch (Throwable th5) {
                th = th5;
            }
        }
        str = null;
        if (str != null) {
        }
    }

    private void getRevenue(String str, long j, AFi1uSDK aFi1uSDK, String str2, AFe1xSDK<AFi1wSDK> aFe1xSDK) {
        getMediationNetwork(str, j, aFe1xSDK, aFe1xSDK != null ? aFe1xSDK.getBody() : null, aFi1uSDK, str2 != null ? str2 : null, null);
    }

    @Override // com.appsflyer.internal.AFe1lSDK
    public final boolean AFAdRevenueData() {
        return false;
    }

    @Override // com.appsflyer.internal.AFe1lSDK
    public final long getCurrencyIso4217Code() {
        return 1500L;
    }

    @Override // com.appsflyer.internal.AFe1lSDK
    @NonNull
    public final AFe1uSDK getMediationNetwork() {
        try {
            AFf1oSDK component2 = component2();
            this.component2 = component2;
            return component2 == AFf1oSDK.FAILURE ? AFe1uSDK.FAILURE : AFe1uSDK.SUCCESS;
        } catch (InterruptedIOException e9) {
            e = e9;
            AFLogger.INSTANCE.e(AFg1cSDK.REMOTE_CONTROL, "RC update config failed", e, false, false, false);
            this.component2 = AFf1oSDK.FAILURE;
            return AFe1uSDK.TIMEOUT;
        } catch (InterruptedException e10) {
            e = e10;
            AFLogger.INSTANCE.e(AFg1cSDK.REMOTE_CONTROL, "RC update config failed", e, false, false, false);
            this.component2 = AFf1oSDK.FAILURE;
            return AFe1uSDK.TIMEOUT;
        } catch (SocketTimeoutException unused) {
            this.component2 = AFf1oSDK.FAILURE;
            return AFe1uSDK.TIMEOUT;
        }
    }

    private void getMediationNetwork(String str, long j, AFe1xSDK<?> aFe1xSDK, AFi1wSDK aFi1wSDK, AFi1uSDK aFi1uSDK, String str2, Throwable th2) {
        long j5;
        int i5;
        Throwable th3;
        if (aFe1xSDK != null) {
            j5 = aFe1xSDK.AFAdRevenueData.getRevenue;
            i5 = aFe1xSDK.getStatusCode();
        } else {
            j5 = 0;
            i5 = 0;
        }
        int i6 = i5;
        if (th2 instanceof HttpException) {
            Throwable cause = th2.getCause();
            j5 = ((HttpException) th2).getMetrics().getRevenue;
            th3 = cause;
        } else {
            th3 = th2;
        }
        this.component3 = new AFi1vSDK(aFi1wSDK != null ? aFi1wSDK.getCurrencyIso4217Code : null, str, j5, System.currentTimeMillis() - j, i6, aFi1uSDK, str2, th3);
    }
}
