package com.mkuczera.haptic;

import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.module.model.ReactModuleInfo;
import com.facebook.react.module.model.ReactModuleInfoProvider;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import com.henninghall.date_picker.NativeRNDatePickerSpec;
import com.reactnativecommunity.clipboard.ClipboardModule;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class c implements ReactModuleInfoProvider {
    public final /* synthetic */ int a;

    public /* synthetic */ c(int i5) {
        this.a = i5;
    }

    @Override // com.facebook.react.module.model.ReactModuleInfoProvider
    public final Map getReactModuleInfos() {
        switch (this.a) {
            case 0:
                HashMap hashMap = new HashMap();
                hashMap.put(NativeHapticFeedbackSpec.NAME, new ReactModuleInfo(NativeHapticFeedbackSpec.NAME, NativeHapticFeedbackSpec.NAME, false, false, true, false, true));
                return hashMap;
            case 1:
                HashMap hashMap2 = new HashMap();
                hashMap2.put(NativeRNDatePickerSpec.NAME, new ReactModuleInfo(NativeRNDatePickerSpec.NAME, NativeRNDatePickerSpec.NAME, false, false, true, false, true));
                return hashMap2;
            default:
                HashMap hashMap3 = new HashMap();
                Class cls = new Class[]{ClipboardModule.class}[0];
                ReactModule reactModule = (ReactModule) cls.getAnnotation(ReactModule.class);
                hashMap3.put(reactModule.name(), new ReactModuleInfo(reactModule.name(), cls.getName(), reactModule.canOverrideExistingModule(), reactModule.needsEagerInit(), reactModule.hasConstants(), reactModule.isCxxModule(), TurboModule.class.isAssignableFrom(cls)));
                return hashMap3;
        }
    }
}
