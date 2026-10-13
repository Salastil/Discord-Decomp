package com.facebook.react;

import android.annotation.SuppressLint;
import android.content.Context;
import android.graphics.BlendMode;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Point;
import android.graphics.Rect;
import android.os.Build;
import android.os.Bundle;
import android.os.Trace;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.view.WindowManager;
import android.widget.FrameLayout;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.c2;
import androidx.core.view.k0;
import androidx.core.view.s0;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.CatalystInstance;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReactMarker;
import com.facebook.react.bridge.ReactMarkerConstants;
import com.facebook.react.bridge.ReactNoCrashSoftException;
import com.facebook.react.bridge.ReactSoftExceptionLogger;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.common.annotations.VisibleForTesting;
import com.facebook.react.config.ReactFeatureFlags;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlags;
import com.facebook.react.modules.appregistry.AppRegistry;
import com.facebook.react.modules.deviceinfo.DeviceInfoModule;
import com.facebook.react.uimanager.BlendModeHelper;
import com.facebook.react.uimanager.DisplayMetricsHolder;
import com.facebook.react.uimanager.IllegalViewOperationException;
import com.facebook.react.uimanager.JSKeyDispatcher;
import com.facebook.react.uimanager.JSPointerDispatcher;
import com.facebook.react.uimanager.JSTouchDispatcher;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ReactClippingProhibitedView;
import com.facebook.react.uimanager.ReactRoot;
import com.facebook.react.uimanager.ReactRootViewTagGenerator;
import com.facebook.react.uimanager.RootView;
import com.facebook.react.uimanager.RootViewUtil;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import java.util.WeakHashMap;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class ReactRootView extends FrameLayout implements RootView, ReactRoot {
    private static final String TAG = "ReactRootView";
    private final ReactAndroidHWInputDeviceHelper mAndroidHWInputDeviceHelper;
    private Bundle mAppProperties;
    private CustomGlobalLayoutListener mCustomGlobalLayoutListener;
    private int mHeightMeasureSpec;
    private boolean mIsAttachedToInstance;
    private JSKeyDispatcher mJSKeyDispatcher;
    private String mJSModuleName;
    private JSPointerDispatcher mJSPointerDispatcher;
    private JSTouchDispatcher mJSTouchDispatcher;
    private int mLastHeight;
    private int mLastOffsetX;
    private int mLastOffsetY;
    private int mLastWidth;
    private ReactInstanceManager mReactInstanceManager;
    private ReactRootViewEventListener mRootViewEventListener;
    private int mRootViewTag;
    private boolean mShouldLogContentAppeared;
    private final AtomicInteger mState;
    private boolean mWasMeasured;
    private int mWidthMeasureSpec;

    public class CustomGlobalLayoutListener implements ViewTreeObserver.OnGlobalLayoutListener {
        private final Rect mVisibleViewArea;
        private boolean mKeyboardIsVisible = false;
        private int mKeyboardHeight = 0;
        private int mDeviceRotation = 0;

        public CustomGlobalLayoutListener() {
            DisplayMetricsHolder.initDisplayMetricsIfNotInitialized(ReactRootView.this.getContext().getApplicationContext());
            this.mVisibleViewArea = new Rect();
        }

        private void checkForDeviceDimensionsChanges() {
            emitUpdateDimensionsEvent();
        }

        private void checkForDeviceOrientationChanges() {
            int rotation = ((WindowManager) ReactRootView.this.getContext().getSystemService("window")).getDefaultDisplay().getRotation();
            if (this.mDeviceRotation == rotation) {
                return;
            }
            this.mDeviceRotation = rotation;
            DisplayMetricsHolder.initDisplayMetrics(ReactRootView.this.getContext().getApplicationContext());
            emitOrientationChanged(rotation);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void checkForKeyboardEvents() {
            ReactRootView.this.getRootView().getWindowVisibleDisplayFrame(this.mVisibleViewArea);
            View rootView = ReactRootView.this.getRootView();
            WeakHashMap weakHashMap = s0.a;
            WindowInsetsCompat a = k0.a(rootView);
            if (a == null) {
                return;
            }
            c2 c2Var = a.a;
            boolean p3 = c2Var.p(8);
            Insets f2 = c2Var.f(519);
            if (!p3) {
                if (this.mKeyboardIsVisible) {
                    this.mKeyboardIsVisible = false;
                    this.mKeyboardHeight = 0;
                    ReactRootView.this.sendEvent("keyboardDidHide", createKeyboardEventPayload(PixelUtil.toDIPFromPixel(this.mVisibleViewArea.bottom + f2.f1514d), 0.0d, PixelUtil.toDIPFromPixel(this.mVisibleViewArea.width()), 0.0d));
                    return;
                }
                return;
            }
            int i5 = c2Var.f(8).f1514d - f2.f1514d;
            if (this.mKeyboardIsVisible && i5 == this.mKeyboardHeight) {
                return;
            }
            this.mKeyboardIsVisible = true;
            this.mKeyboardHeight = i5;
            ViewGroup.LayoutParams layoutParams = ReactRootView.this.getRootView().getLayoutParams();
            io.sentry.config.a.d(layoutParams instanceof WindowManager.LayoutParams);
            ReactRootView.this.sendEvent("keyboardDidShow", createKeyboardEventPayload(PixelUtil.toDIPFromPixel(((WindowManager.LayoutParams) layoutParams).softInputMode == 48 ? this.mVisibleViewArea.bottom - i5 : this.mVisibleViewArea.bottom), PixelUtil.toDIPFromPixel(this.mVisibleViewArea.left), PixelUtil.toDIPFromPixel(this.mVisibleViewArea.width()), PixelUtil.toDIPFromPixel(i5)));
        }

        private WritableMap createKeyboardEventPayload(double d6, double d7, double d8, double d10) {
            WritableMap createMap = Arguments.createMap();
            WritableMap createMap2 = Arguments.createMap();
            createMap2.putDouble("height", d10);
            createMap2.putDouble("screenX", d7);
            createMap2.putDouble("width", d8);
            createMap2.putDouble("screenY", d6);
            createMap.putMap("endCoordinates", createMap2);
            createMap.putString("easing", "keyboard");
            createMap.putDouble("duration", 0.0d);
            return createMap;
        }

        private void emitOrientationChanged(int i5) {
            String str;
            double d6;
            boolean z5 = false;
            if (i5 != 0) {
                if (i5 == 1) {
                    str = "landscape-primary";
                    d6 = -90.0d;
                } else if (i5 == 2) {
                    str = "portrait-secondary";
                    d6 = 180.0d;
                } else {
                    if (i5 != 3) {
                        return;
                    }
                    str = "landscape-secondary";
                    d6 = 90.0d;
                }
                z5 = true;
            } else {
                str = "portrait-primary";
                d6 = 0.0d;
            }
            WritableMap createMap = Arguments.createMap();
            createMap.putString(StackTraceHelper.NAME_KEY, str);
            createMap.putDouble("rotationDegrees", d6);
            createMap.putBoolean("isLandscape", z5);
            ReactRootView.this.sendEvent("namedOrientationDidChange", createMap);
        }

        private void emitUpdateDimensionsEvent() {
            DeviceInfoModule deviceInfoModule;
            ReactContext currentReactContext = ReactRootView.this.getCurrentReactContext();
            if (currentReactContext == null || (deviceInfoModule = (DeviceInfoModule) currentReactContext.getNativeModule(DeviceInfoModule.class)) == null) {
                return;
            }
            deviceInfoModule.emitUpdateDimensionsEvent();
        }

        @Override // android.view.ViewTreeObserver.OnGlobalLayoutListener
        public void onGlobalLayout() {
            if (ReactRootView.this.hasActiveReactContext() && ReactRootView.this.isViewAttachedToReactInstance()) {
                checkForKeyboardEvents();
                checkForDeviceOrientationChanges();
                checkForDeviceDimensionsChanges();
            }
        }
    }

    public interface ReactRootViewEventListener {
        void onAttachedToReactInstance(ReactRootView reactRootView);
    }

    public ReactRootView(Context context) {
        super(context);
        this.mRootViewTag = 0;
        this.mAndroidHWInputDeviceHelper = new ReactAndroidHWInputDeviceHelper();
        this.mWasMeasured = false;
        this.mWidthMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        this.mHeightMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        this.mLastWidth = 0;
        this.mLastHeight = 0;
        this.mLastOffsetX = Integer.MIN_VALUE;
        this.mLastOffsetY = Integer.MIN_VALUE;
        this.mState = new AtomicInteger(0);
        init();
    }

    private void attachToReactInstanceManager() {
        Intrinsics.checkNotNullParameter("attachToReactInstanceManager", "sectionName");
        Trace.beginSection(com.facebook.imagepipeline.nativecode.c.Y("attachToReactInstanceManager"));
        ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_ATTACH_TO_REACT_INSTANCE_MANAGER_START);
        if (getId() != -1) {
            ReactSoftExceptionLogger.logSoftException(TAG, new IllegalViewOperationException("Trying to attach a ReactRootView with an explicit id already set to [" + getId() + "]. React Native uses the id field to track react tags and will overwrite this field. If that is fine, explicitly overwrite the id field to View.NO_ID."));
        }
        try {
            if (!this.mIsAttachedToInstance) {
                this.mIsAttachedToInstance = true;
                ReactInstanceManager reactInstanceManager = this.mReactInstanceManager;
                io.sentry.config.a.f(reactInstanceManager);
                reactInstanceManager.attachRootView(this);
                getViewTreeObserver().addOnGlobalLayoutListener(getCustomGlobalLayoutListener());
            }
        } finally {
            ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_ATTACH_TO_REACT_INSTANCE_MANAGER_END);
            Trace.endSection();
        }
    }

    private CustomGlobalLayoutListener getCustomGlobalLayoutListener() {
        if (this.mCustomGlobalLayoutListener == null) {
            this.mCustomGlobalLayoutListener = new CustomGlobalLayoutListener();
        }
        return this.mCustomGlobalLayoutListener;
    }

    private void init() {
        setRootViewTag(ReactRootViewTagGenerator.getNextRootViewTag());
        setClipChildren(false);
        DisplayMetricsHolder.initDisplayMetrics(getContext().getApplicationContext());
    }

    private boolean isDispatcherReady() {
        if (!hasActiveReactContext() || !isViewAttachedToReactInstance()) {
            p8.a.v(TAG, "Unable to dispatch touch to JS as the catalyst instance has not been attached");
            return false;
        }
        if (this.mJSTouchDispatcher == null) {
            p8.a.v(TAG, "Unable to dispatch touch to JS before the dispatcher is available");
            return false;
        }
        if (!ReactFeatureFlags.dispatchPointerEvents || this.mJSPointerDispatcher != null) {
            return true;
        }
        p8.a.v(TAG, "Unable to dispatch pointer events to JS before the dispatcher is available");
        return false;
    }

    private boolean isFabric() {
        return true;
    }

    private boolean isRootViewTagSet() {
        int i5 = this.mRootViewTag;
        return (i5 == 0 || i5 == -1) ? false : true;
    }

    private void removeOnGlobalLayoutListener() {
        getViewTreeObserver().removeOnGlobalLayoutListener(getCustomGlobalLayoutListener());
    }

    private void setSurfaceConstraintsToScreenSize() {
        DisplayMetrics displayMetrics = getContext().getResources().getDisplayMetrics();
        this.mWidthMeasureSpec = View.MeasureSpec.makeMeasureSpec(displayMetrics.widthPixels, Integer.MIN_VALUE);
        this.mHeightMeasureSpec = View.MeasureSpec.makeMeasureSpec(displayMetrics.heightPixels, Integer.MIN_VALUE);
    }

    private void updateRootLayoutSpecs(boolean z5, int i5, int i6) {
        UIManager uIManager;
        int i10;
        int i11;
        ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_UPDATE_LAYOUT_SPECS_START);
        if (!hasActiveReactInstance()) {
            ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_UPDATE_LAYOUT_SPECS_END);
            p8.a.v(TAG, "Unable to update root layout specs for uninitialized ReactInstanceManager");
            return;
        }
        boolean isFabric = isFabric();
        if (isFabric && !isRootViewTagSet()) {
            ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_UPDATE_LAYOUT_SPECS_END);
            p8.a.g(TAG, "Unable to update root layout specs for ReactRootView: no rootViewTag set yet");
            return;
        }
        ReactContext currentReactContext = getCurrentReactContext();
        if (currentReactContext != null && (uIManager = UIManagerHelper.getUIManager(currentReactContext, 2)) != null) {
            if (isFabric) {
                Point viewportOffset = RootViewUtil.getViewportOffset(this);
                int i12 = viewportOffset.x;
                i11 = viewportOffset.y;
                i10 = i12;
            } else {
                i10 = 0;
                i11 = 0;
            }
            if (z5 || i10 != this.mLastOffsetX || i11 != this.mLastOffsetY) {
                uIManager.updateRootLayoutSpecs(getRootViewTag(), i5, i6, i10, i11);
            }
            this.mLastOffsetX = i10;
            this.mLastOffsetY = i11;
        }
        ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_UPDATE_LAYOUT_SPECS_END);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void dispatchDraw(Canvas canvas) {
        try {
            super.dispatchDraw(canvas);
        } catch (StackOverflowError e9) {
            handleException(e9);
        }
    }

    public void dispatchJSKeyEvent(KeyEvent keyEvent) {
        if (ReactNativeFeatureFlags.enableKeyEvents()) {
            if (!hasActiveReactContext() || !isViewAttachedToReactInstance()) {
                p8.a.v(TAG, "Unable to dispatch key event to JS as the catalyst instance has not been attached");
                return;
            }
            if (this.mJSKeyDispatcher == null) {
                p8.a.v(TAG, "Unable to dispatch key event to JS before the dispatcher is available");
                return;
            }
            ReactContext currentReactContext = getCurrentReactContext();
            if (currentReactContext != null) {
                EventDispatcher eventDispatcher = UIManagerHelper.getEventDispatcher(currentReactContext);
                int surfaceId = UIManagerHelper.getSurfaceId(currentReactContext);
                if (eventDispatcher != null) {
                    this.mJSKeyDispatcher.handleKeyEvent(keyEvent, eventDispatcher, surfaceId);
                }
            }
        }
    }

    public void dispatchJSPointerEvent(MotionEvent motionEvent, boolean z5) {
        if (!hasActiveReactContext() || !isViewAttachedToReactInstance()) {
            p8.a.v(TAG, "Unable to dispatch touch to JS as the catalyst instance has not been attached");
            return;
        }
        if (this.mJSPointerDispatcher == null) {
            if (ReactFeatureFlags.dispatchPointerEvents) {
                p8.a.v(TAG, "Unable to dispatch pointer events to JS before the dispatcher is available");
            }
        } else {
            EventDispatcher eventDispatcher = UIManagerHelper.getEventDispatcher(getCurrentReactContext());
            if (eventDispatcher != null) {
                this.mJSPointerDispatcher.handleMotionEvent(motionEvent, eventDispatcher, z5);
            }
        }
    }

    public void dispatchJSTouchEvent(MotionEvent motionEvent) {
        if (!hasActiveReactContext() || !isViewAttachedToReactInstance()) {
            p8.a.v(TAG, "Unable to dispatch touch to JS as the catalyst instance has not been attached");
            return;
        }
        if (this.mJSTouchDispatcher == null) {
            p8.a.v(TAG, "Unable to dispatch touch to JS before the dispatcher is available");
            return;
        }
        EventDispatcher eventDispatcher = UIManagerHelper.getEventDispatcher(getCurrentReactContext());
        if (eventDispatcher != null) {
            this.mJSTouchDispatcher.handleTouchEvent(motionEvent, eventDispatcher, getCurrentReactContext());
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        if (!hasActiveReactContext() || !isViewAttachedToReactInstance()) {
            p8.a.v(TAG, "Unable to handle key event as the catalyst instance has not been attached");
            return super.dispatchKeyEvent(keyEvent);
        }
        ReactContext currentReactContext = getCurrentReactContext();
        if (currentReactContext == null) {
            return super.dispatchKeyEvent(keyEvent);
        }
        this.mAndroidHWInputDeviceHelper.handleKeyEvent(keyEvent, currentReactContext);
        dispatchJSKeyEvent(keyEvent);
        return super.dispatchKeyEvent(keyEvent);
    }

    @Override // android.view.ViewGroup
    public boolean drawChild(Canvas canvas, View view, long j) {
        Canvas canvas2;
        BlendMode blendMode;
        if (Build.VERSION.SDK_INT < 29 || !BlendModeHelper.needsIsolatedLayer(this)) {
            canvas2 = canvas;
            blendMode = null;
        } else {
            blendMode = com.facebook.imageutils.a.b(view.getTag(R.id.mix_blend_mode));
            if (blendMode != null) {
                Paint paint = new Paint();
                paint.setBlendMode(blendMode);
                canvas2 = canvas;
                canvas2.saveLayer(0.0f, 0.0f, getWidth(), getHeight(), paint);
            } else {
                canvas2 = canvas;
            }
        }
        boolean drawChild = super.drawChild(canvas2, view, j);
        if (blendMode != null) {
            canvas2.restore();
        }
        return drawChild;
    }

    @SuppressLint({"ClassImplementsFinalize"})
    public void finalize() {
        super.finalize();
        io.sentry.config.a.e(!this.mIsAttachedToInstance, "The application this ReactRootView was rendering was not unmounted before the ReactRootView was garbage collected. This usually means that your application is leaking large amounts of memory. To solve this, make sure to call ReactRootView#unmountReactApplication in the onDestroy() of your hosting Activity or in the onDestroyView() of your hosting Fragment.");
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public Bundle getAppProperties() {
        return this.mAppProperties;
    }

    public ReactContext getCurrentReactContext() {
        ReactInstanceManager reactInstanceManager = this.mReactInstanceManager;
        if (reactInstanceManager == null) {
            return null;
        }
        return reactInstanceManager.getCurrentReactContext();
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public int getHeightMeasureSpec() {
        return this.mHeightMeasureSpec;
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public String getJSModuleName() {
        String str = this.mJSModuleName;
        io.sentry.config.a.f(str);
        return str;
    }

    public ReactInstanceManager getReactInstanceManager() {
        return this.mReactInstanceManager;
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public ViewGroup getRootViewGroup() {
        return this;
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public int getRootViewTag() {
        return this.mRootViewTag;
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public AtomicInteger getState() {
        return this.mState;
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public String getSurfaceID() {
        Bundle appProperties = getAppProperties();
        if (appProperties != null) {
            return appProperties.getString("surfaceID");
        }
        return null;
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public int getUIManagerType() {
        return 2;
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public int getWidthMeasureSpec() {
        return this.mWidthMeasureSpec;
    }

    @Override // com.facebook.react.uimanager.RootView
    public void handleException(Throwable th2) {
        if (!hasActiveReactContext()) {
            throw new RuntimeException(th2);
        }
        getCurrentReactContext().handleException(new IllegalViewOperationException(th2.getMessage(), this, th2));
    }

    public boolean hasActiveReactContext() {
        ReactInstanceManager reactInstanceManager = this.mReactInstanceManager;
        return (reactInstanceManager == null || reactInstanceManager.getCurrentReactContext() == null) ? false : true;
    }

    public boolean hasActiveReactInstance() {
        return this.mReactInstanceManager != null;
    }

    public boolean isViewAttachedToReactInstance() {
        return this.mIsAttachedToInstance;
    }

    public void onAttachedToReactInstance() {
        this.mJSTouchDispatcher = new JSTouchDispatcher(this);
        if (ReactFeatureFlags.dispatchPointerEvents) {
            this.mJSPointerDispatcher = new JSPointerDispatcher(this);
        }
        if (ReactNativeFeatureFlags.enableKeyEvents()) {
            this.mJSKeyDispatcher = new JSKeyDispatcher();
        }
        ReactRootViewEventListener reactRootViewEventListener = this.mRootViewEventListener;
        if (reactRootViewEventListener != null) {
            reactRootViewEventListener.onAttachedToReactInstance(this);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (isViewAttachedToReactInstance()) {
            removeOnGlobalLayoutListener();
            getViewTreeObserver().addOnGlobalLayoutListener(getCustomGlobalLayoutListener());
        }
    }

    @Override // com.facebook.react.uimanager.RootView
    public void onChildEndedNativeGesture(View view, MotionEvent motionEvent) {
        EventDispatcher eventDispatcher;
        if (isDispatcherReady() && (eventDispatcher = UIManagerHelper.getEventDispatcher(getCurrentReactContext())) != null) {
            this.mJSTouchDispatcher.onChildEndedNativeGesture(motionEvent, eventDispatcher);
            JSPointerDispatcher jSPointerDispatcher = this.mJSPointerDispatcher;
            if (jSPointerDispatcher != null) {
                jSPointerDispatcher.onChildEndedNativeGesture();
            }
        }
    }

    @Override // com.facebook.react.uimanager.RootView
    public void onChildStartedNativeGesture(View view, MotionEvent motionEvent) {
        ReactContext currentReactContext;
        EventDispatcher eventDispatcher;
        JSPointerDispatcher jSPointerDispatcher;
        if (!isDispatcherReady() || (currentReactContext = getCurrentReactContext()) == null || (eventDispatcher = UIManagerHelper.getEventDispatcher(currentReactContext)) == null) {
            return;
        }
        this.mJSTouchDispatcher.onChildStartedNativeGesture(motionEvent, eventDispatcher, currentReactContext);
        if (view == null || (jSPointerDispatcher = this.mJSPointerDispatcher) == null) {
            return;
        }
        jSPointerDispatcher.onChildStartedNativeGesture(view, motionEvent, eventDispatcher);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        if (isViewAttachedToReactInstance()) {
            removeOnGlobalLayoutListener();
        }
    }

    @Override // android.view.View
    public void onFocusChanged(boolean z5, int i5, Rect rect) {
        if (!hasActiveReactContext() || !isViewAttachedToReactInstance()) {
            p8.a.v(TAG, "Unable to handle focus changed event as the catalyst instance has not been attached");
            super.onFocusChanged(z5, i5, rect);
            return;
        }
        ReactContext currentReactContext = getCurrentReactContext();
        if (currentReactContext != null) {
            this.mAndroidHWInputDeviceHelper.clearFocus(currentReactContext);
            if (this.mJSKeyDispatcher != null && ReactNativeFeatureFlags.enableKeyEvents()) {
                if (z5) {
                    View focusedChild = getFocusedChild();
                    if (focusedChild != null) {
                        this.mJSKeyDispatcher.setFocusedView(focusedChild.getId());
                    }
                } else {
                    this.mJSKeyDispatcher.clearFocus();
                }
            }
        }
        super.onFocusChanged(z5, i5, rect);
    }

    @Override // android.view.View
    public boolean onHoverEvent(MotionEvent motionEvent) {
        dispatchJSPointerEvent(motionEvent, false);
        return super.onHoverEvent(motionEvent);
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptHoverEvent(MotionEvent motionEvent) {
        dispatchJSPointerEvent(motionEvent, true);
        return super.onInterceptHoverEvent(motionEvent);
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        if (shouldDispatchJSTouchEvent(motionEvent)) {
            dispatchJSTouchEvent(motionEvent);
        }
        dispatchJSPointerEvent(motionEvent, true);
        return super.onInterceptTouchEvent(motionEvent);
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        if (this.mWasMeasured && isFabric()) {
            updateRootLayoutSpecs(false, this.mWidthMeasureSpec, this.mHeightMeasureSpec);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0060 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0098 A[Catch: all -> 0x001c, TryCatch #0 {all -> 0x001c, blocks: (B:3:0x000f, B:5:0x0015, B:9:0x0020, B:13:0x002f, B:14:0x005a, B:18:0x0063, B:19:0x008d, B:21:0x0098, B:23:0x009e, B:24:0x00b3, B:30:0x00a4, B:32:0x00a8, B:34:0x00ac, B:36:0x0069, B:38:0x006f, B:41:0x0036, B:43:0x003c), top: B:2:0x000f }] */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00a4 A[Catch: all -> 0x001c, TryCatch #0 {all -> 0x001c, blocks: (B:3:0x000f, B:5:0x0015, B:9:0x0020, B:13:0x002f, B:14:0x005a, B:18:0x0063, B:19:0x008d, B:21:0x0098, B:23:0x009e, B:24:0x00b3, B:30:0x00a4, B:32:0x00a8, B:34:0x00ac, B:36:0x0069, B:38:0x006f, B:41:0x0036, B:43:0x003c), top: B:2:0x000f }] */
    /* JADX WARN: Removed duplicated region for block: B:38:0x006f A[Catch: all -> 0x001c, LOOP:0: B:36:0x0069->B:38:0x006f, LOOP_END, TryCatch #0 {all -> 0x001c, blocks: (B:3:0x000f, B:5:0x0015, B:9:0x0020, B:13:0x002f, B:14:0x005a, B:18:0x0063, B:19:0x008d, B:21:0x0098, B:23:0x009e, B:24:0x00b3, B:30:0x00a4, B:32:0x00a8, B:34:0x00ac, B:36:0x0069, B:38:0x006f, B:41:0x0036, B:43:0x003c), top: B:2:0x000f }] */
    /* JADX WARN: Removed duplicated region for block: B:43:0x003c A[Catch: all -> 0x001c, LOOP:1: B:41:0x0036->B:43:0x003c, LOOP_END, TryCatch #0 {all -> 0x001c, blocks: (B:3:0x000f, B:5:0x0015, B:9:0x0020, B:13:0x002f, B:14:0x005a, B:18:0x0063, B:19:0x008d, B:21:0x0098, B:23:0x009e, B:24:0x00b3, B:30:0x00a4, B:32:0x00a8, B:34:0x00ac, B:36:0x0069, B:38:0x006f, B:41:0x0036, B:43:0x003c), top: B:2:0x000f }] */
    @Override // android.widget.FrameLayout, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onMeasure(int i5, int i6) {
        boolean z5;
        int mode;
        int i10;
        int i11;
        int mode2;
        int i12;
        Intrinsics.checkNotNullParameter("ReactRootView.onMeasure", "sectionName");
        com.facebook.imagepipeline.nativecode.c.e("ReactRootView.onMeasure");
        ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_ON_MEASURE_START);
        try {
            if (i5 == this.mWidthMeasureSpec && i6 == this.mHeightMeasureSpec) {
                z5 = false;
                this.mWidthMeasureSpec = i5;
                this.mHeightMeasureSpec = i6;
                mode = View.MeasureSpec.getMode(i5);
                if (mode != Integer.MIN_VALUE && mode != 0) {
                    i10 = View.MeasureSpec.getSize(i5);
                    mode2 = View.MeasureSpec.getMode(i6);
                    if (mode2 != Integer.MIN_VALUE && mode2 != 0) {
                        i12 = View.MeasureSpec.getSize(i6);
                        setMeasuredDimension(i10, i12);
                        this.mWasMeasured = true;
                        if (!hasActiveReactInstance() && !isViewAttachedToReactInstance()) {
                            attachToReactInstanceManager();
                        } else if (!z5 || this.mLastWidth != i10 || this.mLastHeight != i12) {
                            updateRootLayoutSpecs(true, this.mWidthMeasureSpec, this.mHeightMeasureSpec);
                        }
                        this.mLastWidth = i10;
                        this.mLastHeight = i12;
                        ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_ON_MEASURE_END);
                        Trace.endSection();
                    }
                    i12 = 0;
                    for (int i13 = 0; i13 < getChildCount(); i13++) {
                        View childAt = getChildAt(i13);
                        i12 = Math.max(i12, childAt.getTop() + childAt.getMeasuredHeight() + childAt.getPaddingTop() + childAt.getPaddingBottom());
                    }
                    setMeasuredDimension(i10, i12);
                    this.mWasMeasured = true;
                    if (!hasActiveReactInstance()) {
                    }
                    if (!z5) {
                    }
                    updateRootLayoutSpecs(true, this.mWidthMeasureSpec, this.mHeightMeasureSpec);
                    this.mLastWidth = i10;
                    this.mLastHeight = i12;
                    ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_ON_MEASURE_END);
                    Trace.endSection();
                }
                i10 = 0;
                for (i11 = 0; i11 < getChildCount(); i11++) {
                    View childAt2 = getChildAt(i11);
                    i10 = Math.max(i10, childAt2.getLeft() + childAt2.getMeasuredWidth() + childAt2.getPaddingLeft() + childAt2.getPaddingRight());
                }
                mode2 = View.MeasureSpec.getMode(i6);
                if (mode2 != Integer.MIN_VALUE) {
                    i12 = View.MeasureSpec.getSize(i6);
                    setMeasuredDimension(i10, i12);
                    this.mWasMeasured = true;
                    if (!hasActiveReactInstance()) {
                    }
                    if (!z5) {
                    }
                    updateRootLayoutSpecs(true, this.mWidthMeasureSpec, this.mHeightMeasureSpec);
                    this.mLastWidth = i10;
                    this.mLastHeight = i12;
                    ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_ON_MEASURE_END);
                    Trace.endSection();
                }
                i12 = 0;
                while (i13 < getChildCount()) {
                }
                setMeasuredDimension(i10, i12);
                this.mWasMeasured = true;
                if (!hasActiveReactInstance()) {
                }
                if (!z5) {
                }
                updateRootLayoutSpecs(true, this.mWidthMeasureSpec, this.mHeightMeasureSpec);
                this.mLastWidth = i10;
                this.mLastHeight = i12;
                ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_ON_MEASURE_END);
                Trace.endSection();
            }
            z5 = true;
            this.mWidthMeasureSpec = i5;
            this.mHeightMeasureSpec = i6;
            mode = View.MeasureSpec.getMode(i5);
            if (mode != Integer.MIN_VALUE) {
                i10 = View.MeasureSpec.getSize(i5);
                mode2 = View.MeasureSpec.getMode(i6);
                if (mode2 != Integer.MIN_VALUE) {
                }
                i12 = 0;
                while (i13 < getChildCount()) {
                }
                setMeasuredDimension(i10, i12);
                this.mWasMeasured = true;
                if (!hasActiveReactInstance()) {
                }
                if (!z5) {
                }
                updateRootLayoutSpecs(true, this.mWidthMeasureSpec, this.mHeightMeasureSpec);
                this.mLastWidth = i10;
                this.mLastHeight = i12;
                ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_ON_MEASURE_END);
                Trace.endSection();
            }
            i10 = 0;
            while (i11 < getChildCount()) {
            }
            mode2 = View.MeasureSpec.getMode(i6);
            if (mode2 != Integer.MIN_VALUE) {
            }
            i12 = 0;
            while (i13 < getChildCount()) {
            }
            setMeasuredDimension(i10, i12);
            this.mWasMeasured = true;
            if (!hasActiveReactInstance()) {
            }
            if (!z5) {
            }
            updateRootLayoutSpecs(true, this.mWidthMeasureSpec, this.mHeightMeasureSpec);
            this.mLastWidth = i10;
            this.mLastHeight = i12;
            ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_ON_MEASURE_END);
            Trace.endSection();
        } catch (Throwable th2) {
            ReactMarker.logMarker(ReactMarkerConstants.ROOT_VIEW_ON_MEASURE_END);
            Trace.endSection();
            throw th2;
        }
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public void onStage(int i5) {
        if (i5 != 101) {
            return;
        }
        onAttachedToReactInstance();
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if (shouldDispatchJSTouchEvent(motionEvent)) {
            dispatchJSTouchEvent(motionEvent);
        }
        dispatchJSPointerEvent(motionEvent, false);
        super.onTouchEvent(motionEvent);
        return true;
    }

    @Override // android.view.ViewGroup
    public void onViewAdded(final View view) {
        super.onViewAdded(view);
        if (view instanceof ReactClippingProhibitedView) {
            UiThreadUtil.runOnUiThread(new Runnable(this) { // from class: com.facebook.react.ReactRootView.1
                @Override // java.lang.Runnable
                public void run() {
                    if (view.isShown()) {
                        return;
                    }
                    ReactSoftExceptionLogger.logSoftException(ReactRootView.TAG, new ReactNoCrashSoftException("A view was illegally added as a child of a ReactRootView. This View should not be a direct child of a ReactRootView, because it is not visible and will never be reachable. Child: " + view.getClass().getCanonicalName().toString() + " child ID: " + view.getId()));
                }
            });
        }
        if (this.mShouldLogContentAppeared) {
            this.mShouldLogContentAppeared = false;
            ReactMarker.logMarker(ReactMarkerConstants.CONTENT_APPEARED, getJSModuleName(), this.mRootViewTag);
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestChildFocus(View view, View view2) {
        if (!hasActiveReactContext() || !isViewAttachedToReactInstance()) {
            p8.a.v(TAG, "Unable to handle child focus changed event as the catalyst instance has not been attached");
            super.requestChildFocus(view, view2);
            return;
        }
        ReactContext currentReactContext = getCurrentReactContext();
        if (currentReactContext != null) {
            this.mAndroidHWInputDeviceHelper.onFocusChanged(view2, currentReactContext);
            if (this.mJSKeyDispatcher != null && ReactNativeFeatureFlags.enableKeyEvents()) {
                this.mJSKeyDispatcher.setFocusedView(view2.getId());
            }
        }
        super.requestChildFocus(view, view2);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestDisallowInterceptTouchEvent(boolean z5) {
        if (getParent() != null) {
            getParent().requestDisallowInterceptTouchEvent(z5);
        }
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public void runApplication() {
        Intrinsics.checkNotNullParameter("ReactRootView.runApplication", "sectionName");
        com.facebook.imagepipeline.nativecode.c.e("ReactRootView.runApplication");
        try {
            if (hasActiveReactInstance() && isViewAttachedToReactInstance()) {
                ReactContext currentReactContext = getCurrentReactContext();
                if (currentReactContext == null) {
                    Trace.endSection();
                    return;
                }
                CatalystInstance catalystInstance = currentReactContext.getCatalystInstance();
                String jSModuleName = getJSModuleName();
                if (this.mWasMeasured) {
                    updateRootLayoutSpecs(true, this.mWidthMeasureSpec, this.mHeightMeasureSpec);
                }
                WritableNativeMap writableNativeMap = new WritableNativeMap();
                writableNativeMap.putDouble("rootTag", getRootViewTag());
                Bundle appProperties = getAppProperties();
                if (appProperties != null) {
                    writableNativeMap.putMap("initialProps", Arguments.fromBundle(appProperties));
                }
                this.mShouldLogContentAppeared = true;
                ((AppRegistry) catalystInstance.getJSModule(AppRegistry.class)).runApplication(jSModuleName, writableNativeMap);
                Trace.endSection();
            }
        } finally {
            Trace.endSection();
        }
    }

    public void sendEvent(String str, WritableMap writableMap) {
        if (hasActiveReactInstance()) {
            getCurrentReactContext().emitDeviceEvent(str, writableMap);
        }
    }

    public void setAppProperties(Bundle bundle) {
        UiThreadUtil.assertOnUiThread();
        this.mAppProperties = bundle;
        if (isRootViewTagSet()) {
            runApplication();
        }
    }

    public void setEventListener(ReactRootViewEventListener reactRootViewEventListener) {
        this.mRootViewEventListener = reactRootViewEventListener;
    }

    @Deprecated
    public void setIsFabric(boolean z5) {
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public void setRootViewTag(int i5) {
        this.mRootViewTag = i5;
    }

    @Override // com.facebook.react.uimanager.ReactRoot
    public void setShouldLogContentAppeared(boolean z5) {
        this.mShouldLogContentAppeared = z5;
    }

    public boolean shouldDispatchJSTouchEvent(MotionEvent motionEvent) {
        return true;
    }

    @VisibleForTesting
    public void simulateAttachForTesting() {
        this.mIsAttachedToInstance = true;
        this.mJSTouchDispatcher = new JSTouchDispatcher(this);
        if (ReactFeatureFlags.dispatchPointerEvents) {
            this.mJSPointerDispatcher = new JSPointerDispatcher(this);
        }
        if (ReactNativeFeatureFlags.enableKeyEvents()) {
            this.mJSKeyDispatcher = new JSKeyDispatcher();
        }
    }

    @VisibleForTesting
    public void simulateCheckForKeyboardForTesting() {
        getCustomGlobalLayoutListener().checkForKeyboardEvents();
    }

    public void startReactApplication(ReactInstanceManager reactInstanceManager, String str, Bundle bundle) {
        Intrinsics.checkNotNullParameter("startReactApplication", "sectionName");
        com.facebook.imagepipeline.nativecode.c.e("startReactApplication");
        try {
            UiThreadUtil.assertOnUiThread();
            io.sentry.config.a.e(this.mReactInstanceManager == null, "This root view has already been attached to a catalyst instance manager");
            this.mReactInstanceManager = reactInstanceManager;
            this.mJSModuleName = str;
            this.mAppProperties = bundle;
            reactInstanceManager.createReactContextInBackground();
            if (ReactNativeFeatureFlags.enableEagerRootViewAttachment()) {
                if (!this.mWasMeasured) {
                    setSurfaceConstraintsToScreenSize();
                }
                attachToReactInstanceManager();
            }
            Trace.endSection();
        } catch (Throwable th2) {
            Trace.endSection();
            throw th2;
        }
    }

    public void unmountReactApplication() {
        UiThreadUtil.assertOnUiThread();
        ReactInstanceManager reactInstanceManager = this.mReactInstanceManager;
        if (reactInstanceManager != null && this.mIsAttachedToInstance) {
            reactInstanceManager.detachRootView(this);
            this.mIsAttachedToInstance = false;
        }
        this.mReactInstanceManager = null;
        this.mShouldLogContentAppeared = false;
    }

    public ReactRootView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mRootViewTag = 0;
        this.mAndroidHWInputDeviceHelper = new ReactAndroidHWInputDeviceHelper();
        this.mWasMeasured = false;
        this.mWidthMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        this.mHeightMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        this.mLastWidth = 0;
        this.mLastHeight = 0;
        this.mLastOffsetX = Integer.MIN_VALUE;
        this.mLastOffsetY = Integer.MIN_VALUE;
        this.mState = new AtomicInteger(0);
        init();
    }

    public void startReactApplication(ReactInstanceManager reactInstanceManager, String str) {
        startReactApplication(reactInstanceManager, str, null);
    }

    public ReactRootView(Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        this.mRootViewTag = 0;
        this.mAndroidHWInputDeviceHelper = new ReactAndroidHWInputDeviceHelper();
        this.mWasMeasured = false;
        this.mWidthMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        this.mHeightMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        this.mLastWidth = 0;
        this.mLastHeight = 0;
        this.mLastOffsetX = Integer.MIN_VALUE;
        this.mLastOffsetY = Integer.MIN_VALUE;
        this.mState = new AtomicInteger(0);
        init();
    }
}
