package com.swmansion.rnscreens.gamma.tabs.host;

import a5.h0;
import android.view.View;
import com.facebook.imagepipeline.nativecode.b;
import com.facebook.react.bridge.JSApplicationIllegalArgumentException;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.viewmanagers.RNSTabsHostAndroidManagerDelegate;
import com.facebook.react.viewmanagers.RNSTabsHostAndroidManagerInterface;
import hn.d;
import hn.f;
import hn.g;
import hn.l;
import in.a;
import in.e;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import java.util.function.Predicate;
import jn.c;
import kotlin.Metadata;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import s4.h;

@ReactModule(name = TabsHostViewManager.REACT_CLASS)
@Metadata(d1 = {"\u0000\\\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\b\n\u0002\u0010%\n\u0002\u0010\u0000\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\r\b\u0007\u0018\u0000 52\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u00016B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u000f\u0010\u0007\u001a\u00020\u0006H\u0016¢\u0006\u0004\b\u0007\u0010\bJ\u0017\u0010\u000b\u001a\u00020\u00022\u0006\u0010\n\u001a\u00020\tH\u0014¢\u0006\u0004\b\u000b\u0010\fJ\u0015\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00020\rH\u0014¢\u0006\u0004\b\u000e\u0010\u000fJ'\u0010\u0016\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0012\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b\u0016\u0010\u0017J\u001f\u0010\u0018\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0012\u001a\u00020\u0011H\u0016¢\u0006\u0004\b\u0018\u0010\u0019J\u001f\u0010\u001a\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b\u001a\u0010\u001bJ\u0017\u0010\u001c\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u0002H\u0016¢\u0006\u0004\b\u001c\u0010\u001dJ\u001b\u0010 \u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u001f0\u001eH\u0016¢\u0006\u0004\b \u0010!J\u001f\u0010#\u001a\u00020\u00152\u0006\u0010\n\u001a\u00020\t2\u0006\u0010\"\u001a\u00020\u0002H\u0014¢\u0006\u0004\b#\u0010$J\u0017\u0010%\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u0002H\u0016¢\u0006\u0004\b%\u0010\u001dJ!\u0010(\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\b\u0010'\u001a\u0004\u0018\u00010&H\u0016¢\u0006\u0004\b(\u0010)J\u001f\u0010+\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\u0006\u0010'\u001a\u00020*H\u0016¢\u0006\u0004\b+\u0010,J\u001f\u0010-\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\u0006\u0010'\u001a\u00020*H\u0016¢\u0006\u0004\b-\u0010,J!\u0010.\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\b\u0010'\u001a\u0004\u0018\u00010\u0013H\u0016¢\u0006\u0004\b.\u0010/J\u001f\u00100\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\u0006\u0010'\u001a\u00020*H\u0016¢\u0006\u0004\b0\u0010,J!\u00101\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\b\u0010'\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b1\u00102R\u001a\u00103\u001a\b\u0012\u0004\u0012\u00020\u00020\r8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b3\u00104¨\u00067"}, d2 = {"Lcom/swmansion/rnscreens/gamma/tabs/host/TabsHostViewManager;", "Lcom/facebook/react/uimanager/ViewGroupManager;", "Lin/a;", "Lcom/facebook/react/viewmanagers/RNSTabsHostAndroidManagerInterface;", "<init>", "()V", "", "getName", "()Ljava/lang/String;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "reactContext", "createViewInstance", "(Lcom/facebook/react/uimanager/ThemedReactContext;)Lin/a;", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "getDelegate", "()Lcom/facebook/react/uimanager/ViewManagerDelegate;", "parent", "Landroid/view/View;", "child", "", "index", "", "addView", "(Lin/a;Landroid/view/View;I)V", "removeView", "(Lin/a;Landroid/view/View;)V", "removeViewAt", "(Lin/a;I)V", "removeAllViews", "(Lin/a;)V", "", "", "getExportedCustomDirectEventTypeConstants", "()Ljava/util/Map;", "view", "addEventEmitters", "(Lcom/facebook/react/uimanager/ThemedReactContext;Lin/a;)V", "onDropViewInstance", "Lcom/facebook/react/bridge/ReadableMap;", "value", "setNavStateRequest", "(Lin/a;Lcom/facebook/react/bridge/ReadableMap;)V", "", "setRejectStaleNavStateUpdates", "(Lin/a;Z)V", "setTabBarHidden", "setNativeContainerBackgroundColor", "(Lin/a;Ljava/lang/Integer;)V", "setTabBarRespectsIMEInsets", "setColorScheme", "(Lin/a;Ljava/lang/String;)V", "delegate", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Companion", "in/e", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nTabsHostViewManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TabsHostViewManager.kt\ncom/swmansion/rnscreens/gamma/tabs/host/TabsHostViewManager\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,141:1\n1#2:142\n*E\n"})
/* loaded from: classes3.dex */
public final class TabsHostViewManager extends ViewGroupManager<a> implements RNSTabsHostAndroidManagerInterface<a> {

    @NotNull
    public static final e Companion = new e();

    @NotNull
    public static final String REACT_CLASS = "RNSTabsHostAndroid";

    @NotNull
    private final ViewManagerDelegate<a> delegate;

    public TabsHostViewManager() {
        super(null, 1, null);
        this.delegate = new RNSTabsHostAndroidManagerDelegate(this);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ViewManagerDelegate<a> getDelegate() {
        return this.delegate;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        return v0.h(b.u(jn.a.E), b.u(jn.b.f12984i), b.u(c.f12987v));
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return REACT_CLASS;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void addEventEmitters(@NotNull ThemedReactContext reactContext, @NotNull a view) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(view, "view");
        super.addEventEmitters(reactContext, (ThemedReactContext) view);
        if (view.getId() == -1) {
            throw new IllegalStateException("[RNScreens] TabsHost must have its tag set when registering event emitters");
        }
        ThemedReactContext reactContext2 = view.f10961d;
        int id2 = view.getId();
        Intrinsics.checkNotNullParameter(reactContext2, "reactContext");
        view.setEventEmitter$react_native_screens_release(new in.c(reactContext2, id2));
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public a createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return new a(reactContext);
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onDropViewInstance(@NotNull a view) {
        Intrinsics.checkNotNullParameter(view, "view");
        f fVar = view.f10965w;
        fVar.getClass();
        Intrinsics.checkNotNullParameter(view, "observer");
        h0 h0Var = fVar.K;
        h0Var.getClass();
        ArrayList arrayList = (ArrayList) h0Var.f176i;
        Intrinsics.checkNotNullParameter(view, "observer");
        if (!h0Var.f175e) {
            arrayList.remove(view);
        }
        if (h0Var.f175e) {
            throw new IllegalStateException("[RNScreens] TabsNavigationStateObserverRegistry.clear during emission");
        }
        arrayList.clear();
        fVar.setPendingNavigationStateUpdate$react_native_screens_release(null);
        ki.b.w(UIManagerHelper.INSTANCE, view.f10961d).removeUIManagerEventListener(view);
        super.onDropViewInstance((TabsHostViewManager) view);
    }

    @Override // com.facebook.react.uimanager.IViewGroupManager
    public void removeAllViews(@NotNull a parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        ArrayList arrayList = parent.f10962e;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((kn.b) it.next()).setTabsScreenDelegate$react_native_screens_release(null);
        }
        arrayList.clear();
        f fVar = parent.f10965w;
        fVar.f10124i.clear();
        g gVar = fVar.f10127x;
        gVar.a = true;
        gVar.f10129b = true;
        gVar.f10130c = true;
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeView(@NotNull a parent, @NotNull View child) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(child, "child");
        if (!(child instanceof kn.b)) {
            throw new IllegalArgumentException("[RNScreens] Attempt to detach child that is not of type javaClass");
        }
        kn.b tabsScreen = (kn.b) child;
        parent.getClass();
        Intrinsics.checkNotNullParameter(tabsScreen, "reactSubview");
        ArrayList arrayList = parent.f10962e;
        final d dVar = new d(tabsScreen, 1);
        final int i5 = 1;
        if (arrayList.removeIf(new Predicate() { // from class: hn.e
            @Override // java.util.function.Predicate
            public final boolean test(Object obj) {
                switch (i5) {
                }
                return ((Boolean) ((d) dVar).invoke(obj)).booleanValue();
            }
        })) {
            f fVar = parent.f10965w;
            fVar.getClass();
            Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
            ArrayList arrayList2 = fVar.f10124i;
            final d dVar2 = new d(tabsScreen, 0);
            final int i6 = 0;
            if (arrayList2.removeIf(new Predicate() { // from class: hn.e
                @Override // java.util.function.Predicate
                public final boolean test(Object obj) {
                    switch (i6) {
                    }
                    return ((Boolean) ((d) dVar2).invoke(obj)).booleanValue();
                }
            })) {
                g gVar = fVar.f10127x;
                gVar.a = true;
                gVar.f10129b = true;
                gVar.f10130c = true;
            }
            tabsScreen.setTabsScreenDelegate$react_native_screens_release(null);
        }
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsHostAndroidManagerInterface
    public void setColorScheme(@NotNull a view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (value != null) {
            int hashCode = value.hashCode();
            if (hashCode != 3075958) {
                if (hashCode != 102970646) {
                    if (hashCode == 1946980603 && value.equals("inherit")) {
                        view.setColorScheme$react_native_screens_release(rm.a.f17407d);
                        return;
                    }
                } else if (value.equals("light")) {
                    view.setColorScheme$react_native_screens_release(rm.a.f17408e);
                    return;
                }
            } else if (value.equals("dark")) {
                view.setColorScheme$react_native_screens_release(rm.a.f17409i);
                return;
            }
        }
        throw new JSApplicationIllegalArgumentException(h.f("[RNScreens] Invalid color scheme: ", value, "."));
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsHostAndroidManagerInterface
    public void setNativeContainerBackgroundColor(@NotNull a view, Integer value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setNativeContainerBackgroundColor(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsHostAndroidManagerInterface
    public void setNavStateRequest(@NotNull a view, ReadableMap value) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (value == null) {
            throw new IllegalArgumentException("[RNScreens] navStateRequest must not be nullish");
        }
        String selectedScreenKey = value.getString("selectedScreenKey");
        if (selectedScreenKey == null) {
            throw new IllegalArgumentException("Required value was null.");
        }
        int i5 = value.getInt("baseProvenance");
        hn.b actionOrigin = hn.b.f10115e;
        l navStateRequest = new l(selectedScreenKey, i5, actionOrigin);
        view.getClass();
        Intrinsics.checkNotNullParameter(navStateRequest, "navStateRequest");
        f fVar = view.f10965w;
        Intrinsics.checkNotNullParameter(selectedScreenKey, "selectedScreenKey");
        Intrinsics.checkNotNullParameter(actionOrigin, "actionOrigin");
        fVar.setPendingNavigationStateUpdate$react_native_screens_release(new l(selectedScreenKey, i5, actionOrigin));
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsHostAndroidManagerInterface
    public void setRejectStaleNavStateUpdates(@NotNull a view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setRejectStaleNavigationStateUpdates$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsHostAndroidManagerInterface
    public void setTabBarHidden(@NotNull a view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setTabBarHidden(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSTabsHostAndroidManagerInterface
    public void setTabBarRespectsIMEInsets(@NotNull a view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setTabBarRespectsIMEInsets(value);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void addView(@NotNull a parent, @NotNull View child, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(child, "child");
        if (child instanceof kn.b) {
            kn.b tabsScreen = (kn.b) child;
            parent.getClass();
            Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
            f fVar = parent.f10965w;
            int maxItemCount = fVar.getBottomNavigationView$react_native_screens_release().getMaxItemCount();
            if (index < maxItemCount) {
                parent.f10962e.add(index, tabsScreen);
                tabsScreen.setTabsScreenDelegate$react_native_screens_release(fVar);
                Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
                fVar.f10124i.add(index, new kn.e(tabsScreen));
                g gVar = fVar.f10127x;
                gVar.a = true;
                gVar.f10129b = true;
                gVar.f10130c = true;
                return;
            }
            throw new IllegalArgumentException(h.d(index, "[RNScreens] Attempt to insert TabsScreen at index ", maxItemCount, "; BottomNavigationView supports at most ", " items").toString());
        }
        throw new IllegalArgumentException("[RNScreens] Attempt to attach child that is not of type javaClass");
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeViewAt(@NotNull a parent, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        kn.b bVar = (kn.b) parent.f10962e.remove(index);
        f fVar = parent.f10965w;
        kn.b bVar2 = ((kn.e) fVar.f10124i.remove(index)).f13463d;
        g gVar = fVar.f10127x;
        gVar.a = true;
        gVar.f10129b = true;
        gVar.f10130c = true;
        bVar.setTabsScreenDelegate$react_native_screens_release(null);
    }
}
