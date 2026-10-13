package com.facebook.react.runtime;

import com.facebook.react.BaseReactPackage;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.common.ClassFinder;
import com.facebook.react.devsupport.LogBoxModule;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.devsupport.interfaces.DevSupportManager;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.module.model.ReactModuleInfo;
import com.facebook.react.module.model.ReactModuleInfoProvider;
import com.facebook.react.modules.core.DefaultHardwareBackBtnHandler;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import com.facebook.react.modules.core.ExceptionsManagerModule;
import com.facebook.react.modules.core.HeadlessJsTaskSupportModule;
import com.facebook.react.modules.debug.DevMenuModule;
import com.facebook.react.modules.debug.DevSettingsModule;
import com.facebook.react.modules.debug.SourceCodeModule;
import com.facebook.react.modules.deviceinfo.DeviceInfoModule;
import com.facebook.react.modules.systeminfo.AndroidInfoModule;
import java.util.HashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u001a\u0010\b\u001a\u0004\u0018\u00010\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0016J\b\u0010\u000e\u001a\u00020\u000fH\u0016J\b\u0010\u0010\u001a\u00020\u000fH\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/facebook/react/runtime/CoreReactPackage;", "Lcom/facebook/react/BaseReactPackage;", "devSupportManager", "Lcom/facebook/react/devsupport/interfaces/DevSupportManager;", "hardwareBackBtnHandler", "Lcom/facebook/react/modules/core/DefaultHardwareBackBtnHandler;", "<init>", "(Lcom/facebook/react/devsupport/interfaces/DevSupportManager;Lcom/facebook/react/modules/core/DefaultHardwareBackBtnHandler;)V", "getModule", "Lcom/facebook/react/bridge/NativeModule;", StackTraceHelper.NAME_KEY, "", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "getReactModuleInfoProvider", "Lcom/facebook/react/module/model/ReactModuleInfoProvider;", "fallbackForMissingClass", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class CoreReactPackage extends BaseReactPackage {

    @NotNull
    private final DevSupportManager devSupportManager;

    @NotNull
    private final DefaultHardwareBackBtnHandler hardwareBackBtnHandler;

    public CoreReactPackage(@NotNull DevSupportManager devSupportManager, @NotNull DefaultHardwareBackBtnHandler hardwareBackBtnHandler) {
        Intrinsics.checkNotNullParameter(devSupportManager, "devSupportManager");
        Intrinsics.checkNotNullParameter(hardwareBackBtnHandler, "hardwareBackBtnHandler");
        this.devSupportManager = devSupportManager;
        this.hardwareBackBtnHandler = hardwareBackBtnHandler;
    }

    private final ReactModuleInfoProvider fallbackForMissingClass() {
        Class<?>[] clsArr = {AndroidInfoModule.class, DeviceInfoModule.class, SourceCodeModule.class, DevMenuModule.class, DevSettingsModule.class, DeviceEventManagerModule.class, LogBoxModule.class, ExceptionsManagerModule.class, HeadlessJsTaskSupportModule.class};
        HashMap hashMap = new HashMap();
        for (int i5 = 0; i5 < 9; i5++) {
            Class<?> cls = clsArr[i5];
            ReactModule reactModule = (ReactModule) cls.getAnnotation(ReactModule.class);
            if (reactModule != null) {
                String name = reactModule.name();
                String name2 = reactModule.name();
                String name3 = cls.getName();
                Intrinsics.checkNotNullExpressionValue(name3, "getName(...)");
                hashMap.put(name, new ReactModuleInfo(name2, name3, reactModule.canOverrideExistingModule(), reactModule.needsEagerInit(), reactModule.isCxxModule(), ReactModuleInfo.INSTANCE.classIsTurboModule(cls)));
            }
        }
        return new a(hashMap, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Map fallbackForMissingClass$lambda$0(Map map) {
        return map;
    }

    @Override // com.facebook.react.BaseReactPackage, com.facebook.react.ReactPackage
    public NativeModule getModule(@NotNull String name, @NotNull ReactApplicationContext reactContext) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        switch (name.hashCode()) {
            case -2013505529:
                if (name.equals("LogBox")) {
                    return new LogBoxModule(reactContext, this.devSupportManager);
                }
                return null;
            case -1633589448:
                if (name.equals("DevSettings")) {
                    return new DevSettingsModule(reactContext, this.devSupportManager);
                }
                return null;
            case -1520650172:
                if (name.equals("DeviceInfo")) {
                    return new DeviceInfoModule(reactContext);
                }
                return null;
            case -1071344908:
                if (name.equals("DevMenu")) {
                    return new DevMenuModule(reactContext, this.devSupportManager);
                }
                return null;
            case -1037217463:
                if (name.equals("DeviceEventManager")) {
                    return new DeviceEventManagerModule(reactContext, this.hardwareBackBtnHandler);
                }
                return null;
            case -790603268:
                if (name.equals("PlatformConstants")) {
                    return new AndroidInfoModule(reactContext);
                }
                return null;
            case 512434409:
                if (name.equals("ExceptionsManager")) {
                    return new ExceptionsManagerModule(this.devSupportManager);
                }
                return null;
            case 881516744:
                if (name.equals("SourceCode")) {
                    return new SourceCodeModule(reactContext);
                }
                return null;
            case 1256514152:
                if (name.equals("HeadlessJsTaskSupport")) {
                    return new HeadlessJsTaskSupportModule(reactContext);
                }
                return null;
            default:
                return null;
        }
    }

    @Override // com.facebook.react.BaseReactPackage
    @NotNull
    public ReactModuleInfoProvider getReactModuleInfoProvider() {
        if (!ClassFinder.canLoadClassesFromAnnotationProcessors()) {
            return fallbackForMissingClass();
        }
        try {
            Class<?> findClass = ClassFinder.findClass(CoreReactPackage.class.getName().concat("$$ReactModuleInfoProvider"));
            Object newInstance = findClass != null ? findClass.newInstance() : null;
            ReactModuleInfoProvider reactModuleInfoProvider = newInstance instanceof ReactModuleInfoProvider ? (ReactModuleInfoProvider) newInstance : null;
            return reactModuleInfoProvider == null ? fallbackForMissingClass() : reactModuleInfoProvider;
        } catch (Exception e9) {
            if (e9 instanceof ClassNotFoundException) {
                return fallbackForMissingClass();
            }
            if ((e9 instanceof InstantiationException) || (e9 instanceof IllegalAccessException)) {
                throw new RuntimeException(s4.h.f("No ReactModuleInfoProvider for ", CoreReactPackage.class.getName(), "$$ReactModuleInfoProvider"), e9);
            }
            throw e9;
        }
    }
}
