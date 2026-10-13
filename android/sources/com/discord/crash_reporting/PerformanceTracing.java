package com.discord.crash_reporting;

import a3.e;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.bridge.ReactMarker;
import com.facebook.react.bridge.ReactMarkerConstants;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
import io.sentry.ISpan;
import io.sentry.c4;
import io.sentry.f1;
import io.sentry.p6;
import io.sentry.q6;
import io.sentry.x0;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.v0;
import kotlin.collections.x;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000~\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010%\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010!\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010$\n\u0000\n\u0002\u0010\"\n\u0002\b\u0006\u0018\u0000 >2\u00020\u0001:\u0003>?@B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000f\u0010\u0005\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\u0005\u0010\u0003J\u0017\u0010\b\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\u0006H\u0002¢\u0006\u0004\b\b\u0010\tJ\u0017\u0010\n\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\u0006H\u0002¢\u0006\u0004\b\n\u0010\tJ\u0017\u0010\r\u001a\u00020\u00042\u0006\u0010\f\u001a\u00020\u000bH\u0002¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\u00020\u000b2\u0006\u0010\u0010\u001a\u00020\u000fH\u0002¢\u0006\u0004\b\u0011\u0010\u0012J#\u0010\u0015\u001a\u0004\u0018\u00010\u000f2\u0006\u0010\u0013\u001a\u00020\u000b2\b\u0010\u0014\u001a\u0004\u0018\u00010\u000bH\u0002¢\u0006\u0004\b\u0015\u0010\u0016J\u0019\u0010\u0017\u001a\u0004\u0018\u00010\u000b2\u0006\u0010\f\u001a\u00020\u000fH\u0002¢\u0006\u0004\b\u0017\u0010\u0012J\r\u0010\u0018\u001a\u00020\u0004¢\u0006\u0004\b\u0018\u0010\u0003J\r\u0010\u0019\u001a\u00020\u0004¢\u0006\u0004\b\u0019\u0010\u0003J\u0015\u0010\u001a\u001a\u00020\u00042\u0006\u0010\f\u001a\u00020\u000f¢\u0006\u0004\b\u001a\u0010\u001bJ\u001f\u0010\u001a\u001a\u00020\u00042\u0006\u0010\f\u001a\u00020\u000b2\b\u0010\u0014\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\u001a\u0010\u001cJ)\u0010 \u001a\u00020\u00042\u0006\u0010\u0013\u001a\u00020\u001d2\b\u0010\u0014\u001a\u0004\u0018\u00010\u000b2\u0006\u0010\u001f\u001a\u00020\u001eH\u0016¢\u0006\u0004\b \u0010!R \u0010$\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020#0\"8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b$\u0010%R \u0010'\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020&0\"8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b'\u0010%R \u0010)\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020(0\"8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b)\u0010%R\u0018\u0010*\u001a\u0004\u0018\u00010&8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b*\u0010+R\u0018\u0010,\u001a\u0004\u0018\u00010&8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b,\u0010+R\u0016\u0010.\u001a\u00020-8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b.\u0010/R\u0018\u00101\u001a\u0004\u0018\u0001008\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b1\u00102R\u001a\u00104\u001a\b\u0012\u0004\u0012\u000200038\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b4\u00105R\u0016\u00107\u001a\u0002068\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b7\u00108R \u0010:\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u000b098\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b:\u0010%R\u001a\u0010<\u001a\b\u0012\u0004\u0012\u00020\u000b0;8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b<\u0010=¨\u0006A"}, d2 = {"Lcom/discord/crash_reporting/PerformanceTracing;", "Lcom/facebook/react/bridge/ReactMarker$MarkerListener;", "<init>", "()V", "", "startNativeModuleInit", "Lcom/discord/crash_reporting/TraceTransaction;", "transaction", "startTransaction", "(Lcom/discord/crash_reporting/TraceTransaction;)V", "stopTransaction", "", "marker", "checkAndSetInitSection", "(Ljava/lang/String;)V", "Lcom/discord/crash_reporting/PerformanceTracing$TransactionMarker;", "transactionMarker", "getMarkerName", "(Lcom/discord/crash_reporting/PerformanceTracing$TransactionMarker;)Ljava/lang/String;", StackTraceHelper.NAME_KEY, "tag", "getMarker", "(Ljava/lang/String;Ljava/lang/String;)Lcom/discord/crash_reporting/PerformanceTracing$TransactionMarker;", "getParentSpanName", ViewProps.START, "stop", "logSpanForTransaction", "(Lcom/discord/crash_reporting/PerformanceTracing$TransactionMarker;)V", "(Ljava/lang/String;Ljava/lang/String;)V", "Lcom/facebook/react/bridge/ReactMarkerConstants;", "", "instanceKey", "logMarker", "(Lcom/facebook/react/bridge/ReactMarkerConstants;Ljava/lang/String;I)V", "", "Lio/sentry/f1;", "ongoingTransactions", "Ljava/util/Map;", "Lio/sentry/ISpan;", "ongoingSpans", "", "spanStarts", "lastNativeModuleSetupStart", "Lio/sentry/ISpan;", "lastProcessPackage", "", "stopped", "Z", "Lcom/discord/crash_reporting/PackageProcessTimings;", "currentProcessPackage", "Lcom/discord/crash_reporting/PackageProcessTimings;", "", "processPackageTimings", "Ljava/util/List;", "Lcom/discord/crash_reporting/StartupInitSection;", "startupInitSection", "Lcom/discord/crash_reporting/StartupInitSection;", "", "startupRootEventsTree", "", "wildcardEventNames", "Ljava/util/Set;", "Companion", "MarkerEnd", "TransactionMarker", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class PerformanceTracing implements ReactMarker.MarkerListener {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private static PerformanceTracing performanceTracingInstance;
    private PackageProcessTimings currentProcessPackage;
    private ISpan lastNativeModuleSetupStart;
    private ISpan lastProcessPackage;

    @NotNull
    private final Set<String> wildcardEventNames;

    @NotNull
    private final Map<TraceTransaction, f1> ongoingTransactions = new LinkedHashMap();

    @NotNull
    private final Map<String, ISpan> ongoingSpans = new LinkedHashMap();

    @NotNull
    private final Map<String, Long> spanStarts = new LinkedHashMap();
    private boolean stopped = true;

    @NotNull
    private final List<PackageProcessTimings> processPackageTimings = new ArrayList();

    @NotNull
    private StartupInitSection startupInitSection = StartupInitSection.ReactInstanceManager;

    @NotNull
    private final Map<String, String> startupRootEventsTree = v0.g(new Pair("GET_REACT_INSTANCE_MANAGER", "root"), new Pair("BUILD_REACT_INSTANCE_MANAGER", "GET_REACT_INSTANCE_MANAGER"), new Pair("ROOT_VIEW_ON_MEASURE", "root"), new Pair("ROOT_VIEW_ATTACH_TO_REACT_INSTANCE_MANAGER", "ROOT_VIEW_ON_MEASURE"), new Pair("REACT_BRIDGE_LOADING", "root"), new Pair("CREATE_REACT_CONTEXT", "REACT_BRIDGE_LOADING"), new Pair("PROCESS_PACKAGES", "CREATE_REACT_CONTEXT"), new Pair("PROCESS_CORE_REACT_PACKAGE", "PROCESS_PACKAGES"), new Pair("PROCESS_PACKAGE", "PROCESS_PACKAGES"), new Pair("PROCESS_PACKAGE_MODULE", "PROCESS_PACKAGE"), new Pair("BUILD_NATIVE_MODULE_REGISTRY", "CREATE_REACT_CONTEXT"), new Pair("CREATE_CATALYST_INSTANCE", "CREATE_REACT_CONTEXT"), new Pair("LOAD_REACT_NATIVE_SO_FILE", "CREATE_CATALYST_INSTANCE"), new Pair("PRE_RUN_JS_BUNDLE", "REACT_BRIDGE_LOADING"), new Pair("SETUP_REACT_CONTEXT", "REACT_BRIDGE_LOADING"), new Pair("ON_HOST_RESUME", "SETUP_REACT_CONTEXT"), new Pair("ATTACH_MEASURED_ROOT_VIEWS", "SETUP_REACT_CONTEXT"), new Pair("CREATE_MODULE UiManager", "ATTACH_MEASURED_ROOT_VIEWS"), new Pair("CREATE_UI_MANAGER_MODULE", "CREATE_MODULE UiManager"), new Pair("CREATE_VIEW_MANAGERS", "CREATE_UI_MANAGER_MODULE"), new Pair("ROOT_VIEW_UPDATE_LAYOUT_SPECS", "SETUP_REACT_CONTEXT"), new Pair("RUN_JS_BUNDLE", "root"));

    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u0006\u001a\u00020\u0005R\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0007"}, d2 = {"Lcom/discord/crash_reporting/PerformanceTracing$Companion;", "", "<init>", "()V", "performanceTracingInstance", "Lcom/discord/crash_reporting/PerformanceTracing;", "get", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final PerformanceTracing get() {
            if (PerformanceTracing.performanceTracingInstance == null) {
                PerformanceTracing.performanceTracingInstance = new PerformanceTracing();
            }
            PerformanceTracing performanceTracing = PerformanceTracing.performanceTracingInstance;
            Intrinsics.checkNotNull(performanceTracing);
            return performanceTracing;
        }

        private Companion() {
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0005\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005¨\u0006\u0006"}, d2 = {"Lcom/discord/crash_reporting/PerformanceTracing$MarkerEnd;", "", "<init>", "(Ljava/lang/String;I)V", "START", "END", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class MarkerEnd {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ MarkerEnd[] $VALUES;
        public static final MarkerEnd START = new MarkerEnd("START", 0);
        public static final MarkerEnd END = new MarkerEnd("END", 1);

        private static final /* synthetic */ MarkerEnd[] $values() {
            return new MarkerEnd[]{START, END};
        }

        static {
            MarkerEnd[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
        }

        private MarkerEnd(String str, int i5) {
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static MarkerEnd valueOf(String str) {
            return (MarkerEnd) Enum.valueOf(MarkerEnd.class, str);
        }

        public static MarkerEnd[] values() {
            return (MarkerEnd[]) $VALUES.clone();
        }
    }

    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B!\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u000f\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010\u0010\u001a\u00020\u0006HÆ\u0003J)\u0010\u0011\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u0006HÆ\u0001J\u0013\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0015\u001a\u00020\u0016HÖ\u0001J\t\u0010\u0017\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\r¨\u0006\u0018"}, d2 = {"Lcom/discord/crash_reporting/PerformanceTracing$TransactionMarker;", "", StackTraceHelper.NAME_KEY, "", "tag", "markerEnd", "Lcom/discord/crash_reporting/PerformanceTracing$MarkerEnd;", "<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/discord/crash_reporting/PerformanceTracing$MarkerEnd;)V", "getName", "()Ljava/lang/String;", "getTag", "getMarkerEnd", "()Lcom/discord/crash_reporting/PerformanceTracing$MarkerEnd;", "component1", "component2", "component3", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class TransactionMarker {

        @NotNull
        private final MarkerEnd markerEnd;

        @NotNull
        private final String name;
        private final String tag;

        public TransactionMarker(@NotNull String name, String str, @NotNull MarkerEnd markerEnd) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(markerEnd, "markerEnd");
            this.name = name;
            this.tag = str;
            this.markerEnd = markerEnd;
        }

        public static /* synthetic */ TransactionMarker copy$default(TransactionMarker transactionMarker, String str, String str2, MarkerEnd markerEnd, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = transactionMarker.name;
            }
            if ((i5 & 2) != 0) {
                str2 = transactionMarker.tag;
            }
            if ((i5 & 4) != 0) {
                markerEnd = transactionMarker.markerEnd;
            }
            return transactionMarker.copy(str, str2, markerEnd);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getName() {
            return this.name;
        }

        /* renamed from: component2, reason: from getter */
        public final String getTag() {
            return this.tag;
        }

        @NotNull
        /* renamed from: component3, reason: from getter */
        public final MarkerEnd getMarkerEnd() {
            return this.markerEnd;
        }

        @NotNull
        public final TransactionMarker copy(@NotNull String name, String tag, @NotNull MarkerEnd markerEnd) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(markerEnd, "markerEnd");
            return new TransactionMarker(name, tag, markerEnd);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof TransactionMarker)) {
                return false;
            }
            TransactionMarker transactionMarker = (TransactionMarker) other;
            return Intrinsics.areEqual(this.name, transactionMarker.name) && Intrinsics.areEqual(this.tag, transactionMarker.tag) && this.markerEnd == transactionMarker.markerEnd;
        }

        @NotNull
        public final MarkerEnd getMarkerEnd() {
            return this.markerEnd;
        }

        @NotNull
        public final String getName() {
            return this.name;
        }

        public final String getTag() {
            return this.tag;
        }

        public int hashCode() {
            int hashCode = this.name.hashCode() * 31;
            String str = this.tag;
            return this.markerEnd.hashCode() + ((hashCode + (str == null ? 0 : str.hashCode())) * 31);
        }

        @NotNull
        public String toString() {
            String str = this.name;
            String str2 = this.tag;
            MarkerEnd markerEnd = this.markerEnd;
            StringBuilder t5 = e.t("TransactionMarker(name=", str, ", tag=", str2, ", markerEnd=");
            t5.append(markerEnd);
            t5.append(")");
            return t5.toString();
        }
    }

    public PerformanceTracing() {
        String[] elements = {"NATIVE_MODULE_SETUP", "INITIALIZE_MODULE", "CREATE_REACT_CONTEXT", "CREATE_MODULE", "RUN_JS_BUNDLE", "PROCESS_PACKAGE", "PROCESS_PACKAGE_MODULE"};
        Intrinsics.checkNotNullParameter(elements, "elements");
        this.wildcardEventNames = x.J(elements);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    private final void checkAndSetInitSection(String marker) {
        StartupInitSection startupInitSection;
        switch (marker.hashCode()) {
            case -1149178597:
                if (marker.equals("NATIVE_MODULE_INITIALIZE")) {
                    startupInitSection = StartupInitSection.NativeModuleInitialization;
                    break;
                }
                startupInitSection = null;
                break;
            case -464136890:
                if (marker.equals("REACT_BRIDGE_LOADING")) {
                    startupInitSection = StartupInitSection.ReactBridgeLoading;
                    break;
                }
                startupInitSection = null;
                break;
            case 291013106:
                if (marker.equals("NATIVE_MODULE_SETUP")) {
                    startupInitSection = StartupInitSection.NativeModuleSetup;
                    break;
                }
                startupInitSection = null;
                break;
            case 1036876780:
                if (marker.equals("GET_REACT_INSTANCE_MANAGER")) {
                    startupInitSection = StartupInitSection.ReactInstanceManager;
                    break;
                }
                startupInitSection = null;
                break;
            default:
                startupInitSection = null;
                break;
        }
        if (startupInitSection != null) {
            this.startupInitSection = startupInitSection;
        }
    }

    private final TransactionMarker getMarker(String name, String tag) {
        if (kotlin.text.x.h(name, "_START", false)) {
            return new TransactionMarker(StringsKt.O(name, "_START"), tag, MarkerEnd.START);
        }
        if (kotlin.text.x.h(name, "_END", false)) {
            return new TransactionMarker(StringsKt.O(name, "_END"), tag, MarkerEnd.END);
        }
        return null;
    }

    private final String getMarkerName(TransactionMarker transactionMarker) {
        return (transactionMarker.getTag() == null || Intrinsics.areEqual(transactionMarker.getName(), "CREATE_REACT_CONTEXT")) ? transactionMarker.getName() : k0.d.l(transactionMarker.getName(), " ", transactionMarker.getTag());
    }

    private final String getParentSpanName(TransactionMarker marker) {
        String str = this.startupRootEventsTree.get(getMarkerName(marker));
        if (str != null) {
            return str;
        }
        if (!this.wildcardEventNames.contains(marker.getName())) {
            return null;
        }
        String str2 = this.startupRootEventsTree.get(marker.getName());
        if (!CollectionsKt.E(this.wildcardEventNames, str2)) {
            return str2;
        }
        return str2 + " " + marker.getMarkerEnd();
    }

    private final void startNativeModuleInit() {
        startTransaction(TraceTransaction.NativeModuleInit);
    }

    private final void startTransaction(TraceTransaction transaction) {
        if (this.ongoingTransactions.containsKey(transaction)) {
            return;
        }
        String transactionName = transaction.getTransactionName();
        String operation = transaction.getOperation();
        x0 f2 = c4.f();
        f2.getClass();
        f1 j = f2.j(new p6(transactionName, operation), new q6());
        Intrinsics.checkNotNullExpressionValue(j, "startTransaction(...)");
        this.ongoingTransactions.put(transaction, j);
        this.ongoingSpans.put("root", j);
        this.spanStarts.put("root", Long.valueOf(System.currentTimeMillis()));
    }

    private final void stopTransaction(TraceTransaction transaction) {
        f1 f1Var = this.ongoingTransactions.get(transaction);
        if (f1Var != null) {
            f1Var.g();
        }
        this.ongoingTransactions.remove(transaction);
    }

    @Override // com.facebook.react.bridge.ReactMarker.MarkerListener
    public void logMarker(@NotNull ReactMarkerConstants name, String tag, int instanceKey) {
        Intrinsics.checkNotNullParameter(name, "name");
        String name2 = name.name();
        logSpanForTransaction(name2, tag);
        if (Intrinsics.areEqual(name2, "CONTENT_APPEARED")) {
            stop();
        }
    }

    public final synchronized void logSpanForTransaction(@NotNull TransactionMarker marker) {
        PackageProcessTimings packageProcessTimings;
        List<String> modules;
        ISpan iSpan;
        ISpan iSpan2;
        try {
            Intrinsics.checkNotNullParameter(marker, "marker");
            checkAndSetInitSection(marker.getName());
            String markerName = getMarkerName(marker);
            String parentSpanName = getParentSpanName(marker);
            if (marker.getMarkerEnd() == MarkerEnd.START) {
                if (this.startupInitSection == StartupInitSection.NativeModuleSetup && Intrinsics.areEqual(marker.getName(), "NATIVE_MODULE_SETUP") && (iSpan2 = this.lastNativeModuleSetupStart) != null) {
                    iSpan2.g();
                    this.lastNativeModuleSetupStart = null;
                }
                if (Intrinsics.areEqual(marker.getName(), "RUN_JS_BUNDLE") && (iSpan = this.ongoingSpans.get("PRE_RUN_JS_BUNDLE")) != null) {
                    iSpan.g();
                }
                ISpan iSpan3 = Intrinsics.areEqual(marker.getName(), "PROCESS_PACKAGE_MODULE") ? this.lastProcessPackage : this.ongoingSpans.get(parentSpanName);
                if (iSpan3 == null && parentSpanName != null && kotlin.text.x.h(parentSpanName, "~", false)) {
                    ISpan iSpan4 = this.ongoingSpans.get(this.startupRootEventsTree.get(parentSpanName));
                    if (iSpan4 == null) {
                        return;
                    }
                    iSpan3 = iSpan4.l(markerName);
                    this.ongoingSpans.put(parentSpanName, iSpan3);
                    this.spanStarts.put(parentSpanName, Long.valueOf(System.currentTimeMillis()));
                }
                if (iSpan3 == null) {
                    return;
                }
                ISpan l6 = iSpan3.l(markerName);
                Intrinsics.checkNotNullExpressionValue(l6, "startChild(...)");
                this.ongoingSpans.put(markerName, l6);
                this.spanStarts.put(markerName, Long.valueOf(System.currentTimeMillis()));
                if (Intrinsics.areEqual(marker.getName(), "PROCESS_PACKAGE")) {
                    this.lastProcessPackage = l6;
                    PackageProcessTimings packageProcessTimings2 = new PackageProcessTimings();
                    this.currentProcessPackage = packageProcessTimings2;
                    this.processPackageTimings.add(packageProcessTimings2);
                }
                if (Intrinsics.areEqual(marker.getName(), "PROCESS_PACKAGE_MODULE") && (packageProcessTimings = this.currentProcessPackage) != null && (modules = packageProcessTimings.getModules()) != null) {
                    String tag = marker.getTag();
                    if (tag == null) {
                        tag = "";
                    }
                    modules.add(tag);
                }
            } else {
                ISpan iSpan5 = this.ongoingSpans.get(markerName);
                if (iSpan5 != null) {
                    iSpan5.g();
                    this.ongoingSpans.remove(markerName);
                    if (Intrinsics.areEqual(marker.getName(), "PROCESS_PACKAGE")) {
                        PackageProcessTimings packageProcessTimings3 = this.currentProcessPackage;
                        if (packageProcessTimings3 != null) {
                            packageProcessTimings3.setEndTime(System.currentTimeMillis());
                        }
                        this.currentProcessPackage = null;
                    }
                }
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final void start() {
        if (this.stopped) {
            ReactMarker.addListener(this);
            startNativeModuleInit();
            this.stopped = false;
        }
    }

    public final void stop() {
        if (this.stopped) {
            return;
        }
        stopTransaction(TraceTransaction.NativeModuleInit);
        ReactMarker.removeListener(this);
        this.stopped = true;
    }

    public final synchronized void logSpanForTransaction(@NotNull String marker, String tag) {
        Intrinsics.checkNotNullParameter(marker, "marker");
        TransactionMarker marker2 = getMarker(marker, tag);
        if (marker2 == null) {
            return;
        }
        logSpanForTransaction(marker2);
    }
}
