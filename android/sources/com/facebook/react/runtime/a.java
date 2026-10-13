package com.facebook.react.runtime;

import com.facebook.react.module.model.ReactModuleInfoProvider;
import com.facebook.react.shell.MainReactPackage;
import com.swmansion.reanimated.ReanimatedPackage;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements ReactModuleInfoProvider {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ HashMap f4987b;

    public /* synthetic */ a(HashMap hashMap, int i5) {
        this.a = i5;
        this.f4987b = hashMap;
    }

    @Override // com.facebook.react.module.model.ReactModuleInfoProvider
    public final Map getReactModuleInfos() {
        Map fallbackForMissingClass$lambda$0;
        Map lambda$getReactModuleInfoProvider$0;
        Map fallbackForMissingClass$lambda$17;
        switch (this.a) {
            case 0:
                fallbackForMissingClass$lambda$0 = CoreReactPackage.fallbackForMissingClass$lambda$0(this.f4987b);
                return fallbackForMissingClass$lambda$0;
            case 1:
                lambda$getReactModuleInfoProvider$0 = ReanimatedPackage.lambda$getReactModuleInfoProvider$0(this.f4987b);
                return lambda$getReactModuleInfoProvider$0;
            case 2:
                return this.f4987b;
            default:
                fallbackForMissingClass$lambda$17 = MainReactPackage.fallbackForMissingClass$lambda$17((LinkedHashMap) this.f4987b);
                return fallbackForMissingClass$lambda$17;
        }
    }
}
