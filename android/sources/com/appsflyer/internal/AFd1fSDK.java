package com.appsflyer.internal;

import androidx.annotation.NonNull;
import com.appsflyer.AFLogger;
import com.appsflyer.internal.components.network.http.exceptions.HttpException;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.nio.charset.Charset;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes.dex */
public final class AFd1fSDK {
    private final int AFAdRevenueData;

    public AFd1fSDK(int i5) {
        this.AFAdRevenueData = i5;
    }

    /* JADX WARN: Removed duplicated region for block: B:28:0x006c  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0071  */
    /* JADX WARN: Removed duplicated region for block: B:32:? A[SYNTHETIC] */
    @NonNull
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String getCurrencyIso4217Code(HttpURLConnection httpURLConnection) {
        Throwable th2;
        BufferedReader bufferedReader;
        InputStream errorStream;
        InputStreamReader inputStreamReader = null;
        try {
            try {
                errorStream = httpURLConnection.getInputStream();
            } catch (Exception e9) {
                errorStream = httpURLConnection.getErrorStream();
                AFLogger.INSTANCE.e(AFg1cSDK.HTTP_CLIENT, e9.getMessage() != null ? e9.getMessage() : "", e9, false, false, false, false);
            }
            if (errorStream == null) {
                return "";
            }
            StringBuilder sb2 = new StringBuilder();
            InputStreamReader inputStreamReader2 = new InputStreamReader(errorStream, Charset.defaultCharset());
            try {
                BufferedReader bufferedReader2 = new BufferedReader(inputStreamReader2);
                boolean z5 = true;
                while (true) {
                    try {
                        String readLine = bufferedReader2.readLine();
                        if (readLine == null) {
                            String obj = sb2.toString();
                            inputStreamReader2.close();
                            bufferedReader2.close();
                            return obj;
                        }
                        if (!z5) {
                            sb2.append('\n');
                        }
                        sb2.append(readLine);
                        z5 = false;
                    } catch (Throwable th3) {
                        bufferedReader = bufferedReader2;
                        th2 = th3;
                        inputStreamReader = inputStreamReader2;
                        if (inputStreamReader != null) {
                            inputStreamReader.close();
                        }
                        if (bufferedReader != null) {
                            throw th2;
                        }
                        bufferedReader.close();
                        throw th2;
                    }
                }
            } catch (Throwable th4) {
                th2 = th4;
                bufferedReader = null;
            }
        } catch (Throwable th5) {
            th2 = th5;
            bufferedReader = null;
            if (inputStreamReader != null) {
            }
            if (bufferedReader != null) {
            }
        }
    }

    public final AFe1xSDK<String> AFAdRevenueData(AFd1dSDK aFd1dSDK) {
        Throwable th2;
        HttpURLConnection httpURLConnection;
        BufferedOutputStream bufferedOutputStream;
        long currentTimeMillis = System.currentTimeMillis();
        try {
            byte[] mediationNetwork = aFd1dSDK.getMediationNetwork();
            StringBuilder sb2 = new StringBuilder();
            sb2.append(aFd1dSDK.getMonetizationNetwork);
            sb2.append(":");
            sb2.append(aFd1dSDK.getRevenue);
            StringBuilder sb3 = new StringBuilder(sb2.toString());
            byte[] mediationNetwork2 = aFd1dSDK.getMediationNetwork();
            if (aFd1dSDK.AFAdRevenueData() && mediationNetwork2 != null) {
                try {
                    String str = aFd1dSDK.getRevenue() ? "<encrypted>" : new String(mediationNetwork2, Charset.defaultCharset());
                    sb3.append("\n payload: ");
                    sb3.append(str);
                } catch (Throwable th3) {
                    httpURLConnection = null;
                    th2 = th3;
                    try {
                        AFd1aSDK aFd1aSDK = new AFd1aSDK(System.currentTimeMillis() - currentTimeMillis);
                        StringBuilder sb4 = new StringBuilder("error: ");
                        sb4.append(th2);
                        sb4.append("\n took ");
                        sb4.append(aFd1aSDK.getRevenue);
                        sb4.append("ms");
                        String obj = sb4.toString();
                        AFLogger aFLogger = AFLogger.INSTANCE;
                        AFg1cSDK aFg1cSDK = AFg1cSDK.HTTP_CLIENT;
                        StringBuilder sb5 = new StringBuilder("[");
                        sb5.append(aFd1dSDK.hashCode());
                        sb5.append("] ");
                        sb5.append(obj);
                        aFLogger.e(aFg1cSDK, sb5.toString(), th2, false, false, false);
                        throw new HttpException(th2, aFd1aSDK);
                    } catch (Throwable th4) {
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                        }
                        throw th4;
                    }
                }
            }
            for (Map.Entry<String, String> entry : aFd1dSDK.AFAdRevenueData.entrySet()) {
                sb3.append("\n ");
                sb3.append(entry.getKey());
                sb3.append(": ");
                sb3.append(entry.getValue());
            }
            StringBuilder sb6 = new StringBuilder("[");
            sb6.append(aFd1dSDK.hashCode());
            sb6.append("] ");
            sb6.append((Object) sb3);
            AFLogger.INSTANCE.d(AFg1cSDK.HTTP_CLIENT, sb6.toString());
            HttpURLConnection httpURLConnection2 = (HttpURLConnection) new URL(aFd1dSDK.getRevenue).openConnection();
            try {
                httpURLConnection2.setRequestMethod(aFd1dSDK.getMonetizationNetwork);
                if (aFd1dSDK.getCurrencyIso4217Code()) {
                    httpURLConnection2.setUseCaches(false);
                }
                if (!aFd1dSDK.component2()) {
                    httpURLConnection2.setInstanceFollowRedirects(false);
                }
                try {
                    int i5 = this.AFAdRevenueData;
                    int i6 = aFd1dSDK.component3;
                    if (i6 != -1) {
                        i5 = i6;
                    }
                    httpURLConnection2.setConnectTimeout(i5);
                    httpURLConnection2.setReadTimeout(i5);
                    httpURLConnection2.addRequestProperty("Content-Type", aFd1dSDK.getRevenue() ? "application/octet-stream" : "application/json");
                    for (Map.Entry<String, String> entry2 : aFd1dSDK.AFAdRevenueData.entrySet()) {
                        httpURLConnection2.setRequestProperty(entry2.getKey(), entry2.getValue());
                    }
                    if (mediationNetwork != null) {
                        httpURLConnection2.setDoOutput(true);
                        StringBuilder sb7 = new StringBuilder();
                        sb7.append(mediationNetwork.length);
                        httpURLConnection2.setRequestProperty("Content-Length", sb7.toString());
                        try {
                            BufferedOutputStream bufferedOutputStream2 = new BufferedOutputStream(httpURLConnection2.getOutputStream());
                            try {
                                bufferedOutputStream2.write(mediationNetwork);
                                bufferedOutputStream2.close();
                            } catch (Throwable th5) {
                                th = th5;
                                bufferedOutputStream = bufferedOutputStream2;
                                if (bufferedOutputStream != null) {
                                    bufferedOutputStream.close();
                                }
                                throw th;
                            }
                        } catch (Throwable th6) {
                            th = th6;
                            bufferedOutputStream = null;
                        }
                    }
                    boolean z5 = httpURLConnection2.getResponseCode() / 100 == 2;
                    String currencyIso4217Code = aFd1dSDK.getMonetizationNetwork() ? getCurrencyIso4217Code(httpURLConnection2) : "";
                    AFd1aSDK aFd1aSDK2 = new AFd1aSDK(System.currentTimeMillis() - currentTimeMillis);
                    StringBuilder sb8 = new StringBuilder("response code:");
                    sb8.append(httpURLConnection2.getResponseCode());
                    sb8.append(" ");
                    sb8.append(httpURLConnection2.getResponseMessage());
                    sb8.append("\n body:");
                    sb8.append(currencyIso4217Code);
                    sb8.append("\n took ");
                    sb8.append(aFd1aSDK2.getRevenue);
                    sb8.append("ms");
                    String obj2 = sb8.toString();
                    AFLogger aFLogger2 = AFLogger.INSTANCE;
                    AFg1cSDK aFg1cSDK2 = AFg1cSDK.HTTP_CLIENT;
                    StringBuilder sb9 = new StringBuilder("[");
                    sb9.append(aFd1dSDK.hashCode());
                    sb9.append("] ");
                    sb9.append(obj2);
                    aFLogger2.d(aFg1cSDK2, sb9.toString());
                    HashMap hashMap = new HashMap(httpURLConnection2.getHeaderFields());
                    hashMap.remove(null);
                    AFe1xSDK<String> aFe1xSDK = new AFe1xSDK<>(currencyIso4217Code, httpURLConnection2.getResponseCode(), z5, hashMap, aFd1aSDK2);
                    httpURLConnection2.disconnect();
                    return aFe1xSDK;
                } catch (Throwable th7) {
                    th = th7;
                    th2 = th;
                    httpURLConnection = httpURLConnection2;
                    AFd1aSDK aFd1aSDK3 = new AFd1aSDK(System.currentTimeMillis() - currentTimeMillis);
                    StringBuilder sb42 = new StringBuilder("error: ");
                    sb42.append(th2);
                    sb42.append("\n took ");
                    sb42.append(aFd1aSDK3.getRevenue);
                    sb42.append("ms");
                    String obj3 = sb42.toString();
                    AFLogger aFLogger3 = AFLogger.INSTANCE;
                    AFg1cSDK aFg1cSDK3 = AFg1cSDK.HTTP_CLIENT;
                    StringBuilder sb52 = new StringBuilder("[");
                    sb52.append(aFd1dSDK.hashCode());
                    sb52.append("] ");
                    sb52.append(obj3);
                    aFLogger3.e(aFg1cSDK3, sb52.toString(), th2, false, false, false);
                    throw new HttpException(th2, aFd1aSDK3);
                }
            } catch (Throwable th8) {
                th = th8;
            }
        } catch (Throwable th9) {
            th2 = th9;
            httpURLConnection = null;
        }
    }
}
