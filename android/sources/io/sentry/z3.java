package io.sentry;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;

/* loaded from: classes3.dex */
public final /* synthetic */ class z3 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12100d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ v5 f12101e;

    public /* synthetic */ z3(v5 v5Var, int i5) {
        this.f12100d = i5;
        this.f12101e = v5Var;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f12100d) {
            case 0:
                this.f12101e.loadLazyFields();
                return;
            case 1:
                v5 v5Var = this.f12101e;
                String cacheDirPathWithoutDsn = v5Var.getCacheDirPathWithoutDsn();
                if (cacheDirPathWithoutDsn != null) {
                    File file = new File(cacheDirPathWithoutDsn, "app_start_profiling_config");
                    try {
                        m3.n.G(file);
                        if (v5Var.isEnableAppStartProfiling() || v5Var.isStartProfilerOnAppStart()) {
                            if (!v5Var.isStartProfilerOnAppStart() && !v5Var.isTracingEnabled()) {
                                v5Var.getLogger().u(SentryLevel.INFO, "Tracing is disabled and app start profiling will not start.", new Object[0]);
                                return;
                            }
                            if (file.createNewFile()) {
                                d4 d4Var = new d4(v5Var, v5Var.isEnableAppStartProfiling() ? v5Var.getInternalTracesSampler().a(new e4.l(new p6("app.launch", "profile"), Double.valueOf(io.sentry.util.j.a().c()))) : new f9.b(Boolean.FALSE, null));
                                FileOutputStream fileOutputStream = new FileOutputStream(file);
                                try {
                                    BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(fileOutputStream, c4.f11424e));
                                    try {
                                        v5Var.getSerializer().a(d4Var, bufferedWriter);
                                        bufferedWriter.close();
                                        fileOutputStream.close();
                                        return;
                                    } finally {
                                    }
                                } finally {
                                }
                            }
                            return;
                        }
                        return;
                    } catch (Throwable th2) {
                        v5Var.getLogger().k(SentryLevel.ERROR, "Unable to create app start profiling config file. ", th2);
                        return;
                    }
                }
                return;
            case 2:
                v5 v5Var2 = this.f12101e;
                for (r0 r0Var : v5Var2.getOptionsObservers()) {
                    String release = v5Var2.getRelease();
                    io.sentry.cache.e eVar = (io.sentry.cache.e) r0Var;
                    if (release == null) {
                        eVar.a("release.json");
                    } else {
                        eVar.b(release, "release.json");
                    }
                    String proguardUuid = v5Var2.getProguardUuid();
                    if (proguardUuid == null) {
                        eVar.a("proguard-uuid.json");
                    } else {
                        eVar.b(proguardUuid, "proguard-uuid.json");
                    }
                    io.sentry.protocol.t sdkVersion = v5Var2.getSdkVersion();
                    if (sdkVersion == null) {
                        eVar.a("sdk-version.json");
                    } else {
                        eVar.b(sdkVersion, "sdk-version.json");
                    }
                    String dist = v5Var2.getDist();
                    if (dist == null) {
                        eVar.a("dist.json");
                    } else {
                        eVar.b(dist, "dist.json");
                    }
                    String environment = v5Var2.getEnvironment();
                    if (environment == null) {
                        eVar.a("environment.json");
                    } else {
                        eVar.b(environment, "environment.json");
                    }
                    eVar.b(v5Var2.getTags(), "tags.json");
                    Double d6 = v5Var2.getSessionReplay().f12103b;
                    if (d6 == null) {
                        eVar.a("replay-error-sample-rate.json");
                    } else {
                        eVar.b(d6.toString(), "replay-error-sample-rate.json");
                    }
                }
                io.sentry.cache.g findPersistingScopeObserver = v5Var2.findPersistingScopeObserver();
                if (findPersistingScopeObserver != null) {
                    try {
                        ((io.sentry.cache.tape.f) findPersistingScopeObserver.f11442b.a()).clear();
                    } catch (IOException e9) {
                        findPersistingScopeObserver.a.getLogger().k(SentryLevel.ERROR, "Failed to clear breadcrumbs from file queue", e9);
                    }
                    findPersistingScopeObserver.o("user.json");
                    findPersistingScopeObserver.o("level.json");
                    findPersistingScopeObserver.o("request.json");
                    findPersistingScopeObserver.o("fingerprint.json");
                    findPersistingScopeObserver.o("contexts.json");
                    findPersistingScopeObserver.o("extras.json");
                    findPersistingScopeObserver.o("tags.json");
                    findPersistingScopeObserver.o("trace.json");
                    findPersistingScopeObserver.o("transaction.json");
                    return;
                }
                return;
            case 3:
                c4.e(this.f12101e.getFlushTimeoutMillis());
                return;
            default:
                io.sentry.android.core.v0.d(this.f12101e);
                return;
        }
    }
}
