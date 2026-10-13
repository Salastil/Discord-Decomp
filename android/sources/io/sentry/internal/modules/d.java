package io.sentry.internal.modules;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.r;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.nio.charset.Charset;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: classes3.dex */
public abstract class d implements a {

    /* renamed from: d, reason: collision with root package name */
    public static final Charset f11631d = Charset.forName("UTF-8");
    public final ILogger a;

    /* renamed from: b, reason: collision with root package name */
    public final io.sentry.util.a f11632b = new io.sentry.util.a();

    /* renamed from: c, reason: collision with root package name */
    public volatile Map f11633c = null;

    public d(ILogger iLogger) {
        this.a = iLogger;
    }

    @Override // io.sentry.internal.modules.a
    public final Map a() {
        if (this.f11633c == null) {
            r a = this.f11632b.a();
            try {
                if (this.f11633c == null) {
                    this.f11633c = b();
                }
                a.close();
            } catch (Throwable th2) {
                try {
                    a.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        }
        return this.f11633c;
    }

    public abstract Map b();

    public final TreeMap c(InputStream inputStream) {
        ILogger iLogger = this.a;
        TreeMap treeMap = new TreeMap();
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream, f11631d));
            try {
                for (String readLine = bufferedReader.readLine(); readLine != null; readLine = bufferedReader.readLine()) {
                    int lastIndexOf = readLine.lastIndexOf(58);
                    treeMap.put(readLine.substring(0, lastIndexOf), readLine.substring(lastIndexOf + 1));
                }
                iLogger.u(SentryLevel.DEBUG, "Extracted %d modules from resources.", Integer.valueOf(treeMap.size()));
                bufferedReader.close();
                return treeMap;
            } catch (Throwable th2) {
                try {
                    bufferedReader.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        } catch (IOException e9) {
            iLogger.k(SentryLevel.ERROR, "Error extracting modules.", e9);
            return treeMap;
        } catch (RuntimeException e10) {
            iLogger.i(SentryLevel.ERROR, e10, "%s file is malformed.", "sentry-external-modules.txt");
            return treeMap;
        }
    }
}
