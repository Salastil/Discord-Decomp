package io.sentry;

import io.sentry.android.replay.BuildConfig;
import java.io.File;
import java.lang.reflect.InvocationTargetException;
import java.math.BigInteger;
import java.nio.charset.Charset;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.CopyOnWriteArraySet;
import javax.net.ssl.SSLSocketFactory;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public class v5 {
    static final SentryLevel DEFAULT_DIAGNOSTIC_LEVEL = SentryLevel.DEBUG;
    private static final String DEFAULT_ENVIRONMENT = "production";

    @NotNull
    public static final String DEFAULT_PROPAGATION_TARGETS = ".*";
    public static final long MAX_EVENT_SIZE_BYTES = 1048576;
    private boolean attachServerName;
    private boolean attachStacktrace;
    private boolean attachThreads;

    @NotNull
    private io.sentry.backpressure.b backpressureMonitor;
    private g5 beforeBreadcrumb;
    private h5 beforeEnvelopeCallback;
    private i5 beforeSend;
    private i5 beforeSendFeedback;
    private j5 beforeSendReplay;
    private k5 beforeSendTransaction;
    private String cacheDirPath;
    private boolean captureOpenTelemetryEvents;

    @NotNull
    io.sentry.clientreport.f clientReportRecorder;

    @NotNull
    private k compositePerformanceCollector;

    @NotNull
    private m0 connectionStatusProvider;
    private int connectionTimeoutMillis;

    @NotNull
    private final List<String> contextTags;

    @NotNull
    private n0 continuousProfiler;
    private l5 cron;

    @NotNull
    private final io.sentry.util.e dateProvider;
    private long deadlineTimeout;
    private boolean debug;

    @NotNull
    private io.sentry.internal.debugmeta.a debugMetaLoader;

    @NotNull
    private t3 defaultScopeType;

    @NotNull
    private final List<String> defaultTracePropagationTargets;

    @NotNull
    private SentryLevel diagnosticLevel;
    private String dist;
    private String distinctId;

    @NotNull
    private m5 distribution;

    @NotNull
    private o0 distributionController;
    private String dsn;
    private String dsnHash;
    private boolean enableAppStartProfiling;
    private boolean enableAutoSessionTracking;
    private boolean enableBackpressureHandling;
    private boolean enableDeduplication;
    private boolean enableEventSizeLimiting;
    private boolean enableExternalConfiguration;
    private boolean enablePrettySerializationOutput;
    private boolean enableScopePersistence;
    private boolean enableScreenTracking;
    private boolean enableShutdownHook;
    private boolean enableSpotlight;
    private boolean enableTimeToFullDisplayTracing;
    private boolean enableUncaughtExceptionHandler;
    private boolean enableUserInteractionBreadcrumbs;
    private boolean enableUserInteractionTracing;
    private boolean enabled;

    @NotNull
    private io.sentry.cache.d envelopeDiskCache;

    @NotNull
    private final io.sentry.util.e envelopeReader;
    private String environment;

    @NotNull
    private a1 executorService;

    @NotNull
    private final c0 experimental;

    @NotNull
    private ILogger fatalLogger;

    @NotNull
    private r4 feedbackOptions;
    private boolean forceInit;

    @NotNull
    private f0 fullyDisplayedReporter;

    @NotNull
    private final List<io.sentry.android.core.internal.gestures.a> gestureTargetLocators;
    private Boolean globalHubMode;
    private Long idleTimeout;
    private List<e0> ignoredCheckIns;
    private List<e0> ignoredSpanOrigins;
    private List<e0> ignoredTransactions;

    @NotNull
    private final List<String> inAppExcludes;

    @NotNull
    private final List<String> inAppIncludes;

    @NotNull
    private j1 initPriority;

    @NotNull
    private k1 instrumenter;
    private volatile o6 internalTracesSampler;

    @NotNull
    protected final io.sentry.util.a lock;

    @NotNull
    private ILogger logger;

    @NotNull
    private n5 logs;
    private long maxAttachmentSize;
    private int maxBreadcrumbs;
    private int maxCacheItems;
    private int maxDepth;
    private int maxFeatureFlags;
    private int maxQueueSize;

    @NotNull
    private t5 maxRequestBodySize;
    private int maxSpans;
    private long maxTraceFileSize;

    @NotNull
    private o5 metrics;

    @NotNull
    private io.sentry.internal.modules.a modulesLoader;

    @NotNull
    private final List<w0> observers;
    private p5 onDiscard;
    private q5 onOversizedEvent;

    @NotNull
    private e5 openTelemetryMode;

    @NotNull
    private final List<r0> optionsObservers;

    @NotNull
    private final List<s0> performanceCollectors;
    private boolean printUncaughtStackTrace;

    @NotNull
    private f3 profileLifecycle;
    private Double profileSessionSampleRate;

    @NotNull
    private v0 profilerConverter;
    private Double profilesSampleRate;
    private r5 profilesSampler;
    private String profilingTracesDirPath;
    private int profilingTracesHz;
    private String proguardUuid;
    private boolean propagateTraceparent;
    private s5 proxy;
    private int readTimeoutMillis;
    private String release;

    @NotNull
    private j3 replayController;

    @NotNull
    private io.sentry.util.runtime.b runtimeManager;
    private Double sampleRate;
    private io.sentry.protocol.t sdkVersion;
    private boolean sendClientReports;
    private boolean sendDefaultPii;
    private boolean sendModules;
    private String sentryClientName;

    @NotNull
    private final io.sentry.util.e serializer;
    private String serverName;

    @NotNull
    private z5 sessionReplay;
    private long sessionTrackingIntervalMillis;

    @NotNull
    private d1 socketTagger;

    @NotNull
    private e1 spanFactory;
    private String spotlightConnectionUrl;
    private SSLSocketFactory sslSocketFactory;
    private boolean startProfilerOnAppStart;

    @NotNull
    private final Map<String, String> tags;

    @NotNull
    private io.sentry.util.thread.a threadChecker;
    private boolean traceOptionsRequests;
    private List<String> tracePropagationTargets;
    private boolean traceSampling;
    private Double tracesSampleRate;
    private u5 tracesSampler;

    @NotNull
    private g1 transactionProfiler;

    @NotNull
    private h1 transportFactory;

    @NotNull
    private io.sentry.transport.h transportGate;

    @NotNull
    private i1 versionDetector;

    @NotNull
    private final List<Object> viewHierarchyExporters;

    @NotNull
    private final List<b0> eventProcessors = new CopyOnWriteArrayList();

    @NotNull
    private final Set<Class<? extends Throwable>> ignoredExceptionsForType = new CopyOnWriteArraySet();
    private List<e0> ignoredErrors = null;

    @NotNull
    private final List<l1> integrations = new CopyOnWriteArrayList();

    @NotNull
    private final Set<String> bundleIds = new CopyOnWriteArraySet();

    @NotNull
    private final io.sentry.util.e parsedDsn = new io.sentry.util.e(new f5(this, 0));
    private long shutdownTimeoutMillis = 2000;
    private long flushTimeoutMillis = 15000;
    private long sessionFlushTimeoutMillis = 15000;

    /* JADX WARN: Removed duplicated region for block: B:17:0x0269  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public v5(boolean z5) {
        e1 u2Var;
        Class c6;
        Object newInstance;
        j2 j2Var = j2.f11638d;
        this.logger = j2Var;
        this.fatalLogger = j2Var;
        this.diagnosticLevel = DEFAULT_DIAGNOSTIC_LEVEL;
        this.serializer = new io.sentry.util.e(new f5(this, 1));
        this.envelopeReader = new io.sentry.util.e(new f5(this, 2));
        this.maxDepth = 100;
        this.maxCacheItems = 30;
        this.maxQueueSize = 30;
        this.maxBreadcrumbs = 100;
        this.maxFeatureFlags = 100;
        this.inAppExcludes = new CopyOnWriteArrayList();
        this.inAppIncludes = new CopyOnWriteArrayList();
        this.transportFactory = w2.f12067d;
        this.transportGate = io.sentry.transport.k.f12005d;
        this.attachStacktrace = true;
        this.enableAutoSessionTracking = true;
        this.sessionTrackingIntervalMillis = 30000L;
        this.attachServerName = true;
        this.enableUncaughtExceptionHandler = true;
        this.printUncaughtStackTrace = false;
        this.executorService = g2.f11557v;
        this.connectionTimeoutMillis = 30000;
        this.readTimeoutMillis = 30000;
        this.envelopeDiskCache = io.sentry.transport.i.f12003d;
        this.sendDefaultPii = false;
        this.observers = new CopyOnWriteArrayList();
        this.optionsObservers = new CopyOnWriteArrayList();
        this.tags = new ConcurrentHashMap();
        this.maxAttachmentSize = 20971520L;
        this.enableDeduplication = true;
        this.enableEventSizeLimiting = false;
        this.maxSpans = 1000;
        this.enableShutdownHook = true;
        this.maxRequestBodySize = t5.NONE;
        this.traceSampling = true;
        this.maxTraceFileSize = 5242880L;
        this.transactionProfiler = g2.f11558w;
        this.continuousProfiler = f2.f11542d;
        this.profilerConverter = k2.a;
        this.tracePropagationTargets = null;
        this.defaultTracePropagationTargets = Collections.singletonList(DEFAULT_PROPAGATION_TARGETS);
        this.propagateTraceparent = false;
        this.idleTimeout = 3000L;
        this.contextTags = new CopyOnWriteArrayList();
        this.sendClientReports = true;
        this.clientReportRecorder = new e4.l(this);
        this.modulesLoader = io.sentry.internal.modules.e.a;
        this.debugMetaLoader = io.sentry.internal.debugmeta.b.f11620d;
        this.enableUserInteractionTracing = false;
        this.enableUserInteractionBreadcrumbs = true;
        this.instrumenter = k1.SENTRY;
        this.gestureTargetLocators = new ArrayList();
        this.viewHierarchyExporters = new ArrayList();
        this.threadChecker = io.sentry.util.thread.b.a;
        this.traceOptionsRequests = true;
        this.dateProvider = new io.sentry.util.e(new i7.a(12));
        this.performanceCollectors = new ArrayList();
        this.compositePerformanceCollector = d2.a;
        this.enableTimeToFullDisplayTracing = false;
        this.fullyDisplayedReporter = f0.f11541b;
        this.connectionStatusProvider = new e2();
        this.enabled = true;
        this.enablePrettySerializationOutput = true;
        this.sendModules = true;
        this.enableSpotlight = false;
        this.enableScopePersistence = true;
        this.ignoredCheckIns = null;
        this.ignoredSpanOrigins = null;
        this.ignoredTransactions = null;
        this.backpressureMonitor = io.sentry.backpressure.c.f11410d;
        this.enableBackpressureHandling = true;
        this.enableAppStartProfiling = false;
        this.spanFactory = u2.f12028b;
        this.profilingTracesHz = 101;
        this.cron = null;
        this.replayController = g2.f11556i;
        this.distributionController = g2.f11555e;
        this.enableScreenTracking = true;
        this.defaultScopeType = t3.ISOLATION;
        this.initPriority = j1.MEDIUM;
        this.forceInit = false;
        this.globalHubMode = null;
        this.lock = new io.sentry.util.a();
        this.openTelemetryMode = e5.AUTO;
        this.captureOpenTelemetryEvents = false;
        this.versionDetector = x2.f12076d;
        this.profileLifecycle = f3.MANUAL;
        this.startProfilerOnAppStart = false;
        this.deadlineTimeout = 30000L;
        n5 n5Var = new n5();
        n5Var.a = false;
        n5Var.f11687b = new io.sentry.logger.d();
        this.logs = n5Var;
        o5 o5Var = new o5();
        o5Var.a = true;
        o5Var.f11704b = new io.sentry.metrics.c();
        this.metrics = o5Var;
        this.socketTagger = s2.f11974d;
        this.runtimeManager = new ha.k(10);
        this.distribution = new m5();
        io.sentry.protocol.t tVar = new io.sentry.protocol.t("sentry.java", BuildConfig.VERSION_NAME);
        tVar.f11884e = BuildConfig.VERSION_NAME;
        this.experimental = new c0();
        this.sessionReplay = new z5(z5, tVar);
        r4 r4Var = new r4();
        r4Var.a = false;
        r4Var.f11926b = true;
        r4Var.f11927c = false;
        r4Var.f11928d = true;
        r4Var.f11929e = true;
        r4Var.f11930f = true;
        this.feedbackOptions = r4Var;
        if (z5) {
            return;
        }
        if (!io.sentry.util.h.a && io.sentry.util.f.b("io.sentry.opentelemetry.OtelSpanFactory", j2Var) && (c6 = io.sentry.util.f.c("io.sentry.opentelemetry.OtelSpanFactory", j2Var)) != null) {
            try {
                newInstance = c6.getDeclaredConstructor(null).newInstance(null);
            } catch (IllegalAccessException | InstantiationException | NoSuchMethodException | InvocationTargetException unused) {
            }
            if (newInstance != null && (newInstance instanceof e1)) {
                u2Var = (e1) newInstance;
                setSpanFactory(u2Var);
                e4.i iVar = new e4.i(this);
                this.executorService = iVar;
                iVar.e();
                this.integrations.add(new UncaughtExceptionHandlerIntegration());
                this.integrations.add(new ShutdownHookIntegration());
                this.integrations.add(new SpotlightIntegration());
                this.eventProcessors.add(new a2(this));
                this.eventProcessors.add(new m(this));
                if (!io.sentry.util.h.a) {
                    this.eventProcessors.add(new a6());
                }
                setSentryClientName("sentry.java/8.31.0");
                setSdkVersion(tVar);
                u4.d().b("maven:io.sentry:sentry", BuildConfig.VERSION_NAME);
            }
        }
        u2Var = new u2(1);
        setSpanFactory(u2Var);
        e4.i iVar2 = new e4.i(this);
        this.executorService = iVar2;
        iVar2.e();
        this.integrations.add(new UncaughtExceptionHandlerIntegration());
        this.integrations.add(new ShutdownHookIntegration());
        this.integrations.add(new SpotlightIntegration());
        this.eventProcessors.add(new a2(this));
        this.eventProcessors.add(new m(this));
        if (!io.sentry.util.h.a) {
        }
        setSentryClientName("sentry.java/8.31.0");
        setSdkVersion(tVar);
        u4.d().b("maven:io.sentry:sentry", BuildConfig.VERSION_NAME);
    }

    public static /* synthetic */ y a(v5 v5Var) {
        return new y(v5Var.dsn);
    }

    public static /* synthetic */ z b(v5 v5Var) {
        return new z((c1) v5Var.serializer.a());
    }

    @NotNull
    public static v5 empty() {
        return new v5(true);
    }

    public void addBundleId(String str) {
        if (str != null) {
            String trim = str.trim();
            if (trim.isEmpty()) {
                return;
            }
            this.bundleIds.add(trim);
        }
    }

    public void addContextTag(@NotNull String str) {
        this.contextTags.add(str);
    }

    public void addEventProcessor(@NotNull b0 b0Var) {
        this.eventProcessors.add(b0Var);
    }

    public void addIgnoredCheckIn(String str) {
        if (this.ignoredCheckIns == null) {
            this.ignoredCheckIns = new ArrayList();
        }
        this.ignoredCheckIns.add(new e0(str));
    }

    public void addIgnoredError(@NotNull String str) {
        if (this.ignoredErrors == null) {
            this.ignoredErrors = new ArrayList();
        }
        this.ignoredErrors.add(new e0(str));
    }

    public void addIgnoredExceptionForType(@NotNull Class<? extends Throwable> cls) {
        this.ignoredExceptionsForType.add(cls);
    }

    public void addIgnoredSpanOrigin(String str) {
        if (this.ignoredSpanOrigins == null) {
            this.ignoredSpanOrigins = new ArrayList();
        }
        this.ignoredSpanOrigins.add(new e0(str));
    }

    public void addIgnoredTransaction(String str) {
        if (this.ignoredTransactions == null) {
            this.ignoredTransactions = new ArrayList();
        }
        this.ignoredTransactions.add(new e0(str));
    }

    public void addInAppExclude(@NotNull String str) {
        this.inAppExcludes.add(str);
    }

    public void addInAppInclude(@NotNull String str) {
        this.inAppIncludes.add(str);
    }

    public void addIntegration(@NotNull l1 l1Var) {
        this.integrations.add(l1Var);
    }

    public void addOptionsObserver(@NotNull r0 r0Var) {
        this.optionsObservers.add(r0Var);
    }

    public void addPerformanceCollector(@NotNull s0 s0Var) {
        this.performanceCollectors.add(s0Var);
    }

    public void addScopeObserver(@NotNull w0 w0Var) {
        this.observers.add(w0Var);
    }

    public boolean containsIgnoredExceptionForType(@NotNull Throwable th2) {
        return this.ignoredExceptionsForType.contains(th2.getClass());
    }

    public io.sentry.cache.g findPersistingScopeObserver() {
        for (w0 w0Var : this.observers) {
            if (w0Var instanceof io.sentry.cache.g) {
                return (io.sentry.cache.g) w0Var;
            }
        }
        return null;
    }

    @NotNull
    public io.sentry.backpressure.b getBackpressureMonitor() {
        return this.backpressureMonitor;
    }

    public g5 getBeforeBreadcrumb() {
        return this.beforeBreadcrumb;
    }

    public h5 getBeforeEnvelopeCallback() {
        return this.beforeEnvelopeCallback;
    }

    public i5 getBeforeSend() {
        return this.beforeSend;
    }

    public i5 getBeforeSendFeedback() {
        return this.beforeSendFeedback;
    }

    public j5 getBeforeSendReplay() {
        return null;
    }

    public k5 getBeforeSendTransaction() {
        return null;
    }

    @NotNull
    public Set<String> getBundleIds() {
        return this.bundleIds;
    }

    public String getCacheDirPath() {
        String str = this.cacheDirPath;
        if (str == null || str.isEmpty()) {
            return null;
        }
        return this.dsnHash != null ? new File(this.cacheDirPath, this.dsnHash).getAbsolutePath() : this.cacheDirPath;
    }

    public String getCacheDirPathWithoutDsn() {
        String str = this.cacheDirPath;
        if (str == null || str.isEmpty()) {
            return null;
        }
        return this.cacheDirPath;
    }

    @NotNull
    public io.sentry.clientreport.f getClientReportRecorder() {
        return this.clientReportRecorder;
    }

    @NotNull
    public k getCompositePerformanceCollector() {
        return this.compositePerformanceCollector;
    }

    @NotNull
    public m0 getConnectionStatusProvider() {
        return this.connectionStatusProvider;
    }

    public int getConnectionTimeoutMillis() {
        return this.connectionTimeoutMillis;
    }

    @NotNull
    public List<String> getContextTags() {
        return this.contextTags;
    }

    @NotNull
    public n0 getContinuousProfiler() {
        return this.continuousProfiler;
    }

    public l5 getCron() {
        return this.cron;
    }

    @NotNull
    public j4 getDateProvider() {
        return (j4) this.dateProvider.a();
    }

    public long getDeadlineTimeout() {
        return this.deadlineTimeout;
    }

    @NotNull
    public io.sentry.internal.debugmeta.a getDebugMetaLoader() {
        return this.debugMetaLoader;
    }

    @NotNull
    public t3 getDefaultScopeType() {
        return this.defaultScopeType;
    }

    @NotNull
    public SentryLevel getDiagnosticLevel() {
        return this.diagnosticLevel;
    }

    public String getDist() {
        return this.dist;
    }

    public String getDistinctId() {
        return this.distinctId;
    }

    @NotNull
    public m5 getDistribution() {
        return this.distribution;
    }

    @NotNull
    public o0 getDistributionController() {
        return this.distributionController;
    }

    public String getDsn() {
        return this.dsn;
    }

    @NotNull
    public io.sentry.cache.d getEnvelopeDiskCache() {
        return this.envelopeDiskCache;
    }

    @NotNull
    public p0 getEnvelopeReader() {
        return (p0) this.envelopeReader.a();
    }

    public String getEnvironment() {
        String str = this.environment;
        return str != null ? str : DEFAULT_ENVIRONMENT;
    }

    @NotNull
    public List<b0> getEventProcessors() {
        return this.eventProcessors;
    }

    @NotNull
    public a1 getExecutorService() {
        return this.executorService;
    }

    @NotNull
    public c0 getExperimental() {
        return this.experimental;
    }

    @NotNull
    public ILogger getFatalLogger() {
        return this.fatalLogger;
    }

    @NotNull
    public r4 getFeedbackOptions() {
        return this.feedbackOptions;
    }

    public long getFlushTimeoutMillis() {
        return this.flushTimeoutMillis;
    }

    @NotNull
    public f0 getFullyDisplayedReporter() {
        return this.fullyDisplayedReporter;
    }

    public List<io.sentry.android.core.internal.gestures.a> getGestureTargetLocators() {
        return this.gestureTargetLocators;
    }

    public Long getIdleTimeout() {
        return this.idleTimeout;
    }

    public List<e0> getIgnoredCheckIns() {
        return this.ignoredCheckIns;
    }

    public List<e0> getIgnoredErrors() {
        return this.ignoredErrors;
    }

    @NotNull
    public Set<Class<? extends Throwable>> getIgnoredExceptionsForType() {
        return this.ignoredExceptionsForType;
    }

    public List<e0> getIgnoredSpanOrigins() {
        return this.ignoredSpanOrigins;
    }

    public List<e0> getIgnoredTransactions() {
        return this.ignoredTransactions;
    }

    @NotNull
    public List<String> getInAppExcludes() {
        return this.inAppExcludes;
    }

    @NotNull
    public List<String> getInAppIncludes() {
        return this.inAppIncludes;
    }

    @NotNull
    public j1 getInitPriority() {
        return this.initPriority;
    }

    @NotNull
    public k1 getInstrumenter() {
        return this.instrumenter;
    }

    @NotNull
    public List<l1> getIntegrations() {
        return this.integrations;
    }

    @NotNull
    public o6 getInternalTracesSampler() {
        if (this.internalTracesSampler == null) {
            r a = this.lock.a();
            try {
                if (this.internalTracesSampler == null) {
                    this.internalTracesSampler = new o6(this);
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
        return this.internalTracesSampler;
    }

    @NotNull
    public ILogger getLogger() {
        return this.logger;
    }

    @NotNull
    public n5 getLogs() {
        return this.logs;
    }

    public long getMaxAttachmentSize() {
        return this.maxAttachmentSize;
    }

    public int getMaxBreadcrumbs() {
        return this.maxBreadcrumbs;
    }

    public int getMaxCacheItems() {
        return this.maxCacheItems;
    }

    public int getMaxDepth() {
        return this.maxDepth;
    }

    public int getMaxFeatureFlags() {
        return this.maxFeatureFlags;
    }

    public int getMaxQueueSize() {
        return this.maxQueueSize;
    }

    @NotNull
    public t5 getMaxRequestBodySize() {
        return this.maxRequestBodySize;
    }

    public int getMaxSpans() {
        return this.maxSpans;
    }

    public long getMaxTraceFileSize() {
        return this.maxTraceFileSize;
    }

    @NotNull
    public o5 getMetrics() {
        return this.metrics;
    }

    @NotNull
    public io.sentry.internal.modules.a getModulesLoader() {
        return this.modulesLoader;
    }

    public p5 getOnDiscard() {
        return null;
    }

    public q5 getOnOversizedEvent() {
        return this.onOversizedEvent;
    }

    @NotNull
    public e5 getOpenTelemetryMode() {
        return this.openTelemetryMode;
    }

    @NotNull
    public List<r0> getOptionsObservers() {
        return this.optionsObservers;
    }

    public String getOutboxPath() {
        String cacheDirPath = getCacheDirPath();
        if (cacheDirPath == null) {
            return null;
        }
        return new File(cacheDirPath, "outbox").getAbsolutePath();
    }

    @NotNull
    public List<s0> getPerformanceCollectors() {
        return this.performanceCollectors;
    }

    @NotNull
    public f3 getProfileLifecycle() {
        return this.profileLifecycle;
    }

    public Double getProfileSessionSampleRate() {
        return this.profileSessionSampleRate;
    }

    @NotNull
    public v0 getProfilerConverter() {
        return this.profilerConverter;
    }

    public Double getProfilesSampleRate() {
        return this.profilesSampleRate;
    }

    public r5 getProfilesSampler() {
        return null;
    }

    public String getProfilingTracesDirPath() {
        String str = this.profilingTracesDirPath;
        if (str != null && !str.isEmpty()) {
            return this.dsnHash != null ? new File(this.profilingTracesDirPath, this.dsnHash).getAbsolutePath() : this.profilingTracesDirPath;
        }
        String cacheDirPath = getCacheDirPath();
        if (cacheDirPath == null) {
            return null;
        }
        return new File(cacheDirPath, "profiling_traces").getAbsolutePath();
    }

    public int getProfilingTracesHz() {
        return this.profilingTracesHz;
    }

    public String getProguardUuid() {
        return this.proguardUuid;
    }

    public s5 getProxy() {
        return this.proxy;
    }

    public int getReadTimeoutMillis() {
        return this.readTimeoutMillis;
    }

    public String getRelease() {
        return this.release;
    }

    @NotNull
    public j3 getReplayController() {
        return this.replayController;
    }

    @NotNull
    public io.sentry.util.runtime.b getRuntimeManager() {
        return this.runtimeManager;
    }

    public Double getSampleRate() {
        return this.sampleRate;
    }

    @NotNull
    public List<w0> getScopeObservers() {
        return this.observers;
    }

    public io.sentry.protocol.t getSdkVersion() {
        return this.sdkVersion;
    }

    public String getSentryClientName() {
        return this.sentryClientName;
    }

    @NotNull
    public c1 getSerializer() {
        return (c1) this.serializer.a();
    }

    public String getServerName() {
        return this.serverName;
    }

    public long getSessionFlushTimeoutMillis() {
        return this.sessionFlushTimeoutMillis;
    }

    @NotNull
    public z5 getSessionReplay() {
        return this.sessionReplay;
    }

    public long getSessionTrackingIntervalMillis() {
        return this.sessionTrackingIntervalMillis;
    }

    public long getShutdownTimeoutMillis() {
        return this.shutdownTimeoutMillis;
    }

    @NotNull
    public d1 getSocketTagger() {
        return this.socketTagger;
    }

    @NotNull
    public e1 getSpanFactory() {
        return this.spanFactory;
    }

    public String getSpotlightConnectionUrl() {
        return this.spotlightConnectionUrl;
    }

    public SSLSocketFactory getSslSocketFactory() {
        return this.sslSocketFactory;
    }

    @NotNull
    public Map<String, String> getTags() {
        return this.tags;
    }

    @NotNull
    public io.sentry.util.thread.a getThreadChecker() {
        return this.threadChecker;
    }

    @NotNull
    public List<String> getTracePropagationTargets() {
        List<String> list = this.tracePropagationTargets;
        return list == null ? this.defaultTracePropagationTargets : list;
    }

    public Double getTracesSampleRate() {
        return this.tracesSampleRate;
    }

    public u5 getTracesSampler() {
        return null;
    }

    @NotNull
    public g1 getTransactionProfiler() {
        return this.transactionProfiler;
    }

    @NotNull
    public h1 getTransportFactory() {
        return this.transportFactory;
    }

    @NotNull
    public io.sentry.transport.h getTransportGate() {
        return this.transportGate;
    }

    @NotNull
    public i1 getVersionDetector() {
        return this.versionDetector;
    }

    @NotNull
    public final List<Object> getViewHierarchyExporters() {
        return this.viewHierarchyExporters;
    }

    public boolean isAttachServerName() {
        return this.attachServerName;
    }

    public boolean isAttachStacktrace() {
        return this.attachStacktrace;
    }

    public boolean isAttachThreads() {
        return this.attachThreads;
    }

    public boolean isCaptureOpenTelemetryEvents() {
        return this.captureOpenTelemetryEvents;
    }

    public boolean isContinuousProfilingEnabled() {
        Double d6;
        return this.profilesSampleRate == null && (d6 = this.profileSessionSampleRate) != null && d6.doubleValue() > 0.0d;
    }

    public boolean isDebug() {
        return this.debug;
    }

    public boolean isEnableAppStartProfiling() {
        return (isProfilingEnabled() || isContinuousProfilingEnabled()) && this.enableAppStartProfiling;
    }

    public boolean isEnableAutoSessionTracking() {
        return this.enableAutoSessionTracking;
    }

    public boolean isEnableBackpressureHandling() {
        return this.enableBackpressureHandling;
    }

    public boolean isEnableDeduplication() {
        return this.enableDeduplication;
    }

    public boolean isEnableEventSizeLimiting() {
        return this.enableEventSizeLimiting;
    }

    public boolean isEnableExternalConfiguration() {
        return this.enableExternalConfiguration;
    }

    public boolean isEnablePrettySerializationOutput() {
        return this.enablePrettySerializationOutput;
    }

    public boolean isEnableScopePersistence() {
        return this.enableScopePersistence;
    }

    public boolean isEnableScreenTracking() {
        return this.enableScreenTracking;
    }

    public boolean isEnableShutdownHook() {
        return this.enableShutdownHook;
    }

    public boolean isEnableSpotlight() {
        return this.enableSpotlight;
    }

    public boolean isEnableTimeToFullDisplayTracing() {
        return this.enableTimeToFullDisplayTracing;
    }

    public boolean isEnableUncaughtExceptionHandler() {
        return this.enableUncaughtExceptionHandler;
    }

    public boolean isEnableUserInteractionBreadcrumbs() {
        return this.enableUserInteractionBreadcrumbs;
    }

    public boolean isEnableUserInteractionTracing() {
        return this.enableUserInteractionTracing;
    }

    public boolean isEnabled() {
        return this.enabled;
    }

    public boolean isForceInit() {
        return this.forceInit;
    }

    public Boolean isGlobalHubMode() {
        return this.globalHubMode;
    }

    public boolean isPrintUncaughtStackTrace() {
        return this.printUncaughtStackTrace;
    }

    public boolean isProfilingEnabled() {
        Double d6 = this.profilesSampleRate;
        return d6 != null && d6.doubleValue() > 0.0d;
    }

    public boolean isPropagateTraceparent() {
        return this.propagateTraceparent;
    }

    public boolean isSendClientReports() {
        return this.sendClientReports;
    }

    public boolean isSendDefaultPii() {
        return this.sendDefaultPii;
    }

    public boolean isSendModules() {
        return this.sendModules;
    }

    public boolean isStartProfilerOnAppStart() {
        return this.startProfilerOnAppStart;
    }

    public boolean isTraceOptionsRequests() {
        return this.traceOptionsRequests;
    }

    public boolean isTraceSampling() {
        return this.traceSampling;
    }

    public boolean isTracingEnabled() {
        if (getTracesSampleRate() != null) {
            return true;
        }
        getTracesSampler();
        return false;
    }

    public void loadLazyFields() {
        getSerializer();
        retrieveParsedDsn();
        getEnvelopeReader();
        getDateProvider();
    }

    public void merge(@NotNull d0 d0Var) {
        String str = d0Var.a;
        if (str != null) {
            setDsn(str);
        }
        String str2 = d0Var.f11471b;
        if (str2 != null) {
            setEnvironment(str2);
        }
        String str3 = d0Var.f11472c;
        if (str3 != null) {
            setRelease(str3);
        }
        String str4 = d0Var.f11473d;
        if (str4 != null) {
            setDist(str4);
        }
        String str5 = d0Var.f11474e;
        if (str5 != null) {
            setServerName(str5);
        }
        s5 s5Var = d0Var.f11480m;
        if (s5Var != null) {
            setProxy(s5Var);
        }
        Boolean bool = d0Var.f11475f;
        if (bool != null) {
            setEnableUncaughtExceptionHandler(bool.booleanValue());
        }
        Boolean bool2 = d0Var.f11489v;
        if (bool2 != null) {
            setPrintUncaughtStackTrace(bool2.booleanValue());
        }
        Double d6 = d0Var.f11478i;
        if (d6 != null) {
            setTracesSampleRate(d6);
        }
        Double d7 = d0Var.j;
        if (d7 != null) {
            setProfilesSampleRate(d7);
        }
        Boolean bool3 = d0Var.f11476g;
        if (bool3 != null) {
            setDebug(bool3.booleanValue());
        }
        Boolean bool4 = d0Var.f11477h;
        if (bool4 != null) {
            setEnableDeduplication(bool4.booleanValue());
        }
        Boolean bool5 = d0Var.f11490w;
        if (bool5 != null) {
            setSendClientReports(bool5.booleanValue());
        }
        Boolean bool6 = d0Var.K;
        if (bool6 != null) {
            setForceInit(bool6.booleanValue());
        }
        for (Map.Entry entry : new HashMap(d0Var.f11479l).entrySet()) {
            this.tags.put((String) entry.getKey(), (String) entry.getValue());
        }
        Iterator it = new ArrayList(d0Var.f11482o).iterator();
        while (it.hasNext()) {
            addInAppInclude((String) it.next());
        }
        Iterator it2 = new ArrayList(d0Var.f11481n).iterator();
        while (it2.hasNext()) {
            addInAppExclude((String) it2.next());
        }
        Iterator it3 = new HashSet(d0Var.f11487t).iterator();
        while (it3.hasNext()) {
            addIgnoredExceptionForType((Class) it3.next());
        }
        if (d0Var.f11483p != null) {
            setTracePropagationTargets(new ArrayList(d0Var.f11483p));
        }
        Iterator it4 = new ArrayList(d0Var.f11484q).iterator();
        while (it4.hasNext()) {
            addContextTag((String) it4.next());
        }
        String str6 = d0Var.f11485r;
        if (str6 != null) {
            setProguardUuid(str6);
        }
        Long l6 = d0Var.f11486s;
        if (l6 != null) {
            setIdleTimeout(l6);
        }
        Iterator it5 = d0Var.f11491x.iterator();
        while (it5.hasNext()) {
            addBundleId((String) it5.next());
        }
        Boolean bool7 = d0Var.f11492y;
        if (bool7 != null) {
            setEnabled(bool7.booleanValue());
        }
        Boolean bool8 = d0Var.f11493z;
        if (bool8 != null) {
            setEnablePrettySerializationOutput(bool8.booleanValue());
        }
        Boolean bool9 = d0Var.G;
        if (bool9 != null) {
            setSendModules(bool9.booleanValue());
        }
        if (d0Var.E != null) {
            setIgnoredCheckIns(new ArrayList(d0Var.E));
        }
        if (d0Var.F != null) {
            setIgnoredTransactions(new ArrayList(d0Var.F));
        }
        if (d0Var.f11488u != null) {
            setIgnoredErrors(new ArrayList(d0Var.f11488u));
        }
        Boolean bool10 = d0Var.I;
        if (bool10 != null) {
            setEnableBackpressureHandling(bool10.booleanValue());
        }
        t5 t5Var = d0Var.k;
        if (t5Var != null) {
            setMaxRequestBodySize(t5Var);
        }
        Boolean bool11 = d0Var.H;
        if (bool11 != null) {
            setSendDefaultPii(bool11.booleanValue());
        }
        Boolean bool12 = d0Var.L;
        if (bool12 != null) {
            setCaptureOpenTelemetryEvents(bool12.booleanValue());
        }
        Boolean bool13 = d0Var.A;
        if (bool13 != null) {
            setEnableSpotlight(bool13.booleanValue());
        }
        String str7 = d0Var.D;
        if (str7 != null) {
            setSpotlightConnectionUrl(str7);
        }
        Boolean bool14 = d0Var.J;
        if (bool14 != null) {
            setGlobalHubMode(bool14);
        }
        if (d0Var.P != null) {
            if (getCron() == null) {
                setCron(d0Var.P);
            } else {
                if (d0Var.P.a != null) {
                    getCron().a = d0Var.P.a;
                }
                if (d0Var.P.f11652b != null) {
                    getCron().f11652b = d0Var.P.f11652b;
                }
                if (d0Var.P.f11653c != null) {
                    getCron().f11653c = d0Var.P.f11653c;
                }
                if (d0Var.P.f11654d != null) {
                    getCron().f11654d = d0Var.P.f11654d;
                }
                if (d0Var.P.f11655e != null) {
                    getCron().f11655e = d0Var.P.f11655e;
                }
            }
        }
        if (d0Var.B != null) {
            getLogs().a = d0Var.B.booleanValue();
        }
        if (d0Var.C != null) {
            getMetrics().a = d0Var.C.booleanValue();
        }
        Double d8 = d0Var.M;
        if (d8 != null) {
            setProfileSessionSampleRate(d8);
        }
        String str8 = d0Var.N;
        if (str8 != null) {
            setProfilingTracesDirPath(str8);
        }
        f3 f3Var = d0Var.O;
        if (f3Var != null) {
            setProfileLifecycle(f3Var);
        }
    }

    @NotNull
    public y retrieveParsedDsn() {
        return (y) this.parsedDsn.a();
    }

    public void setAttachServerName(boolean z5) {
        this.attachServerName = z5;
    }

    public void setAttachStacktrace(boolean z5) {
        this.attachStacktrace = z5;
    }

    public void setAttachThreads(boolean z5) {
        this.attachThreads = z5;
    }

    public void setBackpressureMonitor(@NotNull io.sentry.backpressure.b bVar) {
        this.backpressureMonitor = bVar;
    }

    public void setBeforeBreadcrumb(g5 g5Var) {
        this.beforeBreadcrumb = g5Var;
    }

    public void setBeforeEnvelopeCallback(h5 h5Var) {
        this.beforeEnvelopeCallback = h5Var;
    }

    public void setBeforeSend(i5 i5Var) {
        this.beforeSend = i5Var;
    }

    public void setBeforeSendFeedback(i5 i5Var) {
        this.beforeSendFeedback = i5Var;
    }

    public void setBeforeSendReplay(j5 j5Var) {
    }

    public void setBeforeSendTransaction(k5 k5Var) {
    }

    public void setCacheDirPath(String str) {
        this.cacheDirPath = str;
    }

    public void setCaptureOpenTelemetryEvents(boolean z5) {
        this.captureOpenTelemetryEvents = z5;
    }

    public void setCompositePerformanceCollector(@NotNull k kVar) {
        this.compositePerformanceCollector = kVar;
    }

    public void setConnectionStatusProvider(@NotNull m0 m0Var) {
        this.connectionStatusProvider = m0Var;
    }

    public void setConnectionTimeoutMillis(int i5) {
        this.connectionTimeoutMillis = i5;
    }

    public void setContinuousProfiler(n0 n0Var) {
        if (this.continuousProfiler != f2.f11542d || n0Var == null) {
            return;
        }
        this.continuousProfiler = n0Var;
    }

    public void setCron(l5 l5Var) {
        this.cron = l5Var;
    }

    public void setDateProvider(@NotNull j4 j4Var) {
        this.dateProvider.b(j4Var);
    }

    public void setDeadlineTimeout(long j) {
        this.deadlineTimeout = j;
    }

    public void setDebug(boolean z5) {
        this.debug = z5;
    }

    public void setDebugMetaLoader(io.sentry.internal.debugmeta.a aVar) {
        if (aVar == null) {
            aVar = io.sentry.internal.debugmeta.b.f11620d;
        }
        this.debugMetaLoader = aVar;
    }

    public void setDefaultScopeType(@NotNull t3 t3Var) {
        this.defaultScopeType = t3Var;
    }

    public void setDiagnosticLevel(SentryLevel sentryLevel) {
        if (sentryLevel == null) {
            sentryLevel = DEFAULT_DIAGNOSTIC_LEVEL;
        }
        this.diagnosticLevel = sentryLevel;
    }

    public void setDist(String str) {
        this.dist = str;
    }

    public void setDistinctId(String str) {
        this.distinctId = str;
    }

    public void setDistribution(@NotNull m5 m5Var) {
        if (m5Var == null) {
            m5Var = new m5();
        }
        this.distribution = m5Var;
    }

    public void setDistributionController(o0 o0Var) {
        if (o0Var == null) {
            o0Var = g2.f11555e;
        }
        this.distributionController = o0Var;
    }

    public void setDsn(String str) {
        this.dsn = str;
        io.sentry.util.e eVar = this.parsedDsn;
        r a = eVar.f12040c.a();
        String str2 = null;
        try {
            eVar.a = null;
            a.close();
            String str3 = this.dsn;
            ILogger iLogger = this.logger;
            Charset charset = io.sentry.util.l.a;
            if (str3 != null && !str3.isEmpty()) {
                try {
                    str2 = new StringBuilder(new BigInteger(1, MessageDigest.getInstance("SHA-1").digest(str3.getBytes(io.sentry.util.l.a))).toString(16)).toString();
                } catch (NoSuchAlgorithmException e9) {
                    iLogger.k(SentryLevel.INFO, "SHA-1 isn't available to calculate the hash.", e9);
                } catch (Throwable th2) {
                    iLogger.u(SentryLevel.INFO, "string: %s could not calculate its hash", th2, str3);
                }
            }
            this.dsnHash = str2;
        } catch (Throwable th3) {
            try {
                a.close();
            } catch (Throwable th4) {
                th3.addSuppressed(th4);
            }
            throw th3;
        }
    }

    public void setEnableAppStartProfiling(boolean z5) {
        this.enableAppStartProfiling = z5;
    }

    public void setEnableAutoSessionTracking(boolean z5) {
        this.enableAutoSessionTracking = z5;
    }

    public void setEnableBackpressureHandling(boolean z5) {
        this.enableBackpressureHandling = z5;
    }

    public void setEnableDeduplication(boolean z5) {
        this.enableDeduplication = z5;
    }

    public void setEnableEventSizeLimiting(boolean z5) {
        this.enableEventSizeLimiting = z5;
    }

    public void setEnableExternalConfiguration(boolean z5) {
        this.enableExternalConfiguration = z5;
    }

    public void setEnablePrettySerializationOutput(boolean z5) {
        this.enablePrettySerializationOutput = z5;
    }

    public void setEnableScopePersistence(boolean z5) {
        this.enableScopePersistence = z5;
    }

    public void setEnableScreenTracking(boolean z5) {
        this.enableScreenTracking = z5;
    }

    public void setEnableShutdownHook(boolean z5) {
        this.enableShutdownHook = z5;
    }

    public void setEnableSpotlight(boolean z5) {
        this.enableSpotlight = z5;
    }

    public void setEnableTimeToFullDisplayTracing(boolean z5) {
        this.enableTimeToFullDisplayTracing = z5;
    }

    public void setEnableUncaughtExceptionHandler(boolean z5) {
        this.enableUncaughtExceptionHandler = z5;
    }

    public void setEnableUserInteractionBreadcrumbs(boolean z5) {
        this.enableUserInteractionBreadcrumbs = z5;
    }

    public void setEnableUserInteractionTracing(boolean z5) {
        this.enableUserInteractionTracing = z5;
    }

    public void setEnabled(boolean z5) {
        this.enabled = z5;
    }

    public void setEnvelopeDiskCache(io.sentry.cache.d dVar) {
        if (dVar == null) {
            dVar = io.sentry.transport.i.f12003d;
        }
        this.envelopeDiskCache = dVar;
    }

    public void setEnvelopeReader(p0 p0Var) {
        io.sentry.util.e eVar = this.envelopeReader;
        if (p0Var == null) {
            p0Var = h2.a;
        }
        eVar.b(p0Var);
    }

    public void setEnvironment(String str) {
        this.environment = str;
    }

    public void setExecutorService(@NotNull a1 a1Var) {
        if (a1Var != null) {
            this.executorService = a1Var;
        }
    }

    public void setFatalLogger(ILogger iLogger) {
        if (iLogger == null) {
            iLogger = j2.f11638d;
        }
        this.fatalLogger = iLogger;
    }

    public void setFeedbackOptions(@NotNull r4 r4Var) {
        this.feedbackOptions = r4Var;
    }

    public void setFlushTimeoutMillis(long j) {
        this.flushTimeoutMillis = j;
    }

    public void setForceInit(boolean z5) {
        this.forceInit = z5;
    }

    public void setFullyDisplayedReporter(@NotNull f0 f0Var) {
        this.fullyDisplayedReporter = f0Var;
    }

    public void setGestureTargetLocators(@NotNull List<io.sentry.android.core.internal.gestures.a> list) {
        this.gestureTargetLocators.clear();
        this.gestureTargetLocators.addAll(list);
    }

    public void setGlobalHubMode(Boolean bool) {
        this.globalHubMode = bool;
    }

    public void setIdleTimeout(Long l6) {
        this.idleTimeout = l6;
    }

    public void setIgnoredCheckIns(List<String> list) {
        if (list == null) {
            this.ignoredCheckIns = null;
            return;
        }
        ArrayList arrayList = new ArrayList();
        for (String str : list) {
            if (!str.isEmpty()) {
                arrayList.add(new e0(str));
            }
        }
        this.ignoredCheckIns = arrayList;
    }

    public void setIgnoredErrors(List<String> list) {
        if (list == null) {
            this.ignoredErrors = null;
            return;
        }
        ArrayList arrayList = new ArrayList();
        for (String str : list) {
            if (str != null && !str.isEmpty()) {
                arrayList.add(new e0(str));
            }
        }
        this.ignoredErrors = arrayList;
    }

    public void setIgnoredSpanOrigins(List<String> list) {
        if (list == null) {
            this.ignoredSpanOrigins = null;
            return;
        }
        ArrayList arrayList = new ArrayList();
        for (String str : list) {
            if (str != null && !str.isEmpty()) {
                arrayList.add(new e0(str));
            }
        }
        this.ignoredSpanOrigins = arrayList;
    }

    public void setIgnoredTransactions(List<String> list) {
        if (list == null) {
            this.ignoredTransactions = null;
            return;
        }
        ArrayList arrayList = new ArrayList();
        for (String str : list) {
            if (str != null && !str.isEmpty()) {
                arrayList.add(new e0(str));
            }
        }
        this.ignoredTransactions = arrayList;
    }

    public void setInitPriority(@NotNull j1 j1Var) {
        this.initPriority = j1Var;
    }

    @Deprecated
    public void setInstrumenter(@NotNull k1 k1Var) {
        this.instrumenter = k1Var;
    }

    public void setLogger(ILogger iLogger) {
        this.logger = iLogger == null ? j2.f11638d : new io.sentry.internal.debugmeta.c(11, this, iLogger);
    }

    public void setLogs(@NotNull n5 n5Var) {
        this.logs = n5Var;
    }

    public void setMaxAttachmentSize(long j) {
        this.maxAttachmentSize = j;
    }

    public void setMaxBreadcrumbs(int i5) {
        this.maxBreadcrumbs = i5;
    }

    public void setMaxCacheItems(int i5) {
        this.maxCacheItems = i5;
    }

    public void setMaxDepth(int i5) {
        this.maxDepth = i5;
    }

    public void setMaxFeatureFlags(int i5) {
        this.maxFeatureFlags = i5;
    }

    public void setMaxQueueSize(int i5) {
        if (i5 > 0) {
            this.maxQueueSize = i5;
        }
    }

    public void setMaxRequestBodySize(@NotNull t5 t5Var) {
        this.maxRequestBodySize = t5Var;
    }

    public void setMaxSpans(int i5) {
        this.maxSpans = i5;
    }

    public void setMaxTraceFileSize(long j) {
        this.maxTraceFileSize = j;
    }

    public void setMetrics(@NotNull o5 o5Var) {
        this.metrics = o5Var;
    }

    public void setModulesLoader(io.sentry.internal.modules.a aVar) {
        if (aVar == null) {
            aVar = io.sentry.internal.modules.e.a;
        }
        this.modulesLoader = aVar;
    }

    public void setOnDiscard(p5 p5Var) {
    }

    public void setOnOversizedEvent(q5 q5Var) {
        this.onOversizedEvent = q5Var;
    }

    public void setOpenTelemetryMode(@NotNull e5 e5Var) {
        this.openTelemetryMode = e5Var;
    }

    public void setPrintUncaughtStackTrace(boolean z5) {
        this.printUncaughtStackTrace = z5;
    }

    public void setProfileLifecycle(@NotNull f3 f3Var) {
        this.profileLifecycle = f3Var;
        if (f3Var != f3.TRACE || isTracingEnabled()) {
            return;
        }
        this.logger.u(SentryLevel.WARNING, "Profiling lifecycle is set to TRACE but tracing is disabled. Profiling will not be started automatically.", new Object[0]);
    }

    public void setProfileSessionSampleRate(Double d6) {
        if (e4.f.B(d6, true)) {
            this.profileSessionSampleRate = d6;
            return;
        }
        throw new IllegalArgumentException("The value " + d6 + " is not valid. Use values between 0.0 and 1.0.");
    }

    public void setProfilerConverter(@NotNull v0 v0Var) {
        this.profilerConverter = v0Var;
    }

    public void setProfilesSampleRate(Double d6) {
        if (e4.f.B(d6, true)) {
            this.profilesSampleRate = d6;
            return;
        }
        throw new IllegalArgumentException("The value " + d6 + " is not valid. Use null to disable or values between 0.0 and 1.0.");
    }

    public void setProfilesSampler(r5 r5Var) {
    }

    public void setProfilingTracesDirPath(String str) {
        this.profilingTracesDirPath = str;
    }

    public void setProfilingTracesHz(int i5) {
        this.profilingTracesHz = i5;
    }

    public void setProguardUuid(String str) {
        this.proguardUuid = str;
    }

    public void setPropagateTraceparent(boolean z5) {
        this.propagateTraceparent = z5;
    }

    public void setProxy(s5 s5Var) {
        this.proxy = s5Var;
    }

    public void setReadTimeoutMillis(int i5) {
        this.readTimeoutMillis = i5;
    }

    public void setRelease(String str) {
        this.release = str;
    }

    public void setReplayController(j3 j3Var) {
        if (j3Var == null) {
            j3Var = g2.f11556i;
        }
        this.replayController = j3Var;
    }

    public void setRuntimeManager(@NotNull io.sentry.util.runtime.b bVar) {
        this.runtimeManager = bVar;
    }

    public void setSampleRate(Double d6) {
        if (e4.f.B(d6, true)) {
            this.sampleRate = d6;
            return;
        }
        throw new IllegalArgumentException("The value " + d6 + " is not valid. Use null to disable or values >= 0.0 and <= 1.0.");
    }

    public void setSdkVersion(io.sentry.protocol.t tVar) {
        io.sentry.protocol.t tVar2 = getSessionReplay().f12112m;
        io.sentry.protocol.t tVar3 = this.sdkVersion;
        if (tVar3 != null && tVar2 != null && tVar3.equals(tVar2)) {
            getSessionReplay().f12112m = tVar;
        }
        this.sdkVersion = tVar;
    }

    public void setSendClientReports(boolean z5) {
        this.sendClientReports = z5;
        if (z5) {
            this.clientReportRecorder = new e4.l(this);
        } else {
            this.clientReportRecorder = new qa.s();
        }
    }

    public void setSendDefaultPii(boolean z5) {
        this.sendDefaultPii = z5;
    }

    public void setSendModules(boolean z5) {
        this.sendModules = z5;
    }

    public void setSentryClientName(String str) {
        this.sentryClientName = str;
    }

    public void setSerializer(c1 c1Var) {
        io.sentry.util.e eVar = this.serializer;
        if (c1Var == null) {
            c1Var = r2.a;
        }
        eVar.b(c1Var);
    }

    public void setServerName(String str) {
        this.serverName = str;
    }

    public void setSessionFlushTimeoutMillis(long j) {
        this.sessionFlushTimeoutMillis = j;
    }

    public void setSessionReplay(@NotNull z5 z5Var) {
        this.sessionReplay = z5Var;
    }

    public void setSessionTrackingIntervalMillis(long j) {
        this.sessionTrackingIntervalMillis = j;
    }

    public void setShutdownTimeoutMillis(long j) {
        this.shutdownTimeoutMillis = j;
    }

    public void setSocketTagger(d1 d1Var) {
        if (d1Var == null) {
            d1Var = s2.f11974d;
        }
        this.socketTagger = d1Var;
    }

    public void setSpanFactory(@NotNull e1 e1Var) {
        this.spanFactory = e1Var;
    }

    public void setSpotlightConnectionUrl(String str) {
        this.spotlightConnectionUrl = str;
    }

    public void setSslSocketFactory(SSLSocketFactory sSLSocketFactory) {
        this.sslSocketFactory = sSLSocketFactory;
    }

    public void setStartProfilerOnAppStart(boolean z5) {
        this.startProfilerOnAppStart = z5;
    }

    public void setTag(String str, String str2) {
        if (str == null) {
            return;
        }
        if (str2 == null) {
            this.tags.remove(str);
        } else {
            this.tags.put(str, str2);
        }
    }

    public void setThreadChecker(@NotNull io.sentry.util.thread.a aVar) {
        this.threadChecker = aVar;
    }

    public void setTraceOptionsRequests(boolean z5) {
        this.traceOptionsRequests = z5;
    }

    public void setTracePropagationTargets(List<String> list) {
        if (list == null) {
            this.tracePropagationTargets = null;
            return;
        }
        ArrayList arrayList = new ArrayList();
        for (String str : list) {
            if (!str.isEmpty()) {
                arrayList.add(str);
            }
        }
        this.tracePropagationTargets = arrayList;
    }

    @Deprecated
    public void setTraceSampling(boolean z5) {
        this.traceSampling = z5;
    }

    public void setTracesSampleRate(Double d6) {
        if (e4.f.B(d6, true)) {
            this.tracesSampleRate = d6;
            return;
        }
        throw new IllegalArgumentException("The value " + d6 + " is not valid. Use null to disable or values between 0.0 and 1.0.");
    }

    public void setTracesSampler(u5 u5Var) {
    }

    public void setTransactionProfiler(g1 g1Var) {
        if (this.transactionProfiler != g2.f11558w || g1Var == null) {
            return;
        }
        this.transactionProfiler = g1Var;
    }

    public void setTransportFactory(h1 h1Var) {
        if (h1Var == null) {
            h1Var = w2.f12067d;
        }
        this.transportFactory = h1Var;
    }

    public void setTransportGate(io.sentry.transport.h hVar) {
        if (hVar == null) {
            hVar = io.sentry.transport.k.f12005d;
        }
        this.transportGate = hVar;
    }

    public void setVersionDetector(@NotNull i1 i1Var) {
        this.versionDetector = i1Var;
    }

    public void setViewHierarchyExporters(@NotNull List<Object> list) {
        this.viewHierarchyExporters.clear();
        this.viewHierarchyExporters.addAll(list);
    }
}
