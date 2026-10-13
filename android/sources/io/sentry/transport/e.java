package io.sentry.transport;

import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.s5;
import io.sentry.v5;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.net.Authenticator;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;
import java.nio.charset.Charset;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import java.util.zip.GZIPOutputStream;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLSocketFactory;

/* loaded from: classes3.dex */
public final class e {

    /* renamed from: e, reason: collision with root package name */
    public static final Charset f11999e = Charset.forName("UTF-8");
    public final Proxy a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.e f12000b;

    /* renamed from: c, reason: collision with root package name */
    public final v5 f12001c;

    /* renamed from: d, reason: collision with root package name */
    public final p f12002d;

    public e(v5 v5Var, e4.e eVar, p pVar) {
        Proxy proxy;
        this.f12000b = eVar;
        this.f12001c = v5Var;
        this.f12002d = pVar;
        s5 proxy2 = v5Var.getProxy();
        if (proxy2 != null) {
            String str = proxy2.f11976b;
            try {
                proxy = new Proxy(Proxy.Type.HTTP, new InetSocketAddress(proxy2.a, Integer.parseInt(str)));
            } catch (NumberFormatException e9) {
                this.f12001c.getLogger().i(SentryLevel.ERROR, e9, s4.h.f("Failed to parse Sentry Proxy port: ", str, ". Proxy is ignored"), new Object[0]);
            }
            this.a = proxy;
            if (proxy != null || v5Var.getProxy() == null) {
            }
            String str2 = v5Var.getProxy().f11977c;
            String str3 = v5Var.getProxy().f11978d;
            if (str2 == null || str3 == null) {
                return;
            }
            Authenticator.setDefault(new l(str2, str3));
            return;
        }
        proxy = null;
        this.a = proxy;
        if (proxy != null) {
        }
    }

    public static void a(HttpURLConnection httpURLConnection) {
        try {
            httpURLConnection.getInputStream().close();
        } catch (IOException unused) {
        } finally {
            httpURLConnection.disconnect();
        }
    }

    public static String b(HttpURLConnection httpURLConnection) {
        try {
            InputStream errorStream = httpURLConnection.getErrorStream();
            try {
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(errorStream, f11999e));
                try {
                    StringBuilder sb2 = new StringBuilder();
                    boolean z5 = true;
                    while (true) {
                        String readLine = bufferedReader.readLine();
                        if (readLine == null) {
                            break;
                        }
                        if (!z5) {
                            sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                        }
                        sb2.append(readLine);
                        z5 = false;
                    }
                    String sb3 = sb2.toString();
                    bufferedReader.close();
                    if (errorStream != null) {
                        errorStream.close();
                    }
                    return sb3;
                } finally {
                }
            } finally {
            }
        } catch (IOException unused) {
            return "Failed to obtain error message while analyzing send failure.";
        }
    }

    public final w3.q c(HttpURLConnection httpURLConnection) {
        v5 v5Var = this.f12001c;
        try {
            try {
                int responseCode = httpURLConnection.getResponseCode();
                e(httpURLConnection, responseCode);
                if (responseCode == 200) {
                    v5Var.getLogger().u(SentryLevel.DEBUG, "Envelope sent successfully.", new Object[0]);
                    return s.f12020d;
                }
                ILogger logger = v5Var.getLogger();
                SentryLevel sentryLevel = SentryLevel.ERROR;
                logger.u(sentryLevel, "Request failed, API returned %s", Integer.valueOf(responseCode));
                if (v5Var.isDebug()) {
                    v5Var.getLogger().u(sentryLevel, "%s", b(httpURLConnection));
                }
                return new r(responseCode);
            } catch (IOException e9) {
                v5Var.getLogger().i(SentryLevel.ERROR, e9, "Error reading and logging the response stream", new Object[0]);
                a(httpURLConnection);
                return new r(-1);
            }
        } finally {
            a(httpURLConnection);
        }
    }

    public final w3.q d(io.sentry.internal.debugmeta.c cVar) {
        v5 v5Var = this.f12001c;
        v5Var.getSocketTagger().b();
        e4.e eVar = this.f12000b;
        URL url = (URL) eVar.f7943e;
        Proxy proxy = this.a;
        HttpURLConnection httpURLConnection = (HttpURLConnection) (proxy == null ? url.openConnection() : url.openConnection(proxy));
        for (Map.Entry entry : ((HashMap) eVar.f7944i).entrySet()) {
            httpURLConnection.setRequestProperty((String) entry.getKey(), (String) entry.getValue());
        }
        httpURLConnection.setRequestMethod("POST");
        httpURLConnection.setDoOutput(true);
        httpURLConnection.setRequestProperty("Content-Encoding", "gzip");
        httpURLConnection.setRequestProperty("Content-Type", "application/x-sentry-envelope");
        httpURLConnection.setRequestProperty("Accept", "application/json");
        httpURLConnection.setRequestProperty("Connection", "close");
        httpURLConnection.setConnectTimeout(v5Var.getConnectionTimeoutMillis());
        httpURLConnection.setReadTimeout(v5Var.getReadTimeoutMillis());
        SSLSocketFactory sslSocketFactory = v5Var.getSslSocketFactory();
        if ((httpURLConnection instanceof HttpsURLConnection) && sslSocketFactory != null) {
            ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(sslSocketFactory);
        }
        httpURLConnection.connect();
        try {
            OutputStream outputStream = httpURLConnection.getOutputStream();
            try {
                GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(outputStream);
                try {
                    v5Var.getSerializer().e(cVar, gZIPOutputStream);
                    gZIPOutputStream.close();
                    if (outputStream != null) {
                        outputStream.close();
                    }
                } finally {
                }
            } finally {
            }
        } finally {
            try {
            } finally {
            }
        }
        return c(httpURLConnection);
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0052  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00aa A[Catch: IllegalArgumentException -> 0x00b1, TryCatch #1 {IllegalArgumentException -> 0x00b1, blocks: (B:20:0x0078, B:22:0x007c, B:25:0x0083, B:27:0x0094, B:29:0x00a2, B:31:0x00aa, B:38:0x00b5), top: B:19:0x0078 }] */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00e0  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00e3 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00b5 A[Catch: IllegalArgumentException -> 0x00b1, TRY_LEAVE, TryCatch #1 {IllegalArgumentException -> 0x00b1, blocks: (B:20:0x0078, B:22:0x007c, B:25:0x0083, B:27:0x0094, B:29:0x00a2, B:31:0x00aa, B:38:0x00b5), top: B:19:0x0078 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e(HttpURLConnection httpURLConnection, int i5) {
        long parseDouble;
        String[] strArr;
        double d6;
        long parseDouble2;
        String[] strArr2;
        String str;
        String headerField = httpURLConnection.getHeaderField("Retry-After");
        String headerField2 = httpURLConnection.getHeaderField("X-Sentry-Rate-Limits");
        p pVar = this.f12002d;
        v5 v5Var = pVar.f12013e;
        d dVar = pVar.f12012d;
        double d7 = 1000.0d;
        if (headerField2 == null) {
            if (i5 == 429) {
                if (headerField != null) {
                    try {
                        parseDouble = (long) (Double.parseDouble(headerField) * 1000.0d);
                    } catch (NumberFormatException unused) {
                    }
                    dVar.getClass();
                    pVar.c(io.sentry.l.All, new Date(System.currentTimeMillis() + parseDouble));
                    return;
                }
                parseDouble = LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE;
                dVar.getClass();
                pVar.c(io.sentry.l.All, new Date(System.currentTimeMillis() + parseDouble));
                return;
            }
            return;
        }
        int i6 = -1;
        String[] split = headerField2.split(",", -1);
        int length = split.length;
        int i10 = 0;
        int i11 = 0;
        while (i11 < length) {
            String[] split2 = split[i11].replace(" ", "").split(":", i6);
            if (split2.length > 0) {
                String str2 = split2[i10];
                if (str2 != null) {
                    try {
                        parseDouble2 = (long) (Double.parseDouble(str2) * d7);
                        d6 = d7;
                    } catch (NumberFormatException unused2) {
                    }
                    if (split2.length > 1) {
                        String str3 = split2[1];
                        dVar.getClass();
                        Date date = new Date(System.currentTimeMillis() + parseDouble2);
                        if (str3 == null || str3.isEmpty()) {
                            strArr = split;
                            pVar.c(io.sentry.l.All, date);
                        } else {
                            String[] split3 = str3.split(";", i6);
                            int length2 = split3.length;
                            int i12 = i10;
                            while (i12 < length2) {
                                String str4 = split3[i12];
                                io.sentry.l lVar = io.sentry.l.Unknown;
                                try {
                                    Charset charset = io.sentry.util.l.a;
                                } catch (IllegalArgumentException e9) {
                                    e = e9;
                                    strArr2 = split;
                                }
                                if (str4 != null && !str4.isEmpty()) {
                                    String[] split4 = io.sentry.util.l.f12045b.split(str4, i6);
                                    StringBuilder sb2 = new StringBuilder();
                                    for (String str5 : split4) {
                                        sb2.append(io.sentry.util.l.a(str5));
                                    }
                                    str = sb2.toString();
                                    if (str == null) {
                                        lVar = io.sentry.l.valueOf(str);
                                        strArr2 = split;
                                    } else {
                                        strArr2 = split;
                                        try {
                                            v5Var.getLogger().u(SentryLevel.ERROR, "Couldn't capitalize: %s", str4);
                                        } catch (IllegalArgumentException e10) {
                                            e = e10;
                                            v5Var.getLogger().i(SentryLevel.INFO, e, "Unknown category: %s", str4);
                                            if (!io.sentry.l.Unknown.equals(lVar)) {
                                            }
                                            i12++;
                                            split = strArr2;
                                            i6 = -1;
                                        }
                                    }
                                    if (!io.sentry.l.Unknown.equals(lVar)) {
                                        pVar.c(lVar, date);
                                    }
                                    i12++;
                                    split = strArr2;
                                    i6 = -1;
                                }
                                str = str4;
                                if (str == null) {
                                }
                                if (!io.sentry.l.Unknown.equals(lVar)) {
                                }
                                i12++;
                                split = strArr2;
                                i6 = -1;
                            }
                        }
                    }
                    strArr = split;
                }
                d6 = d7;
                parseDouble2 = LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE;
                if (split2.length > 1) {
                }
                strArr = split;
            } else {
                strArr = split;
                d6 = d7;
            }
            i11++;
            d7 = d6;
            split = strArr;
            i6 = -1;
            i10 = 0;
        }
    }
}
