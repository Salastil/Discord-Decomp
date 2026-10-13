package com.facebook.react.uimanager;

import android.view.View;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.common.annotations.internal.LegacyArchitectureLogLevel;
import com.facebook.react.common.annotations.internal.LegacyArchitectureLogger;
import com.facebook.react.uimanager.events.EventDispatcher;
import java.util.HashMap;
import java.util.Map;

@Deprecated(since = "This class is part of Legacy Architecture and will be removed in a future release")
/* loaded from: classes3.dex */
public class UIImplementation {
    public static final /* synthetic */ int a = 0;

    public interface LayoutUpdateListener {
        void onLayoutUpdated(ReactShadowNode reactShadowNode);
    }

    static {
        LegacyArchitectureLogger.assertLegacyArchitecture("UIImplementation", LegacyArchitectureLogLevel.ERROR);
    }

    public UIImplementation(ReactApplicationContext reactApplicationContext, ViewManagerRegistry viewManagerRegistry, EventDispatcher eventDispatcher, int i5) {
    }

    public void addUIBlock(UIBlock uIBlock) {
    }

    public void calculateRootLayout(ReactShadowNode reactShadowNode) {
    }

    public void clearJSResponder() {
    }

    public void configureNextLayoutAnimation(ReadableMap readableMap, Callback callback) {
    }

    @Deprecated
    public ReactShadowNode createRootShadowNode() {
        return null;
    }

    @Deprecated
    public ReactShadowNode createShadowNode(String str) {
        return null;
    }

    public void createView(int i5, String str, int i6, ReadableMap readableMap) {
    }

    @Deprecated
    public void dispatchViewManagerCommand(int i5, int i6, ReadableArray readableArray) {
    }

    public void dispatchViewUpdates(int i5) {
    }

    public void findSubviewIn(int i5, float f2, float f10, Callback callback) {
    }

    public Map<String, Long> getProfiledBatchPerfCounters() {
        return new HashMap();
    }

    public int getRootViewNum() {
        return 0;
    }

    public UIViewOperationQueue getUIViewOperationQueue() {
        return null;
    }

    public void handleCreateView(ReactShadowNode reactShadowNode, int i5, ReactStylesDiffMap reactStylesDiffMap) {
    }

    public void handleUpdateView(ReactShadowNode reactShadowNode, String str, ReactStylesDiffMap reactStylesDiffMap) {
    }

    public void manageChildren(int i5, ReadableArray readableArray, ReadableArray readableArray2, ReadableArray readableArray3, ReadableArray readableArray4, ReadableArray readableArray5) {
    }

    public void measure(int i5, Callback callback) {
    }

    public void measureInWindow(int i5, Callback callback) {
    }

    public void measureLayout(int i5, int i6, Callback callback, Callback callback2) {
    }

    public void measureLayoutRelativeToParent(int i5, Callback callback, Callback callback2) {
    }

    public void onCatalystInstanceDestroyed() {
    }

    public void onHostDestroy() {
    }

    public void onHostPause() {
    }

    public void onHostResume() {
    }

    public void prependUIBlock(UIBlock uIBlock) {
    }

    public void profileNextBatch() {
    }

    public <T extends View> void registerRootView(T t5, int i5, ThemedReactContext themedReactContext) {
    }

    public void removeLayoutUpdateListener() {
    }

    public void removeRootShadowNode(int i5) {
    }

    public void removeRootView(int i5) {
    }

    public final void removeShadowNode(ReactShadowNode reactShadowNode) {
    }

    public void replaceExistingNonRootView(int i5, int i6) {
    }

    public int resolveRootTagFromReactTag(int i5) {
        return 0;
    }

    @Deprecated
    public final ReactShadowNode resolveShadowNode(int i5) {
        return null;
    }

    @Deprecated
    public final ViewManager resolveViewManager(String str) {
        return null;
    }

    public void sendAccessibilityEvent(int i5, int i6) {
    }

    public void setChildren(int i5, ReadableArray readableArray) {
    }

    public void setJSResponder(int i5, boolean z5) {
    }

    public void setLayoutAnimationEnabledExperimental(boolean z5) {
    }

    public void setLayoutUpdateListener(LayoutUpdateListener layoutUpdateListener) {
    }

    public void setViewLocalData(int i5, Object obj) {
    }

    public void synchronouslyUpdateViewOnUIThread(int i5, ReactStylesDiffMap reactStylesDiffMap) {
    }

    public void updateInsetsPadding(int i5, int i6, int i10, int i11, int i12) {
    }

    public void updateNodeSize(int i5, int i6, int i10) {
    }

    public void updateRootView(int i5, int i6, int i10) {
    }

    public void updateView(int i5, String str, ReadableMap readableMap) {
    }

    public void updateViewHierarchy() {
    }

    @Deprecated
    public void viewIsDescendantOf(int i5, int i6, Callback callback) {
    }

    public UIImplementation(ReactApplicationContext reactApplicationContext, ViewManagerRegistry viewManagerRegistry, UIViewOperationQueue uIViewOperationQueue, EventDispatcher eventDispatcher) {
    }

    public void dispatchViewManagerCommand(int i5, String str, ReadableArray readableArray) {
    }

    public void updateRootView(ReactShadowNode reactShadowNode, int i5, int i6) {
    }
}
