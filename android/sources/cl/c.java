package cl;

import android.util.Log;
import com.facebook.react.BaseReactPackage;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.module.model.ReactModuleInfo;
import com.facebook.react.module.model.ReactModuleInfoProvider;
import com.margelo.nitro.NitroModules;
import com.mdjstack.plaintext.PlainTextViewManager;
import com.reactnativedocumentpicker.NativeDocumentPickerSpec;
import com.reactnativedocumentpicker.RNDocumentPickerModule;
import com.reactnativekeyboardcontroller.KeyboardBackgroundViewManager;
import com.reactnativekeyboardcontroller.KeyboardControllerModule;
import com.reactnativekeyboardcontroller.KeyboardControllerViewManager;
import com.reactnativekeyboardcontroller.KeyboardGestureAreaViewManager;
import com.reactnativekeyboardcontroller.KeyboardToolbarGroupViewManager;
import com.reactnativekeyboardcontroller.NativeKeyboardControllerSpec;
import com.reactnativekeyboardcontroller.OverKeyboardViewManager;
import com.reactnativekeyboardcontroller.StatusBarManagerCompatModule;
import com.swmansion.rnscreens.ModalScreenViewManager;
import com.swmansion.rnscreens.ScreenContainerViewManager;
import com.swmansion.rnscreens.ScreenContentWrapperManager;
import com.swmansion.rnscreens.ScreenFooterManager;
import com.swmansion.rnscreens.ScreenStackHeaderConfigViewManager;
import com.swmansion.rnscreens.ScreenStackHeaderSubviewManager;
import com.swmansion.rnscreens.ScreenStackViewManager;
import com.swmansion.rnscreens.ScreenViewManager;
import com.swmansion.rnscreens.ScreensModule;
import com.swmansion.rnscreens.SearchBarManager;
import com.swmansion.rnscreens.gamma.modals.formsheet.FormSheetContentWrapperViewManager;
import com.swmansion.rnscreens.gamma.modals.formsheet.FormSheetHostViewManager;
import com.swmansion.rnscreens.gamma.scrollviewmarker.ScrollViewMarkerViewManager;
import com.swmansion.rnscreens.gamma.stack.header.config.StackHeaderConfigViewManager;
import com.swmansion.rnscreens.gamma.stack.header.subview.StackHeaderSubviewViewManager;
import com.swmansion.rnscreens.gamma.stack.host.StackHostViewManager;
import com.swmansion.rnscreens.gamma.stack.screen.StackScreenViewManager;
import com.swmansion.rnscreens.gamma.tabs.host.TabsHostViewManager;
import com.swmansion.rnscreens.gamma.tabs.screen.TabsScreenViewManager;
import com.swmansion.rnscreens.safearea.SafeAreaViewManager;
import com.swmansion.rnscreens.utils.ScreenDummyLayoutHelper;
import com.th3rdwave.safeareacontext.SafeAreaContextModule;
import com.th3rdwave.safeareacontext.SafeAreaProviderManager;
import java.com.reactnativekeyboardcontroller.ClippingScrollViewDecoratorViewManager;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.List;
import kotlin.collections.b0;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends BaseReactPackage {
    public final /* synthetic */ int a;

    public /* synthetic */ c(int i5) {
        this.a = i5;
    }

    @Override // com.facebook.react.BaseReactPackage, com.facebook.react.ReactPackage
    public List createViewManagers(ReactApplicationContext reactContext) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return b0.c(new PlainTextViewManager());
            case 1:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                ScreenDummyLayoutHelper screenDummyLayoutHelper = new ScreenDummyLayoutHelper();
                screenDummyLayoutHelper.f6800x = qn.a.f16910c;
                screenDummyLayoutHelper.f6801y = new WeakReference(reactContext);
                try {
                    System.loadLibrary("react_codegen_rnscreens");
                } catch (UnsatisfiedLinkError unused) {
                    Log.w("ScreenDummyLayoutHelper", "[RNScreens] Failed to load react_codegen_rnscreens library.");
                }
                ScreenDummyLayoutHelper.H = new WeakReference(screenDummyLayoutHelper);
                screenDummyLayoutHelper.b(reactContext);
                reactContext.addLifecycleEventListener(screenDummyLayoutHelper);
                LifecycleEventListener lifecycleEventListener = com.swmansion.rnscreens.h.f6758d;
                Intrinsics.checkNotNullParameter(reactContext, "context");
                if (com.swmansion.rnscreens.h.f6762w) {
                    Log.w("[RNScreens]", "InsetObserverProxy registers on new context while it has not been invalidated on the old one. Please report this as issue at https://github.com/software-mansion/react-native-screens/issues");
                }
                com.swmansion.rnscreens.h.f6762w = true;
                reactContext.addLifecycleEventListener(lifecycleEventListener);
                return c0.g(new ScreenContainerViewManager(), new ScreenViewManager(), new ModalScreenViewManager(), new ScreenStackViewManager(), new ScreenStackHeaderConfigViewManager(), new ScreenStackHeaderSubviewManager(), new SearchBarManager(), new ScreenFooterManager(), new ScreenContentWrapperManager(), new TabsHostViewManager(), new TabsScreenViewManager(), new SafeAreaViewManager(), new StackHostViewManager(), new StackScreenViewManager(), new ScrollViewMarkerViewManager(), new StackHeaderConfigViewManager(), new StackHeaderSubviewViewManager(), new FormSheetHostViewManager(), new FormSheetContentWrapperViewManager());
            case 2:
            default:
                return super.createViewManagers(reactContext);
            case 3:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return c0.g(new KeyboardControllerViewManager(), new KeyboardGestureAreaViewManager(), new OverKeyboardViewManager(), new KeyboardBackgroundViewManager(), new ClippingScrollViewDecoratorViewManager(), new KeyboardToolbarGroupViewManager());
            case 4:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return c0.g(new SafeAreaProviderManager(), new com.th3rdwave.safeareacontext.SafeAreaViewManager());
        }
    }

    @Override // com.facebook.react.BaseReactPackage, com.facebook.react.ReactPackage
    public final NativeModule getModule(String name, ReactApplicationContext reactContext) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return null;
            case 1:
                Intrinsics.checkNotNullParameter(name, "s");
                Intrinsics.checkNotNullParameter(reactContext, "reactApplicationContext");
                if (Intrinsics.areEqual(name, "RNSModule")) {
                    return new ScreensModule(reactContext);
                }
                return null;
            case 2:
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                if (Intrinsics.areEqual(name, NativeDocumentPickerSpec.NAME)) {
                    return new RNDocumentPickerModule(reactContext);
                }
                return null;
            case 3:
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                if (Intrinsics.areEqual(name, NativeKeyboardControllerSpec.NAME)) {
                    return new KeyboardControllerModule(reactContext);
                }
                if (Intrinsics.areEqual(name, "StatusBarManager")) {
                    return new StatusBarManagerCompatModule(reactContext);
                }
                return null;
            case 4:
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                if (Intrinsics.areEqual(name, "RNCSafeAreaContext")) {
                    return new SafeAreaContextModule(reactContext);
                }
                return null;
            default:
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                if (Intrinsics.areEqual(name, "NitroModules")) {
                    return new NitroModules(reactContext);
                }
                return null;
        }
    }

    @Override // com.facebook.react.BaseReactPackage
    public final ReactModuleInfoProvider getReactModuleInfoProvider() {
        switch (this.a) {
            case 0:
                return new b(0);
            case 1:
                return new b(3);
            case 2:
                return new b(8);
            case 3:
                return new b(9);
            case 4:
                HashMap hashMap = new HashMap();
                Class cls = new Class[]{SafeAreaContextModule.class}[0];
                ReactModule reactModule = (ReactModule) cls.getAnnotation(ReactModule.class);
                if (reactModule != null) {
                    String name = reactModule.name();
                    String name2 = reactModule.name();
                    String name3 = cls.getName();
                    Intrinsics.checkNotNullExpressionValue(name3, "getName(...)");
                    hashMap.put(name, new ReactModuleInfo(name2, name3, true, reactModule.needsEagerInit(), reactModule.isCxxModule(), true));
                }
                return new com.facebook.react.runtime.a(hashMap, 2);
            default:
                return new b(10);
        }
    }
}
