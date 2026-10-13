package io.sentry;

import android.os.CancellationSignal;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import java.io.File;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final /* synthetic */ class x3 implements jg.c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Object f12077d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f12078e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f12079i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f12080v;

    public /* synthetic */ x3(Object obj, Object obj2, Object obj3, Object obj4) {
        this.f12077d = obj;
        this.f12078e = obj2;
        this.f12079i = obj3;
        this.f12080v = obj4;
    }

    public void a() {
        ILogger iLogger = (ILogger) this.f12077d;
        String str = (String) this.f12078e;
        v vVar = (v) this.f12079i;
        File file = (File) this.f12080v;
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        iLogger.u(sentryLevel, "Started processing cached files from %s", str);
        m6 m6Var = vVar.f12050d;
        ILogger iLogger2 = vVar.f12048b;
        try {
            iLogger2.u(sentryLevel, "Processing dir. %s", file.getAbsolutePath());
            File[] listFiles = file.listFiles(new t(0, vVar));
            if (listFiles != null) {
                iLogger2.u(sentryLevel, "Processing %d items from cache dir %s", Integer.valueOf(listFiles.length), file.getAbsolutePath());
                int length = listFiles.length;
                int i5 = 0;
                int i6 = 0;
                while (true) {
                    if (i6 >= length) {
                        break;
                    }
                    File file2 = listFiles[i6];
                    if (file2.isFile()) {
                        String absolutePath = file2.getAbsolutePath();
                        if (!m6Var.contains(absolutePath)) {
                            io.sentry.transport.p d6 = vVar.a.d();
                            if (d6 != null && d6.f(l.All)) {
                                iLogger2.u(SentryLevel.INFO, "DirectoryProcessor, rate limiting active.", new Object[i5]);
                                break;
                            } else {
                                iLogger2.u(SentryLevel.DEBUG, "Processing file: %s", absolutePath);
                                vVar.b(file2, a5.k0.q(new u(vVar.f12049c, vVar.f12048b, absolutePath, m6Var)));
                                Thread.sleep(100L);
                            }
                        } else {
                            iLogger2.u(SentryLevel.DEBUG, "File '%s' has already been processed so it will not be processed again.", absolutePath);
                        }
                    } else {
                        iLogger2.u(SentryLevel.DEBUG, "File %s is not a File.", file2.getAbsolutePath());
                    }
                    i6++;
                    i5 = 0;
                }
            } else {
                iLogger2.u(SentryLevel.ERROR, "Cache dir %s is null or is not a directory.", file.getAbsolutePath());
            }
        } catch (Throwable th2) {
            iLogger2.i(SentryLevel.ERROR, th2, "Failed processing '%s'", file.getAbsolutePath());
        }
        iLogger.u(SentryLevel.DEBUG, "Finished processing cached files from %s", str);
    }

    @Override // jg.c
    public void onFailure(Exception exc) {
        CredentialProviderPlayServicesImpl.runFallbackClearCredFlow$lambda$2((CredentialProviderPlayServicesImpl) this.f12077d, (CancellationSignal) this.f12078e, (Executor) this.f12079i, (n1.h) this.f12080v, exc);
    }
}
