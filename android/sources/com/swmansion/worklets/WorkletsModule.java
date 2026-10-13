package com.swmansion.worklets;

import com.facebook.jni.HybridData;
import com.facebook.react.bridge.JavaScriptContextHolder;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.queue.MessageQueueThread;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.turbomodule.core.CallInvokerHolderImpl;
import com.facebook.soloader.SoLoader;
import com.swmansion.reanimated.NativeWorkletsModuleSpec;
import java.util.Objects;
import java.util.concurrent.atomic.AtomicBoolean;
import ki.b;
import ya.a;

@ReactModule(name = NativeWorkletsModuleSpec.NAME)
/* loaded from: classes3.dex */
public class WorkletsModule extends NativeWorkletsModuleSpec {
    private final AndroidUIScheduler mAndroidUIScheduler;

    @a
    private HybridData mHybridData;
    private final AtomicBoolean mInvalidated;
    private final WorkletsMessageQueueThread mMessageQueueThread;

    static {
        SoLoader.m("worklets");
    }

    public WorkletsModule(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
        this.mMessageQueueThread = new WorkletsMessageQueueThread();
        this.mInvalidated = new AtomicBoolean(false);
        this.mAndroidUIScheduler = new AndroidUIScheduler(reactApplicationContext);
    }

    private native HybridData initHybrid(long j, String str, MessageQueueThread messageQueueThread, CallInvokerHolderImpl callInvokerHolderImpl, AndroidUIScheduler androidUIScheduler);

    private native void invalidateCpp();

    public AndroidUIScheduler getAndroidUIScheduler() {
        return this.mAndroidUIScheduler;
    }

    public HybridData getHybridData() {
        return this.mHybridData;
    }

    @Override // com.swmansion.reanimated.NativeWorkletsModuleSpec
    @ReactMethod(isBlockingSynchronousMethod = true)
    public boolean installTurboModule(String str) {
        ReactApplicationContext reactApplicationContext = getReactApplicationContext();
        JavaScriptContextHolder javaScriptContextHolder = reactApplicationContext.getJavaScriptContextHolder();
        Objects.requireNonNull(javaScriptContextHolder);
        this.mHybridData = initHybrid(javaScriptContextHolder.getContext(), str, this.mMessageQueueThread, b.y(reactApplicationContext), this.mAndroidUIScheduler);
        return true;
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        if (this.mInvalidated.getAndSet(true)) {
            return;
        }
        HybridData hybridData = this.mHybridData;
        if (hybridData != null && hybridData.isValid()) {
            invalidateCpp();
        }
        AndroidUIScheduler androidUIScheduler = this.mAndroidUIScheduler;
        synchronized (androidUIScheduler.f6814b) {
            androidUIScheduler.f6814b.set(false);
            androidUIScheduler.invalidate();
        }
    }
}
