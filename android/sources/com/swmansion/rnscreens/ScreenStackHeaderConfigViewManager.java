package com.swmansion.rnscreens;

import android.view.View;
import com.facebook.react.bridge.JSApplicationCausedNativeException;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.ReactStylesDiffMap;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerDelegate;
import com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@ReactModule(name = ScreenStackHeaderConfigViewManager.REACT_CLASS)
@Metadata(d1 = {"\u0000l\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\b-\n\u0002\u0010$\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0012\n\u0002\u0018\u0002\n\u0002\b\t\b\u0007\u0018\u0000 q2\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u0001rB\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u000f\u0010\u0007\u001a\u00020\u0006H\u0016¢\u0006\u0004\b\u0007\u0010\bJ\u0017\u0010\u000b\u001a\u00020\u00022\u0006\u0010\n\u001a\u00020\tH\u0014¢\u0006\u0004\b\u000b\u0010\fJ'\u0010\u0013\u001a\u00020\u00122\u0006\u0010\r\u001a\u00020\u00022\u0006\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\u0011\u001a\u00020\u0010H\u0016¢\u0006\u0004\b\u0013\u0010\u0014J-\u0010\u001b\u001a\u0004\u0018\u00010\u001a2\u0006\u0010\u0015\u001a\u00020\u00022\b\u0010\u0017\u001a\u0004\u0018\u00010\u00162\b\u0010\u0019\u001a\u0004\u0018\u00010\u0018H\u0016¢\u0006\u0004\b\u001b\u0010\u001cJ\u0019\u0010\u001d\u001a\u00020\u00122\b\b\u0001\u0010\u0015\u001a\u00020\u0002H\u0016¢\u0006\u0004\b\u001d\u0010\u001eJ\u0017\u0010\u001f\u001a\u00020\u00122\u0006\u0010\r\u001a\u00020\u0002H\u0016¢\u0006\u0004\b\u001f\u0010\u001eJ\u001f\u0010 \u001a\u00020\u00122\u0006\u0010\r\u001a\u00020\u00022\u0006\u0010\u0011\u001a\u00020\u0010H\u0016¢\u0006\u0004\b \u0010!J\u0017\u0010\"\u001a\u00020\u00102\u0006\u0010\r\u001a\u00020\u0002H\u0016¢\u0006\u0004\b\"\u0010#J\u001f\u0010$\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u0010\u0011\u001a\u00020\u0010H\u0016¢\u0006\u0004\b$\u0010%J\u000f\u0010'\u001a\u00020&H\u0016¢\u0006\u0004\b'\u0010(J\u0017\u0010)\u001a\u00020\u00122\u0006\u0010\r\u001a\u00020\u0002H\u0014¢\u0006\u0004\b)\u0010\u001eJ\u001f\u0010,\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u0010+\u001a\u00020&H\u0016¢\u0006\u0004\b,\u0010-J\u001f\u0010/\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u0010.\u001a\u00020&H\u0016¢\u0006\u0004\b/\u0010-J\u001f\u00101\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u00100\u001a\u00020&H\u0016¢\u0006\u0004\b1\u0010-J\u001f\u00103\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u00102\u001a\u00020&H\u0016¢\u0006\u0004\b3\u0010-J\u001f\u00105\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u00104\u001a\u00020&H\u0016¢\u0006\u0004\b5\u0010-J!\u00107\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\b\u00106\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b7\u00108J!\u0010:\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\b\u00109\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b:\u00108J\u001f\u0010<\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u0010;\u001a\u00020\u0010H\u0016¢\u0006\u0004\b<\u0010!J!\u0010>\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\b\u0010=\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b>\u00108J!\u0010@\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\b\u0010?\u001a\u0004\u0018\u00010\u0010H\u0016¢\u0006\u0004\b@\u0010AJ!\u0010C\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\b\u0010B\u001a\u0004\u0018\u00010\u0010H\u0016¢\u0006\u0004\bC\u0010AJ\u001f\u0010E\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u0010D\u001a\u00020&H\u0016¢\u0006\u0004\bE\u0010-J\u001f\u0010G\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u0010F\u001a\u00020&H\u0016¢\u0006\u0004\bG\u0010-J!\u0010I\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\b\u0010H\u001a\u0004\u0018\u00010\u0010H\u0016¢\u0006\u0004\bI\u0010AJ\u001f\u0010K\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u0010J\u001a\u00020&H\u0016¢\u0006\u0004\bK\u0010-J\u001f\u0010M\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u0010L\u001a\u00020&H\u0016¢\u0006\u0004\bM\u0010-J\u001f\u0010O\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u0010N\u001a\u00020&H\u0016¢\u0006\u0004\bO\u0010-J!\u0010Q\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\b\u0010P\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\bQ\u00108J!\u0010S\u001a\u00020\u00122\b\u0010*\u001a\u0004\u0018\u00010\u00022\u0006\u0010R\u001a\u00020&H\u0016¢\u0006\u0004\bS\u0010-J\u001b\u0010U\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u001a0TH\u0016¢\u0006\u0004\bU\u0010VJ\u0015\u0010X\u001a\b\u0012\u0004\u0012\u00020\u00020WH\u0014¢\u0006\u0004\bX\u0010YJ#\u0010Z\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\bZ\u00108J#\u0010[\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b[\u00108J!\u0010\\\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\u0006\u0010R\u001a\u00020\u0010H\u0016¢\u0006\u0004\b\\\u0010!J!\u0010]\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\u0006\u0010R\u001a\u00020&H\u0016¢\u0006\u0004\b]\u0010-J!\u0010^\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\u0006\u0010R\u001a\u00020&H\u0016¢\u0006\u0004\b^\u0010-J#\u0010_\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b_\u00108J!\u0010`\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\u0006\u0010R\u001a\u00020\u0010H\u0016¢\u0006\u0004\b`\u0010!J#\u0010a\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\ba\u00108J#\u0010b\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010\u0010H\u0016¢\u0006\u0004\bb\u0010AJ!\u0010c\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\u0006\u0010R\u001a\u00020&H\u0016¢\u0006\u0004\bc\u0010-J#\u0010d\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010\u0010H\u0016¢\u0006\u0004\bd\u0010AJ!\u0010e\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\u0006\u0010R\u001a\u00020&H\u0016¢\u0006\u0004\be\u0010-J#\u0010f\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\bf\u00108J#\u0010g\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\bg\u00108J\u001f\u0010i\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\u00022\u0006\u0010h\u001a\u00020&H\u0016¢\u0006\u0004\bi\u0010-J#\u0010k\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010jH\u0016¢\u0006\u0004\bk\u0010lJ#\u0010m\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010jH\u0016¢\u0006\u0004\bm\u0010lJ#\u0010n\u001a\u00020\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00022\b\u0010R\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\bn\u00108R\u001a\u0010o\u001a\b\u0012\u0004\u0012\u00020\u00020W8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bo\u0010p¨\u0006s"}, d2 = {"Lcom/swmansion/rnscreens/ScreenStackHeaderConfigViewManager;", "Lcom/facebook/react/uimanager/ViewGroupManager;", "Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;", "Lcom/facebook/react/viewmanagers/RNSScreenStackHeaderConfigManagerInterface;", "<init>", "()V", "", "getName", "()Ljava/lang/String;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "reactContext", "createViewInstance", "(Lcom/facebook/react/uimanager/ThemedReactContext;)Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;", "parent", "Landroid/view/View;", "child", "", "index", "", "addView", "(Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;Landroid/view/View;I)V", "view", "Lcom/facebook/react/uimanager/ReactStylesDiffMap;", "props", "Lcom/facebook/react/uimanager/StateWrapper;", "stateWrapper", "", "updateState", "(Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;Lcom/facebook/react/uimanager/ReactStylesDiffMap;Lcom/facebook/react/uimanager/StateWrapper;)Ljava/lang/Object;", "onDropViewInstance", "(Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;)V", "removeAllViews", "removeViewAt", "(Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;I)V", "getChildCount", "(Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;)I", "getChildAt", "(Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;I)Landroid/view/View;", "", "needsCustomLayoutForChildren", "()Z", "onAfterUpdateTransaction", "config", "consumeTopInset", "setConsumeTopInset", "(Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;Z)V", "consumeLeftInset", "setConsumeLeftInset", "consumeRightInset", "setConsumeRightInset", "consumeBottomInset", "setConsumeBottomInset", "legacyTopInsetBehavior", "setLegacyTopInsetBehavior", AlertFragment.ARG_TITLE, "setTitle", "(Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;Ljava/lang/String;)V", "titleFontFamily", "setTitleFontFamily", "titleFontSize", "setTitleFontSize", "titleFontWeight", "setTitleFontWeight", "titleColor", "setTitleColor", "(Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;Ljava/lang/Integer;)V", ViewProps.BACKGROUND_COLOR, "setBackgroundColor", "hideShadow", "setHideShadow", "hideBackButton", "setHideBackButton", ViewProps.COLOR, "setColor", ViewProps.HIDDEN, "setHidden", "translucent", "setTranslucent", "backButtonInCustomView", "setBackButtonInCustomView", "direction", "setDirection", "value", "setSynchronousShadowStateUpdatesEnabled", "", "getExportedCustomDirectEventTypeConstants", "()Ljava/util/Map;", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "getDelegate", "()Lcom/facebook/react/uimanager/ViewManagerDelegate;", "setBackTitle", "setBackTitleFontFamily", "setBackTitleFontSize", "setBackTitleVisible", "setLargeTitle", "setLargeTitleFontFamily", "setLargeTitleFontSize", "setLargeTitleFontWeight", "setLargeTitleBackgroundColor", "setLargeTitleHideShadow", "setLargeTitleColor", "setDisableBackButtonMenu", "setBackButtonDisplayMode", "setBlurEffect", "topInsetEnabled", "setTopInsetEnabled", "Lcom/facebook/react/bridge/ReadableArray;", "setHeaderLeftBarButtonItems", "(Lcom/swmansion/rnscreens/ScreenStackHeaderConfig;Lcom/facebook/react/bridge/ReadableArray;)V", "setHeaderRightBarButtonItems", "setUserInterfaceStyle", "delegate", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Companion", "com/swmansion/rnscreens/d0", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class ScreenStackHeaderConfigViewManager extends ViewGroupManager<ScreenStackHeaderConfig> implements RNSScreenStackHeaderConfigManagerInterface<ScreenStackHeaderConfig> {

    @NotNull
    public static final d0 Companion = new d0();

    @NotNull
    public static final String REACT_CLASS = "RNSScreenStackHeaderConfig";

    @NotNull
    private final ViewManagerDelegate<ScreenStackHeaderConfig> delegate;

    public ScreenStackHeaderConfigViewManager() {
        super(null, 1, null);
        this.delegate = new RNSScreenStackHeaderConfigManagerDelegate(this);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ViewManagerDelegate<ScreenStackHeaderConfig> getDelegate() {
        return this.delegate;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        return v0.f(new Pair("topAttached", v0.f(new Pair("registrationName", "onAttached"))), new Pair("topDetached", v0.f(new Pair("registrationName", "onDetached"))));
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return REACT_CLASS;
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager, com.facebook.react.uimanager.IViewManagerWithChildren
    public boolean needsCustomLayoutForChildren() {
        return true;
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setBackButtonDisplayMode(ScreenStackHeaderConfig view, String value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setBackTitle(ScreenStackHeaderConfig view, String value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setBackTitleFontFamily(ScreenStackHeaderConfig view, String value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setBackTitleFontSize(ScreenStackHeaderConfig view, int value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setBackTitleVisible(ScreenStackHeaderConfig view, boolean value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setBlurEffect(ScreenStackHeaderConfig view, String value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setDisableBackButtonMenu(ScreenStackHeaderConfig view, boolean value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setHeaderLeftBarButtonItems(ScreenStackHeaderConfig view, ReadableArray value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setHeaderRightBarButtonItems(ScreenStackHeaderConfig view, ReadableArray value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setLargeTitle(ScreenStackHeaderConfig view, boolean value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setLargeTitleBackgroundColor(ScreenStackHeaderConfig view, Integer value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setLargeTitleColor(ScreenStackHeaderConfig view, Integer value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setLargeTitleFontFamily(ScreenStackHeaderConfig view, String value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setLargeTitleFontSize(ScreenStackHeaderConfig view, int value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setLargeTitleFontWeight(ScreenStackHeaderConfig view, String value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setLargeTitleHideShadow(ScreenStackHeaderConfig view, boolean value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setSynchronousShadowStateUpdatesEnabled(ScreenStackHeaderConfig config, boolean value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setTopInsetEnabled(@NotNull ScreenStackHeaderConfig config, boolean topInsetEnabled) {
        Intrinsics.checkNotNullParameter(config, "config");
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setUserInterfaceStyle(ScreenStackHeaderConfig view, String value) {
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ScreenStackHeaderConfig createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return new ScreenStackHeaderConfig(reactContext);
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onAfterUpdateTransaction(@NotNull ScreenStackHeaderConfig parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        super.onAfterUpdateTransaction((ScreenStackHeaderConfigViewManager) parent);
        parent.d();
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onDropViewInstance(@NotNull ScreenStackHeaderConfig view) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.V = true;
    }

    @Override // com.facebook.react.uimanager.IViewGroupManager
    public void removeAllViews(@NotNull ScreenStackHeaderConfig parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        parent.f6718y.clear();
        parent.b();
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setBackButtonInCustomView(@NotNull ScreenStackHeaderConfig config, boolean backButtonInCustomView) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setBackButtonInCustomView(backButtonInCustomView);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setBackgroundColor(@NotNull ScreenStackHeaderConfig config, Integer backgroundColor) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setBackgroundColor(backgroundColor);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setColor(@NotNull ScreenStackHeaderConfig config, Integer color) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setTintColor(color != null ? color.intValue() : 0);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setConsumeBottomInset(@NotNull ScreenStackHeaderConfig config, boolean consumeBottomInset) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setConsumeBottomInset(consumeBottomInset);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setConsumeLeftInset(@NotNull ScreenStackHeaderConfig config, boolean consumeLeftInset) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setConsumeLeftInset(consumeLeftInset);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setConsumeRightInset(@NotNull ScreenStackHeaderConfig config, boolean consumeRightInset) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setConsumeRightInset(consumeRightInset);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setConsumeTopInset(@NotNull ScreenStackHeaderConfig config, boolean consumeTopInset) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setConsumeTopInset(consumeTopInset);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setDirection(@NotNull ScreenStackHeaderConfig config, String direction) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setDirection(direction);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setHidden(@NotNull ScreenStackHeaderConfig config, boolean hidden) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setHidden(hidden);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setHideBackButton(@NotNull ScreenStackHeaderConfig config, boolean hideBackButton) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setHideBackButton(hideBackButton);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setHideShadow(@NotNull ScreenStackHeaderConfig config, boolean hideShadow) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setHideShadow(hideShadow);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setLegacyTopInsetBehavior(@NotNull ScreenStackHeaderConfig config, boolean legacyTopInsetBehavior) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setLegacyTopInsetBehavior(legacyTopInsetBehavior);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setTitle(@NotNull ScreenStackHeaderConfig config, String title) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setTitle(title);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setTitleColor(@NotNull ScreenStackHeaderConfig config, Integer titleColor) {
        Intrinsics.checkNotNullParameter(config, "config");
        if (titleColor != null) {
            config.setTitleColor(titleColor.intValue());
        }
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setTitleFontFamily(@NotNull ScreenStackHeaderConfig config, String titleFontFamily) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setTitleFontFamily(titleFontFamily);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setTitleFontSize(@NotNull ScreenStackHeaderConfig config, int titleFontSize) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setTitleFontSize(titleFontSize);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setTitleFontWeight(@NotNull ScreenStackHeaderConfig config, String titleFontWeight) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setTitleFontWeight(titleFontWeight);
    }

    @Override // com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface
    public void setTranslucent(@NotNull ScreenStackHeaderConfig config, boolean translucent) {
        Intrinsics.checkNotNullParameter(config, "config");
        config.setTranslucent(translucent);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public Object updateState(@NotNull ScreenStackHeaderConfig view, ReactStylesDiffMap props, StateWrapper stateWrapper) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setStateWrapper(stateWrapper);
        return super.updateState((ScreenStackHeaderConfigViewManager) view, props, stateWrapper);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void addView(@NotNull ScreenStackHeaderConfig parent, @NotNull View child, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(child, "child");
        if (child instanceof g0) {
            g0 child2 = (g0) child;
            parent.getClass();
            Intrinsics.checkNotNullParameter(child2, "child");
            parent.f6718y.add(index, child2);
            parent.b();
            return;
        }
        throw new JSApplicationCausedNativeException("Config children should be of type RNSScreenStackHeaderSubview");
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    @NotNull
    public View getChildAt(@NotNull ScreenStackHeaderConfig parent, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Object obj = parent.f6718y.get(index);
        Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
        return (g0) obj;
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public int getChildCount(@NotNull ScreenStackHeaderConfig parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        return parent.getConfigSubviewsCount();
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeViewAt(@NotNull ScreenStackHeaderConfig parent, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        parent.f6718y.remove(index);
        parent.b();
    }
}
