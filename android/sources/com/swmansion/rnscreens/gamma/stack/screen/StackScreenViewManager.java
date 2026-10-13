package com.swmansion.rnscreens.gamma.stack.screen;

import android.view.View;
import com.facebook.imagepipeline.nativecode.b;
import com.facebook.react.bridge.JSApplicationCausedNativeException;
import com.facebook.react.bridge.JSApplicationIllegalArgumentException;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ReactStylesDiffMap;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.viewmanagers.RNSStackScreenManagerDelegate;
import com.facebook.react.viewmanagers.RNSStackScreenManagerInterface;
import en.d;
import en.f;
import en.h;
import en.j;
import fn.a;
import java.lang.ref.WeakReference;
import java.util.Map;
import kotlin.Metadata;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import zm.c;

@ReactModule(name = StackScreenViewManager.REACT_CLASS)
@Metadata(d1 = {"\u0000b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\r\n\u0002\u0010$\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0007\b\u0007\u0018\u0000 62\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u00017B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u000f\u0010\u0007\u001a\u00020\u0006H\u0016¢\u0006\u0004\b\u0007\u0010\bJ\u0015\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00020\tH\u0014¢\u0006\u0004\b\n\u0010\u000bJ\u0017\u0010\u000e\u001a\u00020\u00022\u0006\u0010\r\u001a\u00020\fH\u0014¢\u0006\u0004\b\u000e\u0010\u000fJ'\u0010\u0016\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0012\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b\u0016\u0010\u0017J\u001f\u0010\u0019\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u0011H\u0016¢\u0006\u0004\b\u0019\u0010\u001aJ\u001f\u0010\u001b\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b\u001b\u0010\u001cJ\u0017\u0010\u001d\u001a\u00020\u00132\u0006\u0010\u0010\u001a\u00020\u0002H\u0016¢\u0006\u0004\b\u001d\u0010\u001eJ!\u0010\u001f\u001a\u0004\u0018\u00010\u00112\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b\u001f\u0010 J\u001f\u0010!\u001a\u00020\u00152\u0006\u0010\r\u001a\u00020\f2\u0006\u0010\u0018\u001a\u00020\u0002H\u0014¢\u0006\u0004\b!\u0010\"J\u001b\u0010%\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020$0#H\u0016¢\u0006\u0004\b%\u0010&J-\u0010+\u001a\u0004\u0018\u00010$2\u0006\u0010\u0018\u001a\u00020\u00022\b\u0010(\u001a\u0004\u0018\u00010'2\b\u0010*\u001a\u0004\u0018\u00010)H\u0016¢\u0006\u0004\b+\u0010,J!\u0010.\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u00022\b\u0010-\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b.\u0010/J!\u00100\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u00022\b\u0010-\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b0\u0010/J\u001f\u00102\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u00022\u0006\u0010-\u001a\u000201H\u0016¢\u0006\u0004\b2\u00103R\u001a\u00104\u001a\b\u0012\u0004\u0012\u00020\u00020\t8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b4\u00105¨\u00068"}, d2 = {"Lcom/swmansion/rnscreens/gamma/stack/screen/StackScreenViewManager;", "Lcom/facebook/react/uimanager/ViewGroupManager;", "Len/f;", "Lcom/facebook/react/viewmanagers/RNSStackScreenManagerInterface;", "<init>", "()V", "", "getName", "()Ljava/lang/String;", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "getDelegate", "()Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "reactContext", "createViewInstance", "(Lcom/facebook/react/uimanager/ThemedReactContext;)Len/f;", "parent", "Landroid/view/View;", "child", "", "index", "", "addView", "(Len/f;Landroid/view/View;I)V", "view", "removeView", "(Len/f;Landroid/view/View;)V", "removeViewAt", "(Len/f;I)V", "getChildCount", "(Len/f;)I", "getChildAt", "(Len/f;I)Landroid/view/View;", "addEventEmitters", "(Lcom/facebook/react/uimanager/ThemedReactContext;Len/f;)V", "", "", "getExportedCustomDirectEventTypeConstants", "()Ljava/util/Map;", "Lcom/facebook/react/uimanager/ReactStylesDiffMap;", "props", "Lcom/facebook/react/uimanager/StateWrapper;", "stateWrapper", "updateState", "(Len/f;Lcom/facebook/react/uimanager/ReactStylesDiffMap;Lcom/facebook/react/uimanager/StateWrapper;)Ljava/lang/Object;", "value", "setActivityMode", "(Len/f;Ljava/lang/String;)V", "setScreenKey", "", "setPreventNativeDismiss", "(Len/f;Z)V", "delegate", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Companion", "en/j", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nStackScreenViewManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 StackScreenViewManager.kt\ncom/swmansion/rnscreens/gamma/stack/screen/StackScreenViewManager\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,152:1\n1#2:153\n*E\n"})
/* loaded from: classes3.dex */
public final class StackScreenViewManager extends ViewGroupManager<f> implements RNSStackScreenManagerInterface<f> {

    @NotNull
    public static final j Companion = new j();

    @NotNull
    public static final String REACT_CLASS = "RNSStackScreen";

    @NotNull
    private final ViewManagerDelegate<f> delegate;

    public StackScreenViewManager() {
        super(null, 1, null);
        this.delegate = new RNSStackScreenManagerDelegate(this);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ViewManagerDelegate<f> getDelegate() {
        return this.delegate;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        return v0.h(b.u(a.E), b.u(a.F), b.u(a.f8797i), b.u(a.f8798v), b.u(fn.b.f8800v), b.u(a.f8799w));
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return REACT_CLASS;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void addEventEmitters(@NotNull ThemedReactContext reactContext, @NotNull f view) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(view, "view");
        super.addEventEmitters(reactContext, (ThemedReactContext) view);
        if (view.getId() == -1) {
            throw new IllegalStateException("[RNScreens] StackScreen must have its tag set when registering event emitters");
        }
        ThemedReactContext reactContext2 = view.f8173d;
        int id2 = view.getId();
        Intrinsics.checkNotNullParameter(reactContext2, "reactContext");
        view.setEventEmitter$react_native_screens_release(new h(reactContext2, id2));
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public f createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return new f(reactContext);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeView(@NotNull f parent, @NotNull View view) {
        ym.f fVar;
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(view, "view");
        if (!(view instanceof c)) {
            super.removeView((StackScreenViewManager) parent, view);
            return;
        }
        c header = (c) view;
        parent.getClass();
        Intrinsics.checkNotNullParameter(header, "header");
        if (parent.F == header) {
            parent.F = null;
            WeakReference weakReference = parent.G;
            if (weakReference == null || (fVar = (ym.f) weakReference.get()) == null) {
                return;
            }
            fVar.a(null, null);
        }
    }

    @Override // com.facebook.react.viewmanagers.RNSStackScreenManagerInterface
    public void setActivityMode(@NotNull f view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (Intrinsics.areEqual(value, "attached")) {
            view.setActivityMode(d.f8169e);
        } else {
            if (!Intrinsics.areEqual(value, "detached")) {
                throw new JSApplicationIllegalArgumentException(s4.h.f("[RNScreens] Invalid activity mode: ", value, "."));
            }
            view.setActivityMode(d.f8168d);
        }
    }

    @Override // com.facebook.react.viewmanagers.RNSStackScreenManagerInterface
    public void setPreventNativeDismiss(@NotNull f view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setPreventNativeDismissEnabled$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackScreenManagerInterface
    public void setScreenKey(@NotNull f view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (value == null) {
            throw new IllegalArgumentException("[RNScreens] screenKey must not be null.");
        }
        view.setScreenKey(value);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public Object updateState(@NotNull f view, ReactStylesDiffMap props, StateWrapper stateWrapper) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setStateWrapper$react_native_screens_release(stateWrapper);
        return super.updateState((StackScreenViewManager) view, props, stateWrapper);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void addView(@NotNull f parent, @NotNull View child, int index) {
        ym.f fVar;
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(child, "child");
        if (child instanceof c) {
            if (index >= parent.getChildCount()) {
                c header = (c) child;
                Intrinsics.checkNotNullParameter(header, "header");
                parent.F = header;
                WeakReference weakReference = parent.G;
                if (weakReference == null || (fVar = (ym.f) weakReference.get()) == null) {
                    return;
                }
                fVar.a(header, header);
                return;
            }
            throw new JSApplicationCausedNativeException("[RNScreens] StackHeaderConfig must be the last child of StackScreen. ");
        }
        if (index <= parent.getChildCount()) {
            super.addView((StackScreenViewManager) parent, child, index);
            return;
        }
        throw new JSApplicationCausedNativeException("[RNScreens] StackHeaderConfig must be the last child of StackScreen. ");
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public View getChildAt(@NotNull f parent, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        if (index == parent.getChildCount() && parent.getHeaderConfig$react_native_screens_release() != null) {
            return parent.getHeaderConfig$react_native_screens_release();
        }
        return parent.getChildAt(index);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public int getChildCount(@NotNull f parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        return parent.getChildCount() + (parent.getHeaderConfig$react_native_screens_release() != null ? 1 : 0);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeViewAt(@NotNull f parent, int index) {
        ym.f fVar;
        Intrinsics.checkNotNullParameter(parent, "parent");
        if (index == getChildCount(parent) - 1 && parent.getHeaderConfig$react_native_screens_release() != null) {
            c header = parent.getHeaderConfig$react_native_screens_release();
            if (header != null) {
                Intrinsics.checkNotNullParameter(header, "header");
                if (parent.F == header) {
                    parent.F = null;
                    WeakReference weakReference = parent.G;
                    if (weakReference == null || (fVar = (ym.f) weakReference.get()) == null) {
                        return;
                    }
                    fVar.a(null, null);
                    return;
                }
                return;
            }
            return;
        }
        super.removeViewAt((StackScreenViewManager) parent, index);
    }
}
