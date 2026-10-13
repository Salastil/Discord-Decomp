package com.discord.analytics.touch;

import a1.k;
import a3.e;
import android.annotation.NonNull;
import android.annotation.Nullable;
import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.view.ActionMode;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.view.ScaleGestureDetector;
import android.view.SearchEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.ViewTreeObserver;
import android.view.Window;
import android.view.WindowManager;
import android.view.accessibility.AccessibilityEvent;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.logging.Log;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000\u009e\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010%\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010#\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0007\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0004\bÆ\u0002\u0018\u00002\u00020\u0001:\u0001GB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010*\u001a\u00020+2\u0006\u0010,\u001a\u00020\nJ\u000e\u0010-\u001a\u00020+2\u0006\u0010,\u001a\u00020\nJ\u0006\u0010-\u001a\u00020+J\u000e\u0010.\u001a\u00020+2\u0006\u0010/\u001a\u00020!J\u000e\u00100\u001a\u00020+2\u0006\u0010/\u001a\u00020!J\u0006\u00101\u001a\u00020+J\u0006\u00102\u001a\u000203J\u0015\u00104\u001a\u00020+2\u0006\u00105\u001a\u000206H\u0000¢\u0006\u0002\b7J\u0010\u00108\u001a\u00020+2\u0006\u0010,\u001a\u00020\nH\u0002J\b\u00109\u001a\u00020+H\u0002J\u0010\u0010:\u001a\u00020+2\u0006\u0010;\u001a\u00020<H\u0002J\u0010\u0010=\u001a\u00020+2\u0006\u0010,\u001a\u00020\nH\u0002J\u0018\u0010>\u001a\u00020+2\u0006\u0010?\u001a\u00020\u00152\u0006\u0010@\u001a\u00020\u0005H\u0002J\u0015\u0010A\u001a\u00020\u00052\u0006\u0010?\u001a\u00020\u0015H\u0000¢\u0006\u0002\bBJ \u0010C\u001a\u00020+2\u0006\u00105\u001a\u00020D2\u0006\u0010E\u001a\u00020<2\u0006\u0010F\u001a\u00020\u0005H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\"\u0010\b\u001a\n\u0012\u0004\u0012\u00020\n\u0018\u00010\tX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\f\"\u0004\b\r\u0010\u000eR\u0010\u0010\u000f\u001a\u0004\u0018\u00010\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0011\u001a\u0004\u0018\u00010\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00160\u0014X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0017\u001a\u0004\u0018\u00010\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0019\u001a\u0004\u0018\u00010\u001aX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u001b\u001a\u0004\u0018\u00010\u001cX\u0082\u000e¢\u0006\u0002\n\u0000R\u0016\u0010\u001d\u001a\n\u0012\u0004\u0012\u00020\u001e\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u001f\u001a\b\u0012\u0004\u0012\u00020!0 X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\"\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010#\u001a\u00020$X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010%\u001a\u00020$X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010&\u001a\u00020'X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010(\u001a\u00020)X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006H"}, d2 = {"Lcom/discord/analytics/touch/TouchLogger;", "", "<init>", "()V", "TAG", "", "isEnabled", "", "activityRef", "Ljava/lang/ref/WeakReference;", "Landroid/app/Activity;", "getActivityRef$analytics_release", "()Ljava/lang/ref/WeakReference;", "setActivityRef$analytics_release", "(Ljava/lang/ref/WeakReference;)V", "application", "Landroid/app/Application;", "scaleGestureDetector", "Landroid/view/ScaleGestureDetector;", "trackedWindows", "", "Landroid/view/Window;", "Landroid/view/Window$Callback;", "windowFocusListener", "Lcom/discord/analytics/touch/TouchLogger$WindowFocusListener;", "windowFocusChangeListener", "Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;", "globalLayoutListener", "Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;", "monitoredDecorView", "Landroid/view/View;", "eventListeners", "", "Lcom/discord/analytics/touch/OnEventRecognizedListener;", "listenerLock", "initialX", "", "initialY", "startTime", "", "callbackHandler", "Landroid/os/Handler;", "enable", "", "activity", "disable", "registerListener", "listener", "unregisterListener", "clearListeners", "getListenerCount", "", "notifyListeners", "event", "Lcom/discord/analytics/touch/TouchEventDetails;", "notifyListeners$analytics_release", "startWindowMonitoring", "stopWindowMonitoring", "detectPortalsAndBottomSheets", "decorView", "Landroid/view/ViewGroup;", "scanForNewWindows", "trackWindow", "window", StackTraceHelper.NAME_KEY, "identifyWindow", "identifyWindow$analytics_release", "handleTouchEvent", "Landroid/view/MotionEvent;", "rootView", "windowName", "WindowFocusListener", "analytics_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nTouchLogger.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TouchLogger.kt\ncom/discord/analytics/touch/TouchLogger\n+ 2 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n+ 3 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,464:1\n216#2,2:465\n13472#3,2:467\n1869#4,2:469\n*S KotlinDebug\n*F\n+ 1 TouchLogger.kt\ncom/discord/analytics/touch/TouchLogger\n*L\n76#1:465,2\n258#1:467,2\n157#1:469,2\n*E\n"})
/* loaded from: classes.dex */
public final class TouchLogger {

    @NotNull
    private static final String TAG = "TouchLogger";
    private static WeakReference<Activity> activityRef;
    private static Application application;
    private static ViewTreeObserver.OnGlobalLayoutListener globalLayoutListener;
    private static float initialX;
    private static float initialY;
    private static boolean isEnabled;
    private static WeakReference<View> monitoredDecorView;
    private static ScaleGestureDetector scaleGestureDetector;
    private static long startTime;
    private static ViewTreeObserver.OnWindowFocusChangeListener windowFocusChangeListener;
    private static WindowFocusListener windowFocusListener;

    @NotNull
    public static final TouchLogger INSTANCE = new TouchLogger();

    @NotNull
    private static final Map<Window, Window.Callback> trackedWindows = new LinkedHashMap();

    @NotNull
    private static final Set<OnEventRecognizedListener> eventListeners = new LinkedHashSet();

    @NotNull
    private static final Object listenerLock = new Object();

    @NotNull
    private static final Handler callbackHandler = new Handler(Looper.getMainLooper());

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\b\u0002\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016J\u001a\u0010\n\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\b\u0010\u000b\u001a\u0004\u0018\u00010\fH\u0016J\u0010\u0010\r\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016J\u0010\u0010\u000e\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016J\u0010\u0010\u000f\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016J\u0018\u0010\u0010\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\u0011\u001a\u00020\fH\u0016J\u0010\u0010\u0012\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/discord/analytics/touch/TouchLogger$WindowFocusListener;", "Landroid/app/Application$ActivityLifecycleCallbacks;", "touchLogger", "Lcom/discord/analytics/touch/TouchLogger;", "<init>", "(Lcom/discord/analytics/touch/TouchLogger;)V", "onActivityResumed", "", "activity", "Landroid/app/Activity;", "onActivityCreated", "savedInstanceState", "Landroid/os/Bundle;", "onActivityStarted", "onActivityPaused", "onActivityStopped", "onActivitySaveInstanceState", "outState", "onActivityDestroyed", "analytics_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class WindowFocusListener implements Application.ActivityLifecycleCallbacks {

        @NotNull
        private final TouchLogger touchLogger;

        public WindowFocusListener(@NotNull TouchLogger touchLogger) {
            Intrinsics.checkNotNullParameter(touchLogger, "touchLogger");
            this.touchLogger = touchLogger;
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityCreated(@NotNull Activity activity, Bundle savedInstanceState) {
            Intrinsics.checkNotNullParameter(activity, "activity");
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityDestroyed(@NotNull Activity activity) {
            Intrinsics.checkNotNullParameter(activity, "activity");
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityPaused(@NotNull Activity activity) {
            Intrinsics.checkNotNullParameter(activity, "activity");
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityResumed(@NotNull Activity activity) {
            Intrinsics.checkNotNullParameter(activity, "activity");
            this.touchLogger.scanForNewWindows(activity);
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivitySaveInstanceState(@NotNull Activity activity, @NotNull Bundle outState) {
            Intrinsics.checkNotNullParameter(activity, "activity");
            Intrinsics.checkNotNullParameter(outState, "outState");
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityStarted(@NotNull Activity activity) {
            Intrinsics.checkNotNullParameter(activity, "activity");
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityStopped(@NotNull Activity activity) {
            Intrinsics.checkNotNullParameter(activity, "activity");
        }
    }

    private TouchLogger() {
    }

    private final void detectPortalsAndBottomSheets(ViewGroup decorView) {
        detectPortalsAndBottomSheets$scan$default(new Ref.BooleanRef(), new Ref.BooleanRef(), decorView, 0, 8, null);
    }

    private static final void detectPortalsAndBottomSheets$scan(Ref.BooleanRef booleanRef, Ref.BooleanRef booleanRef2, View view, int i5) {
        if (i5 > 20) {
            return;
        }
        String name = view.getClass().getName();
        Intrinsics.checkNotNull(name);
        if (StringsKt.D(name, "Portal", false)) {
            booleanRef.element = true;
        } else if (StringsKt.D(name, "BottomSheet", false) || StringsKt.D(name, "bottomsheet", false)) {
            booleanRef2.element = true;
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            int childCount = viewGroup.getChildCount();
            for (int i6 = 0; i6 < childCount; i6++) {
                View childAt = viewGroup.getChildAt(i6);
                Intrinsics.checkNotNullExpressionValue(childAt, "getChildAt(...)");
                detectPortalsAndBottomSheets$scan(booleanRef, booleanRef2, childAt, i5 + 1);
            }
        }
    }

    public static /* synthetic */ void detectPortalsAndBottomSheets$scan$default(Ref.BooleanRef booleanRef, Ref.BooleanRef booleanRef2, View view, int i5, int i6, Object obj) {
        if ((i6 & 8) != 0) {
            i5 = 0;
        }
        detectPortalsAndBottomSheets$scan(booleanRef, booleanRef2, view, i5);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0110  */
    /* JADX WARN: Removed duplicated region for block: B:30:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void handleTouchEvent(MotionEvent event, ViewGroup rootView, String windowName) {
        TouchEventDetails createTouchEventDetails;
        char c6;
        long j;
        String str;
        String str2;
        Double d6;
        TouchEventDetails createTouchEventDetails2;
        int actionMasked = event.getActionMasked();
        if (actionMasked == 0) {
            long nanoTime = System.nanoTime();
            initialX = event.getRawX();
            initialY = event.getRawY();
            startTime = System.currentTimeMillis();
            float[] fArr = {event.getX(), event.getY()};
            TouchViewInspector touchViewInspector = TouchViewInspector.INSTANCE;
            double nanoTime2 = (System.nanoTime() - nanoTime) / 1000.0d;
            String formatViewHierarchy = touchViewInspector.formatViewHierarchy(touchViewInspector.findTouchTargetView(fArr, rootView));
            MemoryStats memoryStats = TouchLoggerMemory.INSTANCE.getMemoryStats(TAG);
            if (getListenerCount() > 0) {
                createTouchEventDetails = TouchEventListenerKt.createTouchEventDetails("down", System.currentTimeMillis(), (int) event.getRawX(), (int) event.getRawY(), (int) fArr[0], (int) fArr[1], memoryStats, formatViewHierarchy, null, (r35 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : windowName, (r35 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : Double.valueOf(nanoTime2), (r35 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : null, (r35 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : null, (r35 & 8192) != 0 ? null : null, (r35 & 16384) != 0 ? null : null);
                notifyListeners$analytics_release(createTouchEventDetails);
                return;
            }
            return;
        }
        if (actionMasked != 1) {
            if (actionMasked != 3) {
                return;
            }
            startTime = 0L;
            initialX = 0.0f;
            initialY = 0.0f;
            return;
        }
        long nanoTime3 = System.nanoTime();
        if (startTime == 0) {
            return;
        }
        float rawX = event.getRawX() - initialX;
        float rawY = event.getRawY() - initialY;
        float sqrt = (float) Math.sqrt((rawY * rawY) + (rawX * rawX));
        long currentTimeMillis = System.currentTimeMillis() - startTime;
        float[] fArr2 = {event.getX(), event.getY()};
        TouchViewInspector touchViewInspector2 = TouchViewInspector.INSTANCE;
        double nanoTime4 = (System.nanoTime() - nanoTime3) / 1000.0d;
        String formatViewHierarchy2 = touchViewInspector2.formatViewHierarchy(touchViewInspector2.findTouchTargetView(fArr2, rootView));
        MemoryStats memoryStats2 = TouchLoggerMemory.INSTANCE.getMemoryStats(TAG);
        Double d7 = null;
        if (sqrt < 10.0f && currentTimeMillis < 300) {
            str = "tap";
        } else {
            if (sqrt >= 10.0f || currentTimeMillis < 300) {
                if (sqrt > 100.0f) {
                    c6 = 1;
                    j = 0;
                    double degrees = Math.toDegrees(Math.atan2(rawY, rawX));
                    str = (degrees < -45.0d || degrees >= 45.0d) ? (degrees < 45.0d || degrees >= 135.0d) ? (degrees >= 135.0d || degrees < -135.0d) ? "swipe_left" : "swipe_up" : "swipe_down" : "swipe_right";
                } else {
                    c6 = 1;
                    j = 0;
                    str = null;
                }
                if (str == null && x.o(str, "swipe_", false) && currentTimeMillis > j) {
                    str2 = str;
                    d7 = Double.valueOf((sqrt / currentTimeMillis) * 1000.0d);
                } else {
                    str2 = str;
                }
                d6 = d7;
                if (getListenerCount() <= 0) {
                    createTouchEventDetails2 = TouchEventListenerKt.createTouchEventDetails("up", System.currentTimeMillis(), (int) event.getRawX(), (int) event.getRawY(), (int) fArr2[0], (int) fArr2[c6], memoryStats2, formatViewHierarchy2, str2, (r35 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : windowName, (r35 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : Double.valueOf(nanoTime4), (r35 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : Integer.valueOf((int) sqrt), (r35 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : Long.valueOf(currentTimeMillis), (r35 & 8192) != 0 ? null : d6, (r35 & 16384) != 0 ? null : null);
                    notifyListeners$analytics_release(createTouchEventDetails2);
                    return;
                }
                return;
            }
            str = "long_press";
        }
        c6 = 1;
        j = 0;
        if (str == null) {
        }
        str2 = str;
        d6 = d7;
        if (getListenerCount() <= 0) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void notifyListeners$lambda$7(List list, TouchEventDetails touchEventDetails) {
        Iterator it = list.iterator();
        while (it.hasNext()) {
            OnEventRecognizedListener onEventRecognizedListener = (OnEventRecognizedListener) it.next();
            try {
                onEventRecognizedListener.onEventRecognized(touchEventDetails);
            } catch (Exception e9) {
                Log.INSTANCE.e(TAG, h.f("Listener ", onEventRecognizedListener.getClass().getSimpleName(), " threw exception"), e9);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void scanForNewWindows(Activity activity) {
        try {
            Class<?> cls = Class.forName("android.view.WindowManagerGlobal");
            Object invoke = cls.getMethod("getInstance", null).invoke(null, null);
            Object invoke2 = cls.getMethod("getViewRootNames", null).invoke(invoke, null);
            Intrinsics.checkNotNull(invoke2, "null cannot be cast to non-null type kotlin.Array<*>");
            Method method = cls.getMethod("getRootView", String.class);
            for (Object obj : (Object[]) invoke2) {
                try {
                    Object invoke3 = method.invoke(invoke, obj);
                    View view = invoke3 instanceof View ? (View) invoke3 : null;
                    if (view != null) {
                        ViewParent parent = view.getParent();
                        Field declaredField = parent != null ? parent.getClass().getDeclaredField("mWindow") : null;
                        if (declaredField != null) {
                            declaredField.setAccessible(true);
                        }
                        Object obj2 = declaredField != null ? declaredField.get(parent) : null;
                        Window window = obj2 instanceof Window ? (Window) obj2 : null;
                        if (window != null && !trackedWindows.containsKey(window)) {
                            TouchLogger touchLogger = INSTANCE;
                            touchLogger.trackWindow(window, touchLogger.identifyWindow$analytics_release(window));
                        }
                    }
                } catch (Exception unused) {
                }
            }
        } catch (Exception e9) {
            Log.w$default(Log.INSTANCE, TAG, e.k("Could not scan for windows: ", e9.getMessage()), (Throwable) null, 4, (Object) null);
        }
    }

    private final void startWindowMonitoring(Activity activity) {
        Application application2 = activity.getApplication();
        WindowFocusListener windowFocusListener2 = new WindowFocusListener(this);
        windowFocusListener = windowFocusListener2;
        application2.registerActivityLifecycleCallbacks(windowFocusListener2);
        final View decorView = activity.getWindow().getDecorView();
        Intrinsics.checkNotNullExpressionValue(decorView, "getDecorView(...)");
        monitoredDecorView = new WeakReference<>(decorView);
        windowFocusChangeListener = new a();
        decorView.getViewTreeObserver().addOnWindowFocusChangeListener(windowFocusChangeListener);
        if (decorView instanceof ViewGroup) {
            globalLayoutListener = new ViewTreeObserver.OnGlobalLayoutListener() { // from class: com.discord.analytics.touch.b
                @Override // android.view.ViewTreeObserver.OnGlobalLayoutListener
                public final void onGlobalLayout() {
                    TouchLogger.startWindowMonitoring$lambda$9(decorView);
                }
            };
            ((ViewGroup) decorView).getViewTreeObserver().addOnGlobalLayoutListener(globalLayoutListener);
        }
        Log.i$default(Log.INSTANCE, TAG, "📡 Started monitoring", (Throwable) null, 4, (Object) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void startWindowMonitoring$lambda$8(boolean z5) {
        if (z5) {
            WeakReference<Activity> weakReference = activityRef;
            Activity activity = weakReference != null ? weakReference.get() : null;
            if (activity != null) {
                INSTANCE.scanForNewWindows(activity);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void startWindowMonitoring$lambda$9(View view) {
        INSTANCE.detectPortalsAndBottomSheets((ViewGroup) view);
    }

    private final void stopWindowMonitoring() {
        Application application2;
        WindowFocusListener windowFocusListener2 = windowFocusListener;
        if (windowFocusListener2 != null && (application2 = application) != null) {
            application2.unregisterActivityLifecycleCallbacks(windowFocusListener2);
        }
        windowFocusListener = null;
        WeakReference<View> weakReference = monitoredDecorView;
        View view = weakReference != null ? weakReference.get() : null;
        ViewTreeObserver viewTreeObserver = view != null ? view.getViewTreeObserver() : null;
        if (viewTreeObserver != null && viewTreeObserver.isAlive()) {
            ViewTreeObserver.OnWindowFocusChangeListener onWindowFocusChangeListener = windowFocusChangeListener;
            if (onWindowFocusChangeListener != null) {
                viewTreeObserver.removeOnWindowFocusChangeListener(onWindowFocusChangeListener);
            }
            ViewTreeObserver.OnGlobalLayoutListener onGlobalLayoutListener = globalLayoutListener;
            if (onGlobalLayoutListener != null) {
                viewTreeObserver.removeOnGlobalLayoutListener(onGlobalLayoutListener);
            }
        }
        windowFocusChangeListener = null;
        globalLayoutListener = null;
        monitoredDecorView = null;
    }

    private final void trackWindow(final Window window, final String name) {
        Map<Window, Window.Callback> map = trackedWindows;
        if (map.containsKey(window)) {
            return;
        }
        final Window.Callback callback = window.getCallback();
        if (callback == null) {
            Log.w$default(Log.INSTANCE, TAG, h.f("!  Window ", name, " has no callback, skipping"), (Throwable) null, 4, (Object) null);
            return;
        }
        map.put(window, callback);
        window.setCallback(new Window.Callback(callback, window, name) { // from class: com.discord.analytics.touch.TouchLogger$trackWindow$1
            private final /* synthetic */ Window.Callback $$delegate_0;
            final /* synthetic */ String $name;
            final /* synthetic */ Window.Callback $originalCallback;
            final /* synthetic */ Window $window;

            {
                this.$originalCallback = callback;
                this.$window = window;
                this.$name = name;
                this.$$delegate_0 = callback;
            }

            @Override // android.view.Window.Callback
            public boolean dispatchGenericMotionEvent(MotionEvent p02) {
                return this.$$delegate_0.dispatchGenericMotionEvent(p02);
            }

            @Override // android.view.Window.Callback
            public boolean dispatchKeyEvent(KeyEvent p02) {
                return this.$$delegate_0.dispatchKeyEvent(p02);
            }

            @Override // android.view.Window.Callback
            public boolean dispatchKeyShortcutEvent(KeyEvent p02) {
                return this.$$delegate_0.dispatchKeyShortcutEvent(p02);
            }

            @Override // android.view.Window.Callback
            public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent p02) {
                return this.$$delegate_0.dispatchPopulateAccessibilityEvent(p02);
            }

            @Override // android.view.Window.Callback
            public boolean dispatchTouchEvent(MotionEvent event) {
                boolean z5;
                ScaleGestureDetector scaleGestureDetector2;
                if (event != null) {
                    z5 = TouchLogger.isEnabled;
                    if (z5) {
                        scaleGestureDetector2 = TouchLogger.scaleGestureDetector;
                        if (scaleGestureDetector2 != null) {
                            scaleGestureDetector2.onTouchEvent(event);
                        }
                        if (event.getPointerCount() == 1 && event.getActionMasked() != 6) {
                            View decorView = this.$window.getDecorView();
                            Intrinsics.checkNotNullExpressionValue(decorView, "getDecorView(...)");
                            if (decorView instanceof ViewGroup) {
                                TouchLogger.INSTANCE.handleTouchEvent(event, (ViewGroup) decorView, this.$name);
                            }
                        }
                    }
                }
                return this.$originalCallback.dispatchTouchEvent(event);
            }

            @Override // android.view.Window.Callback
            public boolean dispatchTrackballEvent(MotionEvent p02) {
                return this.$$delegate_0.dispatchTrackballEvent(p02);
            }

            @Override // android.view.Window.Callback
            public void onActionModeFinished(ActionMode p02) {
                this.$$delegate_0.onActionModeFinished(p02);
            }

            @Override // android.view.Window.Callback
            public void onActionModeStarted(ActionMode p02) {
                this.$$delegate_0.onActionModeStarted(p02);
            }

            @Override // android.view.Window.Callback
            public void onAttachedToWindow() {
                this.$$delegate_0.onAttachedToWindow();
            }

            @Override // android.view.Window.Callback
            public void onContentChanged() {
                this.$$delegate_0.onContentChanged();
            }

            @Override // android.view.Window.Callback
            public boolean onCreatePanelMenu(int p02, @NonNull Menu p12) {
                Intrinsics.checkNotNullParameter(p12, "p1");
                return this.$$delegate_0.onCreatePanelMenu(p02, p12);
            }

            @Override // android.view.Window.Callback
            @Nullable
            public View onCreatePanelView(int p02) {
                return this.$$delegate_0.onCreatePanelView(p02);
            }

            @Override // android.view.Window.Callback
            public void onDetachedFromWindow() {
                this.$$delegate_0.onDetachedFromWindow();
            }

            @Override // android.view.Window.Callback
            public boolean onMenuItemSelected(int p02, @NonNull MenuItem p12) {
                Intrinsics.checkNotNullParameter(p12, "p1");
                return this.$$delegate_0.onMenuItemSelected(p02, p12);
            }

            @Override // android.view.Window.Callback
            public boolean onMenuOpened(int p02, @NonNull Menu p12) {
                Intrinsics.checkNotNullParameter(p12, "p1");
                return this.$$delegate_0.onMenuOpened(p02, p12);
            }

            @Override // android.view.Window.Callback
            public void onPanelClosed(int p02, @NonNull Menu p12) {
                Intrinsics.checkNotNullParameter(p12, "p1");
                this.$$delegate_0.onPanelClosed(p02, p12);
            }

            @Override // android.view.Window.Callback
            public boolean onPreparePanel(int p02, @Nullable View p12, @NonNull Menu p22) {
                Intrinsics.checkNotNullParameter(p22, "p2");
                return this.$$delegate_0.onPreparePanel(p02, p12, p22);
            }

            @Override // android.view.Window.Callback
            public boolean onSearchRequested() {
                return this.$$delegate_0.onSearchRequested();
            }

            @Override // android.view.Window.Callback
            public void onWindowAttributesChanged(WindowManager.LayoutParams p02) {
                this.$$delegate_0.onWindowAttributesChanged(p02);
            }

            @Override // android.view.Window.Callback
            public void onWindowFocusChanged(boolean p02) {
                this.$$delegate_0.onWindowFocusChanged(p02);
            }

            @Override // android.view.Window.Callback
            @Nullable
            public ActionMode onWindowStartingActionMode(ActionMode.Callback p02) {
                return this.$$delegate_0.onWindowStartingActionMode(p02);
            }

            @Override // android.view.Window.Callback
            public boolean onSearchRequested(SearchEvent p02) {
                return this.$$delegate_0.onSearchRequested(p02);
            }

            @Override // android.view.Window.Callback
            @Nullable
            public ActionMode onWindowStartingActionMode(ActionMode.Callback p02, int p12) {
                return this.$$delegate_0.onWindowStartingActionMode(p02, p12);
            }
        });
        Log.i$default(Log.INSTANCE, TAG, e.k("📱 Now tracking: ", name), (Throwable) null, 4, (Object) null);
    }

    public final void clearListeners() {
        synchronized (listenerLock) {
            Set<OnEventRecognizedListener> set = eventListeners;
            int size = set.size();
            set.clear();
            Log.i$default(Log.INSTANCE, TAG, "✅ Cleared " + size + " listeners", (Throwable) null, 4, (Object) null);
            Unit unit = Unit.a;
        }
    }

    public final void disable(@NotNull Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        disable();
    }

    public final void enable(@NotNull Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        if (isEnabled) {
            return;
        }
        activityRef = new WeakReference<>(activity);
        application = activity.getApplication();
        scaleGestureDetector = new ScaleGestureDetector(activity, new TouchScaleGestureListener());
        Window window = activity.getWindow();
        Intrinsics.checkNotNullExpressionValue(window, "getWindow(...)");
        String simpleName = activity.getClass().getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
        trackWindow(window, simpleName);
        startWindowMonitoring(activity);
        isEnabled = true;
        TouchLoggerMemory touchLoggerMemory = TouchLoggerMemory.INSTANCE;
        MemoryStats memoryStats = touchLoggerMemory.getMemoryStats(TAG);
        Log log = Log.INSTANCE;
        Log.i$default(log, TAG, "✅ Touch logging enabled", (Throwable) null, 4, (Object) null);
        Log.i$default(log, TAG, e.k("   ", touchLoggerMemory.formatMemoryStats(memoryStats)), (Throwable) null, 4, (Object) null);
    }

    public final WeakReference<Activity> getActivityRef$analytics_release() {
        return activityRef;
    }

    public final int getListenerCount() {
        int size;
        synchronized (listenerLock) {
            size = eventListeners.size();
        }
        return size;
    }

    @NotNull
    public final String identifyWindow$analytics_release(@NotNull Window window) {
        Intrinsics.checkNotNullParameter(window, "window");
        String simpleName = window.getClass().getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
        if (!StringsKt.D(simpleName, "PhoneWindow", false)) {
            String simpleName2 = window.getClass().getSimpleName();
            Intrinsics.checkNotNullExpressionValue(simpleName2, "getSimpleName(...)");
            return simpleName2;
        }
        Context context = window.getContext();
        String simpleName3 = context.getClass().getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName3, "getSimpleName(...)");
        if (StringsKt.D(simpleName3, "Dialog", false)) {
            return "Dialog";
        }
        String simpleName4 = context.getClass().getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName4, "getSimpleName(...)");
        if (StringsKt.D(simpleName4, "BottomSheet", false)) {
            return "BottomSheet";
        }
        String simpleName5 = window.getContext().getClass().getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName5, "getSimpleName(...)");
        return simpleName5;
    }

    public final void notifyListeners$analytics_release(@NotNull TouchEventDetails event) {
        List i02;
        Intrinsics.checkNotNullParameter(event, "event");
        synchronized (listenerLock) {
            i02 = CollectionsKt.i0(eventListeners);
        }
        callbackHandler.post(new k(7, i02, event));
    }

    public final void registerListener(@NotNull OnEventRecognizedListener listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        synchronized (listenerLock) {
            Set<OnEventRecognizedListener> set = eventListeners;
            set.add(listener);
            Log.i$default(Log.INSTANCE, TAG, "✅ Registered listener: " + listener.getClass().getSimpleName() + " (total: " + set.size() + ")", (Throwable) null, 4, (Object) null);
            Unit unit = Unit.a;
        }
    }

    public final void setActivityRef$analytics_release(WeakReference<Activity> weakReference) {
        activityRef = weakReference;
    }

    public final void unregisterListener(@NotNull OnEventRecognizedListener listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        synchronized (listenerLock) {
            try {
                Set<OnEventRecognizedListener> set = eventListeners;
                if (set.remove(listener)) {
                    Log.i$default(Log.INSTANCE, TAG, "✅ Unregistered listener: " + listener.getClass().getSimpleName() + " (total: " + set.size() + ")", (Throwable) null, 4, (Object) null);
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void disable() {
        if (isEnabled) {
            stopWindowMonitoring();
            for (Map.Entry<Window, Window.Callback> entry : trackedWindows.entrySet()) {
                Window key = entry.getKey();
                try {
                    key.setCallback(entry.getValue());
                    Log.i$default(Log.INSTANCE, TAG, "   Restored window: " + INSTANCE.identifyWindow$analytics_release(key), (Throwable) null, 4, (Object) null);
                } catch (Exception e9) {
                    Log.INSTANCE.e(TAG, "   Failed to restore window", e9);
                }
            }
            trackedWindows.clear();
            TouchViewInspector.INSTANCE.clearCaches();
            scaleGestureDetector = null;
            activityRef = null;
            application = null;
            isEnabled = false;
            Log.i$default(Log.INSTANCE, TAG, "✅ Touch logging disabled", (Throwable) null, 4, (Object) null);
        }
    }
}
