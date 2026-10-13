package com.facebook.react.internal.turbomodule.core;

import com.facebook.react.bridge.NativeModule;
import com.facebook.react.internal.turbomodule.core.TurboModuleManager;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements TurboModuleManager.ModuleProvider {
    @Override // com.facebook.react.internal.turbomodule.core.TurboModuleManager.ModuleProvider
    public final NativeModule getModule(String str) {
        NativeModule _init_$lambda$0;
        _init_$lambda$0 = TurboModuleManager._init_$lambda$0(str);
        return _init_$lambda$0;
    }
}
