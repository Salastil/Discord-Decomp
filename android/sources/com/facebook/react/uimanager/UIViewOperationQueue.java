package com.facebook.react.uimanager;

import android.view.View;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.common.annotations.internal.LegacyArchitectureLogLevel;
import com.facebook.react.common.annotations.internal.LegacyArchitectureLogger;
import com.facebook.react.uimanager.UIImplementation;
import com.facebook.yoga.YogaDirection;
import java.util.HashMap;
import java.util.Map;

@Deprecated(since = "This class is part of Legacy Architecture and will be removed in a future release")
/* loaded from: classes3.dex */
public class UIViewOperationQueue {
    public static final int DEFAULT_MIN_TIME_LEFT_IN_FRAME_FOR_NONBATCHED_OPERATION_MS = 8;

    public interface UIOperation {
        void execute();
    }

    static {
        LegacyArchitectureLogger.assertLegacyArchitecture("UIViewOperationQueue", LegacyArchitectureLogLevel.ERROR);
    }

    public UIViewOperationQueue(ReactApplicationContext reactApplicationContext, int i5) {
    }

    public void addRootView(int i5, View view) {
    }

    public void dispatchViewUpdates(int i5, long j, long j5) {
    }

    public void enqueueClearJSResponder() {
    }

    public void enqueueConfigureLayoutAnimation(ReadableMap readableMap, Callback callback) {
    }

    public void enqueueCreateView(ThemedReactContext themedReactContext, int i5, String str, ReactStylesDiffMap reactStylesDiffMap) {
    }

    @Deprecated
    public void enqueueDispatchCommand(int i5, int i6, ReadableArray readableArray) {
    }

    public void enqueueFindTargetForTouch(int i5, float f2, float f10, Callback callback) {
    }

    public void enqueueLayoutUpdateFinished(ReactShadowNode reactShadowNode, UIImplementation.LayoutUpdateListener layoutUpdateListener) {
    }

    public void enqueueManageChildren(int i5, int[] iArr, ViewAtIndex[] viewAtIndexArr, int[] iArr2) {
    }

    public void enqueueMeasure(int i5, Callback callback) {
    }

    public void enqueueMeasureInWindow(int i5, Callback callback) {
    }

    public void enqueueRemoveRootView(int i5) {
    }

    public void enqueueSendAccessibilityEvent(int i5, int i6) {
    }

    public void enqueueSetChildren(int i5, ReadableArray readableArray) {
    }

    public void enqueueSetJSResponder(int i5, int i6, boolean z5) {
    }

    public void enqueueSetLayoutAnimationEnabled(boolean z5) {
    }

    public void enqueueUIBlock(UIBlock uIBlock) {
    }

    public void enqueueUIOperation(UIOperation uIOperation) {
    }

    public void enqueueUpdateExtraData(int i5, Object obj) {
    }

    public void enqueueUpdateInstanceHandle(int i5, long j) {
    }

    @Deprecated
    public void enqueueUpdateLayout(int i5, int i6, int i10, int i11, int i12, int i13) {
    }

    public void enqueueUpdateProperties(int i5, String str, ReactStylesDiffMap reactStylesDiffMap) {
    }

    public Map<String, Long> getProfiledBatchPerfCounters() {
        return new HashMap();
    }

    public boolean isEmpty() {
        return true;
    }

    public void pauseFrameCallback() {
    }

    public void prependUIBlock(UIBlock uIBlock) {
    }

    public void profileNextBatch() {
    }

    public void resumeFrameCallback() {
    }

    public void enqueueDispatchCommand(int i5, String str, ReadableArray readableArray) {
    }

    public void enqueueUpdateLayout(int i5, int i6, int i10, int i11, int i12, int i13, YogaDirection yogaDirection) {
    }
}
