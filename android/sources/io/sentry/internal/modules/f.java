package io.sentry.internal.modules;

import android.content.Context;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.android.core.h1;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: classes3.dex */
public final class f extends d {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f11634e = 1;

    /* renamed from: f, reason: collision with root package name */
    public final Object f11635f;

    public f(List list, ILogger iLogger) {
        super(iLogger);
        this.f11635f = list;
    }

    @Override // io.sentry.internal.modules.d
    public final Map b() {
        switch (this.f11634e) {
            case 0:
                ILogger iLogger = this.a;
                TreeMap treeMap = new TreeMap();
                try {
                    InputStream resourceAsStream = ((ClassLoader) this.f11635f).getResourceAsStream("sentry-external-modules.txt");
                    try {
                        if (resourceAsStream == null) {
                            iLogger.u(SentryLevel.INFO, "%s file was not found.", "sentry-external-modules.txt");
                            if (resourceAsStream != null) {
                                resourceAsStream.close();
                            }
                        } else {
                            TreeMap c6 = c(resourceAsStream);
                            resourceAsStream.close();
                            treeMap = c6;
                        }
                    } catch (Throwable th2) {
                        if (resourceAsStream != null) {
                            try {
                                resourceAsStream.close();
                            } catch (Throwable th3) {
                                th2.addSuppressed(th3);
                            }
                        }
                        throw th2;
                    }
                } catch (IOException e9) {
                    iLogger.k(SentryLevel.INFO, "Access to resources failed.", e9);
                } catch (SecurityException e10) {
                    iLogger.k(SentryLevel.INFO, "Access to resources denied.", e10);
                }
                return treeMap;
            case 1:
                ILogger iLogger2 = this.a;
                TreeMap treeMap2 = new TreeMap();
                try {
                    InputStream open = ((Context) this.f11635f).getAssets().open("sentry-external-modules.txt");
                    try {
                        TreeMap c8 = c(open);
                        if (open != null) {
                            open.close();
                        }
                        return c8;
                    } finally {
                    }
                } catch (FileNotFoundException unused) {
                    iLogger2.u(SentryLevel.INFO, "%s file was not found.", "sentry-external-modules.txt");
                    return treeMap2;
                } catch (IOException e11) {
                    iLogger2.k(SentryLevel.ERROR, "Error extracting modules.", e11);
                    return treeMap2;
                }
            default:
                TreeMap treeMap3 = new TreeMap();
                Iterator it = ((List) this.f11635f).iterator();
                while (it.hasNext()) {
                    Map a = ((a) it.next()).a();
                    if (a != null) {
                        treeMap3.putAll(a);
                    }
                }
                return treeMap3;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(ILogger iLogger) {
        super(iLogger);
        ClassLoader classLoader = f.class.getClassLoader();
        this.f11635f = ys.d.x(classLoader);
    }

    public f(Context context, ILogger iLogger) {
        super(iLogger);
        Context applicationContext = context.getApplicationContext();
        this.f11635f = applicationContext != null ? applicationContext : context;
        new Thread(new h1(1, this)).start();
    }
}
