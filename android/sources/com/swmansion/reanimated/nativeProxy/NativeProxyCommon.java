package com.swmansion.reanimated.nativeProxy;

import android.os.SystemClock;
import android.provider.Settings;
import android.util.Log;
import com.facebook.jni.HybridData;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableNativeArray;
import com.facebook.react.devsupport.interfaces.DevOptionHandler;
import com.facebook.soloader.SoLoader;
import com.swmansion.gesturehandler.react.RNGestureHandlerModule;
import com.swmansion.reanimated.BuildConfig;
import com.swmansion.reanimated.DevMenuUtils;
import com.swmansion.reanimated.NativeProxy;
import com.swmansion.reanimated.NodesManager;
import com.swmansion.reanimated.ReanimatedModule;
import com.swmansion.reanimated.Utils;
import com.swmansion.reanimated.keyboard.KeyboardAnimationManager;
import com.swmansion.reanimated.keyboard.KeyboardWorkletWrapper;
import com.swmansion.reanimated.layoutReanimation.LayoutAnimations;
import com.swmansion.reanimated.sensor.ReanimatedSensorContainer;
import com.swmansion.reanimated.sensor.ReanimatedSensorType;
import com.swmansion.worklets.WorkletsModule;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import km.j;

/* loaded from: classes3.dex */
public abstract class NativeProxyCommon {
    private final hm.a gestureHandlerStateManager;
    private final KeyboardAnimationManager keyboardAnimationManager;
    protected final WeakReference<ReactApplicationContext> mContext;
    protected NodesManager mNodesManager;
    protected final WorkletsModule mWorkletsModule;
    private final ReanimatedSensorContainer reanimatedSensorContainer;
    private Long firstUptime = Long.valueOf(SystemClock.uptimeMillis());
    private boolean slowAnimationsEnabled = false;
    private final int ANIMATIONS_DRAG_FACTOR = 10;
    protected String cppVersion = null;

    static {
        SoLoader.m("reanimated");
    }

    public NativeProxyCommon(ReactApplicationContext reactApplicationContext) {
        ReanimatedModule reanimatedModule = (ReanimatedModule) reactApplicationContext.getNativeModule(ReanimatedModule.class);
        Objects.requireNonNull(reanimatedModule);
        this.mWorkletsModule = reanimatedModule.getWorkletsModule();
        WeakReference<ReactApplicationContext> weakReference = new WeakReference<>(reactApplicationContext);
        this.mContext = weakReference;
        this.reanimatedSensorContainer = new ReanimatedSensorContainer(weakReference);
        this.keyboardAnimationManager = new KeyboardAnimationManager(weakReference);
        addDevMenuOption();
        try {
            j jVar = RNGestureHandlerModule.Companion;
            if (reactApplicationContext.getNativeModule(RNGestureHandlerModule.class) == null) {
            } else {
                throw new ClassCastException();
            }
        } catch (ClassCastException | ClassNotFoundException unused) {
        }
    }

    private void addDevMenuOption() {
        DevMenuUtils.addDevMenuOption(this.mContext.get(), new DevOptionHandler() { // from class: com.swmansion.reanimated.nativeProxy.a
            @Override // com.facebook.react.devsupport.interfaces.DevOptionHandler
            public final void onOptionSelected() {
                NativeProxyCommon.this.toggleSlowAnimations();
            }
        });
    }

    private Set<String> convertProps(ReadableNativeArray readableNativeArray) {
        HashSet hashSet = new HashSet();
        ArrayList<Object> arrayList = readableNativeArray.toArrayList();
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            hashSet.add((String) arrayList.get(i5));
        }
        return hashSet;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void toggleSlowAnimations() {
        boolean z5 = this.slowAnimationsEnabled;
        this.slowAnimationsEnabled = !z5;
        if (!z5) {
            this.firstUptime = Long.valueOf(SystemClock.uptimeMillis());
        }
        this.mNodesManager.enableSlowAnimations(this.slowAnimationsEnabled, 10);
    }

    public void checkCppVersion() {
        if (this.cppVersion == null) {
            throw new RuntimeException("[Reanimated] Java side failed to resolve C++ code version. See https://docs.swmansion.com/react-native-reanimated/docs/guides/troubleshooting#java-side-failed-to-resolve-c-code-version for more information.");
        }
        String reanimatedJavaVersion = getReanimatedJavaVersion();
        if (!this.cppVersion.equals(reanimatedJavaVersion)) {
            throw new RuntimeException(com.discord.chat.bridge.botuikit.a.j(com.discord.chat.bridge.botuikit.a.m("[Reanimated] Mismatch between Java code version and C++ code version (", reanimatedJavaVersion, " vs. "), this.cppVersion, " respectively). See https://docs.swmansion.com/react-native-reanimated/docs/guides/troubleshooting#mismatch-between-java-code-version-and-c-code-version for more information."));
        }
    }

    @ya.a
    public void configureProps(ReadableNativeArray readableNativeArray, ReadableNativeArray readableNativeArray2) {
        this.mNodesManager.configureProps(convertProps(readableNativeArray), convertProps(readableNativeArray2));
    }

    @ya.a
    public void dispatchCommand(int i5, String str, ReadableArray readableArray) {
        this.mNodesManager.dispatchCommand(i5, str, readableArray);
    }

    @ya.a
    public long getAnimationTimestamp() {
        if (!this.slowAnimationsEnabled) {
            return SystemClock.uptimeMillis();
        }
        return ((SystemClock.uptimeMillis() - this.firstUptime.longValue()) / 10) + this.firstUptime.longValue();
    }

    public abstract HybridData getHybridData();

    @ya.a
    public boolean getIsReducedMotion() {
        String string = Settings.Global.getString(this.mContext.get().getContentResolver(), "transition_animation_scale");
        return (string != null ? Float.parseFloat(string) : 1.0f) == 0.0f;
    }

    @ya.a
    public String getReanimatedJavaVersion() {
        return BuildConfig.REANIMATED_VERSION_JAVA;
    }

    public native void installJSIBindings();

    @ya.a
    public void maybeFlushUIUpdatesQueue() {
        if (this.mNodesManager.isAnimationRunning()) {
            return;
        }
        this.mNodesManager.performOperations(false, false);
    }

    @ya.a
    public float[] measure(int i5) {
        return this.mNodesManager.measure(i5);
    }

    @ya.a
    public String obtainProp(int i5, String str) {
        return this.mNodesManager.obtainProp(i5, str);
    }

    public void prepareLayoutAnimations(LayoutAnimations layoutAnimations) {
        if (Utils.isChromeDebugger) {
            Log.w("[REANIMATED]", "You can not use LayoutAnimation with enabled Chrome Debugger");
            return;
        }
        ReanimatedModule reanimatedModule = (ReanimatedModule) this.mContext.get().getNativeModule(ReanimatedModule.class);
        Objects.requireNonNull(reanimatedModule);
        this.mNodesManager = reanimatedModule.getNodesManager();
        ReanimatedModule reanimatedModule2 = (ReanimatedModule) this.mContext.get().getNativeModule(ReanimatedModule.class);
        Objects.requireNonNull(reanimatedModule2);
        reanimatedModule2.getNodesManager().getAnimationsManager().setNativeMethods(NativeProxy.createNativeMethodsHolder(layoutAnimations));
    }

    @ya.a
    public void registerEventHandler(EventHandler eventHandler) {
        eventHandler.mCustomEventNamesResolver = this.mNodesManager.getEventNameResolver();
        this.mNodesManager.registerEventHandler(eventHandler);
    }

    @ya.a
    public int registerSensor(int i5, int i6, SensorSetter sensorSetter) {
        return this.reanimatedSensorContainer.registerSensor(ReanimatedSensorType.getInstanceById(i5), i6, sensorSetter);
    }

    @ya.a
    public void requestRender(AnimationFrameCallback animationFrameCallback) {
        this.mNodesManager.postOnAnimation(animationFrameCallback);
    }

    @ya.a
    public void scrollTo(int i5, double d6, double d7, boolean z5) {
        this.mNodesManager.scrollTo(i5, d6, d7, z5);
    }

    @ya.a
    public void setCppVersion(String str) {
        this.cppVersion = str;
    }

    @ya.a
    public void setGestureState(int i5, int i6) {
    }

    @ya.a
    public int subscribeForKeyboardEvents(KeyboardWorkletWrapper keyboardWorkletWrapper, boolean z5, boolean z6) {
        return this.keyboardAnimationManager.subscribeForKeyboardUpdates(keyboardWorkletWrapper, z5, z6);
    }

    @ya.a
    public void synchronouslyUpdateUIProps(int i5, ReadableMap readableMap) {
        this.mNodesManager.synchronouslyUpdateUIProps(i5, readableMap);
    }

    @ya.a
    public void unregisterSensor(int i5) {
        this.reanimatedSensorContainer.unregisterSensor(i5);
    }

    @ya.a
    public void unsubscribeFromKeyboardEvents(int i5) {
        this.keyboardAnimationManager.unsubscribeFromKeyboardUpdates(i5);
    }

    @ya.a
    public void updateProps(int i5, Map<String, Object> map) {
        this.mNodesManager.updateProps(i5, map);
    }
}
