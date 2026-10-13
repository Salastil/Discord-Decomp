package com.swmansion.rnscreens.safearea;

import androidx.core.view.j0;
import androidx.core.view.s0;
import com.facebook.react.bridge.JSApplicationIllegalArgumentException;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ReactStylesDiffMap;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSSafeAreaViewManagerDelegate;
import com.facebook.react.viewmanagers.RNSSafeAreaViewManagerInterface;
import java.lang.ref.WeakReference;
import java.util.WeakHashMap;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import mn.a;
import mn.b;
import mn.d;
import mn.e;
import mn.f;
import org.jetbrains.annotations.NotNull;

@ReactModule(name = SafeAreaViewManager.REACT_CLASS)
@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0007\b\u0007\u0018\u0000 !2\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u0001\"B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u000f\u0010\u0007\u001a\u00020\u0006H\u0016¢\u0006\u0004\b\u0007\u0010\bJ\u0017\u0010\u000b\u001a\u00020\u00022\u0006\u0010\n\u001a\u00020\tH\u0014¢\u0006\u0004\b\u000b\u0010\fJ\u0015\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00020\rH\u0014¢\u0006\u0004\b\u000e\u0010\u000fJ!\u0010\u0014\u001a\u00020\u00132\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010\u0012\u001a\u0004\u0018\u00010\u0011H\u0016¢\u0006\u0004\b\u0014\u0010\u0015J!\u0010\u0016\u001a\u00020\u00132\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010\u0012\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b\u0016\u0010\u0017J-\u0010\u001d\u001a\u0004\u0018\u00010\u001c2\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010\u0019\u001a\u0004\u0018\u00010\u00182\b\u0010\u001b\u001a\u0004\u0018\u00010\u001aH\u0016¢\u0006\u0004\b\u001d\u0010\u001eR\u001a\u0010\u001f\u001a\b\u0012\u0004\u0012\u00020\u00020\r8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u001f\u0010 ¨\u0006#"}, d2 = {"Lcom/swmansion/rnscreens/safearea/SafeAreaViewManager;", "Lcom/facebook/react/uimanager/ViewGroupManager;", "Lmn/d;", "Lcom/facebook/react/viewmanagers/RNSSafeAreaViewManagerInterface;", "<init>", "()V", "", "getName", "()Ljava/lang/String;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "reactContext", "createViewInstance", "(Lcom/facebook/react/uimanager/ThemedReactContext;)Lmn/d;", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "getDelegate", "()Lcom/facebook/react/uimanager/ViewManagerDelegate;", "view", "Lcom/facebook/react/bridge/ReadableMap;", "value", "", "setEdges", "(Lmn/d;Lcom/facebook/react/bridge/ReadableMap;)V", "setInsetType", "(Lmn/d;Ljava/lang/String;)V", "Lcom/facebook/react/uimanager/ReactStylesDiffMap;", "props", "Lcom/facebook/react/uimanager/StateWrapper;", "stateWrapper", "", "updateState", "(Lmn/d;Lcom/facebook/react/uimanager/ReactStylesDiffMap;Lcom/facebook/react/uimanager/StateWrapper;)Ljava/lang/Object;", "delegate", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Companion", "mn/f", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class SafeAreaViewManager extends ViewGroupManager<d> implements RNSSafeAreaViewManagerInterface<d> {

    @NotNull
    public static final f Companion = new f();

    @NotNull
    public static final String REACT_CLASS = "RNSSafeAreaView";

    @NotNull
    private final ViewManagerDelegate<d> delegate;

    public SafeAreaViewManager() {
        super(null, 1, null);
        this.delegate = new RNSSafeAreaViewManagerDelegate(this);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ViewManagerDelegate<d> getDelegate() {
        return this.delegate;
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return REACT_CLASS;
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public d createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        d dVar = new d(reactContext);
        dVar.f14559d = new WeakReference(null);
        a aVar = a.f14551e;
        dVar.f14560e = aVar;
        dVar.f14561i = aVar;
        dVar.f14565y = b.f14555d;
        WeakHashMap weakHashMap = s0.a;
        j0.m(dVar, dVar);
        return dVar;
    }

    @Override // com.facebook.react.viewmanagers.RNSSafeAreaViewManagerInterface
    public void setEdges(@NotNull d view, ReadableMap value) {
        Intrinsics.checkNotNullParameter(view, "view");
        e eVar = value != null ? new e(value.getBoolean(ViewProps.LEFT), value.getBoolean(ViewProps.TOP), value.getBoolean(ViewProps.RIGHT), value.getBoolean(ViewProps.BOTTOM)) : null;
        if (eVar != null) {
            view.setEdges(eVar);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x002b, code lost:
    
        if (r4.equals("all") != false) goto L21;
     */
    @Override // com.facebook.react.viewmanagers.RNSSafeAreaViewManagerInterface
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setInsetType(@NotNull d view, String value) {
        b bVar;
        Intrinsics.checkNotNullParameter(view, "view");
        if (value != null) {
            int hashCode = value.hashCode();
            if (hashCode == -887328209) {
                if (value.equals("system")) {
                    bVar = b.f14556e;
                    view.setInsetType(bVar);
                }
                throw new JSApplicationIllegalArgumentException("Unknown inset type ".concat(value));
            }
            if (hashCode != 96673) {
                if (hashCode == 502623545 && value.equals("interface")) {
                    bVar = b.f14557i;
                    view.setInsetType(bVar);
                }
            }
            throw new JSApplicationIllegalArgumentException("Unknown inset type ".concat(value));
        }
        bVar = b.f14555d;
        view.setInsetType(bVar);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public Object updateState(@NotNull d view, ReactStylesDiffMap props, StateWrapper stateWrapper) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setStateWrapper(stateWrapper);
        return super.updateState((SafeAreaViewManager) view, props, stateWrapper);
    }
}
