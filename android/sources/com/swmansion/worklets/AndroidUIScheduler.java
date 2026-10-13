package com.swmansion.worklets;

import com.facebook.jni.HybridData;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.UiThreadUtil;
import java.util.concurrent.atomic.AtomicBoolean;
import oh.w;
import ya.a;

/* loaded from: classes3.dex */
public class AndroidUIScheduler {
    public final ReactApplicationContext a;

    /* renamed from: b, reason: collision with root package name */
    public final AtomicBoolean f6814b = new AtomicBoolean(true);

    /* renamed from: c, reason: collision with root package name */
    public final w f6815c = new w(1, this);

    @a
    private final HybridData mHybridData = initHybrid();

    public AndroidUIScheduler(ReactApplicationContext reactApplicationContext) {
        this.a = reactApplicationContext;
    }

    private native HybridData initHybrid();

    @a
    private void scheduleTriggerOnUI() {
        UiThreadUtil.runOnUiThread(new rn.a(this, this.a.getExceptionHandler()));
    }

    public native void invalidate();

    public native void triggerUI();
}
