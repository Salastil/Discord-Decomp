package com.discord.crash_reporting;

import android.content.Context;
import android.os.Build;
import androidx.annotation.Keep;
import com.discord.client_info.ClientInfo;
import com.discord.crash_reporting.CrashPersistence;
import com.discord.libdiscore.LibdiscoreModuleProvider;
import com.discord.lifecycle.ActivityResumedTracker;
import com.discord.lifecycle.AppLifecycle;
import com.discord.lifecycle.ForegroundServiceStartGuard;
import com.discord.logging.Log;
import com.discord.tti_manager.TTIModule;
import com.facebook.jni.annotations.DoNotStrip;
import com.facebook.react.modules.appstate.AppStateModule;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import fo.f;
import fo.n;
import io.sentry.Breadcrumb;
import io.sentry.Hint;
import io.sentry.IScope;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.c1;
import io.sentry.android.core.l0;
import io.sentry.b4;
import io.sentry.c4;
import io.sentry.e6;
import io.sentry.protocol.SentryStackFrame;
import io.sentry.protocol.a0;
import io.sentry.protocol.m;
import io.sentry.protocol.u;
import io.sentry.protocol.v;
import io.sentry.v5;
import io.sentry.x0;
import java.net.ConnectException;
import java.net.SocketException;
import java.net.SocketTimeoutException;
import java.net.UnknownHostException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.charset.Charset;
import java.security.cert.CertPathValidatorException;
import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Date;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import javax.net.ssl.SSLException;
import javax.net.ssl.SSLHandshakeException;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.c0;
import kotlin.collections.v0;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.reflect.KClass;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;
import yo.j;

@Metadata(d1 = {"\u0000¦\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0010\u0003\n\u0000\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010$\n\u0002\b\u0007\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0013\bÆ\u0002\u0018\u00002\u00020\u0001:\u0003]^_B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011J\b\u0010\u0012\u001a\u00020\u0005H\u0002J\b\u0010\u0013\u001a\u00020\u0005H\u0002J\u001e\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0019J\u0018\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u001c\u001a\u00020\u001bH\u0002J\u0018\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u001c\u001a\u00020\u001bH\u0002J\u0012\u0010\u001f\u001a\u0004\u0018\u00010\u00172\u0006\u0010\u001c\u001a\u00020\u001bH\u0002J\u0012\u0010 \u001a\u0004\u0018\u00010\u00172\u0006\u0010\u001c\u001a\u00020\u001bH\u0002J\u001c\u0010!\u001a\u0004\u0018\u00010\"2\u0006\u0010#\u001a\u00020\"2\b\u0010$\u001a\u0004\u0018\u00010%H\u0002J*\u0010&\u001a\u0004\u0018\u00010\u00172\u0006\u0010\u0010\u001a\u00020\u00172\u0006\u0010'\u001a\u00020\u00172\u0006\u0010(\u001a\u00020\u00172\u0006\u0010)\u001a\u00020\u0017H\u0007J \u0010*\u001a\u00020\u001e2\u0006\u0010\u0010\u001a\u00020\u00172\u0006\u0010'\u001a\u00020\u00172\u0006\u0010(\u001a\u00020\u0017H\u0007J\u0018\u0010+\u001a\u00020\u001e2\u0006\u0010,\u001a\u00020\r2\b\b\u0002\u0010-\u001a\u00020\u0005J \u0010.\u001a\u00020\u001e2\u0006\u0010/\u001a\u00020\u00172\u0006\u0010(\u001a\u00020\u00172\b\b\u0002\u00100\u001a\u000201J\u001a\u0010.\u001a\u00020\u001e2\u0006\u0010/\u001a\u00020\u00172\n\u00102\u001a\u000603j\u0002`4J\u000e\u00105\u001a\u0002062\u0006\u00107\u001a\u000208J\u0010\u00109\u001a\u00020\u001e2\u0006\u0010:\u001a\u00020;H\u0007JF\u0010<\u001a\u00020\u001e2\u0006\u0010=\u001a\u00020\u00172\u0014\b\u0002\u0010>\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010?2\n\b\u0002\u0010@\u001a\u0004\u0018\u00010\u00172\n\b\u0002\u00107\u001a\u0004\u0018\u0001082\b\b\u0002\u0010A\u001a\u00020\u0005J\u001a\u0010B\u001a\u00020\u001e*\u00020\u00152\u0006\u0010C\u001a\u00020\u00172\u0006\u0010\u0006\u001a\u00020\u0017JH\u0010D\u001a\u00020\u001e2\u0006\u0010C\u001a\u00020\u00172\b\u0010(\u001a\u0004\u0018\u00010\u00172\u0014\u0010E\u001a\u0010\u0012\u0004\u0012\u00020\u0017\u0012\u0006\u0012\u0004\u0018\u00010\u00010?2\u0006\u0010F\u001a\u00020G2\u000e\b\u0002\u0010H\u001a\b\u0012\u0004\u0012\u00020\u00170\u000bH\u0002J\u0018\u0010I\u001a\u00020G2\u0006\u0010\u001c\u001a\u00020\u001b2\u0006\u0010J\u001a\u00020KH\u0002J/\u0010L\u001a\u00020M2\u0006\u0010N\u001a\u00020G2\u0006\u0010O\u001a\u00020G2\u0006\u0010P\u001a\u00020M2\b\u0010Q\u001a\u0004\u0018\u00010GH\u0002¢\u0006\u0002\u0010RJ)\u0010S\u001a\u0004\u0018\u00010G2\b\u0010T\u001a\u0004\u0018\u00010G2\u0006\u0010U\u001a\u00020G2\u0006\u0010V\u001a\u00020MH\u0002¢\u0006\u0002\u0010WJ \u0010X\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001b2\u0006\u0010$\u001a\u00020%2\u0006\u0010J\u001a\u00020KH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R$\u0010\u0007\u001a\u0004\u0018\u00010\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0005@BX\u0086\u000e¢\u0006\n\n\u0002\u0010\t\u001a\u0004\b\u0007\u0010\bR\u001c\u0010\n\u001a\u0010\u0012\f\u0012\n\u0012\u0006\b\u0001\u0012\u00020\r0\f0\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010Y\u001a\u00020\u0017X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010Z\u001a\u00020\u0017X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010[\u001a\u00020\u0017X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\\\u001a\u00020MX\u0082T¢\u0006\u0002\n\u0000¨\u0006`"}, d2 = {"Lcom/discord/crash_reporting/CrashReporting;", "", "<init>", "()V", "TESTING_SENTRY", "", "value", "isCrashedLastRun", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "ignoreNetworkExceptionList", "", "Lkotlin/reflect/KClass;", "", "getSampleRate", "", "context", "Landroid/content/Context;", "isMetaQuest", "isDisabled", "init", "Lcom/discord/crash_reporting/CrashReporting$CrashReportingReady;", "releaseName", "", "libdiscoreModuleProvider", "Lcom/discord/libdiscore/LibdiscoreModuleProvider;", "handleBeforeSend", "Lio/sentry/SentryEvent;", "event", "persistLastCrashInfo", "", "getErrorMessage", "getErrorStack", "handleBeforeBreadcrumb", "Lio/sentry/Breadcrumb;", "breadcrumb", "hint", "Lio/sentry/Hint;", "libdiscoreEmitRustPanic", "detail", "message", "backtrace", "libdiscoreAddBreadcrumb", "captureException", "throwable", "ignoreNetworkExceptions", "captureMessage", "tag", "errorLevel", "Lcom/discord/crash_reporting/CrashReporting$ErrorLevel;", "exception", "Ljava/lang/Exception;", "Lkotlin/Exception;", "breadcrumbLevelToSentryLevel", "Lio/sentry/SentryLevel;", "level", "Lcom/discord/crash_reporting/CrashReporting$BreadcrumbLevel;", "addBreadcrumbBatchBinary", "buffer", "Ljava/nio/ByteBuffer;", "addBreadcrumb", "breadcrumbMessage", "breadcrumbData", "", "breadcrumbCategory", "log", "setTag", "key", "appendBreadcrumbToTelemetryRing", "data", "timestampMs", "", "channels", "getEventSize", "options", "Lio/sentry/android/core/SentryAndroidOptions;", "calculateBatchSize", "", "currentSize", "maxSizeBytes", "remainingBreadcrumbs", "avgBreadcrumbSize", "(JJILjava/lang/Long;)I", "computeAverageBreadcrumbSize", "previousEstimate", "sizeReduction", "removedCount", "(Ljava/lang/Long;JI)Ljava/lang/Long;", "incrementallyRemoveBreadcrumbs", "TAG_BUILD_NUMBER", "TAG_APP_VERSION", "TAG_EVENT_ORIGIN", "MAX_BREADCRUMBS", "CrashReportingReady", "BreadcrumbLevel", "ErrorLevel", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nCrashReporting.kt\nKotlin\n*S Kotlin\n*F\n+ 1 CrashReporting.kt\ncom/discord/crash_reporting/CrashReporting\n+ 2 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,801:1\n216#2,2:802\n216#2,2:804\n216#2,2:807\n1#3:806\n*S KotlinDebug\n*F\n+ 1 CrashReporting.kt\ncom/discord/crash_reporting/CrashReporting\n*L\n216#1:802,2\n353#1:804,2\n570#1:807,2\n*E\n"})
/* loaded from: classes.dex */
public final class CrashReporting {
    private static final int MAX_BREADCRUMBS = 5000;

    @NotNull
    private static final String TAG_APP_VERSION = "appVersion";

    @NotNull
    private static final String TAG_BUILD_NUMBER = "buildNumber";

    @NotNull
    private static final String TAG_EVENT_ORIGIN = "event.origin";
    private static final boolean TESTING_SENTRY = false;
    private static Boolean isCrashedLastRun;

    @NotNull
    public static final CrashReporting INSTANCE = new CrashReporting();

    @NotNull
    private static final List<KClass> ignoreNetworkExceptionList = c0.g(Reflection.getOrCreateKotlinClass(UnknownHostException.class), Reflection.getOrCreateKotlinClass(SocketTimeoutException.class), Reflection.getOrCreateKotlinClass(SocketException.class), Reflection.getOrCreateKotlinClass(ConnectException.class), Reflection.getOrCreateKotlinClass(SSLException.class), Reflection.getOrCreateKotlinClass(CertPathValidatorException.class), Reflection.getOrCreateKotlinClass(SSLHandshakeException.class));

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0005\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005¨\u0006\u0006"}, d2 = {"Lcom/discord/crash_reporting/CrashReporting$BreadcrumbLevel;", "", "<init>", "(Ljava/lang/String;I)V", "WARNING", "ERROR", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class BreadcrumbLevel {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ BreadcrumbLevel[] $VALUES;
        public static final BreadcrumbLevel WARNING = new BreadcrumbLevel("WARNING", 0);
        public static final BreadcrumbLevel ERROR = new BreadcrumbLevel("ERROR", 1);

        private static final /* synthetic */ BreadcrumbLevel[] $values() {
            return new BreadcrumbLevel[]{WARNING, ERROR};
        }

        static {
            BreadcrumbLevel[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
        }

        private BreadcrumbLevel(String str, int i5) {
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static BreadcrumbLevel valueOf(String str) {
            return (BreadcrumbLevel) Enum.valueOf(BreadcrumbLevel.class, str);
        }

        public static BreadcrumbLevel[] values() {
            return (BreadcrumbLevel[]) $VALUES.clone();
        }
    }

    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\t\b\u0000¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/discord/crash_reporting/CrashReporting$CrashReportingReady;", "", "<init>", "()V", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class CrashReportingReady {
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0005\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005¨\u0006\u0006"}, d2 = {"Lcom/discord/crash_reporting/CrashReporting$ErrorLevel;", "", "<init>", "(Ljava/lang/String;I)V", "INFO", "WARNING", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class ErrorLevel {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ ErrorLevel[] $VALUES;
        public static final ErrorLevel INFO = new ErrorLevel("INFO", 0);
        public static final ErrorLevel WARNING = new ErrorLevel("WARNING", 1);

        private static final /* synthetic */ ErrorLevel[] $values() {
            return new ErrorLevel[]{INFO, WARNING};
        }

        static {
            ErrorLevel[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
        }

        private ErrorLevel(String str, int i5) {
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static ErrorLevel valueOf(String str) {
            return (ErrorLevel) Enum.valueOf(ErrorLevel.class, str);
        }

        public static ErrorLevel[] values() {
            return (ErrorLevel[]) $VALUES.clone();
        }
    }

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;
        public static final /* synthetic */ int[] $EnumSwitchMapping$1;

        static {
            int[] iArr = new int[ErrorLevel.values().length];
            try {
                iArr[ErrorLevel.INFO.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[ErrorLevel.WARNING.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
            int[] iArr2 = new int[BreadcrumbLevel.values().length];
            try {
                iArr2[BreadcrumbLevel.WARNING.ordinal()] = 1;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr2[BreadcrumbLevel.ERROR.ordinal()] = 2;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$1 = iArr2;
        }
    }

    private CrashReporting() {
    }

    public static /* synthetic */ void addBreadcrumb$default(CrashReporting crashReporting, String str, Map map, String str2, BreadcrumbLevel breadcrumbLevel, boolean z5, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            map = v0.d();
        }
        Map map2 = map;
        String str3 = (i5 & 4) != 0 ? null : str2;
        BreadcrumbLevel breadcrumbLevel2 = (i5 & 8) != 0 ? null : breadcrumbLevel;
        if ((i5 & 16) != 0) {
            z5 = true;
        }
        crashReporting.addBreadcrumb(str, map2, str3, breadcrumbLevel2, z5);
    }

    private final void appendBreadcrumbToTelemetryRing(String key, String message, Map<String, ? extends Object> data, long timestampMs, List<String> channels) {
        try {
            TelemetryRing.INSTANCE.append(key, timestampMs, message, data, channels);
        } catch (Throwable th2) {
            Log.INSTANCE.w("SentryBreadcrumb", "Failed to append breadcrumb to TelemetryRing", th2);
        }
    }

    public static /* synthetic */ void appendBreadcrumbToTelemetryRing$default(CrashReporting crashReporting, String str, String str2, Map map, long j, List list, int i5, Object obj) {
        if ((i5 & 16) != 0) {
            list = b0.c("SENTRY");
        }
        crashReporting.appendBreadcrumbToTelemetryRing(str, str2, map, j, list);
    }

    private final int calculateBatchSize(long currentSize, long maxSizeBytes, int remainingBreadcrumbs, Long avgBreadcrumbSize) {
        long j = currentSize - maxSizeBytes;
        double d6 = j / maxSizeBytes;
        double d7 = remainingBreadcrumbs;
        int i5 = (int) (d7 * 0.5d);
        if (i5 < 1) {
            i5 = 1;
        }
        if (avgBreadcrumbSize == null || avgBreadcrumbSize.longValue() <= 0) {
            return j.d((int) (d7 * (d6 > 0.5d ? 0.3d : d6 > 0.2d ? 0.15d : d6 > 0.1d ? 0.08d : d6 > 0.05d ? 0.03d : 0.0d)), 1, i5);
        }
        return j.d((int) (j / avgBreadcrumbSize.longValue()), 1, i5);
    }

    public static /* synthetic */ void captureException$default(CrashReporting crashReporting, Throwable th2, boolean z5, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            z5 = false;
        }
        crashReporting.captureException(th2, z5);
    }

    public static /* synthetic */ void captureMessage$default(CrashReporting crashReporting, String str, String str2, ErrorLevel errorLevel, int i5, Object obj) {
        if ((i5 & 4) != 0) {
            errorLevel = ErrorLevel.INFO;
        }
        crashReporting.captureMessage(str, str2, errorLevel);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void captureMessage$lambda$17(String str, String str2, ErrorLevel errorLevel, IScope sentryScope) {
        SentryLevel sentryLevel;
        Intrinsics.checkNotNullParameter(sentryScope, "sentryScope");
        sentryScope.i(b0.c(str));
        int i5 = WhenMappings.$EnumSwitchMapping$0[errorLevel.ordinal()];
        if (i5 == 1) {
            sentryLevel = SentryLevel.INFO;
        } else {
            if (i5 != 2) {
                throw new n();
            }
            sentryLevel = SentryLevel.WARNING;
        }
        c4.b(str2, sentryLevel);
    }

    private final Long computeAverageBreadcrumbSize(Long previousEstimate, long sizeReduction, int removedCount) {
        if (sizeReduction <= 0 || removedCount <= 0) {
            return previousEstimate;
        }
        long j = sizeReduction / removedCount;
        if (previousEstimate == null) {
            return Long.valueOf(j);
        }
        return Long.valueOf((long) ((j * 0.3d) + (previousEstimate.longValue() * 0.7d)));
    }

    private final String getErrorMessage(SentryEvent event) {
        ArrayList d6 = event.d();
        u uVar = d6 != null ? (u) CollectionsKt.firstOrNull(d6) : null;
        String str = uVar != null ? uVar.f11888d : null;
        String str2 = uVar != null ? uVar.f11889e : null;
        if (str != null && str2 != null) {
            return k0.d.l(str, ": ", str2);
        }
        if (str != null) {
            return str;
        }
        if (str2 != null) {
            return str2;
        }
        io.sentry.protocol.n nVar = event.N;
        if (nVar != null) {
            return nVar.f11842d;
        }
        return null;
    }

    private final String getErrorStack(SentryEvent event) {
        u uVar;
        a0 a0Var;
        List list;
        ArrayList d6 = event.d();
        if (d6 == null || (uVar = (u) CollectionsKt.firstOrNull(d6)) == null || (a0Var = uVar.f11892w) == null || (list = a0Var.f11755d) == null || list.isEmpty()) {
            return null;
        }
        return CollectionsKt.O(list, ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, null, null, new com.discord.chat.presentation.textutils.c(9), 30);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence getErrorStack$lambda$10(SentryStackFrame frame) {
        Integer num = -1;
        Intrinsics.checkNotNullParameter(frame, "frame");
        StringBuilder sb2 = new StringBuilder();
        String str = frame.f11744v;
        if (str != null) {
            sb2.append(str);
        }
        Integer num2 = frame.f11747y;
        if (num2 == null) {
            num2 = frame.E != null ? num : null;
        }
        Integer num3 = frame.E;
        if (num3 != null) {
            num = num3;
        } else if (num2 == null) {
            num = null;
        }
        if (num2 != null) {
            int intValue = num2.intValue();
            if (sb2.length() > 0) {
                sb2.append(':');
            }
            sb2.append(intValue);
            if (num != null) {
                int intValue2 = num.intValue();
                sb2.append(':');
                sb2.append(intValue2);
            }
        }
        String str2 = frame.f11745w;
        if (str2 != null) {
            sb2.append(" (");
            sb2.append(str2);
            sb2.append(')');
        }
        return sb2.toString();
    }

    private final long getEventSize(SentryEvent event, SentryAndroidOptions options) {
        return io.sentry.util.c.b(options.getSerializer(), options.getLogger(), event);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x003a, code lost:
    
        if (r12.equals("lifecycle") == false) goto L35;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x004f, code lost:
    
        if (r12.equals("app.lifecycle") == false) goto L35;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final Breadcrumb handleBeforeBreadcrumb(Breadcrumb breadcrumb, Hint hint) {
        String str;
        String name;
        String str2 = breadcrumb.f10978y;
        if (str2 != null && !Intrinsics.areEqual(str2, "analytics")) {
            String str3 = null;
            String str4 = "app_lifecycle";
            switch (str2.hashCode()) {
                case -2019959078:
                    if (str2.equals("network.event")) {
                        str4 = "network_capabilities_changed";
                        str = str4;
                        break;
                    }
                    str = null;
                    break;
                case -2001083134:
                    if (str2.equals("device.event")) {
                        str4 = "device_event";
                        str = str4;
                        break;
                    }
                    str = null;
                    break;
                case -1265025059:
                    break;
                case -1202793518:
                    if (str2.equals(com.discord.foreground_service.utils.Log.TAG)) {
                        str4 = "foreground_service";
                        str = str4;
                        break;
                    }
                    str = null;
                    break;
                case -302323862:
                    break;
                case 336786742:
                    if (str2.equals("react.softexception")) {
                        str4 = "react_soft_exception";
                        str = str4;
                        break;
                    }
                    str = null;
                    break;
                case 1764434064:
                    if (str2.equals("ui.lifecycle")) {
                        str4 = "ui_lifecycle";
                        str = str4;
                        break;
                    }
                    str = null;
                    break;
                default:
                    str = null;
                    break;
            }
            if (str != null) {
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                linkedHashMap.put("type", breadcrumb.f10976w);
                SentryLevel sentryLevel = breadcrumb.F;
                if (sentryLevel != null && (name = sentryLevel.name()) != null) {
                    str3 = name.toLowerCase(Locale.ROOT);
                    Intrinsics.checkNotNullExpressionValue(str3, "toLowerCase(...)");
                }
                linkedHashMap.put("level", str3);
                linkedHashMap.put("message", breadcrumb.f10975v);
                ConcurrentHashMap concurrentHashMap = breadcrumb.f10977x;
                Intrinsics.checkNotNullExpressionValue(concurrentHashMap, "getData(...)");
                for (Map.Entry entry : concurrentHashMap.entrySet()) {
                    linkedHashMap.put((String) entry.getKey(), entry.getValue());
                }
                String str5 = breadcrumb.f10975v;
                Date b10 = breadcrumb.b();
                appendBreadcrumbToTelemetryRing(str, str5, linkedHashMap, b10 != null ? b10.getTime() : System.currentTimeMillis(), b0.c("ZOOMED"));
            }
        }
        return breadcrumb;
    }

    private final SentryEvent handleBeforeSend(Context context, SentryEvent event) {
        SentryLevel sentryLevel = event.R;
        AbstractMap abstractMap = event.f11547w;
        if (abstractMap != null) {
        }
        ArrayList d6 = event.d();
        if (d6 != null) {
        }
        boolean z5 = sentryLevel == null || sentryLevel == SentryLevel.FATAL || sentryLevel == SentryLevel.ERROR;
        try {
            event.c("app_process_lifecycle", AppLifecycle.INSTANCE.isForegrounded() ? "foreground" : AppStateModule.APP_STATE_BACKGROUND);
            ActivityResumedTracker.Snapshot snapshot = ActivityResumedTracker.INSTANCE.snapshot();
            String lowerCase = snapshot.getState().name().toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
            event.c("app_activity_lifecycle", lowerCase);
            event.b(Long.valueOf(snapshot.getLastPausedAtElapsedRealtime()), "app_activity_last_paused_at_elapsed_realtime_ms");
            TTIModule.Companion companion = TTIModule.INSTANCE;
            event.c("app_launch_scenario", companion.getLaunchScenario());
            event.b(Boolean.valueOf(companion.getWasServiceStartedBeforeActivity()), "app_launch_was_service_started_before_activity");
            event.b(Boolean.valueOf(companion.getWasBroadcastReceiverStartedBeforeActivity()), "app_launch_was_broadcast_receiver_started_before_activity");
            event.b(Boolean.valueOf(companion.getWasInitializeCompleteWhenActivityOpened()), "app_launch_was_initialize_complete_when_activity_opened");
            event.b(Boolean.valueOf(companion.getWasLaunchedViaShortcut()), "app_launch_was_launched_via_shortcut");
            event.b(Integer.valueOf(companion.getActivitiesBeforeMainCount()), "app_launch_activities_before_main_count");
            ForegroundServiceStartGuard.Result evaluate$default = ForegroundServiceStartGuard.evaluate$default(ForegroundServiceStartGuard.INSTANCE, 0L, 1, null);
            event.c("fgs_guard", evaluate$default.getAllowed() ? "allowed" : "blocked");
            event.c("fgs_guard_reason", evaluate$default.getReason());
            for (Map.Entry<String, String> entry : evaluate$default.getDiagnostics().entrySet()) {
                String key = entry.getKey();
                event.b(entry.getValue(), "fgs_guard_" + key);
            }
        } catch (Throwable unused) {
        }
        if (sentryLevel == SentryLevel.FATAL) {
            OnCrashRegistry.INSTANCE.runAll$crash_reporting_release();
        }
        if (z5) {
            persistLastCrashInfo(context, event);
        }
        return event;
    }

    private final SentryEvent incrementallyRemoveBreadcrumbs(SentryEvent event, Hint hint, SentryAndroidOptions options) {
        Throwable th2;
        ArrayList j02;
        try {
            List list = event.J;
            if (list != null) {
                try {
                    j02 = CollectionsKt.j0(list);
                } catch (Throwable th3) {
                    th2 = th3;
                    options.getLogger().i(SentryLevel.ERROR, th2, "Error during incremental breadcrumb removal for event %s", event.f11543d);
                    return event;
                }
            } else {
                j02 = new ArrayList();
            }
            int size = j02.size();
            long eventSize = getEventSize(event, options);
            if (eventSize > v5.MAX_EVENT_SIZE_BYTES) {
                options.getLogger().u(SentryLevel.INFO, "Event %s exceeds %d bytes limit. Incrementally removing breadcrumbs.", event.f11543d, Long.valueOf(v5.MAX_EVENT_SIZE_BYTES));
                long j = eventSize;
                Long l6 = null;
                while (!j02.isEmpty() && j > v5.MAX_EVENT_SIZE_BYTES) {
                    try {
                        int min = Math.min(calculateBatchSize(j, v5.MAX_EVENT_SIZE_BYTES, j02.size(), l6), j02.size());
                        if (min <= 0) {
                            break;
                        }
                        j02.subList(0, min).clear();
                        event.J = new ArrayList(j02);
                        long eventSize2 = getEventSize(event, options);
                        l6 = computeAverageBreadcrumbSize(l6, j - eventSize2, min);
                        j = eventSize2;
                    } catch (Throwable th4) {
                        th = th4;
                        th2 = th;
                        options.getLogger().i(SentryLevel.ERROR, th2, "Error during incremental breadcrumb removal for event %s", event.f11543d);
                        return event;
                    }
                }
                int size2 = size - j02.size();
                if (size2 > 0) {
                    options.getLogger().u(SentryLevel.DEBUG, "Removed %d breadcrumbs from event %s. Final size: %d bytes, remaining: %d", Integer.valueOf(size2), event.f11543d, Long.valueOf(j), Integer.valueOf(j02.size()));
                }
                if (j > v5.MAX_EVENT_SIZE_BYTES) {
                    options.getLogger().u(SentryLevel.WARNING, "Event %s still exceeds size limit after removing all breadcrumbs.", event.f11543d);
                }
            }
            return event;
        } catch (Throwable th5) {
            th = th5;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void init$lambda$3(String str, String str2, Context context, double d6, SentryAndroidOptions options) {
        Intrinsics.checkNotNullParameter(options, "options");
        options.setDsn(str);
        ClientInfo clientInfo = ClientInfo.INSTANCE;
        options.setEnvironment(clientInfo.getReleaseChannel());
        options.setDist(clientInfo.getVersionCode());
        options.setRelease(str2);
        options.setCacheDirPath(context.getCacheDir() + "/sentry");
        options.setEnableActivityLifecycleTracingAutoFinish(false);
        options.setEnableAutoActivityLifecycleTracing(false);
        options.setTracesSampleRate(Double.valueOf(0.0d));
        options.setSampleRate(Double.valueOf(d6));
        options.setProguardUuid("2011da6f-39a0-42f8-9dcb-010a49296207");
        options.setTag(TAG_BUILD_NUMBER, clientInfo.getVersionCode());
        options.setTag(TAG_APP_VERSION, clientInfo.getVersionName());
        options.setBeforeSend(new com.discord.chat.input.views.d(context, 1));
        options.setMaxBreadcrumbs(MAX_BREADCRUMBS);
        options.setEnableEventSizeLimiting(true);
        options.setOnOversizedEvent(new b(options));
        options.setEnableAppLifecycleBreadcrumbs(true);
        options.setEnableActivityLifecycleBreadcrumbs(true);
        options.setEnableSystemEventBreadcrumbs(true);
        options.setEnableAppComponentBreadcrumbs(true);
        options.setEnableUserInteractionBreadcrumbs(true);
        options.setBeforeBreadcrumb(new ah.a(18));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final SentryEvent init$lambda$3$lambda$0(Context context, SentryEvent event, Hint hint) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(hint, "<unused var>");
        return INSTANCE.handleBeforeSend(context, event);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final SentryEvent init$lambda$3$lambda$1(SentryAndroidOptions sentryAndroidOptions, SentryEvent event, Hint hint) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(hint, "hint");
        return INSTANCE.incrementallyRemoveBreadcrumbs(event, hint, sentryAndroidOptions);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Breadcrumb init$lambda$3$lambda$2(Breadcrumb breadcrumb, Hint hint) {
        Intrinsics.checkNotNullParameter(breadcrumb, "breadcrumb");
        Intrinsics.checkNotNullParameter(hint, "hint");
        return INSTANCE.handleBeforeBreadcrumb(breadcrumb, hint);
    }

    private final boolean isDisabled() {
        if (ClientInfo.INSTANCE.isProdBuild()) {
            String DEVICE = Build.DEVICE;
            Intrinsics.checkNotNullExpressionValue(DEVICE, "DEVICE");
            if (StringsKt.D(DEVICE, "vivo", false)) {
                return true;
            }
        }
        return false;
    }

    private final boolean isMetaQuest() {
        return x.i(Build.BRAND, "oculus", true);
    }

    @DoNotStrip
    @Keep
    public static final void libdiscoreAddBreadcrumb(@NotNull String context, @NotNull String detail, @NotNull String message) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(detail, "detail");
        Intrinsics.checkNotNullParameter(message, "message");
        try {
            Breadcrumb breadcrumb = new Breadcrumb();
            breadcrumb.F = SentryLevel.FATAL;
            breadcrumb.f10978y = "libdiscore";
            breadcrumb.f10975v = context + "::" + detail + " - " + message;
            c4.a(breadcrumb);
        } catch (Exception e9) {
            Log.INSTANCE.e("SentryBreadcrumb", "Failed to add libdiscore breadcrumb", e9);
        }
    }

    @DoNotStrip
    @Keep
    public static final String libdiscoreEmitRustPanic(@NotNull String context, @NotNull String detail, @NotNull String message, @NotNull String backtrace) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(detail, "detail");
        Intrinsics.checkNotNullParameter(message, "message");
        Intrinsics.checkNotNullParameter(backtrace, "backtrace");
        try {
            SentryEvent sentryEvent = new SentryEvent();
            sentryEvent.R = SentryLevel.FATAL;
            u uVar = new u();
            uVar.f11888d = "RustPanic";
            uVar.f11889e = message;
            uVar.f11890i = context;
            m mVar = new m();
            mVar.f11835d = "rust_panic";
            mVar.f11838v = Boolean.FALSE;
            uVar.f11893x = mVar;
            sentryEvent.Q = new e6(b0.c(uVar));
            sentryEvent.b(context, "context");
            sentryEvent.b(detail, "detail");
            sentryEvent.b(backtrace, "rust_backtrace");
            sentryEvent.c("libdiscore.context", context);
            sentryEvent.c("libdiscore.detail", detail);
            x0 f2 = c4.f();
            f2.getClass();
            v x5 = f2.x(sentryEvent, new Hint());
            Intrinsics.checkNotNullExpressionValue(x5, "captureEvent(...)");
            c4.e(2000L);
            String vVar = x5.toString();
            if (vVar.length() == 0) {
                return null;
            }
            return vVar;
        } catch (Exception e9) {
            Log.INSTANCE.e("SentryBreadcrumb", "Failed to emit libdiscore sentry event", e9);
            return null;
        }
    }

    private final void persistLastCrashInfo(Context context, SentryEvent event) {
        String vVar;
        String str;
        u uVar;
        try {
            v vVar2 = event.f11543d;
            if (vVar2 != null && (vVar = vVar2.toString()) != null) {
                String errorMessage = getErrorMessage(event);
                String errorStack = getErrorStack(event);
                ArrayList d6 = event.d();
                String str2 = (d6 == null || (uVar = (u) CollectionsKt.firstOrNull(d6)) == null) ? null : uVar.f11888d;
                boolean z5 = str2 != null && StringsKt.D(str2, "JavascriptException", false);
                AbstractMap abstractMap = event.f11547w;
                if (abstractMap == null || (str = (String) abstractMap.get(TAG_EVENT_ORIGIN)) == null) {
                    str = event.E;
                }
                if (z5) {
                    str = "javascript";
                }
                boolean z6 = (z5 || Intrinsics.areEqual(str, "javascript")) ? false : true;
                Date date = (Date) event.M.clone();
                long time = date != null ? date.getTime() : System.currentTimeMillis();
                SentryLevel sentryLevel = event.R;
                CrashPersistence.INSTANCE.getInstance(context).setLastCrashInfo(new CrashPersistence.LastCrashInfo(vVar, time, str, z6, errorMessage, errorStack, sentryLevel != null ? sentryLevel.name() : null));
            }
        } catch (Throwable th2) {
            Log.INSTANCE.e("SentryBreadcrumb", "Failed to persist last crash info", th2);
        }
    }

    public final void addBreadcrumb(@NotNull String breadcrumbMessage, @NotNull Map<String, ? extends Object> breadcrumbData, String breadcrumbCategory, BreadcrumbLevel level, boolean log) {
        Intrinsics.checkNotNullParameter(breadcrumbMessage, "breadcrumbMessage");
        Intrinsics.checkNotNullParameter(breadcrumbData, "breadcrumbData");
        Breadcrumb breadcrumb = new Breadcrumb();
        breadcrumb.f10975v = breadcrumbMessage;
        for (Map.Entry<String, ? extends Object> entry : breadcrumbData.entrySet()) {
            breadcrumb.c(entry.getValue(), entry.getKey());
        }
        breadcrumb.f10978y = breadcrumbCategory;
        if (level != null) {
            breadcrumb.F = INSTANCE.breadcrumbLevelToSentryLevel(level);
        }
        if (log) {
            Log.i$default(Log.INSTANCE, "SentryBreadcrumb", breadcrumbMessage, (Throwable) null, 4, (Object) null);
        }
        c4.a(breadcrumb);
        appendBreadcrumbToTelemetryRing$default(this, breadcrumbMessage, breadcrumbMessage, breadcrumbData, System.currentTimeMillis(), null, 16, null);
    }

    @DoNotStrip
    @Keep
    public final void addBreadcrumbBatchBinary(@NotNull ByteBuffer buffer) {
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        try {
            buffer.order(ByteOrder.BIG_ENDIAN);
            int i5 = buffer.getInt();
            for (int i6 = 0; i6 < i5; i6++) {
                int i10 = buffer.getInt();
                String str = "GLOG Batch [" + i10 + " entries] @ " + buffer.getLong() + " - " + buffer.getLong();
                ArrayList arrayList = new ArrayList();
                for (int i11 = 0; i11 < i10; i11++) {
                    byte[] bArr = new byte[buffer.getShort() & 65535];
                    buffer.get(bArr);
                    Charset charset = Charsets.UTF_8;
                    String str2 = new String(bArr, charset);
                    byte[] bArr2 = new byte[buffer.getShort() & 65535];
                    buffer.get(bArr2);
                    String str3 = new String(bArr2, charset);
                    boolean z5 = buffer.get() != 0;
                    long j = buffer.getLong();
                    appendBreadcrumbToTelemetryRing$default(INSTANCE, str2, str2, v0.g(new Pair("loc", str3), new Pair("main", Boolean.valueOf(z5))), j, null, 16, null);
                    arrayList.add(v0.g(new Pair("msg", str2), new Pair("loc", str3), new Pair("main", Boolean.valueOf(z5)), new Pair("ts", Long.valueOf(j))));
                }
                Breadcrumb breadcrumb = new Breadcrumb();
                breadcrumb.f10975v = str;
                breadcrumb.c(Integer.valueOf(i10), "count");
                breadcrumb.c(arrayList, "entries");
                c4.a(breadcrumb);
            }
        } catch (Exception e9) {
            Log.INSTANCE.e("CrashReporting", "Failed to parse breadcrumb buffer", e9);
        }
    }

    @NotNull
    public final SentryLevel breadcrumbLevelToSentryLevel(@NotNull BreadcrumbLevel level) {
        Intrinsics.checkNotNullParameter(level, "level");
        int i5 = WhenMappings.$EnumSwitchMapping$1[level.ordinal()];
        if (i5 == 1) {
            return SentryLevel.WARNING;
        }
        if (i5 == 2) {
            return SentryLevel.ERROR;
        }
        throw new n();
    }

    public final void captureException(@NotNull Throwable throwable, boolean ignoreNetworkExceptions) {
        Intrinsics.checkNotNullParameter(throwable, "throwable");
        Log.e$default(Log.INSTANCE, "SentryBreadcrumb", f.b(throwable), (Throwable) null, 4, (Object) null);
        if (!ignoreNetworkExceptions) {
            x0 f2 = c4.f();
            f2.getClass();
            f2.s(throwable, new Hint());
        } else {
            if (ignoreNetworkExceptionList.contains(Reflection.getOrCreateKotlinClass(throwable.getClass()))) {
                return;
            }
            x0 f10 = c4.f();
            f10.getClass();
            f10.s(throwable, new Hint());
        }
    }

    public final void captureMessage(@NotNull String tag, @NotNull String message, @NotNull ErrorLevel errorLevel) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(message, "message");
        Intrinsics.checkNotNullParameter(errorLevel, "errorLevel");
        int i5 = WhenMappings.$EnumSwitchMapping$0[errorLevel.ordinal()];
        if (i5 == 1) {
            Log.i$default(Log.INSTANCE, tag, message, (Throwable) null, 4, (Object) null);
        } else {
            if (i5 != 2) {
                throw new n();
            }
            Log.w$default(Log.INSTANCE, tag, message, (Throwable) null, 4, (Object) null);
        }
        c4.n(new bc.a(tag, message, errorLevel, 1));
    }

    public final double getSampleRate(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return (!ClientInfo.INSTANCE.isProdBuild() || isMetaQuest() || CrashPersistence.INSTANCE.getInstance(context).isStaff()) ? 1.0d : 0.05d;
    }

    @NotNull
    public final CrashReportingReady init(@NotNull final Context context, @NotNull final String releaseName, @NotNull LibdiscoreModuleProvider libdiscoreModuleProvider) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(releaseName, "releaseName");
        Intrinsics.checkNotNullParameter(libdiscoreModuleProvider, "libdiscoreModuleProvider");
        if (isDisabled()) {
            return new CrashReportingReady();
        }
        ClientInfo clientInfo = ClientInfo.INSTANCE;
        final String str = (clientInfo.isDebugBuild() || clientInfo.isDeveloperBuild()) ? "" : CrashPersistence.INSTANCE.getInstance(context).isStaff() ? "https://90509cba01573ee4e14a2f5e15aee5ca@o64374.ingest.sentry.io/5992375" : !clientInfo.isProdBuild() ? "https://9a42ef460144a03b30c8b2d5321cfe11@o64374.ingest.sentry.io/5992375" : "https://70545531dfe34835bf4dd0996821e8b6@o64374.ingest.sentry.io/5992375";
        final double sampleRate = getSampleRate(context);
        c1.b(context, new l0(1), new b4() { // from class: com.discord.crash_reporting.a
            @Override // io.sentry.b4
            public final void c(v5 v5Var) {
                CrashReporting.init$lambda$3(str, releaseName, context, sampleRate, (SentryAndroidOptions) v5Var);
            }
        });
        isCrashedLastRun = c4.j();
        NativeCrashReporting.INSTANCE.initNative(clientInfo.isProdBuild());
        try {
            libdiscoreModuleProvider.get().installSentryReporter();
        } catch (Exception e9) {
            Log.INSTANCE.e("SentryBreadcrumb", "Failed to install libdiscore sentry reporter", e9);
        }
        return new CrashReportingReady();
    }

    public final Boolean isCrashedLastRun() {
        return isCrashedLastRun;
    }

    public final void setTag(@NotNull CrashReportingReady crashReportingReady, @NotNull String key, @NotNull String value) {
        Intrinsics.checkNotNullParameter(crashReportingReady, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(value, "value");
        if (isDisabled()) {
            return;
        }
        c4.m(key, value);
    }

    public final void captureMessage(@NotNull String tag, @NotNull Exception exception) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(exception, "exception");
        String message = exception.getMessage();
        if (message == null) {
            message = "";
        }
        captureMessage$default(this, tag, message, null, 4, null);
    }
}
