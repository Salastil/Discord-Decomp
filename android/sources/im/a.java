package im;

import cl.b;
import com.facebook.react.BaseReactPackage;
import com.facebook.react.ViewManagerOnDemandReactPackage;
import com.facebook.react.bridge.ModuleSpec;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.module.model.ReactModuleInfoProvider;
import com.facebook.react.uimanager.ViewManager;
import com.swmansion.gesturehandler.react.RNGestureHandlerButtonViewManager;
import com.swmansion.gesturehandler.react.RNGestureHandlerDetectorViewManager;
import com.swmansion.gesturehandler.react.RNGestureHandlerModule;
import com.swmansion.gesturehandler.react.RNGestureHandlerRootViewManager;
import fo.l;
import fo.u;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import javax.inject.Provider;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends BaseReactPackage implements ViewManagerOnDemandReactPackage {
    public final u a = l.a(new f7.a(8));

    @Override // com.facebook.react.ViewManagerOnDemandReactPackage
    public final ViewManager createViewManager(ReactApplicationContext reactContext, String viewManagerName) {
        Provider provider;
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(viewManagerName, "viewManagerName");
        ModuleSpec moduleSpec = (ModuleSpec) ((Map) this.a.getValue()).get(viewManagerName);
        NativeModule nativeModule = (moduleSpec == null || (provider = moduleSpec.provider()) == null) ? null : (NativeModule) provider.get();
        if (nativeModule instanceof ViewManager) {
            return (ViewManager) nativeModule;
        }
        return null;
    }

    @Override // com.facebook.react.BaseReactPackage, com.facebook.react.ReactPackage
    public final List createViewManagers(ReactApplicationContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return c0.g(new RNGestureHandlerRootViewManager(), new RNGestureHandlerButtonViewManager(), new RNGestureHandlerDetectorViewManager());
    }

    @Override // com.facebook.react.BaseReactPackage, com.facebook.react.ReactPackage
    public final NativeModule getModule(String name, ReactApplicationContext reactContext) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        if (Intrinsics.areEqual(name, "RNGestureHandlerModule")) {
            return new RNGestureHandlerModule(reactContext);
        }
        return null;
    }

    @Override // com.facebook.react.BaseReactPackage
    public final ReactModuleInfoProvider getReactModuleInfoProvider() {
        try {
            Object newInstance = Class.forName("com.swmansion.gesturehandler.RNGestureHandlerPackage$$ReactModuleInfoProvider").getDeclaredConstructor(null).newInstance(null);
            Intrinsics.checkNotNull(newInstance, "null cannot be cast to non-null type com.facebook.react.module.model.ReactModuleInfoProvider");
            return (ReactModuleInfoProvider) newInstance;
        } catch (ClassNotFoundException unused) {
            return new b(5);
        } catch (IllegalAccessException e9) {
            throw new RuntimeException("No ReactModuleInfoProvider for RNGestureHandlerPackage$$ReactModuleInfoProvider", e9);
        } catch (InstantiationException e10) {
            throw new RuntimeException("No ReactModuleInfoProvider for RNGestureHandlerPackage$$ReactModuleInfoProvider", e10);
        }
    }

    @Override // com.facebook.react.ViewManagerOnDemandReactPackage
    public final Collection getViewManagerNames(ReactApplicationContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return CollectionsKt.i0(((Map) this.a.getValue()).keySet());
    }

    @Override // com.facebook.react.BaseReactPackage
    public final List getViewManagers(ReactApplicationContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return CollectionsKt.j0(((Map) this.a.getValue()).values());
    }
}
