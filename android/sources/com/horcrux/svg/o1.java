package com.horcrux.svg;

import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.module.model.ReactModuleInfo;
import com.facebook.react.module.model.ReactModuleInfoProvider;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class o1 implements ReactModuleInfoProvider {
    @Override // com.facebook.react.module.model.ReactModuleInfoProvider
    public final Map getReactModuleInfos() {
        HashMap hashMap = new HashMap();
        Class[] clsArr = {SvgViewModule.class, RNSVGRenderableManager.class};
        for (int i5 = 0; i5 < 2; i5++) {
            Class cls = clsArr[i5];
            ReactModule reactModule = (ReactModule) cls.getAnnotation(ReactModule.class);
            hashMap.put(reactModule.name(), new ReactModuleInfo(reactModule.name(), cls.getName(), reactModule.canOverrideExistingModule(), reactModule.needsEagerInit(), reactModule.isCxxModule(), true));
        }
        return hashMap;
    }
}
