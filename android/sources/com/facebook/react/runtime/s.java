package com.facebook.react.runtime;

import com.facebook.react.bridge.NativeMap;
import com.facebook.react.uimanager.UIConstantsProviderBinding;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final /* synthetic */ class s implements UIConstantsProviderBinding.ConstantsForViewManagerProvider, UIConstantsProviderBinding.ConstantsProvider {
    public final /* synthetic */ ReactInstance a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ HashMap f5045b;

    public /* synthetic */ s(ReactInstance reactInstance, HashMap hashMap) {
        this.a = reactInstance;
        this.f5045b = hashMap;
    }

    @Override // com.facebook.react.uimanager.UIConstantsProviderBinding.ConstantsProvider
    public NativeMap getConstants() {
        NativeMap _init_$lambda$3;
        _init_$lambda$3 = ReactInstance._init_$lambda$3(this.a, this.f5045b);
        return _init_$lambda$3;
    }

    @Override // com.facebook.react.uimanager.UIConstantsProviderBinding.ConstantsForViewManagerProvider
    public NativeMap getConstantsForViewManager(String str) {
        NativeMap _init_$lambda$1;
        _init_$lambda$1 = ReactInstance._init_$lambda$1(this.a, this.f5045b, str);
        return _init_$lambda$1;
    }
}
