package io.sentry.react;

import android.os.Handler;
import android.os.Looper;
import android.view.Choreographer;
import com.facebook.react.bridge.Promise;
import io.sentry.j4;
import java.util.LinkedHashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class RNSentryTimeToDisplay {
    public static final int ENTRIES_MAX_SIZE = 50;
    private static final Map<String, Double> screenIdToRenderDuration = new LinkedHashMap<String, Double>(51, 0.75f, true) { // from class: io.sentry.react.RNSentryTimeToDisplay.1
        @Override // java.util.LinkedHashMap
        public boolean removeEldestEntry(Map.Entry<String, Double> entry) {
            return size() > 50;
        }
    };
    private static String activeSpanId = null;

    private RNSentryTimeToDisplay() {
    }

    public static void getTimeToDisplay(Promise promise, j4 j4Var) {
        Looper mainLooper = Looper.getMainLooper();
        if (mainLooper == null) {
            promise.reject("GetTimeToDisplay is not able to measure the time to display: Main looper not available.");
        } else {
            new Handler(mainLooper).post(new com.mkuczera.haptic.a(27, j4Var, promise));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void lambda$getTimeToDisplay$0(j4 j4Var, Promise promise, long j) {
        promise.resolve(Double.valueOf(j4Var.now().d() / 1.0E9d));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void lambda$getTimeToDisplay$1(final j4 j4Var, final Promise promise) {
        try {
            Choreographer.getInstance().postFrameCallback(new Choreographer.FrameCallback() { // from class: io.sentry.react.b
                @Override // android.view.Choreographer.FrameCallback
                public final void doFrame(long j) {
                    RNSentryTimeToDisplay.lambda$getTimeToDisplay$0(j4.this, promise, j);
                }
            });
        } catch (Exception e9) {
            promise.reject("Failed to receive the instance of Choreographer", e9);
        }
    }

    public static Double popTimeToDisplayFor(String str) {
        return screenIdToRenderDuration.remove(str);
    }

    public static void putTimeToDisplayFor(String str, Double d6) {
        screenIdToRenderDuration.put(str, d6);
    }

    public static void putTimeToInitialDisplayForActiveSpan(Double d6) {
        if (activeSpanId != null) {
            putTimeToDisplayFor("ttid-navigation-" + activeSpanId, d6);
        }
    }

    public static void setActiveSpanId(String str) {
        activeSpanId = str;
    }
}
