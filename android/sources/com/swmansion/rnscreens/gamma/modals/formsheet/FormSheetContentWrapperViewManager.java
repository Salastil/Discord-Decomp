package com.swmansion.rnscreens.gamma.modals.formsheet;

import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.viewmanagers.RNSFormSheetContentWrapperManagerDelegate;
import com.facebook.react.viewmanagers.RNSFormSheetContentWrapperManagerInterface;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import wm.j;
import wm.k;

@ReactModule(name = FormSheetContentWrapperViewManager.REACT_CLASS)
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\b\b\u0007\u0018\u0000 \u00122\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u0001\u0013B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0015\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00020\u0006H\u0014¢\u0006\u0004\b\u0007\u0010\bJ\u000f\u0010\n\u001a\u00020\tH\u0016¢\u0006\u0004\b\n\u0010\u000bJ\u0017\u0010\u000e\u001a\u00020\u00022\u0006\u0010\r\u001a\u00020\fH\u0014¢\u0006\u0004\b\u000e\u0010\u000fR\u001a\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00020\u00068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0010\u0010\u0011¨\u0006\u0014"}, d2 = {"Lcom/swmansion/rnscreens/gamma/modals/formsheet/FormSheetContentWrapperViewManager;", "Lcom/facebook/react/uimanager/ViewGroupManager;", "Lwm/j;", "Lcom/facebook/react/viewmanagers/RNSFormSheetContentWrapperManagerInterface;", "<init>", "()V", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "getDelegate", "()Lcom/facebook/react/uimanager/ViewManagerDelegate;", "", "getName", "()Ljava/lang/String;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "reactContext", "createViewInstance", "(Lcom/facebook/react/uimanager/ThemedReactContext;)Lwm/j;", "delegate", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Companion", "wm/k", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class FormSheetContentWrapperViewManager extends ViewGroupManager<j> implements RNSFormSheetContentWrapperManagerInterface<j> {

    @NotNull
    public static final k Companion = new k();

    @NotNull
    public static final String REACT_CLASS = "RNSFormSheetContentWrapper";

    @NotNull
    private final ViewManagerDelegate<j> delegate;

    public FormSheetContentWrapperViewManager() {
        super(null, 1, null);
        this.delegate = new RNSFormSheetContentWrapperManagerDelegate(this);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ViewManagerDelegate<j> getDelegate() {
        return this.delegate;
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return REACT_CLASS;
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public j createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(reactContext, "context");
        j jVar = new j(reactContext);
        jVar.f19919e = -1;
        return jVar;
    }
}
