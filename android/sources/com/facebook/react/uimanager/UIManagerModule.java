package com.facebook.react.uimanager;

import android.content.ComponentCallbacks2;
import android.content.res.Configuration;
import android.os.Trace;
import android.view.View;
import androidx.annotation.NonNull;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMarker;
import com.facebook.react.bridge.ReactMarkerConstants;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.UIManagerListener;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.common.MapBuilder;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.common.annotations.internal.LegacyArchitectureLogLevel;
import com.facebook.react.common.annotations.internal.LegacyArchitectureLogger;
import com.facebook.react.common.build.ReactBuildConfig;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.common.ViewUtil;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.uimanager.internal.LegacyArchitectureShadowNodeLogger;
import e4.f;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import kotlin.jvm.internal.Intrinsics;

@ReactModule(name = UIManagerModule.NAME)
@Deprecated(since = "This class is part of Legacy Architecture and will be removed in a future release")
/* loaded from: classes3.dex */
public class UIManagerModule extends ReactContextBaseJavaModule implements LifecycleEventListener, UIManager {
    static final /* synthetic */ boolean $assertionsDisabled = false;
    private static final boolean DEBUG;
    public static final String NAME = "UIManager";
    public static final String TAG;
    private final Map<String, Object> mCustomDirectEvents;
    private final MemoryTrimCallback mMemoryTrimCallback;
    private final Map<String, Object> mModuleConstants;
    private final CopyOnWriteArrayList<UIManagerListener> mUIManagerListeners;
    private final ViewManagerRegistry mViewManagerRegistry;

    public interface CustomEventNamesResolver {
        String resolveCustomEventName(String str);
    }

    public static class MemoryTrimCallback implements ComponentCallbacks2 {
        public /* synthetic */ MemoryTrimCallback(int i5) {
            this();
        }

        @Override // android.content.ComponentCallbacks
        public void onConfigurationChanged(Configuration configuration) {
        }

        @Override // android.content.ComponentCallbacks
        public void onLowMemory() {
        }

        @Override // android.content.ComponentCallbacks2
        public void onTrimMemory(int i5) {
        }

        private MemoryTrimCallback() {
        }
    }

    static {
        LegacyArchitectureLogger.assertLegacyArchitecture("UIManagerModule", LegacyArchitectureLogLevel.ERROR);
        TAG = "UIManagerModule";
        l8.a tag = a9.a.f246c;
        Intrinsics.checkNotNullParameter(tag, "tag");
        DEBUG = false;
    }

    public UIManagerModule(ReactApplicationContext reactApplicationContext, ViewManagerResolver viewManagerResolver, int i5) {
        super(reactApplicationContext);
        this.mMemoryTrimCallback = new MemoryTrimCallback(0);
        this.mUIManagerListeners = new CopyOnWriteArrayList<>();
        DisplayMetricsHolder.initDisplayMetricsIfNotInitialized(reactApplicationContext);
        this.mModuleConstants = createConstants(viewManagerResolver);
        this.mCustomDirectEvents = UIManagerModuleConstants.directEventTypeConstants;
        this.mViewManagerRegistry = new ViewManagerRegistry(viewManagerResolver);
        reactApplicationContext.addLifecycleEventListener(this);
    }

    private static Map<String, Object> createConstants(ViewManagerResolver viewManagerResolver) {
        ReactMarker.logMarker(ReactMarkerConstants.CREATE_UI_MANAGER_MODULE_CONSTANTS_START);
        io.sentry.internal.debugmeta.c f2 = f.f("CreateUIManagerConstants");
        f2.D(Boolean.TRUE, "Lazy");
        f2.F();
        try {
            return UIManagerModuleConstantsHelper.internal_createConstants(viewManagerResolver);
        } finally {
            Trace.endSection();
            ReactMarker.logMarker(ReactMarkerConstants.CREATE_UI_MANAGER_MODULE_CONSTANTS_END);
        }
    }

    @Override // com.facebook.react.bridge.UIManager
    public <T extends View> int addRootView(T t5, WritableMap writableMap) {
        Intrinsics.checkNotNullParameter("UIManagerModule.addRootView", "sectionName");
        com.facebook.imagepipeline.nativecode.c.e("UIManagerModule.addRootView");
        int nextRootViewTag = ReactRootViewTagGenerator.getNextRootViewTag();
        Trace.endSection();
        return nextRootViewTag;
    }

    public void addUIBlock(UIBlock uIBlock) {
    }

    @Override // com.facebook.react.bridge.UIManager
    public void addUIManagerEventListener(UIManagerListener uIManagerListener) {
        this.mUIManagerListeners.add(uIManagerListener);
    }

    @ReactMethod
    public void clearJSResponder() {
    }

    @ReactMethod
    public void configureNextLayoutAnimation(ReadableMap readableMap, Callback callback, Callback callback2) {
    }

    @ReactMethod
    public void createView(int i5, String str, int i6, ReadableMap readableMap) {
        if (DEBUG) {
            StringBuilder n6 = com.discord.chat.bridge.botuikit.a.n("(UIManager.createView) tag: ", ", class: ", str, i5, ", props: ");
            n6.append(readableMap);
            String message = n6.toString();
            p8.a.b(ReactConstants.TAG, message);
            l8.a tag = a9.a.f246c;
            Intrinsics.checkNotNullParameter(tag, "tag");
            Intrinsics.checkNotNullParameter(message, "message");
        }
    }

    @Override // com.facebook.react.bridge.UIManager
    @Deprecated
    public void dispatchCommand(int i5, int i6, ReadableArray readableArray) {
    }

    @ReactMethod
    public void dispatchViewManagerCommand(int i5, Dynamic dynamic, ReadableArray readableArray) {
        UIManager uIManager = UIManagerHelper.getUIManager(getReactApplicationContext(), 2);
        if (uIManager == null) {
            return;
        }
        if (dynamic.getType() == ReadableType.Number) {
            uIManager.dispatchCommand(i5, dynamic.asInt(), readableArray);
        } else if (dynamic.getType() == ReadableType.String) {
            uIManager.dispatchCommand(i5, dynamic.asString(), readableArray);
        }
    }

    @ReactMethod
    public void findSubviewIn(int i5, ReadableArray readableArray, Callback callback) {
    }

    @Override // com.facebook.react.bridge.BaseJavaModule
    public Map<String, Object> getConstants() {
        return this.mModuleConstants;
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    public WritableMap getConstantsForViewManager(String str) {
        ViewManager<?, ?> viewManagerIfExists = this.mViewManagerRegistry.getViewManagerIfExists(str);
        if (viewManagerIfExists == null) {
            return null;
        }
        return getConstantsForViewManager(viewManagerIfExists, this.mCustomDirectEvents);
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    public WritableMap getDefaultEventTypes() {
        return Arguments.makeNativeMap((Map<String, ? extends Object>) UIManagerModuleConstantsHelper.getDefaultExportableEventTypes());
    }

    @Deprecated
    public CustomEventNamesResolver getDirectEventNamesResolver() {
        return new CustomEventNamesResolver() { // from class: com.facebook.react.uimanager.UIManagerModule.1
            @Override // com.facebook.react.uimanager.UIManagerModule.CustomEventNamesResolver
            public String resolveCustomEventName(String str) {
                return UIManagerModule.this.resolveCustomDirectEventName(str);
            }
        };
    }

    @Override // com.facebook.react.bridge.UIManager
    public EventDispatcher getEventDispatcher() {
        return null;
    }

    @Override // com.facebook.react.bridge.NativeModule
    @NonNull
    public String getName() {
        return NAME;
    }

    @Override // com.facebook.react.bridge.PerformanceCounter
    public Map<String, Long> getPerformanceCounters() {
        return new HashMap();
    }

    @Deprecated
    public UIImplementation getUIImplementation() {
        return new UIImplementation((ReactApplicationContext) null, (ViewManagerRegistry) null, (EventDispatcher) null, 0);
    }

    @Deprecated
    public ViewManagerRegistry getViewManagerRegistry_DO_NOT_USE() {
        return this.mViewManagerRegistry;
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void initialize() {
        getReactApplicationContext().registerComponentCallbacks(this.mMemoryTrimCallback);
        getReactApplicationContext().registerComponentCallbacks(this.mViewManagerRegistry);
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        super.invalidate();
        ReactApplicationContext reactApplicationContext = getReactApplicationContext();
        reactApplicationContext.unregisterComponentCallbacks(this.mMemoryTrimCallback);
        reactApplicationContext.unregisterComponentCallbacks(this.mViewManagerRegistry);
        ViewManagerPropertyUpdater.clear();
    }

    public void invalidateNodeLayout(int i5) {
    }

    @ReactMethod
    public void manageChildren(int i5, ReadableArray readableArray, ReadableArray readableArray2, ReadableArray readableArray3, ReadableArray readableArray4, ReadableArray readableArray5) {
        if (DEBUG) {
            String message = "(UIManager.manageChildren) tag: " + i5 + ", moveFrom: " + readableArray + ", moveTo: " + readableArray2 + ", addTags: " + readableArray3 + ", atIndices: " + readableArray4 + ", removeFrom: " + readableArray5;
            p8.a.b(ReactConstants.TAG, message);
            l8.a tag = a9.a.f246c;
            Intrinsics.checkNotNullParameter(tag, "tag");
            Intrinsics.checkNotNullParameter(message, "message");
        }
    }

    @Override // com.facebook.react.bridge.UIManager
    public void markActiveTouchForTag(int i5, int i6) {
    }

    @Override // com.facebook.react.bridge.UIManager
    public void markViewAsInTransition(int i5, int i6, boolean z5) {
    }

    @ReactMethod
    public void measure(int i5, Callback callback) {
    }

    @ReactMethod
    public void measureInWindow(int i5, Callback callback) {
    }

    @ReactMethod
    public void measureLayout(int i5, int i6, Callback callback, Callback callback2) {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public void onHostDestroy() {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public void onHostPause() {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public void onHostResume() {
    }

    public void prependUIBlock(UIBlock uIBlock) {
    }

    @Override // com.facebook.react.bridge.PerformanceCounter
    public void profileNextBatch() {
    }

    @Override // com.facebook.react.bridge.UIManager
    public void receiveEvent(int i5, int i6, String str, WritableMap writableMap) {
    }

    @ReactMethod
    public void removeRootView(int i5) {
    }

    @Override // com.facebook.react.bridge.UIManager
    public void removeUIManagerEventListener(UIManagerListener uIManagerListener) {
        this.mUIManagerListeners.remove(uIManagerListener);
    }

    @Override // com.facebook.react.bridge.UIManager
    @Deprecated
    public String resolveCustomDirectEventName(String str) {
        Map map;
        return (str == null || (map = (Map) this.mCustomDirectEvents.get(str)) == null) ? str : (String) map.get("registrationName");
    }

    @Deprecated
    public int resolveRootTagFromReactTag(int i5) {
        if (ViewUtil.isRootTag(i5)) {
            return i5;
        }
        return 0;
    }

    @Override // com.facebook.react.bridge.UIManager, com.facebook.react.fabric.interop.UIBlockViewResolver
    public View resolveView(int i5) {
        UiThreadUtil.assertOnUiThread();
        return null;
    }

    @ReactMethod
    public void sendAccessibilityEvent(int i5, int i6) {
        UIManager uIManager = UIManagerHelper.getUIManager(getReactApplicationContext(), 2);
        if (uIManager != null) {
            uIManager.sendAccessibilityEvent(i5, i6);
        }
    }

    @ReactMethod
    public void setChildren(int i5, ReadableArray readableArray) {
        if (DEBUG) {
            String message = "(UIManager.setChildren) tag: " + i5 + ", children: " + readableArray;
            p8.a.b(ReactConstants.TAG, message);
            l8.a tag = a9.a.f246c;
            Intrinsics.checkNotNullParameter(tag, "tag");
            Intrinsics.checkNotNullParameter(message, "message");
        }
    }

    @ReactMethod
    public void setJSResponder(int i5, boolean z5) {
    }

    @ReactMethod
    public void setLayoutAnimationEnabledExperimental(boolean z5) {
    }

    public void setViewLocalData(int i5, Object obj) {
    }

    @Override // com.facebook.react.bridge.UIManager
    public <T extends View> int startSurface(T t5, String str, WritableMap writableMap, int i5, int i6) {
        throw new UnsupportedOperationException();
    }

    @Override // com.facebook.react.bridge.UIManager
    public void stopSurface(int i5) {
        throw new UnsupportedOperationException();
    }

    @Override // com.facebook.react.bridge.UIManager
    public void sweepActiveTouchForTag(int i5, int i6) {
    }

    @Override // com.facebook.react.bridge.UIManager
    public void synchronouslyUpdateViewOnUIThread(int i5, ReadableMap readableMap) {
    }

    public void updateInsetsPadding(int i5, int i6, int i10, int i11, int i12) {
    }

    public void updateNodeSize(int i5, int i6, int i10) {
    }

    @Override // com.facebook.react.bridge.UIManager
    public void updateRootLayoutSpecs(int i5, int i6, int i10, int i11, int i12) {
    }

    @ReactMethod
    public void updateView(int i5, String str, ReadableMap readableMap) {
        if (DEBUG) {
            StringBuilder n6 = com.discord.chat.bridge.botuikit.a.n("(UIManager.updateView) tag: ", ", class: ", str, i5, ", props: ");
            n6.append(readableMap);
            String message = n6.toString();
            p8.a.b(ReactConstants.TAG, message);
            l8.a tag = a9.a.f246c;
            Intrinsics.checkNotNullParameter(tag, "tag");
            Intrinsics.checkNotNullParameter(message, "message");
        }
    }

    @ReactMethod
    @Deprecated
    public void viewIsDescendantOf(int i5, int i6, Callback callback) {
    }

    @Override // com.facebook.react.bridge.UIManager
    public void dispatchCommand(int i5, String str, ReadableArray readableArray) {
    }

    @Override // com.facebook.react.bridge.UIManager
    public void receiveEvent(int i5, String str, WritableMap writableMap) {
        receiveEvent(-1, i5, str, writableMap);
    }

    public static WritableMap getConstantsForViewManager(ViewManager viewManager, Map<String, Object> map) {
        io.sentry.internal.debugmeta.c f2 = f.f("UIManagerModule.getConstantsForViewManager");
        f2.D(viewManager.getName(), "ViewManager");
        f2.D(Boolean.TRUE, "Lazy");
        f2.F();
        try {
            Map<String, Object> internal_createConstantsForViewManager = UIManagerModuleConstantsHelper.internal_createConstantsForViewManager(viewManager, null, null, null, map);
            if (internal_createConstantsForViewManager != null) {
                return Arguments.makeNativeMap((Map<String, ? extends Object>) internal_createConstantsForViewManager);
            }
            return null;
        } finally {
            Trace.endSection();
        }
    }

    public <T extends View> int addRootView(T t5) {
        return addRootView(t5, null);
    }

    public UIManagerModule(ReactApplicationContext reactApplicationContext, List<ViewManager> list, int i5) {
        super(reactApplicationContext);
        this.mMemoryTrimCallback = new MemoryTrimCallback(0);
        this.mUIManagerListeners = new CopyOnWriteArrayList<>();
        DisplayMetricsHolder.initDisplayMetricsIfNotInitialized(reactApplicationContext);
        HashMap newHashMap = MapBuilder.newHashMap();
        this.mCustomDirectEvents = newHashMap;
        this.mModuleConstants = createConstants(list, null, newHashMap);
        this.mViewManagerRegistry = new ViewManagerRegistry(list);
        if (ReactBuildConfig.DEBUG) {
            for (ViewManager viewManager : list) {
                LegacyArchitectureShadowNodeLogger.assertUnsupportedViewManager(reactApplicationContext, viewManager.getShadowNodeClass(), viewManager.getClass().getSimpleName());
            }
        }
        reactApplicationContext.addLifecycleEventListener(this);
    }

    public static Map<String, Object> createConstants(List<ViewManager> list, Map<String, Object> map, Map<String, Object> map2) {
        ReactMarker.logMarker(ReactMarkerConstants.CREATE_UI_MANAGER_MODULE_CONSTANTS_START);
        io.sentry.internal.debugmeta.c f2 = f.f("CreateUIManagerConstants");
        f2.D(Boolean.FALSE, "Lazy");
        f2.F();
        try {
            Map<String, Object> cachedConstants = UIManagerConstantsCache.getInstance().getCachedConstants();
            Map<String, Object> cachedBubblingEventsTypes = UIManagerConstantsCache.getInstance().getCachedBubblingEventsTypes();
            if (cachedConstants != null) {
                if (map != null) {
                    map.putAll(cachedBubblingEventsTypes);
                }
                return cachedConstants;
            }
            Map<String, Object> internal_createConstants = UIManagerModuleConstantsHelper.internal_createConstants(list, map, map2);
            UIManagerConstantsCache.getInstance().saveConstantsAndBubblingEventsTypes(internal_createConstants, map);
            return internal_createConstants;
        } finally {
            Trace.endSection();
            ReactMarker.logMarker(ReactMarkerConstants.CREATE_UI_MANAGER_MODULE_CONSTANTS_END);
        }
    }
}
