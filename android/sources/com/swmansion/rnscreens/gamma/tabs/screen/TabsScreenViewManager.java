package com.swmansion.rnscreens.gamma.tabs.screen;

import android.content.Context;
import android.graphics.drawable.Drawable;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerDelegate;
import com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface;
import io.sentry.config.a;
import java.util.Map;
import kn.b;
import kn.d;
import kn.f;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@ReactModule(name = TabsScreenViewManager.REACT_CLASS)
@Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010%\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\f\b\u0007\u0018\u0000 ;2\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u0001<B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u000f\u0010\u0007\u001a\u00020\u0006H\u0016¢\u0006\u0004\b\u0007\u0010\bJ\u0017\u0010\u000b\u001a\u00020\u00022\u0006\u0010\n\u001a\u00020\tH\u0014¢\u0006\u0004\b\u000b\u0010\fJ\u0015\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00020\rH\u0014¢\u0006\u0004\b\u000e\u0010\u000fJ\u001b\u0010\u0012\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00110\u0010H\u0016¢\u0006\u0004\b\u0012\u0010\u0013J\u001f\u0010\u0016\u001a\u00020\u00152\u0006\u0010\n\u001a\u00020\t2\u0006\u0010\u0014\u001a\u00020\u0002H\u0014¢\u0006\u0004\b\u0016\u0010\u0017J!\u0010\u0019\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b\u0019\u0010\u001aJ!\u0010\u001b\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b\u001b\u0010\u001aJ!\u0010\u001c\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b\u001c\u0010\u001aJ!\u0010\u001e\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u001dH\u0016¢\u0006\u0004\b\u001e\u0010\u001fJ\u001f\u0010!\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\u0006\u0010\u0018\u001a\u00020 H\u0016¢\u0006\u0004\b!\u0010\"J!\u0010#\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b#\u0010\u001aJ!\u0010$\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b$\u0010\u001aJ!\u0010%\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b%\u0010\u001aJ!\u0010&\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b&\u0010\u001aJ!\u0010'\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u001dH\u0016¢\u0006\u0004\b'\u0010\u001fJ!\u0010(\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u001dH\u0016¢\u0006\u0004\b(\u0010\u001fJ!\u0010)\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u001dH\u0016¢\u0006\u0004\b)\u0010\u001fJ\u001f\u0010.\u001a\u00020-2\u0006\u0010+\u001a\u00020*2\u0006\u0010,\u001a\u00020\u001dH\u0002¢\u0006\u0004\b.\u0010/J#\u00102\u001a\u0004\u0018\u0001012\u0006\u0010+\u001a\u00020*2\b\u00100\u001a\u0004\u0018\u00010\u001dH\u0002¢\u0006\u0004\b2\u00103R\u001a\u00104\u001a\b\u0012\u0004\u0012\u00020\u00020\r8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b4\u00105R$\u0010+\u001a\u0004\u0018\u00010\t8\u0006@\u0006X\u0086\u000e¢\u0006\u0012\n\u0004\b+\u00106\u001a\u0004\b7\u00108\"\u0004\b9\u0010:¨\u0006="}, d2 = {"Lcom/swmansion/rnscreens/gamma/tabs/screen/TabsScreenViewManager;", "Lcom/facebook/react/uimanager/ViewGroupManager;", "Lkn/b;", "Lcom/facebook/react/viewmanagers/RNSTabsScreenAndroidManagerInterface;", "<init>", "()V", "", "getName", "()Ljava/lang/String;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "reactContext", "createViewInstance", "(Lcom/facebook/react/uimanager/ThemedReactContext;)Lkn/b;", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "getDelegate", "()Lcom/facebook/react/uimanager/ViewManagerDelegate;", "", "", "getExportedCustomDirectEventTypeConstants", "()Ljava/util/Map;", "view", "", "addEventEmitters", "(Lcom/facebook/react/uimanager/ThemedReactContext;Lkn/b;)V", "value", "setScreenKey", "(Lkn/b;Ljava/lang/String;)V", "setBadgeValue", "setTitle", "Lcom/facebook/react/bridge/ReadableMap;", "setSpecialEffects", "(Lkn/b;Lcom/facebook/react/bridge/ReadableMap;)V", "", "setPreventNativeSelection", "(Lkn/b;Z)V", "setTabBarItemTestID", "setTabBarItemAccessibilityLabel", "setDrawableIconResourceName", "setSelectedDrawableIconResourceName", "setImageIconResource", "setSelectedImageIconResource", "setStandardAppearance", "Landroid/content/Context;", "context", "appearance", "Lgn/b;", "parseAndroidTabsAppearance", "(Landroid/content/Context;Lcom/facebook/react/bridge/ReadableMap;)Lgn/b;", "itemStateAppearance", "Lgn/a;", "parseItemStateAppearance", "(Landroid/content/Context;Lcom/facebook/react/bridge/ReadableMap;)Lgn/a;", "delegate", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "getContext", "()Lcom/facebook/react/uimanager/ThemedReactContext;", "setContext", "(Lcom/facebook/react/uimanager/ThemedReactContext;)V", "Companion", "kn/f", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class TabsScreenViewManager extends ViewGroupManager<b> implements RNSTabsScreenAndroidManagerInterface<b> {

    @NotNull
    public static final f Companion = new f();

    @NotNull
    public static final String REACT_CLASS = "RNSTabsScreenAndroid";
    private ThemedReactContext context;

    @NotNull
    private final ViewManagerDelegate<b> delegate;

    public TabsScreenViewManager() {
        super(null, 1, null);
        this.delegate = new RNSTabsScreenAndroidManagerDelegate(this);
    }

    private final gn.b parseAndroidTabsAppearance(Context context, ReadableMap appearance) {
        return new gn.b(a.D(appearance, context, "tabBarBackgroundColor"), a.D(appearance, context, "tabBarItemRippleColor"), a.F(appearance, "tabBarItemLabelVisibilityMode"), appearance.hasKey("normal") ? parseItemStateAppearance(context, appearance.getMap("normal")) : null, appearance.hasKey("selected") ? parseItemStateAppearance(context, appearance.getMap("selected")) : null, appearance.hasKey("focused") ? parseItemStateAppearance(context, appearance.getMap("focused")) : null, appearance.hasKey("disabled") ? parseItemStateAppearance(context, appearance.getMap("disabled")) : null, a.D(appearance, context, "tabBarItemActiveIndicatorColor"), a.C(appearance, "tabBarItemActiveIndicatorEnabled"), a.F(appearance, "tabBarItemTitleFontFamily"), a.E(appearance, "tabBarItemTitleSmallLabelFontSize"), a.E(appearance, "tabBarItemTitleLargeLabelFontSize"), a.F(appearance, "tabBarItemTitleFontWeight"), a.F(appearance, "tabBarItemTitleFontStyle"), a.D(appearance, context, "tabBarItemBadgeBackgroundColor"), a.D(appearance, context, "tabBarItemBadgeTextColor"));
    }

    private final gn.a parseItemStateAppearance(Context context, ReadableMap itemStateAppearance) {
        if (itemStateAppearance == null) {
            return null;
        }
        return new gn.a(a.D(itemStateAppearance, context, "tabBarItemIconColor"), a.D(itemStateAppearance, context, "tabBarItemTitleFontColor"));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setImageIconResource$lambda$1(b bVar, Drawable drawable) {
        if (drawable != null) {
            bVar.setIcon(drawable);
        }
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setSelectedImageIconResource$lambda$2(b bVar, Drawable drawable) {
        if (drawable != null) {
            bVar.setSelectedIcon(drawable);
        }
        return Unit.a;
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public b createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(REACT_CLASS, "tag");
        Intrinsics.checkNotNullParameter("createViewInstance", "msg");
        return new b(reactContext);
    }

    public final ThemedReactContext getContext() {
        return this.context;
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ViewManagerDelegate<b> getDelegate() {
        return this.delegate;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        return v0.h(com.facebook.imagepipeline.nativecode.b.u(ln.a.f14114v), com.facebook.imagepipeline.nativecode.b.u(ln.a.f14112e), com.facebook.imagepipeline.nativecode.b.u(ln.a.f14115w), com.facebook.imagepipeline.nativecode.b.u(ln.a.f14113i));
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return REACT_CLASS;
    }

    public final void setContext(ThemedReactContext themedReactContext) {
        this.context = themedReactContext;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void addEventEmitters(@NotNull ThemedReactContext reactContext, @NotNull b view) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(view, "view");
        super.addEventEmitters(reactContext, (ThemedReactContext) view);
        if (view.getId() == -1) {
            throw new IllegalStateException("[RNScreens] TabsScreen must have its tag set when registering event emitters");
        }
        ThemedReactContext reactContext2 = view.f13456d;
        int id2 = view.getId();
        Intrinsics.checkNotNullParameter(reactContext2, "reactContext");
        view.setEventEmitter$react_native_screens_release(new d(reactContext2, id2));
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setBadgeValue(@NotNull b view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setBadgeValue(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setDrawableIconResourceName(@NotNull b view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setDrawableIconResourceName(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setImageIconResource(@NotNull b view, ReadableMap value) {
        Intrinsics.checkNotNullParameter(view, "view");
        String string = value != null ? value.getString("uri") : null;
        if (string != null) {
            Context context = view.getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            d9.a.D(context, string, new hn.d(view, 3));
        }
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setPreventNativeSelection(@NotNull b view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setPreventNativeSelection(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setScreenKey(@NotNull b view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setScreenKey(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setSelectedDrawableIconResourceName(@NotNull b view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setSelectedDrawableIconResourceName(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setSelectedImageIconResource(@NotNull b view, ReadableMap value) {
        Intrinsics.checkNotNullParameter(view, "view");
        String string = value != null ? value.getString("uri") : null;
        if (string != null) {
            Context context = view.getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            d9.a.D(context, string, new hn.d(view, 2));
        }
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setSpecialEffects(@NotNull b view, ReadableMap value) {
        boolean z5;
        ReadableMap map;
        Intrinsics.checkNotNullParameter(view, "view");
        boolean z6 = true;
        if (!(value != null ? value.hasKey("repeatedTabSelection") : false) || (map = value.getMap("repeatedTabSelection")) == null) {
            z5 = true;
        } else {
            z5 = map.hasKey("scrollToTop") ? map.getBoolean("scrollToTop") : true;
            if (map.hasKey("popToRoot")) {
                z6 = map.getBoolean("popToRoot");
            }
        }
        view.setShouldUseRepeatedTabSelectionPopToRootSpecialEffect(z6);
        view.setShouldUseRepeatedTabSelectionScrollToTopSpecialEffect(z5);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setStandardAppearance(@NotNull b view, ReadableMap value) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (value == null) {
            view.setAppearance$react_native_screens_release(null);
            return;
        }
        Context context = view.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        view.setAppearance$react_native_screens_release(parseAndroidTabsAppearance(context, value));
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setTabBarItemAccessibilityLabel(@NotNull b view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setTabBarItemAccessibilityLabel(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setTabBarItemTestID(@NotNull b view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setTabBarItemTestID(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface
    public void setTitle(@NotNull b view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setTabTitle(value);
    }
}
