package com.facebook.imageutils;

import android.graphics.BlendMode;
import com.facebook.react.DebugCorePackage;
import com.facebook.react.ReactNativeHost;
import com.facebook.react.bridge.NativeMap;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.UIManagerProvider;
import com.facebook.react.runtime.ReactInstance;
import com.facebook.react.uimanager.UIConstantsProviderBinding;
import com.google.android.gms.tasks.Task;
import javax.inject.Provider;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Provider, UIManagerProvider, UIConstantsProviderBinding.DefaultEventTypesProvider, jg.a {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4872d;

    public /* synthetic */ a(int i5) {
        this.f4872d = i5;
    }

    public static /* bridge */ /* synthetic */ BlendMode b(Object obj) {
        return (BlendMode) obj;
    }

    @Override // jg.a
    public Object N(Task task) {
        int i5;
        switch (this.f4872d) {
            case 28:
                i5 = 403;
                break;
            default:
                i5 = -1;
                break;
        }
        return Integer.valueOf(i5);
    }

    @Override // com.facebook.react.bridge.UIManagerProvider
    public UIManager createUIManager(ReactApplicationContext reactApplicationContext) {
        UIManager lambda$getUIManagerProvider$0;
        lambda$getUIManagerProvider$0 = ReactNativeHost.lambda$getUIManagerProvider$0(reactApplicationContext);
        return lambda$getUIManagerProvider$0;
    }

    @Override // javax.inject.Provider
    public Object get() {
        NativeModule viewManagersMap_delegate$lambda$1$lambda$0;
        viewManagersMap_delegate$lambda$1$lambda$0 = DebugCorePackage.viewManagersMap_delegate$lambda$1$lambda$0();
        return viewManagersMap_delegate$lambda$1$lambda$0;
    }

    @Override // com.facebook.react.uimanager.UIConstantsProviderBinding.DefaultEventTypesProvider
    public NativeMap getDefaultEventTypes() {
        NativeMap _init_$lambda$0;
        _init_$lambda$0 = ReactInstance._init_$lambda$0();
        return _init_$lambda$0;
    }
}
