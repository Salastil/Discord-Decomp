package io.sentry;

import com.discord.jank_stats.JankScreenContext;
import com.facebook.react.uimanager.ViewProps;
import io.sentry.android.core.SentryAndroidOptions;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.InvocationTargetException;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Properties;
import java.util.ServiceLoader;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.RejectedExecutionException;

/* loaded from: classes3.dex */
public abstract class c4 {
    public static volatile y0 a = p2.a;

    /* renamed from: b, reason: collision with root package name */
    public static volatile x0 f11421b = n2.f11682b;

    /* renamed from: c, reason: collision with root package name */
    public static final p3 f11422c = new p3(v5.empty());

    /* renamed from: d, reason: collision with root package name */
    public static volatile boolean f11423d = false;

    /* renamed from: e, reason: collision with root package name */
    public static final Charset f11424e = Charset.forName("UTF-8");

    /* renamed from: f, reason: collision with root package name */
    public static final long f11425f = System.currentTimeMillis();

    /* renamed from: g, reason: collision with root package name */
    public static final io.sentry.util.a f11426g = new io.sentry.util.a();

    public static void a(Breadcrumb breadcrumb) {
        f().c(breadcrumb);
    }

    public static io.sentry.protocol.v b(String str, SentryLevel sentryLevel) {
        return f().u(str, sentryLevel);
    }

    public static void c() {
        r a10 = f11426g.a();
        try {
            x0 f2 = f();
            f11421b = n2.f11682b;
            a.close();
            f2.a(false);
            a10.close();
        } catch (Throwable th2) {
            try {
                a10.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public static void d(t3 t3Var, r3 r3Var) {
        f().q(t3Var, r3Var);
    }

    public static void e(long j) {
        f().b(j);
    }

    public static x0 f() {
        if (f11423d) {
            return f11421b;
        }
        x0 x0Var = a.get();
        if (x0Var != null && !x0Var.m()) {
            return x0Var;
        }
        x0 w5 = f11421b.w("getCurrentScopes");
        a.a(w5);
        return w5;
    }

    /* JADX WARN: Type inference failed for: r5v5, types: [java.lang.Object, java.util.Collection] */
    public static void g(g2 g2Var, io.sentry.android.core.e eVar) {
        v5 v5Var = (v5) SentryAndroidOptions.class.getDeclaredConstructor(null).newInstance(null);
        try {
            eVar.c(v5Var);
        } catch (Throwable th2) {
            v5Var.getLogger().k(SentryLevel.ERROR, "Error in the 'OptionsConfiguration.configure' callback.", th2);
        }
        v3 v3Var = v3.a;
        r a10 = f11426g.a();
        try {
            if (!v5Var.getClass().getName().equals("io.sentry.android.core.SentryAndroidOptions") && io.sentry.util.h.a) {
                throw new IllegalArgumentException("You are running Android. Please, use SentryAndroid.init. ".concat(v5Var.getClass().getName()));
            }
            if (l(v5Var)) {
                Boolean isGlobalHubMode = v5Var.isGlobalHubMode();
                int i5 = 1;
                boolean booleanValue = isGlobalHubMode != null ? isGlobalHubMode.booleanValue() : true;
                v5Var.getLogger().u(SentryLevel.INFO, "GlobalHubMode: '%s'", String.valueOf(booleanValue));
                f11423d = booleanValue;
                int i6 = 6;
                if (v5Var.getFatalLogger() instanceof j2) {
                    v5Var.setFatalLogger(new g2(i6));
                }
                p3 p3Var = f11422c;
                int i10 = 0;
                if (android.support.v4.media.session.b.z(p3Var.k, v5Var, k())) {
                    if (k()) {
                        v5Var.getLogger().u(SentryLevel.WARNING, "Sentry has been already initialized. Previous configuration will be overwritten.", new Object[0]);
                    }
                    f().a(true);
                    p3Var.k = v5Var;
                    ?? r5 = p3Var.f11713g;
                    p3Var.f11713g = p3.b(v5Var.getMaxBreadcrumbs());
                    Iterator it = r5.iterator();
                    while (it.hasNext()) {
                        p3Var.g((Breadcrumb) it.next(), null);
                    }
                    f11421b = new u3(new p3(v5Var), new p3(v5Var), p3Var);
                    if (v5Var.isDebug() && (v5Var.getLogger() instanceof j2)) {
                        v5Var.setLogger(new g2(i6));
                    }
                    i(v5Var);
                    a.a(f11421b);
                    h(v5Var);
                    p3Var.f11724t = new af.s(v5Var);
                    if (v5Var.getExecutorService().isClosed()) {
                        v5Var.setExecutorService(new e4.i(v5Var));
                        v5Var.getExecutorService().e();
                    }
                    try {
                        v5Var.getExecutorService().submit(new z3(v5Var, i10));
                    } catch (RejectedExecutionException e9) {
                        v5Var.getLogger().k(SentryLevel.DEBUG, "Failed to call the executor. Lazy fields will not be loaded. Did you call Sentry.close()?", e9);
                    }
                    try {
                        v5Var.getExecutorService().submit(new a3.h(22, v5Var));
                    } catch (Throwable th3) {
                        v5Var.getLogger().k(SentryLevel.DEBUG, "Failed to move previous session.", th3);
                    }
                    for (l1 l1Var : v5Var.getIntegrations()) {
                        try {
                            l1Var.register(v3Var, v5Var);
                        } catch (Throwable th4) {
                            v5Var.getLogger().k(SentryLevel.WARNING, "Failed to register the integration " + l1Var.getClass().getName(), th4);
                        }
                    }
                    try {
                        v5Var.getExecutorService().submit(new z3(v5Var, 2));
                    } catch (Throwable th5) {
                        v5Var.getLogger().k(SentryLevel.DEBUG, "Failed to notify options observers.", th5);
                    }
                    try {
                        v5Var.getExecutorService().submit(new b3(v5Var));
                    } catch (Throwable th6) {
                        v5Var.getLogger().k(SentryLevel.DEBUG, "Failed to finalize previous session.", th6);
                    }
                    try {
                        v5Var.getExecutorService().submit(new z3(v5Var, i5));
                    } catch (Throwable th7) {
                        v5Var.getLogger().k(SentryLevel.ERROR, "Failed to call the executor. App start profiling config will not be changed. Did you call Sentry.close()?", th7);
                    }
                    ILogger logger = v5Var.getLogger();
                    SentryLevel sentryLevel = SentryLevel.DEBUG;
                    logger.u(sentryLevel, "Using openTelemetryMode %s", v5Var.getOpenTelemetryMode());
                    v5Var.getLogger().u(sentryLevel, "Using span factory %s", v5Var.getSpanFactory().getClass().getName());
                    v5Var.getLogger().u(sentryLevel, "Using scopes storage %s", a.getClass().getName());
                } else {
                    v5Var.getLogger().u(SentryLevel.WARNING, "This init call has been ignored due to priority being too low.", new Object[0]);
                }
            }
            a10.close();
        } catch (Throwable th8) {
            try {
                a10.close();
            } catch (Throwable th9) {
                th8.addSuppressed(th9);
            }
            throw th8;
        }
    }

    public static void h(v5 v5Var) {
        Iterator it;
        ILogger logger;
        Iterator it2;
        io.sentry.cache.d cVar;
        ILogger logger2 = v5Var.getLogger();
        SentryLevel sentryLevel = SentryLevel.INFO;
        logger2.u(sentryLevel, "Initializing SDK with DSN: '%s'", v5Var.getDsn());
        String outboxPath = v5Var.getOutboxPath();
        if (outboxPath != null) {
            v5Var.getRuntimeManager().i(new a4(new File(outboxPath), 0));
        } else {
            logger2.u(sentryLevel, "No outbox dir path is defined in options.", new Object[0]);
        }
        String cacheDirPath = v5Var.getCacheDirPath();
        if (cacheDirPath != null) {
            v5Var.getRuntimeManager().i(new a4(new File(cacheDirPath), 1));
            if (v5Var.getEnvelopeDiskCache() instanceof io.sentry.transport.i) {
                int i5 = io.sentry.cache.c.G;
                String cacheDirPath2 = v5Var.getCacheDirPath();
                int maxCacheItems = v5Var.getMaxCacheItems();
                if (cacheDirPath2 == null) {
                    v5Var.getLogger().u(SentryLevel.WARNING, "cacheDirPath is null, returning NoOpEnvelopeCache", new Object[0]);
                    cVar = io.sentry.transport.i.f12003d;
                } else {
                    cVar = new io.sentry.cache.c(v5Var, cacheDirPath2, maxCacheItems);
                }
                v5Var.setEnvelopeDiskCache(cVar);
            }
        }
        String profilingTracesDirPath = v5Var.getProfilingTracesDirPath();
        if ((v5Var.isProfilingEnabled() || v5Var.isContinuousProfilingEnabled()) && profilingTracesDirPath != null) {
            File file = new File(profilingTracesDirPath);
            v5Var.getRuntimeManager().i(new a4(file, 2));
            try {
                v5Var.getExecutorService().submit(new com.google.firebase.messaging.s(23, file));
            } catch (RejectedExecutionException e9) {
                v5Var.getLogger().k(SentryLevel.ERROR, "Failed to call the executor. Old profiles will not be deleted. Did you call Sentry.close()?", e9);
            }
        }
        io.sentry.internal.modules.a modulesLoader = v5Var.getModulesLoader();
        if (!v5Var.isSendModules()) {
            v5Var.setModulesLoader(io.sentry.internal.modules.e.a);
        } else if (modulesLoader instanceof io.sentry.internal.modules.e) {
            v5Var.setModulesLoader(new io.sentry.internal.modules.f(Arrays.asList(new io.sentry.internal.modules.c(v5Var.getLogger()), new io.sentry.internal.modules.f(v5Var.getLogger())), v5Var.getLogger()));
        }
        if (v5Var.getDebugMetaLoader() instanceof io.sentry.internal.debugmeta.b) {
            v5Var.setDebugMetaLoader(new io.sentry.internal.debugmeta.c(v5Var.getLogger()));
        }
        List<Properties> p3 = v5Var.getDebugMetaLoader().p();
        if (p3 != null) {
            if (v5Var.getBundleIds().isEmpty()) {
                Iterator it3 = p3.iterator();
                while (it3.hasNext()) {
                    String property = ((Properties) it3.next()).getProperty("io.sentry.bundle-ids");
                    v5Var.getLogger().u(SentryLevel.DEBUG, "Bundle IDs found: %s", property);
                    if (property != null) {
                        for (String str : property.split(",", -1)) {
                            v5Var.addBundleId(str);
                        }
                    }
                }
            }
            if (v5Var.getProguardUuid() == null) {
                Iterator it4 = p3.iterator();
                while (true) {
                    if (!it4.hasNext()) {
                        break;
                    }
                    String property2 = ((Properties) it4.next()).getProperty("io.sentry.ProguardUuids");
                    if (property2 != null) {
                        v5Var.getLogger().u(SentryLevel.DEBUG, "Proguard UUID found: %s", property2);
                        v5Var.setProguardUuid(property2);
                        break;
                    }
                }
            }
            Iterator it5 = p3.iterator();
            while (true) {
                if (!it5.hasNext()) {
                    break;
                }
                Properties properties = (Properties) it5.next();
                String property3 = properties.getProperty("io.sentry.build-tool");
                if (property3 != null) {
                    String property4 = properties.getProperty("io.sentry.build-tool-version");
                    if (property4 == null) {
                        property4 = JankScreenContext.UNKNOWN_SCREEN;
                    }
                    v5Var.getLogger().u(SentryLevel.DEBUG, "Build tool found: %s, version %s", property3, property4);
                    u4.d().b(property3, property4);
                }
            }
            for (Properties properties2 : p3) {
                String property5 = properties2.getProperty("io.sentry.distribution.org-slug");
                String property6 = properties2.getProperty("io.sentry.distribution.project-slug");
                String property7 = properties2.getProperty("io.sentry.distribution.auth-token");
                String property8 = properties2.getProperty("io.sentry.distribution.build-configuration");
                if (property5 != null || property6 != null || property7 != null || property8 != null) {
                    m5 distribution = v5Var.getDistribution();
                    if (property5 != null && !property5.isEmpty() && distribution.f11674b.isEmpty()) {
                        v5Var.getLogger().u(SentryLevel.DEBUG, "Distribution org slug found: %s", property5);
                        distribution.f11674b = property5;
                    }
                    if (property6 != null && !property6.isEmpty() && distribution.f11675c.isEmpty()) {
                        v5Var.getLogger().u(SentryLevel.DEBUG, "Distribution project slug found: %s", property6);
                        distribution.f11675c = property6;
                    }
                    if (property7 != null && !property7.isEmpty() && distribution.a.isEmpty()) {
                        v5Var.getLogger().u(SentryLevel.DEBUG, "Distribution org auth token found", new Object[0]);
                        distribution.a = property7;
                    }
                    if (property8 != null && !property8.isEmpty() && distribution.f11676d == null) {
                        v5Var.getLogger().u(SentryLevel.DEBUG, "Distribution build configuration found: %s", property8);
                        distribution.f11676d = property8;
                    }
                }
            }
        }
        if (v5Var.getThreadChecker() instanceof io.sentry.util.thread.b) {
            v5Var.setThreadChecker(io.sentry.util.thread.c.f12047b);
        }
        if (v5Var.getPerformanceCollectors().isEmpty()) {
            v5Var.addPerformanceCollector(new m1());
        }
        if (v5Var.isEnableBackpressureHandling() && !io.sentry.util.h.a) {
            if (v5Var.getBackpressureMonitor() instanceof io.sentry.backpressure.c) {
                v5Var.setBackpressureMonitor(new io.sentry.backpressure.a(v5Var));
            }
            v5Var.getBackpressureMonitor().start();
        }
        if (!io.sentry.util.h.a && v5Var.isContinuousProfilingEnabled() && (v5Var.getContinuousProfiler() instanceof f2)) {
            try {
                android.support.v4.media.session.b.o(v5Var);
                logger = v5Var.getLogger();
                v5Var.getProfilingTracesHz();
                v5Var.getExecutorService();
                try {
                    it2 = ServiceLoader.load(io.sentry.profiling.a.class).iterator();
                } catch (Throwable th2) {
                    logger.k(SentryLevel.ERROR, "Failed to load continuous profiler provider, using NoOpContinuousProfiler", th2);
                }
            } catch (Exception e10) {
                v5Var.getLogger().k(SentryLevel.ERROR, "Failed to create default profiling traces directory", e10);
            }
            if ((it2.hasNext() ? it2.next() : null) != null) {
                throw new ClassCastException();
            }
            logger.u(SentryLevel.DEBUG, "No continuous profiler provider found, using NoOpContinuousProfiler", new Object[0]);
            v5Var.getLogger().u(SentryLevel.WARNING, "Could not load profiler, profiling will be disabled. If you are using Spring or Spring Boot with the OTEL Agent profiler init will be retried.", new Object[0]);
            v5Var.getContinuousProfiler();
        } else {
            v5Var.getContinuousProfiler();
        }
        if (!io.sentry.util.h.a && v5Var.isContinuousProfilingEnabled() && (v5Var.getProfilerConverter() instanceof k2)) {
            ILogger logger3 = f11422c.k.getLogger();
            try {
                it = ServiceLoader.load(io.sentry.profiling.b.class).iterator();
            } catch (Throwable th3) {
                logger3.k(SentryLevel.ERROR, "Failed to load profile converter provider, using NoOpProfileConverter", th3);
            }
            if ((it.hasNext() ? it.next() : null) != null) {
                throw new ClassCastException();
            }
            logger3.u(SentryLevel.DEBUG, "No profile converter provider found, using NoOpProfileConverter", new Object[0]);
            v5Var.getLogger().u(SentryLevel.WARNING, "Could not load profile converter. If you are using Spring or Spring Boot with the OTEL Agent, profile converter init will be retried.", new Object[0]);
            v5Var.getProfilerConverter();
        } else {
            v5Var.getProfilerConverter();
        }
        v5Var.getLogger().u(SentryLevel.INFO, "Continuous profiler is enabled %s mode: %s", Boolean.valueOf(v5Var.isContinuousProfilingEnabled()), v5Var.getProfileLifecycle());
    }

    public static void i(v5 v5Var) {
        y0 sVar;
        Class c6;
        Object newInstance;
        List list;
        j2 j2Var = j2.f11638d;
        boolean z5 = io.sentry.util.h.a;
        if (!z5) {
            if (e5.AUTO.equals(v5Var.getOpenTelemetryMode())) {
                if (io.sentry.util.f.b("io.sentry.opentelemetry.agent.AgentMarker", j2Var)) {
                    v5Var.getLogger().u(SentryLevel.DEBUG, "openTelemetryMode has been inferred from AUTO to AGENT", new Object[0]);
                    v5Var.setOpenTelemetryMode(e5.AGENT);
                } else if (io.sentry.util.f.b("io.sentry.opentelemetry.agent.AgentlessMarker", j2Var)) {
                    v5Var.getLogger().u(SentryLevel.DEBUG, "openTelemetryMode has been inferred from AUTO to AGENTLESS", new Object[0]);
                    v5Var.setOpenTelemetryMode(e5.AGENTLESS);
                } else if (io.sentry.util.f.b("io.sentry.opentelemetry.agent.AgentlessSpringMarker", j2Var)) {
                    v5Var.getLogger().u(SentryLevel.DEBUG, "openTelemetryMode has been inferred from AUTO to AGENTLESS_SPRING", new Object[0]);
                    v5Var.setOpenTelemetryMode(e5.AGENTLESS_SPRING);
                }
            }
        }
        e5 e5Var = e5.OFF;
        if (e5Var == v5Var.getOpenTelemetryMode()) {
            v5Var.setSpanFactory(new u2(1));
        }
        a.close();
        if (e5Var == v5Var.getOpenTelemetryMode()) {
            a = new s();
        } else {
            if (!z5 && io.sentry.util.f.b("io.sentry.opentelemetry.OtelContextScopesStorage", j2Var) && (c6 = io.sentry.util.f.c("io.sentry.opentelemetry.OtelContextScopesStorage", j2Var)) != null) {
                try {
                    newInstance = c6.getDeclaredConstructor(null).newInstance(null);
                } catch (IllegalAccessException | InstantiationException | NoSuchMethodException | InvocationTargetException unused) {
                }
                if (newInstance != null && (newInstance instanceof y0)) {
                    sVar = (y0) newInstance;
                    a = sVar;
                }
            }
            sVar = new s();
            a = sVar;
        }
        if (io.sentry.util.h.a) {
            return;
        }
        e5 openTelemetryMode = v5Var.getOpenTelemetryMode();
        if (e5.OFF.equals(openTelemetryMode)) {
            list = Collections.EMPTY_LIST;
        } else {
            ConcurrentHashMap concurrentHashMap = io.sentry.util.k.a;
            ArrayList arrayList = new ArrayList();
            e5 e5Var2 = e5.AGENT;
            if (e5Var2 == openTelemetryMode || e5.AGENTLESS_SPRING == openTelemetryMode) {
                arrayList.add("auto.http.spring_jakarta.webmvc");
                arrayList.add("auto.http.spring.webmvc");
                arrayList.add("auto.http.spring7.webmvc");
                arrayList.add("auto.spring_jakarta.webflux");
                arrayList.add("auto.spring.webflux");
                arrayList.add("auto.spring7.webflux");
                arrayList.add("auto.db.jdbc");
                arrayList.add("auto.http.spring_jakarta.webclient");
                arrayList.add("auto.http.spring.webclient");
                arrayList.add("auto.http.spring7.webclient");
                arrayList.add("auto.http.spring_jakarta.restclient");
                arrayList.add("auto.http.spring.restclient");
                arrayList.add("auto.http.spring7.restclient");
                arrayList.add("auto.http.spring_jakarta.resttemplate");
                arrayList.add("auto.http.spring.resttemplate");
                arrayList.add("auto.http.spring7.resttemplate");
                arrayList.add("auto.http.openfeign");
                arrayList.add("auto.http.ktor-client");
            }
            if (e5Var2 == openTelemetryMode) {
                arrayList.add("auto.graphql.graphql");
                arrayList.add("auto.graphql.graphql22");
            }
            list = arrayList;
        }
        Iterator it = list.iterator();
        while (it.hasNext()) {
            v5Var.addIgnoredSpanOrigin((String) it.next());
        }
    }

    public static Boolean j() {
        return f().k();
    }

    public static boolean k() {
        return f().isEnabled();
    }

    /* JADX WARN: Removed duplicated region for block: B:116:0x036c A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:124:0x03b3  */
    /* JADX WARN: Removed duplicated region for block: B:128:0x039d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:133:0x02e1  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x02cd  */
    /* JADX WARN: Removed duplicated region for block: B:135:0x0299  */
    /* JADX WARN: Removed duplicated region for block: B:136:0x0206  */
    /* JADX WARN: Removed duplicated region for block: B:137:0x012b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:141:0x011b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x00b2  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00c5  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x015b  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x017b A[LOOP:0: B:35:0x0175->B:37:0x017b, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:41:0x01ae  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x01b2  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x01d1 A[LOOP:1: B:45:0x01cb->B:47:0x01d1, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:52:0x01ed A[LOOP:2: B:50:0x01e7->B:52:0x01ed, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0201  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0209  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0217  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x024e A[LOOP:4: B:77:0x0248->B:79:0x024e, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:84:0x0272 A[LOOP:5: B:82:0x026c->B:84:0x0272, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:88:0x0290  */
    /* JADX WARN: Removed duplicated region for block: B:91:0x02c4  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x02d8  */
    /* JADX WARN: Removed duplicated region for block: B:98:0x031c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean l(v5 v5Var) {
        Properties properties;
        Properties c6;
        io.sentry.config.b bVar;
        String property;
        Double valueOf;
        String property2;
        Double valueOf2;
        String property3;
        String property4;
        String property5;
        Iterator it;
        Iterator it2;
        List<String> d6;
        Iterator it3;
        Iterator it4;
        Long b10;
        Long b11;
        String property6;
        Long b12;
        Long b13;
        String property7;
        String property8;
        InputStream resourceAsStream;
        Properties c8;
        Properties c10;
        if (v5Var.isEnableExternalConfiguration()) {
            g2 g2Var = new g2(6);
            ArrayList arrayList = new ArrayList();
            arrayList.add(new io.sentry.config.e("sentry.", System.getProperties()));
            arrayList.add(new io.sentry.config.c());
            String property9 = System.getProperty("sentry.properties.file");
            if (property9 != null && (c10 = new hc.b(property9, g2Var, true).c()) != null) {
                arrayList.add(new io.sentry.config.e(c10));
            }
            String str = System.getenv("SENTRY_PROPERTIES_FILE");
            if (str != null && (c8 = new hc.b(str, g2Var, true).c()) != null) {
                arrayList.add(new io.sentry.config.e(c8));
            }
            Double d7 = null;
            try {
                resourceAsStream = ys.d.x(io.sentry.config.a.class.getClassLoader()).getResourceAsStream("sentry.properties");
            } catch (IOException e9) {
                g2Var.i(SentryLevel.ERROR, e9, "Failed to load Sentry configuration from classpath resource: %s", "sentry.properties");
            }
            if (resourceAsStream != null) {
                try {
                    BufferedInputStream bufferedInputStream = new BufferedInputStream(resourceAsStream);
                    try {
                        properties = new Properties();
                        properties.load(bufferedInputStream);
                        bufferedInputStream.close();
                        resourceAsStream.close();
                        if (properties != null) {
                            arrayList.add(new io.sentry.config.e(properties));
                        }
                        c6 = new hc.b("sentry.properties", g2Var, false).c();
                        if (c6 != null) {
                            arrayList.add(new io.sentry.config.e(c6));
                        }
                        bVar = new io.sentry.config.b(arrayList);
                        ILogger logger = v5Var.getLogger();
                        d0 d0Var = new d0();
                        d0Var.a = bVar.getProperty("dsn");
                        d0Var.f11471b = bVar.getProperty("environment");
                        d0Var.f11472c = bVar.getProperty("release");
                        d0Var.f11473d = bVar.getProperty("dist");
                        d0Var.f11474e = bVar.getProperty("servername");
                        d0Var.f11475f = bVar.a("uncaught.handler.enabled");
                        d0Var.f11489v = bVar.a("uncaught.handler.print-stacktrace");
                        property = bVar.getProperty("traces-sample-rate");
                        if (property != null) {
                            try {
                                valueOf = Double.valueOf(property);
                            } catch (NumberFormatException unused) {
                            }
                            d0Var.f11478i = valueOf;
                            property2 = bVar.getProperty("profiles-sample-rate");
                            if (property2 != null) {
                                try {
                                    valueOf2 = Double.valueOf(property2);
                                } catch (NumberFormatException unused2) {
                                }
                                d0Var.j = valueOf2;
                                d0Var.f11476g = bVar.a("debug");
                                d0Var.f11477h = bVar.a("enable-deduplication");
                                d0Var.f11490w = bVar.a("send-client-reports");
                                d0Var.K = bVar.a("force-init");
                                property3 = bVar.getProperty("max-request-body-size");
                                if (property3 != null) {
                                    d0Var.k = t5.valueOf(property3.toUpperCase(Locale.ROOT));
                                }
                                for (Map.Entry entry : ((ConcurrentHashMap) bVar.c()).entrySet()) {
                                    d0Var.f11479l.put((String) entry.getKey(), (String) entry.getValue());
                                }
                                property4 = bVar.getProperty("proxy.host");
                                String property10 = bVar.getProperty("proxy.user");
                                String property11 = bVar.getProperty("proxy.pass");
                                property5 = bVar.getProperty("proxy.port");
                                if (property5 == null) {
                                    property5 = "80";
                                }
                                if (property4 != null) {
                                    s5 s5Var = new s5();
                                    s5Var.a = property4;
                                    s5Var.f11976b = property5;
                                    s5Var.f11977c = property10;
                                    s5Var.f11978d = property11;
                                    d0Var.f11480m = s5Var;
                                }
                                it = bVar.d("in-app-includes").iterator();
                                while (it.hasNext()) {
                                    d0Var.f11482o.add((String) it.next());
                                }
                                it2 = bVar.d("in-app-excludes").iterator();
                                while (it2.hasNext()) {
                                    d0Var.f11481n.add((String) it2.next());
                                }
                                d6 = bVar.getProperty("trace-propagation-targets") == null ? bVar.d("trace-propagation-targets") : null;
                                if (d6 == null && bVar.getProperty("tracing-origins") != null) {
                                    d6 = bVar.d("tracing-origins");
                                }
                                if (d6 != null) {
                                    for (String str2 : d6) {
                                        if (d0Var.f11483p == null) {
                                            d0Var.f11483p = new CopyOnWriteArrayList();
                                        }
                                        if (!str2.isEmpty()) {
                                            d0Var.f11483p.add(str2);
                                        }
                                    }
                                }
                                it3 = bVar.d("context-tags").iterator();
                                while (it3.hasNext()) {
                                    d0Var.f11484q.add((String) it3.next());
                                }
                                d0Var.f11485r = bVar.getProperty("proguard-uuid");
                                it4 = bVar.d("bundle-ids").iterator();
                                while (it4.hasNext()) {
                                    d0Var.f11491x.add((String) it4.next());
                                }
                                d0Var.f11486s = bVar.b("idle-timeout");
                                String property12 = bVar.getProperty("ignored-errors");
                                d0Var.f11488u = property12 == null ? Arrays.asList(property12.split(",")) : null;
                                d0Var.f11492y = bVar.a(ViewProps.ENABLED);
                                d0Var.f11493z = bVar.a("enable-pretty-serialization-output");
                                d0Var.G = bVar.a("send-modules");
                                d0Var.H = bVar.a("send-default-pii");
                                String property13 = bVar.getProperty("ignored-checkins");
                                d0Var.E = property13 == null ? Arrays.asList(property13.split(",")) : null;
                                String property14 = bVar.getProperty("ignored-transactions");
                                d0Var.F = property14 == null ? Arrays.asList(property14.split(",")) : null;
                                d0Var.I = bVar.a("enable-backpressure-handling");
                                d0Var.J = bVar.a("global-hub-mode");
                                d0Var.L = bVar.a("capture-open-telemetry-events");
                                d0Var.B = bVar.a("logs.enabled");
                                d0Var.C = bVar.a("metrics.enabled");
                                for (String str3 : bVar.d("ignored-exceptions-for-type")) {
                                    try {
                                        Class<?> cls = Class.forName(str3);
                                        if (Throwable.class.isAssignableFrom(cls)) {
                                            d0Var.f11487t.add(cls);
                                        } else {
                                            logger.u(SentryLevel.WARNING, "Skipping setting %s as ignored-exception-for-type. Reason: %s does not extend Throwable", str3, str3);
                                        }
                                    } catch (ClassNotFoundException unused3) {
                                        logger.u(SentryLevel.WARNING, "Skipping setting %s as ignored-exception-for-type. Reason: %s class is not found", str3, str3);
                                    }
                                }
                                b10 = bVar.b("cron.default-checkin-margin");
                                b11 = bVar.b("cron.default-max-runtime");
                                property6 = bVar.getProperty("cron.default-timezone");
                                b12 = bVar.b("cron.default-failure-issue-threshold");
                                b13 = bVar.b("cron.default-recovery-threshold");
                                if (b10 == null || b11 != null || property6 != null || b12 != null || b13 != null) {
                                    l5 l5Var = new l5();
                                    l5Var.a = b10;
                                    l5Var.f11652b = b11;
                                    l5Var.f11653c = property6;
                                    l5Var.f11654d = b12;
                                    l5Var.f11655e = b13;
                                    d0Var.P = l5Var;
                                }
                                d0Var.A = bVar.a("enable-spotlight");
                                d0Var.D = bVar.getProperty("spotlight-connection-url");
                                property7 = bVar.getProperty("profile-session-sample-rate");
                                if (property7 != null) {
                                    try {
                                        d7 = Double.valueOf(property7);
                                    } catch (NumberFormatException unused4) {
                                    }
                                }
                                d0Var.M = d7;
                                d0Var.N = bVar.getProperty("profiling-traces-dir-path");
                                property8 = bVar.getProperty("profile-lifecycle");
                                if (property8 != null && !property8.isEmpty()) {
                                    d0Var.O = f3.valueOf(property8.toUpperCase());
                                }
                                v5Var.merge(d0Var);
                            }
                            valueOf2 = null;
                            d0Var.j = valueOf2;
                            d0Var.f11476g = bVar.a("debug");
                            d0Var.f11477h = bVar.a("enable-deduplication");
                            d0Var.f11490w = bVar.a("send-client-reports");
                            d0Var.K = bVar.a("force-init");
                            property3 = bVar.getProperty("max-request-body-size");
                            if (property3 != null) {
                            }
                            while (r5.hasNext()) {
                            }
                            property4 = bVar.getProperty("proxy.host");
                            String property102 = bVar.getProperty("proxy.user");
                            String property112 = bVar.getProperty("proxy.pass");
                            property5 = bVar.getProperty("proxy.port");
                            if (property5 == null) {
                            }
                            if (property4 != null) {
                            }
                            it = bVar.d("in-app-includes").iterator();
                            while (it.hasNext()) {
                            }
                            it2 = bVar.d("in-app-excludes").iterator();
                            while (it2.hasNext()) {
                            }
                            if (bVar.getProperty("trace-propagation-targets") == null) {
                            }
                            if (d6 == null) {
                                d6 = bVar.d("tracing-origins");
                            }
                            if (d6 != null) {
                            }
                            it3 = bVar.d("context-tags").iterator();
                            while (it3.hasNext()) {
                            }
                            d0Var.f11485r = bVar.getProperty("proguard-uuid");
                            it4 = bVar.d("bundle-ids").iterator();
                            while (it4.hasNext()) {
                            }
                            d0Var.f11486s = bVar.b("idle-timeout");
                            String property122 = bVar.getProperty("ignored-errors");
                            d0Var.f11488u = property122 == null ? Arrays.asList(property122.split(",")) : null;
                            d0Var.f11492y = bVar.a(ViewProps.ENABLED);
                            d0Var.f11493z = bVar.a("enable-pretty-serialization-output");
                            d0Var.G = bVar.a("send-modules");
                            d0Var.H = bVar.a("send-default-pii");
                            String property132 = bVar.getProperty("ignored-checkins");
                            d0Var.E = property132 == null ? Arrays.asList(property132.split(",")) : null;
                            String property142 = bVar.getProperty("ignored-transactions");
                            d0Var.F = property142 == null ? Arrays.asList(property142.split(",")) : null;
                            d0Var.I = bVar.a("enable-backpressure-handling");
                            d0Var.J = bVar.a("global-hub-mode");
                            d0Var.L = bVar.a("capture-open-telemetry-events");
                            d0Var.B = bVar.a("logs.enabled");
                            d0Var.C = bVar.a("metrics.enabled");
                            while (r5.hasNext()) {
                            }
                            b10 = bVar.b("cron.default-checkin-margin");
                            b11 = bVar.b("cron.default-max-runtime");
                            property6 = bVar.getProperty("cron.default-timezone");
                            b12 = bVar.b("cron.default-failure-issue-threshold");
                            b13 = bVar.b("cron.default-recovery-threshold");
                            if (b10 == null) {
                            }
                            l5 l5Var2 = new l5();
                            l5Var2.a = b10;
                            l5Var2.f11652b = b11;
                            l5Var2.f11653c = property6;
                            l5Var2.f11654d = b12;
                            l5Var2.f11655e = b13;
                            d0Var.P = l5Var2;
                            d0Var.A = bVar.a("enable-spotlight");
                            d0Var.D = bVar.getProperty("spotlight-connection-url");
                            property7 = bVar.getProperty("profile-session-sample-rate");
                            if (property7 != null) {
                            }
                            d0Var.M = d7;
                            d0Var.N = bVar.getProperty("profiling-traces-dir-path");
                            property8 = bVar.getProperty("profile-lifecycle");
                            if (property8 != null) {
                                d0Var.O = f3.valueOf(property8.toUpperCase());
                            }
                            v5Var.merge(d0Var);
                        }
                        valueOf = null;
                        d0Var.f11478i = valueOf;
                        property2 = bVar.getProperty("profiles-sample-rate");
                        if (property2 != null) {
                        }
                        valueOf2 = null;
                        d0Var.j = valueOf2;
                        d0Var.f11476g = bVar.a("debug");
                        d0Var.f11477h = bVar.a("enable-deduplication");
                        d0Var.f11490w = bVar.a("send-client-reports");
                        d0Var.K = bVar.a("force-init");
                        property3 = bVar.getProperty("max-request-body-size");
                        if (property3 != null) {
                        }
                        while (r5.hasNext()) {
                        }
                        property4 = bVar.getProperty("proxy.host");
                        String property1022 = bVar.getProperty("proxy.user");
                        String property1122 = bVar.getProperty("proxy.pass");
                        property5 = bVar.getProperty("proxy.port");
                        if (property5 == null) {
                        }
                        if (property4 != null) {
                        }
                        it = bVar.d("in-app-includes").iterator();
                        while (it.hasNext()) {
                        }
                        it2 = bVar.d("in-app-excludes").iterator();
                        while (it2.hasNext()) {
                        }
                        if (bVar.getProperty("trace-propagation-targets") == null) {
                        }
                        if (d6 == null) {
                        }
                        if (d6 != null) {
                        }
                        it3 = bVar.d("context-tags").iterator();
                        while (it3.hasNext()) {
                        }
                        d0Var.f11485r = bVar.getProperty("proguard-uuid");
                        it4 = bVar.d("bundle-ids").iterator();
                        while (it4.hasNext()) {
                        }
                        d0Var.f11486s = bVar.b("idle-timeout");
                        String property1222 = bVar.getProperty("ignored-errors");
                        d0Var.f11488u = property1222 == null ? Arrays.asList(property1222.split(",")) : null;
                        d0Var.f11492y = bVar.a(ViewProps.ENABLED);
                        d0Var.f11493z = bVar.a("enable-pretty-serialization-output");
                        d0Var.G = bVar.a("send-modules");
                        d0Var.H = bVar.a("send-default-pii");
                        String property1322 = bVar.getProperty("ignored-checkins");
                        d0Var.E = property1322 == null ? Arrays.asList(property1322.split(",")) : null;
                        String property1422 = bVar.getProperty("ignored-transactions");
                        d0Var.F = property1422 == null ? Arrays.asList(property1422.split(",")) : null;
                        d0Var.I = bVar.a("enable-backpressure-handling");
                        d0Var.J = bVar.a("global-hub-mode");
                        d0Var.L = bVar.a("capture-open-telemetry-events");
                        d0Var.B = bVar.a("logs.enabled");
                        d0Var.C = bVar.a("metrics.enabled");
                        while (r5.hasNext()) {
                        }
                        b10 = bVar.b("cron.default-checkin-margin");
                        b11 = bVar.b("cron.default-max-runtime");
                        property6 = bVar.getProperty("cron.default-timezone");
                        b12 = bVar.b("cron.default-failure-issue-threshold");
                        b13 = bVar.b("cron.default-recovery-threshold");
                        if (b10 == null) {
                        }
                        l5 l5Var22 = new l5();
                        l5Var22.a = b10;
                        l5Var22.f11652b = b11;
                        l5Var22.f11653c = property6;
                        l5Var22.f11654d = b12;
                        l5Var22.f11655e = b13;
                        d0Var.P = l5Var22;
                        d0Var.A = bVar.a("enable-spotlight");
                        d0Var.D = bVar.getProperty("spotlight-connection-url");
                        property7 = bVar.getProperty("profile-session-sample-rate");
                        if (property7 != null) {
                        }
                        d0Var.M = d7;
                        d0Var.N = bVar.getProperty("profiling-traces-dir-path");
                        property8 = bVar.getProperty("profile-lifecycle");
                        if (property8 != null) {
                        }
                        v5Var.merge(d0Var);
                    } finally {
                    }
                } finally {
                }
            } else {
                if (resourceAsStream != null) {
                    resourceAsStream.close();
                }
                properties = null;
                if (properties != null) {
                }
                c6 = new hc.b("sentry.properties", g2Var, false).c();
                if (c6 != null) {
                }
                bVar = new io.sentry.config.b(arrayList);
                ILogger logger2 = v5Var.getLogger();
                d0 d0Var2 = new d0();
                d0Var2.a = bVar.getProperty("dsn");
                d0Var2.f11471b = bVar.getProperty("environment");
                d0Var2.f11472c = bVar.getProperty("release");
                d0Var2.f11473d = bVar.getProperty("dist");
                d0Var2.f11474e = bVar.getProperty("servername");
                d0Var2.f11475f = bVar.a("uncaught.handler.enabled");
                d0Var2.f11489v = bVar.a("uncaught.handler.print-stacktrace");
                property = bVar.getProperty("traces-sample-rate");
                if (property != null) {
                }
                valueOf = null;
                d0Var2.f11478i = valueOf;
                property2 = bVar.getProperty("profiles-sample-rate");
                if (property2 != null) {
                }
                valueOf2 = null;
                d0Var2.j = valueOf2;
                d0Var2.f11476g = bVar.a("debug");
                d0Var2.f11477h = bVar.a("enable-deduplication");
                d0Var2.f11490w = bVar.a("send-client-reports");
                d0Var2.K = bVar.a("force-init");
                property3 = bVar.getProperty("max-request-body-size");
                if (property3 != null) {
                }
                while (r5.hasNext()) {
                }
                property4 = bVar.getProperty("proxy.host");
                String property10222 = bVar.getProperty("proxy.user");
                String property11222 = bVar.getProperty("proxy.pass");
                property5 = bVar.getProperty("proxy.port");
                if (property5 == null) {
                }
                if (property4 != null) {
                }
                it = bVar.d("in-app-includes").iterator();
                while (it.hasNext()) {
                }
                it2 = bVar.d("in-app-excludes").iterator();
                while (it2.hasNext()) {
                }
                if (bVar.getProperty("trace-propagation-targets") == null) {
                }
                if (d6 == null) {
                }
                if (d6 != null) {
                }
                it3 = bVar.d("context-tags").iterator();
                while (it3.hasNext()) {
                }
                d0Var2.f11485r = bVar.getProperty("proguard-uuid");
                it4 = bVar.d("bundle-ids").iterator();
                while (it4.hasNext()) {
                }
                d0Var2.f11486s = bVar.b("idle-timeout");
                String property12222 = bVar.getProperty("ignored-errors");
                d0Var2.f11488u = property12222 == null ? Arrays.asList(property12222.split(",")) : null;
                d0Var2.f11492y = bVar.a(ViewProps.ENABLED);
                d0Var2.f11493z = bVar.a("enable-pretty-serialization-output");
                d0Var2.G = bVar.a("send-modules");
                d0Var2.H = bVar.a("send-default-pii");
                String property13222 = bVar.getProperty("ignored-checkins");
                d0Var2.E = property13222 == null ? Arrays.asList(property13222.split(",")) : null;
                String property14222 = bVar.getProperty("ignored-transactions");
                d0Var2.F = property14222 == null ? Arrays.asList(property14222.split(",")) : null;
                d0Var2.I = bVar.a("enable-backpressure-handling");
                d0Var2.J = bVar.a("global-hub-mode");
                d0Var2.L = bVar.a("capture-open-telemetry-events");
                d0Var2.B = bVar.a("logs.enabled");
                d0Var2.C = bVar.a("metrics.enabled");
                while (r5.hasNext()) {
                }
                b10 = bVar.b("cron.default-checkin-margin");
                b11 = bVar.b("cron.default-max-runtime");
                property6 = bVar.getProperty("cron.default-timezone");
                b12 = bVar.b("cron.default-failure-issue-threshold");
                b13 = bVar.b("cron.default-recovery-threshold");
                if (b10 == null) {
                }
                l5 l5Var222 = new l5();
                l5Var222.a = b10;
                l5Var222.f11652b = b11;
                l5Var222.f11653c = property6;
                l5Var222.f11654d = b12;
                l5Var222.f11655e = b13;
                d0Var2.P = l5Var222;
                d0Var2.A = bVar.a("enable-spotlight");
                d0Var2.D = bVar.getProperty("spotlight-connection-url");
                property7 = bVar.getProperty("profile-session-sample-rate");
                if (property7 != null) {
                }
                d0Var2.M = d7;
                d0Var2.N = bVar.getProperty("profiling-traces-dir-path");
                property8 = bVar.getProperty("profile-lifecycle");
                if (property8 != null) {
                }
                v5Var.merge(d0Var2);
            }
        }
        String dsn = v5Var.getDsn();
        if (!v5Var.isEnabled() || (dsn != null && dsn.isEmpty())) {
            c();
            return false;
        }
        if (dsn == null) {
            throw new IllegalArgumentException("DSN is required. Use empty string or set enabled to false in SentryOptions to disable SDK.");
        }
        v5Var.retrieveParsedDsn();
        return true;
    }

    public static void m(String str, String str2) {
        f().f(str, str2);
    }

    public static void n(bc.a aVar) {
        f().t(aVar);
    }
}
