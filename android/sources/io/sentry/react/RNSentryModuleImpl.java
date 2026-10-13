package io.sentry.react;

import android.app.Activity;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Build;
import android.util.Base64;
import android.util.SparseIntArray;
import androidx.core.app.FrameMetricsAggregator;
import androidx.fragment.app.FragmentActivity;
import androidx.fragment.app.FragmentManager;
import com.discord.js_watchdog.SharedPreferencesKey;
import com.discord.notifications.renderer.NotificationRenderer;
import com.facebook.hermes.instrumentation.HermesSamplingProfiler;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapKeySetIterator;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.bridge.WritableNativeArray;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.common.JavascriptException;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import com.reactnativecommunity.clipboard.ClipboardModule;
import e4.e;
import e4.i;
import hc.m;
import io.sentry.Breadcrumb;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.IScope;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.UncaughtExceptionHandlerIntegration;
import io.sentry.a1;
import io.sentry.android.core.AnrIntegration;
import io.sentry.android.core.NdkIntegration;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.ViewHierarchyEventProcessor;
import io.sentry.android.core.c1;
import io.sentry.android.core.d1;
import io.sentry.android.core.h1;
import io.sentry.android.core.internal.util.o;
import io.sentry.android.core.j0;
import io.sentry.android.core.l0;
import io.sentry.android.core.performance.g;
import io.sentry.android.core.q;
import io.sentry.android.core.s;
import io.sentry.android.core.v0;
import io.sentry.c4;
import io.sentry.f3;
import io.sentry.j4;
import io.sentry.l1;
import io.sentry.protocol.h0;
import io.sentry.protocol.i0;
import io.sentry.protocol.j;
import io.sentry.protocol.t;
import io.sentry.protocol.v;
import io.sentry.protocol.w;
import io.sentry.react.replay.RNSentryReplayFragmentLifecycleTracer;
import io.sentry.react.replay.RNSentryReplayMask;
import io.sentry.react.replay.RNSentryReplayUnmask;
import io.sentry.u4;
import io.sentry.util.c;
import io.sentry.util.f;
import io.sentry.v5;
import io.sentry.w3;
import io.sentry.y5;
import io.sentry.z5;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.net.URI;
import java.net.URISyntaxException;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Properties;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.regex.Pattern;
import m3.n;
import org.jetbrains.annotations.NotNull;
import s4.h;
import ys.l;

/* loaded from: classes3.dex */
public class RNSentryModuleImpl {
    private static final int FROZEN_FRAME_THRESHOLD = 700;
    public static final String NAME = "RNSentry";
    private static final int SCREENSHOT_TIMEOUT_SECONDS = 2;
    private static final int SLOW_FRAME_THRESHOLD = 16;
    private static final Charset UTF_8;
    private static final j0 buildInfo;
    static long lastStartTimestampMs = 0;
    private static final ILogger logger;
    private static final String modulesPath = "modules.json";
    private boolean androidXAvailable;
    private final PackageInfo packageInfo;
    private final ReactApplicationContext reactApplicationContext;
    private FrameMetricsAggregator frameMetricsAggregator = null;
    private int profilingTracesHz = 101;
    private s androidProfiler = null;
    private boolean isProguardDebugMetaLoaded = false;
    private String proguardUuid = null;
    private String cacheDirPath = null;
    private a1 executorService = null;
    private long maxTraceFileSize = 5242880;

    @NotNull
    private final Runnable emitNewFrameEvent = createEmitNewFrameEvent();

    @NotNull
    private final j4 dateProvider = new d1();

    @NotNull
    private final f loadClass = new f();

    static {
        l0 l0Var = new l0("RNSentry");
        logger = l0Var;
        buildInfo = new j0(l0Var);
        UTF_8 = Charset.forName("UTF-8");
        lastStartTimestampMs = -1L;
    }

    public RNSentryModuleImpl(ReactApplicationContext reactApplicationContext) {
        this.packageInfo = getPackageInfo(reactApplicationContext);
        this.reactApplicationContext = reactApplicationContext;
    }

    private void addPackages(SentryEvent sentryEvent, t tVar) {
        t tVar2 = sentryEvent.f11545i;
        if (tVar2 == null || !"sentry.javascript.react-native".equals(tVar2.f11883d) || tVar == null) {
            return;
        }
        CopyOnWriteArraySet<w> copyOnWriteArraySet = tVar.f11885i;
        if (copyOnWriteArraySet == null) {
            copyOnWriteArraySet = u4.d().f12037b;
        }
        if (copyOnWriteArraySet != null) {
            for (w wVar : copyOnWriteArraySet) {
                u4.d().b(wVar.f11897d, wVar.f11898e);
            }
        }
        CopyOnWriteArraySet copyOnWriteArraySet2 = tVar.f11886v;
        if (copyOnWriteArraySet2 == null) {
            copyOnWriteArraySet2 = u4.d().a;
        }
        if (copyOnWriteArraySet2 != null) {
            Iterator it = copyOnWriteArraySet2.iterator();
            while (it.hasNext()) {
                u4.d().a((String) it.next());
            }
        }
        sentryEvent.f11545i = tVar2;
    }

    private boolean checkAndroidXAvailability() {
        return true;
    }

    private void configureAndroidProfiling(@NotNull SentryAndroidOptions sentryAndroidOptions, @NotNull ReadableMap readableMap) {
        ReadableMap map;
        ReadableMap map2;
        if (readableMap.hasKey("_experiments") && (map = readableMap.getMap("_experiments")) != null && map.hasKey("androidProfilingOptions") && (map2 = map.getMap("androidProfilingOptions")) != null) {
            if (map2.hasKey("profileSessionSampleRate")) {
                double d6 = map2.getDouble("profileSessionSampleRate");
                sentryAndroidOptions.setProfileSessionSampleRate(Double.valueOf(d6));
                logger.u(SentryLevel.INFO, String.format("Android UI Profiling profileSessionSampleRate set to: %.2f", Double.valueOf(d6)), new Object[0]);
            }
            if (map2.hasKey("lifecycle")) {
                String string = map2.getString("lifecycle");
                if ("manual".equalsIgnoreCase(string)) {
                    sentryAndroidOptions.setProfileLifecycle(f3.MANUAL);
                    logger.u(SentryLevel.INFO, "Android UI Profile Lifecycle set to MANUAL", new Object[0]);
                } else if (SharedPreferencesKey.TRACE.equalsIgnoreCase(string)) {
                    sentryAndroidOptions.setProfileLifecycle(f3.TRACE);
                    logger.u(SentryLevel.INFO, "Android UI Profile Lifecycle set to TRACE", new Object[0]);
                }
            }
            if (map2.hasKey("startOnAppStart")) {
                boolean z5 = map2.getBoolean("startOnAppStart");
                sentryAndroidOptions.setStartProfilerOnAppStart(z5);
                logger.u(SentryLevel.INFO, "Android UI Profiling startOnAppStart set to " + z5, new Object[0]);
            }
        }
    }

    @NotNull
    private Runnable createEmitNewFrameEvent() {
        return new h1(8, this);
    }

    private Activity getCurrentActivity() {
        return this.reactApplicationContext.getCurrentActivity();
    }

    private static PackageInfo getPackageInfo(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0);
        } catch (PackageManager.NameNotFoundException unused) {
            logger.u(SentryLevel.WARNING, "Error getting package info.", new Object[0]);
            return null;
        }
    }

    private String getProfilingTracesDirPath() {
        if (this.cacheDirPath == null) {
            this.cacheDirPath = new File(getReactApplicationContext().getCacheDir(), "sentry/react").getAbsolutePath();
        }
        File file = new File(this.cacheDirPath, "profiling_trace");
        file.mkdirs();
        return file.getAbsolutePath();
    }

    private String getProguardUuid() {
        if (this.isProguardDebugMetaLoaded) {
            return this.proguardUuid;
        }
        this.isProguardDebugMetaLoaded = true;
        List p3 = new e(getReactApplicationContext(), logger).p();
        if (p3 == null) {
            return null;
        }
        Iterator it = p3.iterator();
        while (it.hasNext()) {
            String property = ((Properties) it.next()).getProperty("io.sentry.ProguardUuids");
            this.proguardUuid = property;
            if (property != null) {
                logger.u(SentryLevel.INFO, "Proguard uuid found: " + this.proguardUuid, new Object[0]);
                return this.proguardUuid;
            }
        }
        logger.u(SentryLevel.WARNING, "No proguard uuid found in debug meta properties file!", new Object[0]);
        return null;
    }

    private ReactApplicationContext getReactApplicationContext() {
        return this.reactApplicationContext;
    }

    private z5 getReplayOptions(@NotNull ReadableMap readableMap) {
        ReadableMap map;
        z5 z5Var = new z5(false, new t("sentry.javascript.react-native", "7.10.0"));
        if (readableMap.hasKey("replaysSessionSampleRate") || readableMap.hasKey("replaysOnErrorSampleRate")) {
            z5Var.q(readableMap.hasKey("replaysSessionSampleRate") ? Double.valueOf(readableMap.getDouble("replaysSessionSampleRate")) : null);
            z5Var.p(readableMap.hasKey("replaysOnErrorSampleRate") ? Double.valueOf(readableMap.getDouble("replaysOnErrorSampleRate")) : null);
            if (readableMap.hasKey("replaysSessionQuality")) {
                z5Var.f12108g = parseReplayQuality(readableMap.getString("replaysSessionQuality"));
            }
            if (readableMap.hasKey("mobileReplayOptions") && (map = readableMap.getMap("mobileReplayOptions")) != null) {
                z5Var.j(!map.hasKey("maskAllText") || map.getBoolean("maskAllText"));
                z5Var.i(!map.hasKey("maskAllImages") || map.getBoolean("maskAllImages"));
                if (!map.hasKey("maskAllVectors") || map.getBoolean("maskAllVectors")) {
                    z5Var.f12104c.add("com.horcrux.svg.SvgView");
                }
                if (map.hasKey("screenshotStrategy")) {
                    z5Var.f12114o = parseScreenshotStrategy(map.getString("screenshotStrategy"));
                }
                String name = RNSentryReplayMask.class.getName();
                z5Var.f12104c.add(name);
                z5Var.f12106e = name;
                z5Var.f12107f = RNSentryReplayUnmask.class.getName();
                return z5Var;
            }
        }
        return z5Var;
    }

    public static String getURLFromDSN(String str) {
        if (str == null) {
            return null;
        }
        try {
            URI uri = new URI(str);
            return uri.getScheme() + "://" + uri.getHost();
        } catch (URISyntaxException unused) {
            return null;
        }
    }

    private void initFragmentInitialFrameTracking() {
        FragmentManager supportFragmentManager;
        RNSentryReactFragmentLifecycleTracer rNSentryReactFragmentLifecycleTracer = new RNSentryReactFragmentLifecycleTracer(buildInfo, this.emitNewFrameEvent, logger);
        FragmentActivity fragmentActivity = (FragmentActivity) getCurrentActivity();
        if (fragmentActivity == null || (supportFragmentManager = fragmentActivity.getSupportFragmentManager()) == null) {
            return;
        }
        supportFragmentManager.W(rNSentryReactFragmentLifecycleTracer);
    }

    private void initFragmentReplayTracking() {
        FragmentManager supportFragmentManager;
        RNSentryReplayFragmentLifecycleTracer rNSentryReplayFragmentLifecycleTracer = new RNSentryReplayFragmentLifecycleTracer(logger);
        Activity currentActivity = getCurrentActivity();
        if ((currentActivity instanceof FragmentActivity) && (supportFragmentManager = ((FragmentActivity) currentActivity).getSupportFragmentManager()) != null) {
            supportFragmentManager.W(rNSentryReplayFragmentLifecycleTracer);
        }
    }

    private void initializeAndroidProfiler() {
        if (this.executorService == null) {
            this.executorService = new i(6);
        }
        String profilingTracesDirPath = getProfilingTracesDirPath();
        int micros = ((int) TimeUnit.SECONDS.toMicros(1L)) / this.profilingTracesHz;
        ReactApplicationContext reactApplicationContext = this.reactApplicationContext;
        ILogger iLogger = logger;
        this.androidProfiler = new s(profilingTracesDirPath, micros, new o(reactApplicationContext, iLogger, buildInfo), this.executorService, iLogger);
    }

    private boolean isFrameMetricsAggregatorAvailable() {
        return this.androidXAvailable && this.frameMetricsAggregator != null;
    }

    private boolean isReplayEnabled(z5 z5Var) {
        return (z5Var.a == null && z5Var.f12103b == null) ? false : true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void lambda$addBreadcrumb$6(ReadableMap readableMap, IScope iScope) {
        iScope.c(RNSentryBreadcrumb.fromMap(readableMap));
        String currentScreenFrom = RNSentryBreadcrumb.getCurrentScreenFrom(readableMap);
        if (currentScreenFrom != null) {
            iScope.B(currentScreenFrom);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$createEmitNewFrameEvent$0() {
        RNSentryTimeToDisplay.putTimeToInitialDisplayForActiveSpan(Double.valueOf(this.dateProvider.now().d() / 1.0E9d));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static Breadcrumb lambda$getSentryAndroidOptions$2(String str, String str2, Breadcrumb breadcrumb, Hint hint) {
        Object obj = breadcrumb.f10977x.get("url");
        String str3 = obj instanceof String ? (String) obj : "";
        if ("http".equals(breadcrumb.f10976w)) {
            if (str != null && str3.startsWith(str)) {
                return null;
            }
            if (str2 != null && str3.startsWith(str2)) {
                return null;
            }
        }
        return breadcrumb;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ SentryEvent lambda$getSentryAndroidOptions$3(SentryAndroidOptions sentryAndroidOptions, SentryEvent sentryEvent, Hint hint) {
        setEventOriginTag(sentryEvent);
        addPackages(sentryEvent, sentryAndroidOptions.getSdkVersion());
        return sentryEvent;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$initNativeSdk$1(ReadableMap readableMap, SentryAndroidOptions sentryAndroidOptions) {
        getSentryAndroidOptions(sentryAndroidOptions, readableMap, logger);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void lambda$setContext$9(ReadableMap readableMap, String str, IScope iScope) {
        if (readableMap == null) {
            iScope.u(str);
        } else {
            iScope.G(readableMap.toHashMap(), str);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void lambda$setUser$5(ReadableMap readableMap, ReadableMap readableMap2, IScope iScope) {
        ReadableMap map;
        if (readableMap == null && readableMap2 == null) {
            iScope.m(null);
            return;
        }
        h0 h0Var = new h0();
        if (readableMap != null) {
            if (readableMap.hasKey("email")) {
                h0Var.f11796d = readableMap.getString("email");
            }
            if (readableMap.hasKey(StackTraceHelper.ID_KEY)) {
                h0Var.f11797e = readableMap.getString(StackTraceHelper.ID_KEY);
            }
            if (readableMap.hasKey(NotificationRenderer.USERNAME)) {
                h0Var.f11798i = readableMap.getString(NotificationRenderer.USERNAME);
            }
            if (readableMap.hasKey("ip_address")) {
                h0Var.f11799v = readableMap.getString("ip_address");
            }
            if (readableMap.hasKey("geo") && (map = readableMap.getMap("geo")) != null) {
                j jVar = new j();
                if (map.hasKey("city")) {
                    jVar.f11813d = map.getString("city");
                }
                if (map.hasKey("country_code")) {
                    jVar.f11814e = map.getString("country_code");
                }
                if (map.hasKey("region")) {
                    jVar.f11815i = map.getString("region");
                }
                h0Var.f11801x = jVar;
            }
        }
        if (readableMap2 != null) {
            HashMap hashMap = new HashMap();
            ReadableMapKeySetIterator keySetIterator = readableMap2.keySetIterator();
            while (keySetIterator.hasNextKey()) {
                String nextKey = keySetIterator.nextKey();
                String string = readableMap2.getString(nextKey);
                if (string != null) {
                    hashMap.put(nextKey, string);
                }
            }
            h0Var.f11802y = l.r(hashMap);
        }
        iScope.m(h0Var);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void lambda$takeScreenshotOnUiThread$4(byte[][] bArr, Activity activity, CountDownLatch countDownLatch) {
        ILogger iLogger = logger;
        bArr[0] = jf.a.c(jf.a.a(activity, io.sentry.android.core.internal.util.e.a, iLogger, buildInfo), iLogger);
        countDownLatch.countDown();
    }

    private y5 parseReplayQuality(String str) {
        if (str == null) {
            return y5.MEDIUM;
        }
        String lowerCase = str.toLowerCase(Locale.ROOT);
        lowerCase.getClass();
        switch (lowerCase) {
        }
        return y5.MEDIUM;
    }

    private w3 parseScreenshotStrategy(String str) {
        if (str == null) {
            return w3.PIXEL_COPY;
        }
        String lowerCase = str.toLowerCase(Locale.ROOT);
        lowerCase.getClass();
        return !lowerCase.equals("canvas") ? w3.PIXEL_COPY : w3.CANVAS;
    }

    private String readStringFromFile(File file) {
        BufferedReader bufferedReader = new BufferedReader(new FileReader(file));
        try {
            StringBuilder sb2 = new StringBuilder();
            while (true) {
                String readLine = bufferedReader.readLine();
                if (readLine == null) {
                    String sb3 = sb2.toString();
                    bufferedReader.close();
                    return sb3;
                }
                sb2.append(readLine);
                sb2.append('\n');
            }
        } catch (Throwable th2) {
            try {
                bufferedReader.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    private void setEventEnvironmentTag(SentryEvent sentryEvent, String str) {
        sentryEvent.c("event.origin", "android");
        sentryEvent.c("event.environment", str);
    }

    private void setEventOriginTag(SentryEvent sentryEvent) {
        t tVar = sentryEvent.f11545i;
        if (tVar != null) {
            String str = tVar.f11883d;
            str.getClass();
            if (str.equals("sentry.java.android.react-native")) {
                setEventEnvironmentTag(sentryEvent, "java");
            } else if (str.equals("sentry.native.android.react-native")) {
                setEventEnvironmentTag(sentryEvent, "native");
            }
        }
    }

    private static byte[] takeScreenshotOnUiThread(Activity activity) {
        CountDownLatch countDownLatch = new CountDownLatch(1);
        byte[][] bArr = {new byte[0]};
        androidx.fragment.app.e eVar = new androidx.fragment.app.e(bArr, activity, countDownLatch, 24);
        if (UiThreadUtil.isOnUiThread()) {
            eVar.run();
        } else {
            UiThreadUtil.runOnUiThread(eVar);
        }
        try {
            countDownLatch.await(2L, TimeUnit.SECONDS);
            return bArr[0];
        } catch (InterruptedException unused) {
            logger.u(SentryLevel.ERROR, "Screenshot process was interrupted.", new Object[0]);
            return new byte[0];
        }
    }

    public void addBreadcrumb(ReadableMap readableMap) {
        c4.d(null, new m(22, readableMap));
    }

    public void addListener(String str) {
        logger.u(SentryLevel.ERROR, "addListener of NativeEventEmitter can't be used on Android!", new Object[0]);
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x00e9, code lost:
    
        if (r11 == 1) goto L75;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x00eb, code lost:
    
        if (r11 == 2) goto L60;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x00ee, code lost:
    
        if (r11 == 3) goto L59;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x00f1, code lost:
    
        if (r11 == 4) goto L75;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x010d, code lost:
    
        if (r13 != r5) goto L63;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0110, code lost:
    
        r3 = new byte[r13];
        java.lang.System.arraycopy(r7, 0, r3, 0, r13);
        r7 = r3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x011b, code lost:
    
        if (r20.hasKey("hardCrashed") == false) goto L70;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x0121, code lost:
    
        if (r20.getBoolean("hardCrashed") != false) goto L69;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x0124, code lost:
    
        r9 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x0125, code lost:
    
        io.sentry.android.core.v0.c(r7, r9);
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x0129, code lost:
    
        io.sentry.react.RNSentryModuleImpl.logger.u(io.sentry.SentryLevel.ERROR, "Error while capturing envelope", new java.lang.Object[0]);
        r21.resolve(java.lang.Boolean.FALSE);
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x00f4, code lost:
    
        r3 = r13 + 1;
        r7[r13] = (byte) (r12 >> 10);
        r13 = r13 + 2;
        r7[r3] = (byte) (r12 >> 2);
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0103, code lost:
    
        r7[r13] = (byte) (r12 >> 4);
        r13 = r13 + 1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void captureEnvelope(String str, ReadableMap readableMap, Promise promise) {
        byte[] bytes = str.getBytes();
        int length = bytes.length;
        int i5 = (length * 3) / 4;
        byte[] bArr = new byte[i5];
        int[] iArr = io.sentry.vendor.a.f12051b;
        int i6 = 0;
        int i10 = 0;
        int i11 = 0;
        int i12 = 0;
        while (true) {
            boolean z5 = true;
            if (i6 >= length) {
                break;
            }
            if (i10 == 0) {
                while (true) {
                    int i13 = i6 + 4;
                    if (i13 > length || (i11 = (iArr[bytes[i6] & 255] << 18) | (iArr[bytes[i6 + 1] & 255] << 12) | (iArr[bytes[i6 + 2] & 255] << 6) | iArr[bytes[i6 + 3] & 255]) < 0) {
                        break;
                    }
                    bArr[i12 + 2] = (byte) i11;
                    bArr[i12 + 1] = (byte) (i11 >> 8);
                    bArr[i12] = (byte) (i11 >> 16);
                    i12 += 3;
                    i6 = i13;
                }
                if (i6 >= length) {
                    break;
                }
            }
            int i14 = i6 + 1;
            int i15 = iArr[bytes[i6] & 255];
            if (i10 != 0) {
                if (i10 == 1) {
                    if (i15 < 0) {
                        if (i15 != -1) {
                            break;
                        }
                    }
                    i10++;
                    i11 = (i11 << 6) | i15;
                } else if (i10 == 2) {
                    if (i15 < 0) {
                        if (i15 != -2) {
                            if (i15 != -1) {
                                break;
                            }
                        } else {
                            bArr[i12] = (byte) (i11 >> 4);
                            i12++;
                            i10 = 4;
                        }
                    }
                    i10++;
                    i11 = (i11 << 6) | i15;
                } else if (i10 == 3) {
                    if (i15 < 0) {
                        if (i15 != -2) {
                            if (i15 != -1) {
                                break;
                            }
                        } else {
                            bArr[i12 + 1] = (byte) (i11 >> 2);
                            bArr[i12] = (byte) (i11 >> 10);
                            i12 += 2;
                            i10 = 5;
                        }
                    } else {
                        int i16 = (i11 << 6) | i15;
                        bArr[i12 + 2] = (byte) i16;
                        bArr[i12 + 1] = (byte) (i16 >> 8);
                        bArr[i12] = (byte) (i16 >> 16);
                        i12 += 3;
                        i11 = i16;
                        i10 = 0;
                    }
                } else if (i10 == 4) {
                    if (i15 != -2) {
                        if (i15 != -1) {
                            break;
                        }
                    } else {
                        i10++;
                    }
                } else if (i10 == 5 && i15 != -1) {
                    break;
                }
                i6 = i14;
            } else {
                if (i15 < 0) {
                    if (i15 != -1) {
                        break;
                    }
                } else {
                    i10++;
                    i11 = i15;
                }
                i6 = i14;
            }
        }
        throw new IllegalArgumentException("bad base-64");
        promise.resolve(Boolean.TRUE);
    }

    public void captureReplay(boolean z5, Promise promise) {
        c4.f().l().getReplayController().captureReplay(Boolean.valueOf(z5));
        promise.resolve(getCurrentReplayId());
    }

    public void captureScreenshot(Promise promise) {
        Activity currentActivity = getCurrentActivity();
        if (currentActivity == null) {
            logger.u(SentryLevel.WARNING, "CurrentActivity is null, can't capture screenshot.", new Object[0]);
            promise.resolve(null);
            return;
        }
        byte[] takeScreenshotOnUiThread = takeScreenshotOnUiThread(currentActivity);
        if (takeScreenshotOnUiThread == null || takeScreenshotOnUiThread.length == 0) {
            logger.u(SentryLevel.WARNING, "Screenshot is null, screen was not captured.", new Object[0]);
            promise.resolve(null);
            return;
        }
        WritableNativeArray writableNativeArray = new WritableNativeArray();
        for (byte b10 : takeScreenshotOnUiThread) {
            writableNativeArray.pushInt(b10);
        }
        WritableNativeMap writableNativeMap = new WritableNativeMap();
        writableNativeMap.putString("contentType", ClipboardModule.MIMETYPE_PNG);
        writableNativeMap.putArray("data", writableNativeArray);
        writableNativeMap.putString("filename", "screenshot.png");
        WritableNativeArray writableNativeArray2 = new WritableNativeArray();
        writableNativeArray2.pushMap(writableNativeMap);
        promise.resolve(writableNativeArray2);
    }

    public void clearBreadcrumbs() {
        c4.d(null, new i7.a(29));
    }

    public void closeNativeSdk(Promise promise) {
        c4.c();
        disableNativeFramesTracking();
        promise.resolve(Boolean.TRUE);
    }

    public void crash() {
        throw new RuntimeException("TEST - Sentry Client Crash (only works in release mode)");
    }

    public void crashedLastRun(Promise promise) {
        promise.resolve(c4.j());
    }

    public void disableNativeFramesTracking() {
        if (isFrameMetricsAggregatorAvailable()) {
            this.frameMetricsAggregator.b();
            this.frameMetricsAggregator = null;
        }
    }

    public void enableNativeFramesTracking() {
        boolean checkAndroidXAvailability = checkAndroidXAvailability();
        this.androidXAvailable = checkAndroidXAvailability;
        if (!checkAndroidXAvailability) {
            logger.u(SentryLevel.WARNING, "androidx.core' isn't available as a dependency.", new Object[0]);
            return;
        }
        this.frameMetricsAggregator = new FrameMetricsAggregator();
        Activity currentActivity = getCurrentActivity();
        FrameMetricsAggregator frameMetricsAggregator = this.frameMetricsAggregator;
        if (frameMetricsAggregator == null || currentActivity == null) {
            logger.u(SentryLevel.INFO, "currentActivity isn't available.", new Object[0]);
            return;
        }
        try {
            frameMetricsAggregator.a(currentActivity);
            logger.u(SentryLevel.INFO, "FrameMetricsAggregator installed.", new Object[0]);
        } catch (Throwable unused) {
            logger.u(SentryLevel.ERROR, "Error adding Activity to frameMetricsAggregator.", new Object[0]);
        }
    }

    public void encodeToBase64(ReadableArray readableArray, Promise promise) {
        byte[] bArr = new byte[readableArray.size()];
        for (int i5 = 0; i5 < readableArray.size(); i5++) {
            bArr[i5] = (byte) readableArray.getInt(i5);
        }
        promise.resolve(Base64.encodeToString(bArr, 0));
    }

    public void fetchModules(Promise promise) {
        try {
            BufferedInputStream bufferedInputStream = new BufferedInputStream(getReactApplicationContext().getResources().getAssets().open(modulesPath));
            try {
                byte[] bArr = new byte[bufferedInputStream.available()];
                bufferedInputStream.read(bArr);
                bufferedInputStream.close();
                promise.resolve(new String(bArr, UTF_8));
                bufferedInputStream.close();
            } catch (Throwable th2) {
                try {
                    bufferedInputStream.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        } catch (FileNotFoundException unused) {
            promise.resolve(null);
        } catch (Throwable unused2) {
            logger.u(SentryLevel.WARNING, "Fetching JS Modules failed.", new Object[0]);
            promise.resolve(null);
        }
    }

    public void fetchNativeAppStart(Promise promise, io.sentry.android.core.performance.f fVar, Map<String, Object> map, ILogger iLogger) {
        if (!fVar.f11290e) {
            iLogger.u(SentryLevel.WARNING, "Invalid app start data: app not launched in foreground.", new Object[0]);
            promise.resolve(null);
            return;
        }
        WritableMap writableMap = (WritableMap) RNSentryMapConverter.convertToWritable(map);
        long j = fVar.f11291i.f11297e;
        long j5 = lastStartTimestampMs;
        boolean z5 = j5 > 0 && j5 == j;
        writableMap.putBoolean("has_fetched", z5);
        if (lastStartTimestampMs < 0) {
            iLogger.u(SentryLevel.DEBUG, "App Start data reported to the RN layer for the first time.", new Object[0]);
        } else if (z5) {
            iLogger.u(SentryLevel.DEBUG, "App Start data already fetched from native before.", new Object[0]);
        } else {
            iLogger.u(SentryLevel.DEBUG, "App Start data updated, reporting to the RN layer again.", new Object[0]);
        }
        lastStartTimestampMs = j;
        fVar.I = false;
        fVar.f11294x.clear();
        fVar.f11295y.clear();
        promise.resolve(writableMap);
    }

    public void fetchNativeDeviceContexts(Promise promise) {
        fetchNativeDeviceContexts(promise, c4.f().l(), getReactApplicationContext().getApplicationContext(), v0.e());
    }

    public void fetchNativeFrames(Promise promise) {
        int i5;
        int i6;
        int i10;
        if (!isFrameMetricsAggregatorAvailable()) {
            promise.resolve(null);
            return;
        }
        try {
            SparseIntArray sparseIntArray = ((SparseIntArray[]) this.frameMetricsAggregator.a.f13353c)[0];
            if (sparseIntArray != null) {
                i5 = 0;
                i6 = 0;
                i10 = 0;
                for (int i11 = 0; i11 < sparseIntArray.size(); i11++) {
                    int keyAt = sparseIntArray.keyAt(i11);
                    int valueAt = sparseIntArray.valueAt(i11);
                    i5 += valueAt;
                    if (keyAt > 700) {
                        i10 += valueAt;
                    } else if (keyAt > 16) {
                        i6 += valueAt;
                    }
                }
            } else {
                i5 = 0;
                i6 = 0;
                i10 = 0;
            }
            WritableMap createMap = Arguments.createMap();
            createMap.putInt("totalFrames", i5);
            createMap.putInt("slowFrames", i6);
            createMap.putInt("frozenFrames", i10);
            promise.resolve(createMap);
        } catch (Throwable unused) {
            logger.u(SentryLevel.WARNING, "Error fetching native frames.", new Object[0]);
            promise.resolve(null);
        }
    }

    public void fetchNativeLogAttributes(Promise promise) {
        fetchNativeLogContexts(promise, c4.f().l(), getReactApplicationContext().getApplicationContext(), v0.e());
    }

    public void fetchNativeLogContexts(Promise promise, @NotNull v5 v5Var, Context context, IScope iScope) {
        if (!(v5Var instanceof SentryAndroidOptions) || context == null) {
            promise.resolve(null);
            return;
        }
        Object obj = v0.l(context, (SentryAndroidOptions) v5Var, iScope).get("contexts");
        if (!(obj instanceof Map)) {
            promise.resolve(null);
            return;
        }
        Map map = (Map) obj;
        HashMap hashMap = new HashMap();
        if (map.containsKey("os")) {
            hashMap.put("os", map.get("os"));
        }
        if (map.containsKey("device")) {
            hashMap.put("device", map.get("device"));
        }
        hashMap.put("release", v5Var.getRelease());
        HashMap hashMap2 = new HashMap();
        hashMap2.put("contexts", hashMap);
        promise.resolve(RNSentryMapConverter.convertToWritable(hashMap2));
    }

    public String fetchNativePackageName() {
        return this.packageInfo.packageName;
    }

    public void fetchNativeRelease(Promise promise) {
        WritableMap createMap = Arguments.createMap();
        createMap.putString(StackTraceHelper.ID_KEY, this.packageInfo.packageName);
        createMap.putString("version", this.packageInfo.versionName);
        createMap.putString("build", String.valueOf(this.packageInfo.versionCode));
        promise.resolve(createMap);
    }

    public void fetchNativeSdkInfo(Promise promise) {
        t sdkVersion = c4.f().l().getSdkVersion();
        if (sdkVersion == null) {
            promise.resolve(null);
            return;
        }
        WritableNativeMap writableNativeMap = new WritableNativeMap();
        writableNativeMap.putString(StackTraceHelper.NAME_KEY, sdkVersion.f11883d);
        writableNativeMap.putString("version", sdkVersion.f11884e);
        promise.resolve(writableNativeMap);
    }

    public void fetchViewHierarchy(Promise promise) {
        Activity currentActivity = getCurrentActivity();
        ILogger iLogger = logger;
        i0 b10 = ViewHierarchyEventProcessor.b(currentActivity, new ArrayList(0), io.sentry.android.core.internal.util.e.a, iLogger);
        if (b10 == null) {
            iLogger.u(SentryLevel.ERROR, "Could not get ViewHierarchy.", new Object[0]);
            promise.resolve(null);
            return;
        }
        byte[] c6 = c.c(c4.f().l().getSerializer(), iLogger, b10);
        if (c6 == null) {
            iLogger.u(SentryLevel.ERROR, "Could not serialize ViewHierarchy.", new Object[0]);
            promise.resolve(null);
        } else {
            if (c6.length < 1) {
                iLogger.u(SentryLevel.ERROR, "Got empty bytes array after serializing ViewHierarchy.", new Object[0]);
                promise.resolve(null);
                return;
            }
            WritableNativeArray writableNativeArray = new WritableNativeArray();
            for (byte b11 : c6) {
                writableNativeArray.pushInt(b11);
            }
            promise.resolve(writableNativeArray);
        }
    }

    public Context getApplicationContext() {
        Context applicationContext = getReactApplicationContext().getApplicationContext();
        if (applicationContext != null) {
            return applicationContext;
        }
        logger.u(SentryLevel.ERROR, "ApplicationContext is null, using ReactApplicationContext fallback.", new Object[0]);
        return getReactApplicationContext();
    }

    public String getCurrentReplayId() {
        v y5;
        IScope e9 = v0.e();
        if (e9 == null || (y5 = e9.y()) == v.f11895e) {
            return null;
        }
        return y5.toString();
    }

    public void getDataFromUri(String str, Promise promise) {
        try {
            InputStream openInputStream = getReactApplicationContext().getContentResolver().openInputStream(Uri.parse(str));
            try {
                if (openInputStream == null) {
                    String str2 = "File not found for uri: " + str;
                    logger.u(SentryLevel.ERROR, str2, new Object[0]);
                    promise.reject(new Exception(str2));
                    if (openInputStream == null) {
                        return;
                    }
                } else {
                    ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                    byte[] bArr = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
                    while (true) {
                        int read = openInputStream.read(bArr);
                        if (read == -1) {
                            break;
                        } else {
                            byteArrayOutputStream.write(bArr, 0, read);
                        }
                    }
                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                    WritableArray createArray = Arguments.createArray();
                    for (byte b10 : byteArray) {
                        createArray.pushInt(b10 & 255);
                    }
                    promise.resolve(createArray);
                }
                openInputStream.close();
            } finally {
            }
        } catch (IOException e9) {
            StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Error reading uri: ", str, ": ");
            m5.append(e9.getMessage());
            String sb2 = m5.toString();
            logger.u(SentryLevel.ERROR, sb2, new Object[0]);
            promise.reject(new Exception(sb2));
        }
    }

    public void getNewScreenTimeToDisplay(Promise promise) {
        RNSentryTimeToDisplay.getTimeToDisplay(promise, this.dateProvider);
    }

    public void getSentryAndroidOptions(@NotNull SentryAndroidOptions sentryAndroidOptions, @NotNull ReadableMap readableMap, ILogger iLogger) {
        t sdkVersion = sentryAndroidOptions.getSdkVersion();
        if (sdkVersion == null) {
            sdkVersion = new t("sentry.java.android.react-native", io.sentry.android.replay.BuildConfig.VERSION_NAME);
        } else {
            sdkVersion.f11883d = "sentry.java.android.react-native";
        }
        u4.d().b("npm:@sentry/react-native", "7.10.0");
        sentryAndroidOptions.setSentryClientName(sdkVersion.f11883d + "/" + sdkVersion.f11884e);
        sentryAndroidOptions.setNativeSdkName("sentry.native.android.react-native");
        sentryAndroidOptions.setSdkVersion(sdkVersion);
        if (readableMap.hasKey("debug") && readableMap.getBoolean("debug")) {
            sentryAndroidOptions.setDebug(true);
        }
        if (readableMap.hasKey(ViewProps.ENABLED)) {
            sentryAndroidOptions.setEnabled(readableMap.getBoolean(ViewProps.ENABLED));
        }
        if (!readableMap.hasKey("dsn") || readableMap.getString("dsn") == null) {
            sentryAndroidOptions.setDsn("");
        } else {
            String string = readableMap.getString("dsn");
            iLogger.u(SentryLevel.INFO, h.f("Starting with DSN: '", string, "'"), new Object[0]);
            sentryAndroidOptions.setDsn(string);
        }
        if (readableMap.hasKey("sampleRate")) {
            sentryAndroidOptions.setSampleRate(Double.valueOf(readableMap.getDouble("sampleRate")));
        }
        if (readableMap.hasKey("sendClientReports")) {
            sentryAndroidOptions.setSendClientReports(readableMap.getBoolean("sendClientReports"));
        }
        if (readableMap.hasKey("maxBreadcrumbs")) {
            sentryAndroidOptions.setMaxBreadcrumbs(readableMap.getInt("maxBreadcrumbs"));
        }
        if (readableMap.hasKey("maxCacheItems")) {
            sentryAndroidOptions.setMaxCacheItems(readableMap.getInt("maxCacheItems"));
        }
        if (readableMap.hasKey("environment") && readableMap.getString("environment") != null) {
            sentryAndroidOptions.setEnvironment(readableMap.getString("environment"));
        }
        if (readableMap.hasKey("release") && readableMap.getString("release") != null) {
            sentryAndroidOptions.setRelease(readableMap.getString("release"));
        }
        if (readableMap.hasKey("dist") && readableMap.getString("dist") != null) {
            sentryAndroidOptions.setDist(readableMap.getString("dist"));
        }
        if (readableMap.hasKey("enableAutoSessionTracking")) {
            sentryAndroidOptions.setEnableAutoSessionTracking(readableMap.getBoolean("enableAutoSessionTracking"));
        }
        if (readableMap.hasKey("sessionTrackingIntervalMillis")) {
            sentryAndroidOptions.setSessionTrackingIntervalMillis(readableMap.getInt("sessionTrackingIntervalMillis"));
        }
        if (readableMap.hasKey("shutdownTimeout")) {
            sentryAndroidOptions.setShutdownTimeoutMillis(readableMap.getInt("shutdownTimeout"));
        }
        if (readableMap.hasKey("enableNdkScopeSync")) {
            sentryAndroidOptions.setEnableScopeSync(readableMap.getBoolean("enableNdkScopeSync"));
        }
        if (readableMap.hasKey("attachStacktrace")) {
            sentryAndroidOptions.setAttachStacktrace(readableMap.getBoolean("attachStacktrace"));
        }
        if (readableMap.hasKey("attachThreads")) {
            sentryAndroidOptions.setAttachThreads(readableMap.getBoolean("attachThreads"));
        }
        if (readableMap.hasKey("attachScreenshot")) {
            sentryAndroidOptions.setAttachScreenshot(readableMap.getBoolean("attachScreenshot"));
        }
        if (readableMap.hasKey("attachViewHierarchy")) {
            sentryAndroidOptions.setAttachViewHierarchy(readableMap.getBoolean("attachViewHierarchy"));
        }
        if (readableMap.hasKey("sendDefaultPii")) {
            sentryAndroidOptions.setSendDefaultPii(readableMap.getBoolean("sendDefaultPii"));
        }
        if (readableMap.hasKey("maxQueueSize")) {
            sentryAndroidOptions.setMaxQueueSize(readableMap.getInt("maxQueueSize"));
        }
        if (readableMap.hasKey("enableNdk")) {
            sentryAndroidOptions.setEnableNdk(readableMap.getBoolean("enableNdk"));
        }
        if (readableMap.hasKey("enableLogs")) {
            sentryAndroidOptions.getLogs().a = readableMap.getBoolean("enableLogs");
        }
        if (readableMap.hasKey("spotlight")) {
            if (readableMap.getType("spotlight") == ReadableType.Boolean) {
                sentryAndroidOptions.setEnableSpotlight(readableMap.getBoolean("spotlight"));
                sentryAndroidOptions.setSpotlightConnectionUrl(readableMap.getString("defaultSidecarUrl"));
            } else if (readableMap.getType("spotlight") == ReadableType.String) {
                sentryAndroidOptions.setEnableSpotlight(true);
                sentryAndroidOptions.setSpotlightConnectionUrl(readableMap.getString("spotlight"));
            }
        }
        z5 replayOptions = getReplayOptions(readableMap);
        sentryAndroidOptions.setSessionReplay(replayOptions);
        this.loadClass.getClass();
        boolean b10 = f.b("io.sentry.android.replay.ReplayIntegration", iLogger);
        if (isReplayEnabled(replayOptions) && b10) {
            sentryAndroidOptions.getReplayController().setBreadcrumbConverter(new RNSentryReplayBreadcrumbConverter());
            initFragmentReplayTracking();
        }
        configureAndroidProfiling(sentryAndroidOptions, readableMap);
        sentryAndroidOptions.setBeforeBreadcrumb(new a(getURLFromDSN(readableMap.getString("dsn")), readableMap.getString("devServerUrl"), 0));
        sentryAndroidOptions.addIgnoredExceptionForType(JavascriptException.class);
        trySetIgnoreErrors(sentryAndroidOptions, readableMap);
        sentryAndroidOptions.setBeforeSend(new io.sentry.android.core.w(4, this, sentryAndroidOptions));
        if (readableMap.hasKey("enableNativeCrashHandling") && !readableMap.getBoolean("enableNativeCrashHandling")) {
            List<l1> integrations = sentryAndroidOptions.getIntegrations();
            for (l1 l1Var : integrations) {
                if ((l1Var instanceof UncaughtExceptionHandlerIntegration) || (l1Var instanceof AnrIntegration) || (l1Var instanceof NdkIntegration)) {
                    integrations.remove(l1Var);
                }
            }
        }
        iLogger.u(SentryLevel.INFO, String.format("Native Integrations '%s'", sentryAndroidOptions.getIntegrations()), new Object[0]);
        Activity currentActivity = getCurrentActivity();
        if (currentActivity != null) {
            l0.f11265e.a(currentActivity);
        }
    }

    public void initNativeReactNavigationNewFrameTracking(Promise promise) {
        initFragmentInitialFrameTracking();
    }

    public void initNativeSdk(ReadableMap readableMap, Promise promise) {
        c1.b(getApplicationContext(), new l0(1), new io.sentry.android.core.w(5, this, readableMap));
        promise.resolve(Boolean.TRUE);
    }

    public void popTimeToDisplayFor(String str, Promise promise) {
        if (str != null) {
            promise.resolve(RNSentryTimeToDisplay.popTimeToDisplayFor(str));
        } else {
            promise.resolve(null);
        }
    }

    public void removeListeners(double d6) {
        logger.u(SentryLevel.ERROR, "removeListeners of NativeEventEmitter can't be used on Android!", new Object[0]);
    }

    public boolean setActiveSpanId(String str) {
        RNSentryTimeToDisplay.setActiveSpanId(str);
        return true;
    }

    public void setContext(String str, ReadableMap readableMap) {
        if (str == null) {
            logger.u(SentryLevel.ERROR, "RNSentry.setContext called with null key, can't change context.", new Object[0]);
        } else {
            c4.d(null, new io.sentry.android.core.w(6, readableMap, str));
        }
    }

    public void setExtra(String str, String str2) {
        if (str == null || str2 == null) {
            logger.u(SentryLevel.ERROR, "RNSentry.setExtra called with null key or value, can't change extra.", new Object[0]);
        } else {
            c4.d(null, new a(str, str2, 1));
        }
    }

    public void setTag(String str, String str2) {
        c4.d(null, new a(str, str2, 2));
    }

    public void setUser(ReadableMap readableMap, ReadableMap readableMap2) {
        c4.d(null, new io.sentry.android.core.w(3, readableMap, readableMap2));
    }

    public WritableMap startProfiling(boolean z5) {
        WritableNativeMap writableNativeMap = new WritableNativeMap();
        if (this.androidProfiler == null && z5) {
            initializeAndroidProfiler();
        }
        try {
            HermesSamplingProfiler.enable();
            s sVar = this.androidProfiler;
            if (sVar != null) {
                sVar.c();
            }
            writableNativeMap.putBoolean("started", true);
            return writableNativeMap;
        } catch (Throwable th2) {
            writableNativeMap.putBoolean("started", false);
            writableNativeMap.putString("error", th2.toString());
            return writableNativeMap;
        }
    }

    public WritableMap stopProfiling() {
        boolean isDebug = c4.f().l().isDebug();
        WritableNativeMap writableNativeMap = new WritableNativeMap();
        File file = null;
        try {
            s sVar = this.androidProfiler;
            q a = sVar != null ? sVar.a(null, false) : null;
            HermesSamplingProfiler.disable();
            file = File.createTempFile("sampling-profiler-trace", ".cpuprofile", this.reactApplicationContext.getCacheDir());
            if (isDebug) {
                logger.u(SentryLevel.INFO, "Profile saved to: " + file.getAbsolutePath(), new Object[0]);
            }
            HermesSamplingProfiler.dumpSampledTraceToFile(file.getPath());
            writableNativeMap.putString("profile", readStringFromFile(file));
            if (a != null) {
                WritableNativeMap writableNativeMap2 = new WritableNativeMap();
                writableNativeMap2.putString("sampled_profile", ki.b.o(n.F0(this.maxTraceFileSize, ((File) a.f11304v).getPath())));
                buildInfo.getClass();
                writableNativeMap2.putInt("android_api_level", Build.VERSION.SDK_INT);
                writableNativeMap2.putString("build_id", getProguardUuid());
                writableNativeMap.putMap("androidProfile", writableNativeMap2);
            }
            try {
                if (!file.delete()) {
                    logger.u(SentryLevel.WARNING, "Profile not deleted from:" + file.getAbsolutePath(), new Object[0]);
                    return writableNativeMap;
                }
            } catch (Throwable unused) {
                logger.u(SentryLevel.WARNING, "Profile not deleted from:" + file.getAbsolutePath(), new Object[0]);
            }
        } catch (Throwable th2) {
            try {
                writableNativeMap.putString("error", th2.toString());
                if (file != null) {
                    try {
                        if (!file.delete()) {
                            logger.u(SentryLevel.WARNING, "Profile not deleted from:" + file.getAbsolutePath(), new Object[0]);
                        }
                    } catch (Throwable unused2) {
                        logger.u(SentryLevel.WARNING, "Profile not deleted from:" + file.getAbsolutePath(), new Object[0]);
                    }
                }
            } catch (Throwable th3) {
                if (file != null) {
                    try {
                        if (!file.delete()) {
                            logger.u(SentryLevel.WARNING, "Profile not deleted from:" + file.getAbsolutePath(), new Object[0]);
                        }
                    } catch (Throwable unused3) {
                        logger.u(SentryLevel.WARNING, "Profile not deleted from:" + file.getAbsolutePath(), new Object[0]);
                    }
                }
                throw th3;
            }
        }
        return writableNativeMap;
    }

    public void trySetIgnoreErrors(SentryAndroidOptions sentryAndroidOptions, ReadableMap readableMap) {
        ReadableArray array = readableMap.hasKey("ignoreErrorsRegex") ? readableMap.getArray("ignoreErrorsRegex") : null;
        ReadableArray array2 = readableMap.hasKey("ignoreErrorsStr") ? readableMap.getArray("ignoreErrorsStr") : null;
        if (array == null && array2 == null) {
            return;
        }
        ArrayList arrayList = new ArrayList((array != null ? array.size() : 0) + (array2 != null ? array2.size() : 0));
        if (array != null) {
            for (int i5 = 0; i5 < array.size(); i5++) {
                arrayList.add(array.getString(i5));
            }
        }
        if (array2 != null) {
            for (int i6 = 0; i6 < array2.size(); i6++) {
                arrayList.add(v5.DEFAULT_PROPAGATION_TARGETS + Pattern.quote(array2.getString(i6)) + v5.DEFAULT_PROPAGATION_TARGETS);
            }
        }
        sentryAndroidOptions.setIgnoredErrors(arrayList);
    }

    public void fetchNativeDeviceContexts(Promise promise, @NotNull v5 v5Var, Context context, IScope iScope) {
        if (!(v5Var instanceof SentryAndroidOptions)) {
            promise.resolve(null);
            return;
        }
        if (context == null) {
            promise.resolve(null);
            return;
        }
        if (iScope != null) {
            Iterator it = iScope.w().iterator();
            while (it.hasNext()) {
                if ("react-native".equals(((Breadcrumb) it.next()).E)) {
                    it.remove();
                }
            }
        }
        promise.resolve(RNSentryMapConverter.convertToWritable(v0.l(context, (SentryAndroidOptions) v5Var, iScope)));
    }

    public void fetchNativeAppStart(Promise promise) {
        io.sentry.android.core.performance.f b10 = io.sentry.android.core.performance.f.b();
        io.sentry.android.core.performance.f b11 = io.sentry.android.core.performance.f.b();
        ArrayList arrayList = new ArrayList();
        g gVar = new g();
        g gVar2 = b11.f11291i;
        long j = gVar2.f11297e;
        long j5 = gVar2.f11298i;
        long j7 = io.sentry.android.core.performance.f.L;
        gVar.f11296d = "Process Initialization";
        gVar.f11297e = j;
        gVar.f11298i = j5;
        gVar.f11299v = j7;
        v0.a(gVar, arrayList);
        v0.a(b11.f11293w, arrayList);
        ArrayList arrayList2 = new ArrayList(b11.f11294x.values());
        Collections.sort(arrayList2);
        Iterator it = arrayList2.iterator();
        while (it.hasNext()) {
            v0.a((g) it.next(), arrayList);
        }
        ArrayList arrayList3 = new ArrayList(b11.f11295y);
        Collections.sort(arrayList3);
        Iterator it2 = arrayList3.iterator();
        while (it2.hasNext()) {
            io.sentry.android.core.performance.c cVar = (io.sentry.android.core.performance.c) it2.next();
            v0.a(cVar.f11285d, arrayList);
            v0.a(cVar.f11286e, arrayList);
        }
        HashMap hashMap = new HashMap();
        hashMap.put("spans", arrayList);
        hashMap.put("type", b11.f11289d.toString().toLowerCase(Locale.ROOT));
        if (gVar2.c()) {
            hashMap.put("app_start_timestamp_ms", Long.valueOf(gVar2.f11297e));
        }
        fetchNativeAppStart(promise, b10, hashMap, logger);
    }
}
