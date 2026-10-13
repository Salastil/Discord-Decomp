package cl;

import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.module.model.ReactModuleInfo;
import com.facebook.react.module.model.ReactModuleInfoProvider;
import com.reactnative.ivpusic.imagepicker.NativeImageCropPickerSpec;
import com.reactnativedocumentpicker.NativeDocumentPickerSpec;
import com.reactnativekeyboardcontroller.NativeKeyboardControllerSpec;
import com.swmansion.gesturehandler.react.RNGestureHandlerModule;
import io.sentry.react.RNSentryPackage;
import java.lang.annotation.Annotation;
import java.util.HashMap;
import java.util.Map;
import kotlin.Pair;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements ReactModuleInfoProvider {
    public final /* synthetic */ int a;

    public /* synthetic */ b(int i5) {
        this.a = i5;
    }

    @Override // com.facebook.react.module.model.ReactModuleInfoProvider
    public final Map getReactModuleInfos() {
        Map d6;
        Map lambda$getReactModuleInfoProvider$0;
        switch (this.a) {
            case 0:
                return v0.d();
            case 1:
                d6 = v0.d();
                return d6;
            case 2:
                return new HashMap();
            case 3:
                HashMap hashMap = new HashMap();
                hashMap.put("RNSModule", new ReactModuleInfo("RNSModule", "RNSModule", false, false, true, false, true));
                return hashMap;
            case 4:
                return new HashMap();
            case 5:
                Annotation annotation = RNGestureHandlerModule.class.getAnnotation(ReactModule.class);
                Intrinsics.checkNotNull(annotation);
                ReactModule reactModule = (ReactModule) annotation;
                String name = reactModule.name();
                String name2 = RNGestureHandlerModule.class.getName();
                Intrinsics.checkNotNullExpressionValue(name2, "getName(...)");
                return v0.h(new Pair("RNGestureHandlerModule", new ReactModuleInfo(name, name2, reactModule.canOverrideExistingModule(), reactModule.needsEagerInit(), reactModule.isCxxModule(), true)));
            case 6:
                lambda$getReactModuleInfoProvider$0 = RNSentryPackage.lambda$getReactModuleInfoProvider$0();
                return lambda$getReactModuleInfoProvider$0;
            case 7:
                HashMap hashMap2 = new HashMap();
                hashMap2.put(NativeImageCropPickerSpec.NAME, new ReactModuleInfo(NativeImageCropPickerSpec.NAME, NativeImageCropPickerSpec.NAME, false, false, false, true));
                return hashMap2;
            case 8:
                return u0.b(new Pair(NativeDocumentPickerSpec.NAME, new ReactModuleInfo(NativeDocumentPickerSpec.NAME, NativeDocumentPickerSpec.NAME, false, false, false, true)));
            case 9:
                HashMap hashMap3 = new HashMap();
                hashMap3.put(NativeKeyboardControllerSpec.NAME, new ReactModuleInfo(NativeKeyboardControllerSpec.NAME, NativeKeyboardControllerSpec.NAME, false, false, false, true));
                hashMap3.put("StatusBarManager", new ReactModuleInfo("StatusBarManager", "StatusBarManager", true, false, false, true));
                return hashMap3;
            default:
                HashMap hashMap4 = new HashMap();
                hashMap4.put("NitroModules", new ReactModuleInfo("NitroModules", "NitroModules", false, false, false, true));
                return hashMap4;
        }
    }
}
