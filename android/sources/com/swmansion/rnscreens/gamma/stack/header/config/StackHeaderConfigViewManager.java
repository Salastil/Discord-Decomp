package com.swmansion.rnscreens.gamma.stack.header.config;

import android.content.Context;
import android.util.Log;
import android.view.View;
import bn.j;
import bn.o;
import bn.p;
import bn.q;
import bn.t;
import com.discord.permissions.b;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.JSApplicationIllegalArgumentException;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.runtime.r;
import com.facebook.react.uimanager.ReactStylesDiffMap;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerDelegate;
import com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface;
import io.sentry.config.a;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import s4.h;
import um.f;
import zm.c;
import zm.d;
import zm.e;
import zm.i;

@ReactModule(name = StackHeaderConfigViewManager.REACT_CLASS)
@Metadata(d1 = {"\u0000v\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\r\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\b\b\u0011\u0018\u0000 P2\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u0001QB\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u000f\u0010\u0007\u001a\u00020\u0006H\u0016¢\u0006\u0004\b\u0007\u0010\bJ\u0017\u0010\u000b\u001a\u00020\u00022\u0006\u0010\n\u001a\u00020\tH\u0014¢\u0006\u0004\b\u000b\u0010\fJ\u001f\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\n\u001a\u00020\t2\u0006\u0010\r\u001a\u00020\u0002H\u0014¢\u0006\u0004\b\u000f\u0010\u0010J\u0015\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\u00020\u0011H\u0014¢\u0006\u0004\b\u0012\u0010\u0013J\u000f\u0010\u0015\u001a\u00020\u0014H\u0016¢\u0006\u0004\b\u0015\u0010\u0016J'\u0010\u001c\u001a\u00020\u000e2\u0006\u0010\u0017\u001a\u00020\u00022\u0006\u0010\u0019\u001a\u00020\u00182\u0006\u0010\u001b\u001a\u00020\u001aH\u0016¢\u0006\u0004\b\u001c\u0010\u001dJ\u001f\u0010\u001e\u001a\u00020\u000e2\u0006\u0010\u0017\u001a\u00020\u00022\u0006\u0010\r\u001a\u00020\u0018H\u0016¢\u0006\u0004\b\u001e\u0010\u001fJ\u001f\u0010 \u001a\u00020\u000e2\u0006\u0010\u0017\u001a\u00020\u00022\u0006\u0010\u001b\u001a\u00020\u001aH\u0016¢\u0006\u0004\b \u0010!J\u0017\u0010\"\u001a\u00020\u000e2\u0006\u0010\u0017\u001a\u00020\u0002H\u0016¢\u0006\u0004\b\"\u0010#J\u0017\u0010$\u001a\u00020\u001a2\u0006\u0010\u0017\u001a\u00020\u0002H\u0016¢\u0006\u0004\b$\u0010%J!\u0010&\u001a\u0004\u0018\u00010\u00182\u0006\u0010\u0017\u001a\u00020\u00022\u0006\u0010\u001b\u001a\u00020\u001aH\u0016¢\u0006\u0004\b&\u0010'J-\u0010-\u001a\u0004\u0018\u00010,2\u0006\u0010\r\u001a\u00020\u00022\b\u0010)\u001a\u0004\u0018\u00010(2\b\u0010+\u001a\u0004\u0018\u00010*H\u0016¢\u0006\u0004\b-\u0010.J\u0017\u0010/\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u0002H\u0014¢\u0006\u0004\b/\u0010#J\u0017\u00100\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u0002H\u0016¢\u0006\u0004\b0\u0010#J!\u00102\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\b\u00101\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b2\u00103J!\u00104\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\b\u00101\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b4\u00103J\u001f\u00105\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u00101\u001a\u00020\u0014H\u0016¢\u0006\u0004\b5\u00106J\u001f\u00107\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u00101\u001a\u00020\u0014H\u0016¢\u0006\u0004\b7\u00106J\u001f\u00108\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u00101\u001a\u00020\u0014H\u0016¢\u0006\u0004\b8\u00106J!\u00109\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\b\u00101\u001a\u0004\u0018\u00010\u001aH\u0016¢\u0006\u0004\b9\u0010:J!\u0010;\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\b\u00101\u001a\u0004\u0018\u00010\u001aH\u0016¢\u0006\u0004\b;\u0010:J!\u0010<\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\b\u00101\u001a\u0004\u0018\u00010\u001aH\u0016¢\u0006\u0004\b<\u0010:J!\u0010=\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\b\u00101\u001a\u0004\u0018\u00010\u0006H\u0016¢\u0006\u0004\b=\u00103J!\u0010?\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\b\u00101\u001a\u0004\u0018\u00010>H\u0016¢\u0006\u0004\b?\u0010@J\u001f\u0010A\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u00101\u001a\u00020\u0014H\u0016¢\u0006\u0004\bA\u00106J\u001f\u0010B\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u00101\u001a\u00020\u0014H\u0016¢\u0006\u0004\bB\u00106J\u001f\u0010C\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u00101\u001a\u00020\u0014H\u0016¢\u0006\u0004\bC\u00106J\u001f\u0010D\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u00101\u001a\u00020\u0014H\u0016¢\u0006\u0004\bD\u00106J\u001f\u0010E\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u00101\u001a\u00020\u0014H\u0016¢\u0006\u0004\bE\u00106J\u001f\u0010F\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u00101\u001a\u00020\u0014H\u0016¢\u0006\u0004\bF\u00106J\u001f\u0010H\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u00101\u001a\u00020GH\u0016¢\u0006\u0004\bH\u0010IJ\u001f\u0010L\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u00022\u0006\u0010K\u001a\u00020JH\u0016¢\u0006\u0004\bL\u0010MR\u001a\u0010N\u001a\b\u0012\u0004\u0012\u00020\u00020\u00118\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bN\u0010O¨\u0006R"}, d2 = {"Lcom/swmansion/rnscreens/gamma/stack/header/config/StackHeaderConfigViewManager;", "Lcom/facebook/react/uimanager/ViewGroupManager;", "Lzm/c;", "Lcom/facebook/react/viewmanagers/RNSStackHeaderConfigAndroidManagerInterface;", "<init>", "()V", "", "getName", "()Ljava/lang/String;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "reactContext", "createViewInstance", "(Lcom/facebook/react/uimanager/ThemedReactContext;)Lzm/c;", "view", "", "addEventEmitters", "(Lcom/facebook/react/uimanager/ThemedReactContext;Lzm/c;)V", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "getDelegate", "()Lcom/facebook/react/uimanager/ViewManagerDelegate;", "", "needsCustomLayoutForChildren", "()Z", "parent", "Landroid/view/View;", "child", "", "index", "addView", "(Lzm/c;Landroid/view/View;I)V", "removeView", "(Lzm/c;Landroid/view/View;)V", "removeViewAt", "(Lzm/c;I)V", "removeAllViews", "(Lzm/c;)V", "getChildCount", "(Lzm/c;)I", "getChildAt", "(Lzm/c;I)Landroid/view/View;", "Lcom/facebook/react/uimanager/ReactStylesDiffMap;", "props", "Lcom/facebook/react/uimanager/StateWrapper;", "stateWrapper", "", "updateState", "(Lzm/c;Lcom/facebook/react/uimanager/ReactStylesDiffMap;Lcom/facebook/react/uimanager/StateWrapper;)Ljava/lang/Object;", "onAfterUpdateTransaction", "onDropViewInstance", "value", "setType", "(Lzm/c;Ljava/lang/String;)V", "setTitle", "setHidden", "(Lzm/c;Z)V", "setTransparent", "setBackButtonHidden", "setBackButtonTintColorNormal", "(Lzm/c;Ljava/lang/Integer;)V", "setBackButtonTintColorPressed", "setBackButtonTintColorFocused", "setBackButtonDrawableIconResourceName", "Lcom/facebook/react/bridge/ReadableMap;", "setBackButtonImageIconResource", "(Lzm/c;Lcom/facebook/react/bridge/ReadableMap;)V", "setScrollFlagScroll", "setScrollFlagEnterAlways", "setScrollFlagEnterAlwaysCollapsed", "setScrollFlagExitUntilCollapsed", "setScrollFlagSnap", "setToolbarMenuGroupDividerEnabled", "Lcom/facebook/react/bridge/Dynamic;", "setToolbarMenu", "(Lzm/c;Lcom/facebook/react/bridge/Dynamic;)V", "Lcom/facebook/react/bridge/ReadableArray;", "updates", "updateToolbarMenuElements", "(Lzm/c;Lcom/facebook/react/bridge/ReadableArray;)V", "delegate", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Companion", "zm/e", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public class StackHeaderConfigViewManager extends ViewGroupManager<c> implements RNSStackHeaderConfigAndroidManagerInterface<c> {

    @NotNull
    public static final e Companion = new e();

    @NotNull
    public static final String REACT_CLASS = "RNSStackHeaderConfigAndroid";

    @NotNull
    private static final String TAG = "StackHeaderConfigViewManager";

    @NotNull
    private final ViewManagerDelegate<c> delegate;

    public StackHeaderConfigViewManager() {
        super(null, 1, null);
        this.delegate = new RNSStackHeaderConfigAndroidManagerDelegate(this);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ViewManagerDelegate<c> getDelegate() {
        return this.delegate;
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

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void addEventEmitters(@NotNull ThemedReactContext reactContext, @NotNull c view) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(view, "view");
        super.addEventEmitters(reactContext, (ThemedReactContext) view);
        if (view.getId() == -1) {
            throw new IllegalStateException("[RNScreens] StackHeaderConfig must have its tag set when registering event emitters");
        }
        ThemedReactContext reactContext2 = view.f21287d;
        int id2 = view.getId();
        Intrinsics.checkNotNullParameter(reactContext2, "reactContext");
        view.setEventEmitter$react_native_screens_release(new d(reactContext2, id2));
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public c createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return new c(reactContext);
    }

    /* JADX WARN: Type inference failed for: r5v1, types: [java.lang.Object, java.util.Map] */
    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onAfterUpdateTransaction(@NotNull c view) {
        Intrinsics.checkNotNullParameter(view, "view");
        super.onAfterUpdateTransaction((StackHeaderConfigViewManager) view);
        f fVar = view.S;
        ThemedReactContext themedReactContext = view.f21287d;
        fVar.a(themedReactContext, view.Q, view.R, new r(23, view));
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (Map.Entry entry : view.T.entrySet()) {
            String str = (String) entry.getKey();
            p pVar = (p) entry.getValue();
            f fVar2 = (f) view.U.get(str);
            if (fVar2 == null) {
                fVar2 = new f();
            }
            linkedHashMap.put(str, fVar2);
            fVar2.a(themedReactContext, pVar.a, pVar.f3093b, new b(view, str, 17));
        }
        view.U = linkedHashMap;
        Map map = view.V;
        LinkedHashMap linkedHashMap2 = new LinkedHashMap();
        for (Map.Entry entry2 : map.entrySet()) {
            if (view.T.containsKey((String) entry2.getKey())) {
                linkedHashMap2.put(entry2.getKey(), entry2.getValue());
            }
        }
        view.V = linkedHashMap2;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onDropViewInstance(@NotNull c view) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.getClass();
        ki.b.w(UIManagerHelper.INSTANCE, view.f21287d).removeUIManagerEventListener(view);
        t tVar = view.f21291f0;
        tVar.f3112c.clear();
        tVar.f3114e = true;
        tVar.f3113d = false;
        view.m1305setInvalidationFlagsgLpVZxs(0);
        view.f21289e = null;
        super.onDropViewInstance((StackHeaderConfigViewManager) view);
    }

    @Override // com.facebook.react.uimanager.IViewGroupManager
    public void removeAllViews(@NotNull c parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        an.c m1306getBackgroundSubview = parent.m1306getBackgroundSubview();
        if (m1306getBackgroundSubview != null) {
            parent.h(m1306getBackgroundSubview);
        }
        an.c m1308getLeadingSubview = parent.m1308getLeadingSubview();
        if (m1308getLeadingSubview != null) {
            parent.h(m1308getLeadingSubview);
        }
        an.c m1307getCenterSubview = parent.m1307getCenterSubview();
        if (m1307getCenterSubview != null) {
            parent.h(m1307getCenterSubview);
        }
        an.c m1309getTrailingSubview = parent.m1309getTrailingSubview();
        if (m1309getTrailingSubview != null) {
            parent.h(m1309getTrailingSubview);
        }
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeView(@NotNull c parent, @NotNull View view) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(view, "view");
        if (view instanceof an.c) {
            parent.h((an.c) view);
            return;
        }
        throw new IllegalArgumentException(("[RNScreens] StackHeaderConfig can only have children of type StackHeaderSubview. Attempted to remove " + view + " instead.").toString());
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setBackButtonDrawableIconResourceName(@NotNull c view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setBackButtonDrawableIconResourceName$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setBackButtonHidden(@NotNull c view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setBackButtonHidden$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setBackButtonImageIconResource(@NotNull c view, ReadableMap value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setBackButtonImageIconUri$react_native_screens_release(value != null ? value.getString("uri") : null);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setBackButtonTintColorFocused(@NotNull c view, Integer value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setBackButtonTintColorFocused$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setBackButtonTintColorNormal(@NotNull c view, Integer value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setBackButtonTintColorNormal$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setBackButtonTintColorPressed(@NotNull c view, Integer value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setBackButtonTintColorPressed$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setHidden(@NotNull c view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setHidden$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setScrollFlagEnterAlways(@NotNull c view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setScrollFlagEnterAlways$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setScrollFlagEnterAlwaysCollapsed(@NotNull c view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setScrollFlagEnterAlwaysCollapsed$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setScrollFlagExitUntilCollapsed(@NotNull c view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setScrollFlagExitUntilCollapsed$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setScrollFlagScroll(@NotNull c view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setScrollFlagScroll$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setScrollFlagSnap(@NotNull c view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setScrollFlagSnap$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setTitle(@NotNull c view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (value == null) {
            value = "";
        }
        view.setTitle$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setToolbarMenu(@NotNull c view, @NotNull Dynamic value) {
        Pair pair;
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(value, "value");
        Context context = view.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(value, "value");
        if (value.isNull()) {
            m0 m0Var = m0.f13512d;
            pair = new Pair(new bn.e(m0Var, m0Var), v0.d());
        } else {
            ReadableMap asMap = (value.isNull() || value.getType() != ReadableType.Map) ? null : value.asMap();
            if (asMap == null) {
                throw new JSApplicationIllegalArgumentException("[RNScreens] toolbarMenu must be an object.");
            }
            LinkedHashMap linkedHashMap = new LinkedHashMap();
            pair = new Pair(new bn.e(com.facebook.imagepipeline.nativecode.b.y(asMap), com.facebook.imagepipeline.nativecode.b.w(context, asMap, linkedHashMap)), linkedHashMap);
        }
        bn.e eVar = (bn.e) pair.f13474d;
        Map<String, p> map = (Map) pair.f13475e;
        view.setToolbarMenu$react_native_screens_release(eVar);
        view.setToolbarMenuItemIconSourceMap$react_native_screens_release(map);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setToolbarMenuGroupDividerEnabled(@NotNull c view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setToolbarMenuGroupDividerEnabled$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setTransparent(@NotNull c view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setTransparent$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void setType(@NotNull c view, String value) {
        i iVar;
        Intrinsics.checkNotNullParameter(view, "view");
        if (value != null) {
            int hashCode = value.hashCode();
            if (hashCode != -1078030475) {
                if (hashCode != 102742843) {
                    if (hashCode == 109548807 && value.equals("small")) {
                        iVar = i.f21298d;
                        view.setType$react_native_screens_release(iVar);
                        return;
                    }
                } else if (value.equals("large")) {
                    iVar = i.f21300i;
                    view.setType$react_native_screens_release(iVar);
                    return;
                }
            } else if (value.equals("medium")) {
                iVar = i.f21299e;
                view.setType$react_native_screens_release(iVar);
                return;
            }
        }
        throw new JSApplicationIllegalArgumentException(h.f("[RNScreens] Invalid StackHeaderConfig type: ", value, "."));
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public Object updateState(@NotNull c view, ReactStylesDiffMap props, StateWrapper stateWrapper) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setStateWrapper$react_native_screens_release(stateWrapper);
        return super.updateState((StackHeaderConfigViewManager) view, props, stateWrapper);
    }

    @Override // com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface
    public void updateToolbarMenuElements(@NotNull c view, @NotNull ReadableArray updates) {
        String string;
        ReadableArray updates2 = updates;
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(updates2, "updates");
        ArrayList batch = new ArrayList(updates2.size());
        int size = updates2.size();
        int i5 = 0;
        while (i5 < size) {
            ReadableMap map = updates2.getMap(i5);
            if (map == null) {
                Log.w(TAG, "[RNScreens] Skipping toolbar menu update at index " + i5 + ": not an object.");
            } else {
                String string2 = map.getString(StackTraceHelper.ID_KEY);
                if (string2 == null) {
                    Log.w(TAG, "[RNScreens] Skipping toolbar menu update at index " + i5 + ": missing 'id'.");
                } else {
                    Context context = view.getContext();
                    Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
                    Intrinsics.checkNotNullParameter(context, "context");
                    Intrinsics.checkNotNullParameter(map, "map");
                    bn.d I = com.facebook.imagepipeline.nativecode.b.I(map, AlertFragment.ARG_TITLE);
                    bn.d I2 = com.facebook.imagepipeline.nativecode.b.I(map, "titleCondensed");
                    bn.d I3 = com.facebook.imagepipeline.nativecode.b.I(map, "tooltipText");
                    bn.d I4 = com.facebook.imagepipeline.nativecode.b.I(map, ViewProps.ACCESSIBILITY_LABEL);
                    Boolean G = com.facebook.imagepipeline.nativecode.b.G(map, ViewProps.HIDDEN);
                    Boolean G2 = com.facebook.imagepipeline.nativecode.b.G(map, "disabled");
                    q qVar = o.a;
                    if (!map.hasKey("showAsAction")) {
                        qVar = null;
                    } else if (!map.isNull("showAsAction") && (string = map.getString("showAsAction")) != null) {
                        qVar = com.facebook.imagepipeline.nativecode.b.L(string);
                    }
                    bn.i iVar = new bn.i(I, I2, I3, I4, G, G2, qVar, null, com.facebook.imagepipeline.nativecode.b.H(map, context, "iconTintColorNormal"), com.facebook.imagepipeline.nativecode.b.H(map, context, "iconTintColorPressed"), com.facebook.imagepipeline.nativecode.b.H(map, context, "iconTintColorFocused"), com.facebook.imagepipeline.nativecode.b.H(map, context, "iconTintColorDisabled"), com.facebook.imagepipeline.nativecode.b.G(map, "checked"), com.facebook.imagepipeline.nativecode.b.I(map, "menuTitle"));
                    Intrinsics.checkNotNullParameter(map, "map");
                    batch.add(new j(string2, iVar, (map.hasKey("drawableIconResourceName") || map.hasKey("imageIconResource")) ? new p(map.getString("drawableIconResourceName"), a.B(map)) : null));
                }
            }
            i5++;
            updates2 = updates;
        }
        view.getClass();
        Intrinsics.checkNotNullParameter(batch, "updates");
        t tVar = view.f21291f0;
        tVar.getClass();
        Intrinsics.checkNotNullParameter(batch, "batch");
        if (batch.isEmpty()) {
            return;
        }
        tVar.f3112c.addLast(batch);
        if (tVar.f3113d) {
            return;
        }
        tVar.a();
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void addView(@NotNull c parent, @NotNull View child, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(child, "child");
        if (child instanceof an.c) {
            parent.c((an.c) child);
            return;
        }
        throw new IllegalArgumentException(("[RNScreens] StackHeaderConfig can only have children of type StackHeaderSubview. Received " + child + " instead.").toString());
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public View getChildAt(@NotNull c parent, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        return parent.f(index);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public int getChildCount(@NotNull c parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        return parent.getConfigSubviewsCount$react_native_screens_release();
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeViewAt(@NotNull c parent, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        an.c f2 = parent.f(index);
        if (f2 != null) {
            parent.h(f2);
        }
    }
}
