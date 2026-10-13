package com.discord.analytics.touch;

import android.app.Activity;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.codegen.NativeTouchEventAnalyticsModuleSpec;
import com.discord.crash_reporting.TelemetryRing;
import com.discord.logging.Log;
import com.facebook.react.bridge.ReactApplicationContext;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.b0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u0000 \u00102\u00020\u00012\u00020\u0002:\u0001\u0010B\u000f\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006J\b\u0010\t\u001a\u00020\nH\u0016J\b\u0010\u000b\u001a\u00020\nH\u0016J\u0010\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\u000eH\u0016J\b\u0010\u000f\u001a\u00020\nH\u0016R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/discord/analytics/touch/TouchEventAnalyticsModule;", "Lcom/discord/codegen/NativeTouchEventAnalyticsModuleSpec;", "Lcom/discord/analytics/touch/OnEventRecognizedListener;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "isEnabled", "", "enableTouchLogging", "", "disableTouchLogging", "onEventRecognized", "event", "Lcom/discord/analytics/touch/TouchEventDetails;", "invalidate", "Companion", "analytics_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class TouchEventAnalyticsModule extends NativeTouchEventAnalyticsModuleSpec implements OnEventRecognizedListener {

    @NotNull
    private static final String MAIN_ACTIVITY_CLASS_NAME = "com.discord.main.MainActivity";

    @NotNull
    private static final String TAG = "TouchEventAnalyticsModule";
    private boolean isEnabled;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public TouchEventAnalyticsModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
    }

    @Override // com.discord.codegen.NativeTouchEventAnalyticsModuleSpec
    public void disableTouchLogging() {
        try {
            if (this.isEnabled) {
                TouchLogger touchLogger = TouchLogger.INSTANCE;
                touchLogger.unregisterListener(this);
                touchLogger.disable();
                this.isEnabled = false;
                Log.i$default(Log.INSTANCE, TAG, "Touch logging disabled via TurboModule", (Throwable) null, 4, (Object) null);
            }
        } catch (Exception e9) {
            Log.INSTANCE.e(TAG, "Failed to disable touch logging", e9);
        }
    }

    @Override // com.discord.codegen.NativeTouchEventAnalyticsModuleSpec
    public void enableTouchLogging() {
        try {
            if (this.isEnabled) {
                return;
            }
            Activity currentActivity = getReactApplicationContext().getCurrentActivity();
            if (currentActivity == null) {
                currentActivity = getReactApplicationContext().getCurrentActivity();
            }
            if (currentActivity == null) {
                Log.w$default(Log.INSTANCE, TAG, "Cannot enable touch logging: no current activity", (Throwable) null, 4, (Object) null);
                return;
            }
            String name = currentActivity.getClass().getName();
            if (!Intrinsics.areEqual(name, MAIN_ACTIVITY_CLASS_NAME)) {
                Log.w$default(Log.INSTANCE, TAG, "Enabling touch logging on non-main activity: ".concat(name), (Throwable) null, 4, (Object) null);
            }
            boolean z5 = false;
            try {
                TouchLogger touchLogger = TouchLogger.INSTANCE;
                touchLogger.registerListener(this);
                z5 = true;
                touchLogger.enable(currentActivity);
                this.isEnabled = true;
                Log.i$default(Log.INSTANCE, TAG, "Touch logging enabled via TurboModule", (Throwable) null, 4, (Object) null);
            } catch (Exception e9) {
                if (z5) {
                    try {
                        TouchLogger.INSTANCE.unregisterListener(this);
                    } catch (Exception unused) {
                    }
                }
                throw e9;
            }
        } catch (Exception e10) {
            Log.INSTANCE.e(TAG, "Failed to enable touch logging", e10);
        }
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        try {
            TouchLogger.INSTANCE.unregisterListener(this);
        } catch (Exception unused) {
        }
        try {
            if (this.isEnabled) {
                TouchLogger.INSTANCE.disable();
                this.isEnabled = false;
            }
        } catch (Exception unused2) {
        }
        super.invalidate();
    }

    @Override // com.discord.analytics.touch.OnEventRecognizedListener
    public void onEventRecognized(@NotNull TouchEventDetails event) {
        String truncate;
        String truncate2;
        Intrinsics.checkNotNullParameter(event, "event");
        if (this.isEnabled) {
            try {
                Pair pair = new Pair("touch_action_type", event.getEventType());
                Pair pair2 = new Pair("client_timestamp_ms", Long.valueOf(event.getTimestamp()));
                Pair pair3 = new Pair("screen_x", Integer.valueOf(event.getScreenX()));
                Pair pair4 = new Pair("screen_y", Integer.valueOf(event.getScreenY()));
                Pair pair5 = new Pair("view_x", Integer.valueOf(event.getViewX()));
                Pair pair6 = new Pair("view_y", Integer.valueOf(event.getViewY()));
                Pair pair7 = new Pair("total_memory_mb", Integer.valueOf(event.getTotalMemoryMB()));
                truncate = TouchEventAnalyticsModuleKt.truncate(event.getMemoryBreakdown(), RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
                Pair pair8 = new Pair("memory_breakdown", truncate);
                truncate2 = TouchEventAnalyticsModuleKt.truncate(event.getViewHierarchy(), RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
                Map<String, ? extends Object> g6 = v0.g(pair, pair2, pair3, pair4, pair5, pair6, pair7, pair8, new Pair("view_hierarchy", truncate2), new Pair("gesture", event.getGesture()), new Pair("window_name", event.getWindowName()), new Pair("hit_test_duration_us", event.getHitTestDurationUs()), new Pair("distance", event.getDistance()), new Pair("duration_ms", event.getDurationMs()), new Pair("velocity", event.getVelocity()), new Pair("scale_factor", event.getScaleFactor()));
                TelemetryRing telemetryRing = TelemetryRing.INSTANCE;
                long timestamp = event.getTimestamp();
                String gesture = event.getGesture();
                if (gesture == null) {
                    gesture = event.getEventType();
                }
                telemetryRing.append("touch_event", timestamp, gesture, g6, b0.c("ZOOMED"));
            } catch (Exception e9) {
                Log.INSTANCE.e(TAG, "Failed to append touch event to TelemetryRing", e9);
            }
        }
    }
}
