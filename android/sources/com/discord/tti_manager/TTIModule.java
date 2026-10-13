package com.discord.tti_manager;

import a1.k;
import android.content.Context;
import android.content.Intent;
import com.discord.codegen.NativeTTIModuleSpec;
import com.discord.lifecycle.BackgroundStartSignals;
import com.discord.logging.Log;
import com.discord.notifications.api.NotificationData;
import com.discord.notifications.renderer.IncomingCallActivity;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.WritableMap;
import com.google.common.util.concurrent.ListenableFuture;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import java.util.concurrent.Executor;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.text.x;
import nr.f0;
import nr.g0;
import o0.h;
import org.jetbrains.annotations.NotNull;
import ur.d;
import ur.e;
import y2.g;

@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u0000 \u00182\u00020\u0001:\u0001\u0018B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000f\u0010\u0006\u001a\u0004\u0018\u00010\u0007H\u0016¢\u0006\u0002\u0010\bJ\b\u0010\t\u001a\u00020\nH\u0016J\b\u0010\u000b\u001a\u00020\nH\u0016J\b\u0010\f\u001a\u00020\nH\u0016J\b\u0010\r\u001a\u00020\nH\u0016J\b\u0010\u000e\u001a\u00020\u000fH\u0016J\u0010\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0012\u0010\u0016\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013H\u0016J\u0012\u0010\u0017\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013H\u0016R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0019"}, d2 = {"Lcom/discord/tti_manager/TTIModule;", "Lcom/discord/codegen/NativeTTIModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "getMainActivityCreationTime", "", "()Ljava/lang/Double;", "getWasServiceStartedBefore", "", "getWasBroadcastReceiverStartedBefore", "wasInitializeCompleteWhenActivityOpened", "wasLaunchedViaShortcut", "getLaunchScenario", "", "yieldConfig", "", BaseJavaModule.METHOD_TYPE_PROMISE, "Lcom/facebook/react/bridge/Promise;", "ioExecutor", "Ljava/util/concurrent/Executor;", "getJavaBaselineProfileCompilationStatus", "getAndroidArtProfileTelemetry", "Companion", "tti_manager_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class TTIModule extends NativeTTIModuleSpec {

    @NotNull
    private static final String EXTRA_CONTENT_ACTION_TAG = "com.discord.notifications.actions.intents.ContentAction.tag";

    @NotNull
    private static final String EXTRA_CONTENT_ACTION_TYPE = "com.discord.notifications.actions.intents.ContentAction.type";

    @NotNull
    private static final String KEY_SHORTCUT = "discord_shortcut";

    @NotNull
    private static final Set<String> activitiesBeforeMain;
    private static volatile boolean activityInstantiationBegan;
    private static volatile long applicationStartedTimestamp;
    private static volatile boolean broadcastReceiverInstantiationBeforeActivity;
    private static volatile boolean isInitializeComplete;
    private static volatile Long mainActivityCreationTime;
    private static volatile Intent mainActivityIntent;
    private static volatile boolean serviceInstantiationBeforeActivity;
    private static volatile boolean wasInitializeCompleteWhenActivityOpened;
    private static volatile boolean wasLaunchedViaShortcut;

    @NotNull
    private final Executor ioExecutor;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Object mainActivityCreationLock = new Object();

    @NotNull
    private static final List<Function1<Long, Unit>> pendingMainActivityCreationCallbacks = new ArrayList();

    @Metadata(d1 = {"\u0000R\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010#\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u001c\u001a\u00020\u0012J\u0006\u0010\u001d\u001a\u00020\u0012J\u000e\u0010\u001e\u001a\u00020\u00122\u0006\u0010\u001f\u001a\u00020\u0015J\u0006\u0010 \u001a\u00020\u0012J\u000e\u0010!\u001a\u00020\u00122\u0006\u0010\"\u001a\u00020#J\u0006\u0010$\u001a\u00020\u0012J\u0006\u0010%\u001a\u00020\u000bJ\u0006\u0010&\u001a\u00020\u0012J\u0012\u0010'\u001a\u00020\u00122\n\b\u0002\u0010(\u001a\u0004\u0018\u00010\u0017J\u0006\u0010)\u001a\u00020\u0012J\u0006\u0010*\u001a\u00020\u0015J\r\u0010+\u001a\u0004\u0018\u00010\u000b¢\u0006\u0002\u0010,J\u001a\u0010-\u001a\u00020\u00122\u0012\u0010.\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u00120\u0011J\u0006\u0010/\u001a\u00020\u0005J\u0006\u00100\u001a\u00020\u0005J\u0006\u00101\u001a\u00020\u0005J\u0006\u00102\u001a\u00020\u0005J\u0006\u00103\u001a\u000204J\b\u00105\u001a\u00020\u0012H\u0002J\b\u00106\u001a\u00020\u0005H\u0002J\b\u00107\u001a\u00020\u0005H\u0002J\"\u00108\u001a\u0014\u0012\u0006\u0012\u0004\u0018\u00010\u0015\u0012\u0006\u0012\u0004\u0018\u00010\u0015\u0018\u0001092\u0006\u0010(\u001a\u00020\u0017H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\fR\u000e\u0010\r\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000R \u0010\u000f\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u00120\u00110\u0010X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00150\u0014X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0016\u001a\u0004\u0018\u00010\u0017X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u0015X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0015X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u0015X\u0082T¢\u0006\u0002\n\u0000¨\u0006:"}, d2 = {"Lcom/discord/tti_manager/TTIModule$Companion;", "", "<init>", "()V", "activityInstantiationBegan", "", "serviceInstantiationBeforeActivity", "broadcastReceiverInstantiationBeforeActivity", "wasInitializeCompleteWhenActivityOpened", "isInitializeComplete", "mainActivityCreationTime", "", "Ljava/lang/Long;", "applicationStartedTimestamp", "mainActivityCreationLock", "pendingMainActivityCreationCallbacks", "", "Lkotlin/Function1;", "", "activitiesBeforeMain", "", "", "mainActivityIntent", "Landroid/content/Intent;", "wasLaunchedViaShortcut", "KEY_SHORTCUT", "EXTRA_CONTENT_ACTION_TAG", "EXTRA_CONTENT_ACTION_TYPE", "markServiceInstantiation", "markBroadcastReceiverInstantiation", "markActivityBeforeMain", "className", "markApplicationInitializeComplete", "initialize", "context", "Landroid/content/Context;", "markApplicationStarted", "getApplicationStartedTimestamp", "markMainActivityCreation", "setMainActivityIntent", "intent", "clearMainActivityCreation", "getLaunchScenario", "getMainActivityCreationTime", "()Ljava/lang/Long;", "resolveMainActivityCreationTime", "callback", "getWasServiceStartedBeforeActivity", "getWasBroadcastReceiverStartedBeforeActivity", "getWasInitializeCompleteWhenActivityOpened", "getWasLaunchedViaShortcut", "getActivitiesBeforeMainCount", "", "maybeEmitBackgroundStart", "checkNotificationLaunch", "checkIncomingCallActivity", "extractContentActionData", "Lkotlin/Pair;", "tti_manager_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nTTIModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TTIModule.kt\ncom/discord/tti_manager/TTIModule$Companion\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,321:1\n1869#2,2:322\n1761#2,3:324\n1761#2,3:327\n*S KotlinDebug\n*F\n+ 1 TTIModule.kt\ncom/discord/tti_manager/TTIModule$Companion\n*L\n189#1:322,2\n218#1:324,3\n283#1:327,3\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX WARN: Code restructure failed: missing block: B:15:0x0064, code lost:
        
            if (r0 == false) goto L31;
         */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        private final boolean checkIncomingCallActivity() {
            Field declaredField;
            Pair<String, String> extractContentActionData;
            Set set = TTIModule.activitiesBeforeMain;
            if (!(set instanceof Collection) || !set.isEmpty()) {
                Iterator it = set.iterator();
                while (it.hasNext()) {
                    if (StringsKt.D((String) it.next(), "IncomingCallActivity", false)) {
                        break;
                    }
                }
            }
            Intent intent = TTIModule.mainActivityIntent;
            try {
                if (intent != null && (extractContentActionData = TTIModule.INSTANCE.extractContentActionData(intent)) != null) {
                    String str = (String) extractContentActionData.f13474d;
                    String str2 = (String) extractContentActionData.f13475e;
                    boolean E = CollectionsKt.E(c0.g(NotificationData.TYPE_CALL_CONNECT, NotificationData.TYPE_CALL_RING, NotificationData.TYPE_CALL_RING_END), str);
                    boolean z5 = str2 != null && StringsKt.D(str2, NotificationData.TYPE_CALL_RING, false);
                    if (!E) {
                    }
                }
                IncomingCallActivity.Companion companion = IncomingCallActivity.INSTANCE;
                declaredField = IncomingCallActivity.class.getDeclaredField("selfIntent");
                declaredField.setAccessible(true);
            } catch (Exception unused) {
            }
            return declaredField.get(null) != null;
        }

        private final boolean checkNotificationLaunch() {
            Pair<String, String> extractContentActionData;
            Intent intent = TTIModule.mainActivityIntent;
            if (intent != null && (extractContentActionData = TTIModule.INSTANCE.extractContentActionData(intent)) != null) {
                String str = (String) extractContentActionData.f13474d;
                String str2 = (String) extractContentActionData.f13475e;
                if (Intrinsics.areEqual(str, NotificationData.TYPE_MESSAGE_CREATE) || (str2 != null && x.o(str2, NotificationData.TYPE_MESSAGE_CREATE, false))) {
                    return true;
                }
            }
            return false;
        }

        private final Pair<String, String> extractContentActionData(Intent intent) {
            String stringExtra = intent.getStringExtra("com.discord.notifications.actions.intents.ContentAction.tag");
            String stringExtra2 = intent.getStringExtra("com.discord.notifications.actions.intents.ContentAction.type");
            if (stringExtra == null && stringExtra2 == null) {
                return null;
            }
            return new Pair<>(stringExtra2, stringExtra);
        }

        private final void maybeEmitBackgroundStart() {
            if (TTIModule.activityInstantiationBegan || !TTIModule.activitiesBeforeMain.isEmpty()) {
                return;
            }
            BackgroundStartSignals.INSTANCE.emitIfNotEmitted();
        }

        public static /* synthetic */ void setMainActivityIntent$default(Companion companion, Intent intent, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                intent = null;
            }
            companion.setMainActivityIntent(intent);
        }

        public final void clearMainActivityCreation() {
            synchronized (TTIModule.mainActivityCreationLock) {
                TTIModule.mainActivityCreationTime = null;
                Unit unit = Unit.a;
            }
            TTIModule.activitiesBeforeMain.clear();
            TTIModule.mainActivityIntent = null;
            TTIModule.wasLaunchedViaShortcut = false;
            BackgroundStartSignals.INSTANCE.reset();
        }

        public final int getActivitiesBeforeMainCount() {
            return TTIModule.activitiesBeforeMain.size();
        }

        public final long getApplicationStartedTimestamp() {
            return TTIModule.applicationStartedTimestamp;
        }

        @NotNull
        public final String getLaunchScenario() {
            boolean z5;
            boolean checkIncomingCallActivity = checkIncomingCallActivity();
            Set set = TTIModule.activitiesBeforeMain;
            boolean z6 = true;
            if (!(set instanceof Collection) || !set.isEmpty()) {
                Iterator it = set.iterator();
                while (it.hasNext()) {
                    if (x.h((String) it.next(), ".ShareActivity", false)) {
                        z5 = true;
                        break;
                    }
                }
            }
            z5 = false;
            if (!TTIModule.serviceInstantiationBeforeActivity && !TTIModule.broadcastReceiverInstantiationBeforeActivity) {
                z6 = false;
            }
            return checkIncomingCallActivity ? "incoming_call" : TTIModule.wasLaunchedViaShortcut ? "launcher_shortcut" : z5 ? "share_activity" : checkNotificationLaunch() ? "notification" : z6 ? "other_background_task" : !TTIModule.activitiesBeforeMain.isEmpty() ? "other_activity_launch" : "normal";
        }

        public final Long getMainActivityCreationTime() {
            Long l6;
            synchronized (TTIModule.mainActivityCreationLock) {
                l6 = TTIModule.mainActivityCreationTime;
            }
            return l6;
        }

        public final boolean getWasBroadcastReceiverStartedBeforeActivity() {
            return TTIModule.broadcastReceiverInstantiationBeforeActivity;
        }

        public final boolean getWasInitializeCompleteWhenActivityOpened() {
            return TTIModule.wasInitializeCompleteWhenActivityOpened;
        }

        public final boolean getWasLaunchedViaShortcut() {
            return TTIModule.wasLaunchedViaShortcut;
        }

        public final boolean getWasServiceStartedBeforeActivity() {
            return TTIModule.serviceInstantiationBeforeActivity;
        }

        public final void initialize(@NotNull Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            TTISharedPreferences.INSTANCE.init(context);
        }

        public final void markActivityBeforeMain(@NotNull String className) {
            Intrinsics.checkNotNullParameter(className, "className");
            if (TTIModule.activityInstantiationBegan) {
                return;
            }
            TTIModule.activitiesBeforeMain.add(className);
        }

        public final void markApplicationInitializeComplete() {
            TTIModule.isInitializeComplete = true;
        }

        public final void markApplicationStarted() {
            if (TTIModule.applicationStartedTimestamp == 0) {
                TTIModule.applicationStartedTimestamp = System.currentTimeMillis();
            }
        }

        public final void markBroadcastReceiverInstantiation() {
            if (!TTIModule.activityInstantiationBegan) {
                TTIModule.broadcastReceiverInstantiationBeforeActivity = true;
            }
            maybeEmitBackgroundStart();
        }

        public final void markMainActivityCreation() {
            long currentTimeMillis = System.currentTimeMillis();
            Iterable iterable = m0.f13512d;
            TTIModule.activityInstantiationBegan = true;
            synchronized (TTIModule.mainActivityCreationLock) {
                try {
                    Long l6 = TTIModule.mainActivityCreationTime;
                    if (l6 != null) {
                        currentTimeMillis = l6.longValue();
                    } else {
                        TTIModule.wasInitializeCompleteWhenActivityOpened = TTIModule.isInitializeComplete;
                        iterable = CollectionsKt.i0(TTIModule.pendingMainActivityCreationCallbacks);
                        TTIModule.pendingMainActivityCreationCallbacks.clear();
                        TTIModule.mainActivityCreationTime = Long.valueOf(currentTimeMillis);
                    }
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            Iterator it = iterable.iterator();
            while (it.hasNext()) {
                ((Function1) it.next()).invoke(Long.valueOf(currentTimeMillis));
            }
        }

        public final void markServiceInstantiation() {
            if (!TTIModule.activityInstantiationBegan) {
                TTIModule.serviceInstantiationBeforeActivity = true;
            }
            maybeEmitBackgroundStart();
        }

        public final void resolveMainActivityCreationTime(@NotNull Function1<? super Long, Unit> callback) {
            Long l6;
            Intrinsics.checkNotNullParameter(callback, "callback");
            synchronized (TTIModule.mainActivityCreationLock) {
                l6 = TTIModule.mainActivityCreationTime;
                if (l6 == null) {
                    TTIModule.pendingMainActivityCreationCallbacks.add(callback);
                }
            }
            if (l6 != null) {
                callback.invoke(l6);
            }
        }

        public final void setMainActivityIntent(Intent intent) {
            if (intent != null) {
                TTIModule.mainActivityIntent = intent;
                Intent intent2 = TTIModule.mainActivityIntent;
                if (intent2 == null || !intent2.hasExtra(TTIModule.KEY_SHORTCUT)) {
                    return;
                }
                TTIModule.wasLaunchedViaShortcut = true;
            }
        }

        private Companion() {
        }
    }

    static {
        Set<String> synchronizedSet = Collections.synchronizedSet(new LinkedHashSet());
        Intrinsics.checkNotNullExpressionValue(synchronizedSet, "synchronizedSet(...)");
        activitiesBeforeMain = synchronizedSet;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public TTIModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        e eVar = g0.a;
        d dVar = d.f19093i;
        Executor executor = dVar != null ? dVar : null;
        this.ioExecutor = executor == null ? new f0(dVar) : executor;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getAndroidArtProfileTelemetry$lambda$2(TTIModule tTIModule, Promise promise) {
        try {
            ArtProfileTelemetry artProfileTelemetry = ArtProfileTelemetry.INSTANCE;
            ReactApplicationContext reactApplicationContext = tTIModule.getReactApplicationContext();
            Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "getReactApplicationContext(...)");
            WritableMap writableMap = artProfileTelemetry.collect(reactApplicationContext).toWritableMap();
            if (promise != null) {
                promise.resolve(writableMap);
            }
        } catch (Exception e9) {
            if (promise != null) {
                promise.reject("ART_PROFILE_TELEMETRY_ERROR", e9);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getJavaBaselineProfileCompilationStatus$lambda$1(ListenableFuture listenableFuture, Promise promise) {
        String str = "UNKNOWN_STATUS";
        try {
            int i5 = ((g) listenableFuture.get()).a;
            if (i5 == 0) {
                str = "NO_PROFILE_INSTALLED";
            } else if (i5 == 1) {
                str = "COMPILED_WITH_PROFILE";
            } else if (i5 == 2) {
                str = "PROFILE_ENQUEUED_FOR_COMPILATION";
            } else if (i5 == 3) {
                str = "COMPILED_WITH_PROFILE_NON_MATCHING";
            } else if (i5 == 65536) {
                str = "ERROR_PACKAGE_NAME_DOES_NOT_EXIST";
            } else if (i5 == 131072) {
                str = "ERROR_CACHE_FILE_EXISTS_BUT_CANNOT_BE_READ";
            } else if (i5 == 196608) {
                str = "ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE";
            } else if (i5 == 262144) {
                str = "ERROR_UNSUPPORTED_API_VERSION";
            } else if (i5 == 327680) {
                str = "ERROR_NO_PROFILE_EMBEDDED";
            }
        } catch (Exception e9) {
            Log.INSTANCE.w("TTIModule", "Failed to get Java baseline profile compilation status", e9);
        }
        if (promise != null) {
            promise.resolve(str);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void yieldConfig$lambda$0(long j, Promise promise) {
        try {
            Thread.sleep(j);
        } catch (InterruptedException unused) {
        }
        promise.resolve(null);
    }

    @Override // com.discord.codegen.NativeTTIModuleSpec
    public void getAndroidArtProfileTelemetry(Promise promise) {
        this.ioExecutor.execute(new k(18, this, promise));
    }

    @Override // com.discord.codegen.NativeTTIModuleSpec
    public void getJavaBaselineProfileCompilationStatus(Promise promise) {
        h hVar = y2.h.a;
        Intrinsics.checkNotNullExpressionValue(hVar, "getCompilationStatusAsync(...)");
        hVar.a(new k(19, hVar, promise), this.ioExecutor);
    }

    @Override // com.discord.codegen.NativeTTIModuleSpec
    @NotNull
    public String getLaunchScenario() {
        return INSTANCE.getLaunchScenario();
    }

    @Override // com.discord.codegen.NativeTTIModuleSpec
    public Double getMainActivityCreationTime() {
        if (INSTANCE.getMainActivityCreationTime() != null) {
            return Double.valueOf(r0.longValue());
        }
        return null;
    }

    @Override // com.discord.codegen.NativeTTIModuleSpec
    public boolean getWasBroadcastReceiverStartedBefore() {
        return broadcastReceiverInstantiationBeforeActivity;
    }

    @Override // com.discord.codegen.NativeTTIModuleSpec
    public boolean getWasServiceStartedBefore() {
        return serviceInstantiationBeforeActivity;
    }

    @Override // com.discord.codegen.NativeTTIModuleSpec
    public boolean wasInitializeCompleteWhenActivityOpened() {
        return wasInitializeCompleteWhenActivityOpened;
    }

    @Override // com.discord.codegen.NativeTTIModuleSpec
    public boolean wasLaunchedViaShortcut() {
        return wasLaunchedViaShortcut;
    }

    @Override // com.discord.codegen.NativeTTIModuleSpec
    public void yieldConfig(@NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(promise, "promise");
        long yieldDurationMs = TTISharedPreferences.INSTANCE.getYieldDurationMs();
        if (yieldDurationMs > 0) {
            new Thread(new com.discord.media.engine.video.egl_renderer.b(yieldDurationMs, promise)).start();
        } else {
            promise.resolve(null);
        }
    }
}
