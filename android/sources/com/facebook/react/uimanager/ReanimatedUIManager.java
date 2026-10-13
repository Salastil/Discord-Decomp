package com.facebook.react.uimanager;

import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.module.annotations.ReactModule;
import java.util.List;

@ReactModule(name = UIManagerModule.NAME)
/* loaded from: classes3.dex */
public class ReanimatedUIManager extends UIManagerModule {
    public ReanimatedUIManager(ReactApplicationContext reactApplicationContext, List<ViewManager> list, int i5) {
        super(reactApplicationContext, list, i5);
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule
    public boolean canOverrideExistingModule() {
        return true;
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void clearJSResponder() {
        super.clearJSResponder();
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void configureNextLayoutAnimation(ReadableMap readableMap, Callback callback, Callback callback2) {
        super.configureNextLayoutAnimation(readableMap, callback, callback2);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void createView(int i5, String str, int i6, ReadableMap readableMap) {
        super.createView(i5, str, i6, readableMap);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void dispatchViewManagerCommand(int i5, Dynamic dynamic, ReadableArray readableArray) {
        super.dispatchViewManagerCommand(i5, dynamic, readableArray);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void findSubviewIn(int i5, ReadableArray readableArray, Callback callback) {
        super.findSubviewIn(i5, readableArray, callback);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod(isBlockingSynchronousMethod = true)
    public WritableMap getConstantsForViewManager(String str) {
        return super.getConstantsForViewManager(str);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod(isBlockingSynchronousMethod = true)
    public WritableMap getDefaultEventTypes() {
        return super.getDefaultEventTypes();
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void manageChildren(int i5, ReadableArray readableArray, ReadableArray readableArray2, ReadableArray readableArray3, ReadableArray readableArray4, ReadableArray readableArray5) {
        super.manageChildren(i5, readableArray, readableArray2, readableArray3, readableArray4, readableArray5);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void measure(int i5, Callback callback) {
        super.measure(i5, callback);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void measureInWindow(int i5, Callback callback) {
        super.measureInWindow(i5, callback);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void measureLayout(int i5, int i6, Callback callback, Callback callback2) {
        super.measureLayout(i5, i6, callback, callback2);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void removeRootView(int i5) {
        super.removeRootView(i5);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule, com.facebook.react.bridge.UIManager
    @ReactMethod
    public void sendAccessibilityEvent(int i5, int i6) {
        super.sendAccessibilityEvent(i5, i6);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void setChildren(int i5, ReadableArray readableArray) {
        super.setChildren(i5, readableArray);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void setJSResponder(int i5, boolean z5) {
        super.setJSResponder(i5, z5);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void setLayoutAnimationEnabledExperimental(boolean z5) {
        super.setLayoutAnimationEnabledExperimental(z5);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    public void updateView(int i5, String str, ReadableMap readableMap) {
        super.updateView(i5, str, readableMap);
    }

    @Override // com.facebook.react.uimanager.UIManagerModule
    @ReactMethod
    @Deprecated
    public void viewIsDescendantOf(int i5, int i6, Callback callback) {
        super.viewIsDescendantOf(i5, i6, callback);
    }
}
