package com.swmansion.rnscreens.gamma.modals.formsheet;

import android.animation.AnimatorSet;
import android.graphics.drawable.Drawable;
import android.util.Log;
import android.view.View;
import android.widget.FrameLayout;
import androidx.core.view.j0;
import androidx.core.view.s0;
import br.a;
import com.facebook.imagepipeline.nativecode.b;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ReactStylesDiffMap;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.viewmanagers.RNSFormSheetHostManagerDelegate;
import com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import eightbitlab.com.blurview.f;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.WeakHashMap;
import kotlin.Metadata;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import lh.i;
import org.jetbrains.annotations.NotNull;
import wm.c;
import wm.d;
import wm.e;
import wm.l;
import wm.m;
import wm.n;
import wm.o;
import wm.q;
import wm.r;
import wm.s;
import wm.w;
import wm.x;

@ReactModule(name = FormSheetHostViewManager.REACT_CLASS)
@Metadata(d1 = {"\u0000r\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\b\n\u0002\u0010%\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\f\b\u0007\u0018\u0000 D2\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u0001EB\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0015\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00020\u0006H\u0014¢\u0006\u0004\b\u0007\u0010\bJ\u000f\u0010\n\u001a\u00020\tH\u0016¢\u0006\u0004\b\n\u0010\u000bJ\u0017\u0010\u000e\u001a\u00020\u00022\u0006\u0010\r\u001a\u00020\fH\u0014¢\u0006\u0004\b\u000e\u0010\u000fJ'\u0010\u0016\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0012\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b\u0016\u0010\u0017J\u001f\u0010\u0018\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0012\u001a\u00020\u0011H\u0016¢\u0006\u0004\b\u0018\u0010\u0019J\u001f\u0010\u001a\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b\u001a\u0010\u001bJ\u0017\u0010\u001c\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u0002H\u0016¢\u0006\u0004\b\u001c\u0010\u001dJ\u0017\u0010\u001e\u001a\u00020\u00132\u0006\u0010\u0010\u001a\u00020\u0002H\u0016¢\u0006\u0004\b\u001e\u0010\u001fJ!\u0010 \u001a\u0004\u0018\u00010\u00112\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b \u0010!J\u001f\u0010%\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\u0006\u0010$\u001a\u00020#H\u0016¢\u0006\u0004\b%\u0010&J!\u0010(\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\b\u0010$\u001a\u0004\u0018\u00010'H\u0016¢\u0006\u0004\b(\u0010)J\u001f\u0010*\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\u0006\u0010$\u001a\u00020#H\u0016¢\u0006\u0004\b*\u0010&J\u001f\u0010,\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\u0006\u0010$\u001a\u00020+H\u0016¢\u0006\u0004\b,\u0010-J\u001f\u0010.\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\u0006\u0010$\u001a\u00020\u0013H\u0016¢\u0006\u0004\b.\u0010\u001bJ\u001f\u0010/\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\u0006\u0010$\u001a\u00020\u0013H\u0016¢\u0006\u0004\b/\u0010\u001bJ\u001f\u00100\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\u0006\u0010$\u001a\u00020#H\u0016¢\u0006\u0004\b0\u0010&J\u001f\u00101\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\u0006\u0010$\u001a\u00020#H\u0016¢\u0006\u0004\b1\u0010&J!\u00102\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u00022\b\u0010$\u001a\u0004\u0018\u00010\u0013H\u0016¢\u0006\u0004\b2\u00103J\u001b\u00106\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020504H\u0016¢\u0006\u0004\b6\u00107J-\u0010<\u001a\u0004\u0018\u0001052\u0006\u0010\"\u001a\u00020\u00022\b\u00109\u001a\u0004\u0018\u0001082\b\u0010;\u001a\u0004\u0018\u00010:H\u0016¢\u0006\u0004\b<\u0010=J\u0017\u0010>\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u0002H\u0014¢\u0006\u0004\b>\u0010\u001dJ\u001f\u0010?\u001a\u00020\u00152\u0006\u0010\r\u001a\u00020\f2\u0006\u0010\"\u001a\u00020\u0002H\u0014¢\u0006\u0004\b?\u0010@J\u0017\u0010A\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u0002H\u0016¢\u0006\u0004\bA\u0010\u001dR\u001a\u0010B\u001a\b\u0012\u0004\u0012\u00020\u00020\u00068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bB\u0010C¨\u0006F"}, d2 = {"Lcom/swmansion/rnscreens/gamma/modals/formsheet/FormSheetHostViewManager;", "Lcom/facebook/react/uimanager/ViewGroupManager;", "Lwm/q;", "Lcom/facebook/react/viewmanagers/RNSFormSheetHostManagerInterface;", "<init>", "()V", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "getDelegate", "()Lcom/facebook/react/uimanager/ViewManagerDelegate;", "", "getName", "()Ljava/lang/String;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "reactContext", "createViewInstance", "(Lcom/facebook/react/uimanager/ThemedReactContext;)Lwm/q;", "parent", "Landroid/view/View;", "child", "", "index", "", "addView", "(Lwm/q;Landroid/view/View;I)V", "removeView", "(Lwm/q;Landroid/view/View;)V", "removeViewAt", "(Lwm/q;I)V", "removeAllViews", "(Lwm/q;)V", "getChildCount", "(Lwm/q;)I", "getChildAt", "(Lwm/q;I)Landroid/view/View;", "view", "", "value", "setIsOpen", "(Lwm/q;Z)V", "Lcom/facebook/react/bridge/ReadableArray;", "setDetents", "(Lwm/q;Lcom/facebook/react/bridge/ReadableArray;)V", "setPrefersGrabberVisible", "", "setPreferredCornerRadius", "(Lwm/q;F)V", "setLargestUndimmedDetentIndex", "setInitialDetentIndex", "setPrefersScrollingExpandsWhenScrolledToEdge", "setPreventNativeDismiss", "setNativeContainerBackgroundColor", "(Lwm/q;Ljava/lang/Integer;)V", "", "", "getExportedCustomDirectEventTypeConstants", "()Ljava/util/Map;", "Lcom/facebook/react/uimanager/ReactStylesDiffMap;", "props", "Lcom/facebook/react/uimanager/StateWrapper;", "stateWrapper", "updateState", "(Lwm/q;Lcom/facebook/react/uimanager/ReactStylesDiffMap;Lcom/facebook/react/uimanager/StateWrapper;)Ljava/lang/Object;", "onAfterUpdateTransaction", "addEventEmitters", "(Lcom/facebook/react/uimanager/ThemedReactContext;Lwm/q;)V", "onDropViewInstance", "delegate", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Companion", "wm/s", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nFormSheetHostViewManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FormSheetHostViewManager.kt\ncom/swmansion/rnscreens/gamma/modals/formsheet/FormSheetHostViewManager\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,169:1\n1#2:170\n*E\n"})
/* loaded from: classes3.dex */
public final class FormSheetHostViewManager extends ViewGroupManager<q> implements RNSFormSheetHostManagerInterface<q> {

    @NotNull
    public static final s Companion = new s();

    @NotNull
    public static final String REACT_CLASS = "RNSFormSheetHost";

    @NotNull
    private final ViewManagerDelegate<q> delegate;

    public FormSheetHostViewManager() {
        super(null, 1, null);
        this.delegate = new RNSFormSheetHostManagerDelegate(this);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ViewManagerDelegate<q> getDelegate() {
        return this.delegate;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        return v0.h(b.u(o.f19934v), b.u(o.f19935w), b.u(o.E), b.u(o.f19932e), b.u(o.F), b.u(o.f19933i), b.u(l.f19920e));
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return REACT_CLASS;
    }

    @Override // com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface
    public void setLargestUndimmedDetentIndex(@NotNull q view, int value) {
        Intrinsics.checkNotNullParameter(view, "view");
    }

    @Override // com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface
    public void setPrefersScrollingExpandsWhenScrolledToEdge(@NotNull q view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
    }

    @Override // com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface
    public void setPreventNativeDismiss(@NotNull q view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void addEventEmitters(@NotNull ThemedReactContext reactContext, @NotNull q view) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(view, "view");
        super.addEventEmitters(reactContext, (ThemedReactContext) view);
        if (view.getId() == -1) {
            throw new IllegalStateException("[RNScreens] FormSheetHost must have its tag set when registering event emitters");
        }
        ThemedReactContext reactContext2 = view.f19937d;
        int id2 = view.getId();
        Intrinsics.checkNotNullParameter(reactContext2, "reactContext");
        view.setEventEmitter$react_native_screens_release(new r(reactContext2, id2));
        n nVar = view.H;
        nVar.f19931i.setValue(nVar, n.j[0], view.getEventEmitter$react_native_screens_release());
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public q createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return new q(reactContext);
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onAfterUpdateTransaction(@NotNull q view) {
        a aVar;
        Intrinsics.checkNotNullParameter(view, "view");
        super.onAfterUpdateTransaction((FormSheetHostViewManager) view);
        boolean z5 = view.f19940v;
        List list = view.E;
        boolean z6 = view.f19941w;
        int i5 = view.F;
        float f2 = view.f19942x;
        Integer num = view.f19943y;
        e newConfig = new e(z5, list, z6, i5, f2, num);
        n nVar = view.H;
        d dVar = nVar.f19928f;
        Intrinsics.checkNotNullParameter(newConfig, "newConfig");
        e eVar = nVar.a;
        nVar.a = newConfig;
        boolean z7 = !eVar.a && z5;
        if (!Intrinsics.areEqual(eVar.f19906b, list) || z7) {
            p0.a aVar2 = nVar.f19929g;
            Double valueOf = Double.valueOf(1.0d);
            if (list.isEmpty()) {
                aVar = new a(b0.c(valueOf), 1);
            } else {
                try {
                    aVar = new a(list, 1);
                } catch (IllegalArgumentException e9) {
                    Log.e("[RNScreens]", "Invalid FormSheet detents: " + list + ". Falling back to large detent.", e9);
                    aVar = new a(b0.c(valueOf), 1);
                }
            }
            aVar2.k = aVar;
            aVar2.f16262d = newConfig.f19908d;
            aVar2.f16263e = z7;
            aVar2.i();
        }
        boolean z8 = eVar.f19907c;
        boolean z10 = newConfig.f19907c;
        if (z8 != z10) {
            nVar.f19924b.setGrabberVisible$react_native_screens_release(z10);
        }
        float f10 = eVar.f19909e;
        float f11 = newConfig.f19909e;
        if (f10 != f11 && dVar.f19905h) {
            dVar.f19899b = f11;
            FrameLayout frameLayout = dVar.a;
            if (frameLayout != null) {
                Drawable background = frameLayout.getBackground();
                i iVar = background instanceof i ? (i) background : null;
                if (iVar != null) {
                    dVar.b(iVar);
                } else if (!dVar.f19901d) {
                    dVar.f19901d = true;
                    frameLayout.addOnLayoutChangeListener(new c(dVar, 1));
                }
            }
        }
        if (!Intrinsics.areEqual(eVar.f19910f, num)) {
            dVar.f19900c = num;
            FrameLayout frameLayout2 = dVar.a;
            if (frameLayout2 != null) {
                Drawable background2 = frameLayout2.getBackground();
                i iVar2 = background2 instanceof i ? (i) background2 : null;
                if (iVar2 != null) {
                    dVar.a(iVar2);
                } else if (!dVar.f19902e) {
                    dVar.f19902e = true;
                    frameLayout2.addOnLayoutChangeListener(new c(dVar, 0));
                }
            }
        }
        boolean z11 = eVar.a;
        boolean z12 = newConfig.a;
        if (z11 != z12) {
            w wVar = nVar.f19930h;
            wVar.f19952g = z12;
            wVar.a();
        }
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onDropViewInstance(@NotNull q view) {
        Intrinsics.checkNotNullParameter(view, "view");
        n nVar = view.H;
        f fVar = nVar.f19927e;
        if (fVar != null) {
            ((BottomSheetBehavior) fVar.f8129e).I((com.swmansion.rnscreens.r) fVar.f8130f);
        }
        w wVar = nVar.f19930h;
        AnimatorSet animatorSet = wVar.f19954i;
        if (animatorSet != null) {
            animatorSet.cancel();
        }
        wVar.f19954i = null;
        wVar.a.setOnShowListener(null);
        wVar.f19951f = x.f19955d;
        k2.r rVar = wVar.j;
        hc.b bVar = (hc.b) rVar.f13143i;
        ((vm.a) bVar.f9625c).setOnClickListener(new com.discord.chat.presentation.message.system.b(7));
        ((m) rVar.f13142e).setOnCancelListener(null);
        wm.f fVar2 = (wm.f) nVar.f19929g.f16266h;
        WeakHashMap weakHashMap = s0.a;
        j0.m(fVar2, null);
        nVar.f19925c.dismiss();
        super.onDropViewInstance((FormSheetHostViewManager) view);
    }

    @Override // com.facebook.react.uimanager.IViewGroupManager
    public void removeAllViews(@NotNull q parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        parent.G.removeAllViews();
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeView(@NotNull q parent, @NotNull View child) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(child, "child");
        parent.getClass();
        Intrinsics.checkNotNullParameter(child, "child");
        parent.G.removeView(child);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v0, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r1v1, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r1v2, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r6v0, types: [java.lang.Object, wm.q] */
    @Override // com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface
    public void setDetents(@NotNull q view, ReadableArray value) {
        ?? r12;
        Intrinsics.checkNotNullParameter(view, "view");
        if (value != null) {
            int size = value.size();
            r12 = new ArrayList(size);
            for (int i5 = 0; i5 < size; i5++) {
                r12.add(Double.valueOf(value.getDouble(i5)));
            }
        } else {
            r12 = m0.f13512d;
        }
        view.setDetents$react_native_screens_release(r12);
    }

    @Override // com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface
    public void setInitialDetentIndex(@NotNull q view, int value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setInitialDetentIndex$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface
    public void setIsOpen(@NotNull q view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setOpen$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface
    public void setNativeContainerBackgroundColor(@NotNull q view, Integer value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setNativeContainerBackgroundColor$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface
    public void setPreferredCornerRadius(@NotNull q view, float value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setPreferredCornerRadius$react_native_screens_release(value);
    }

    @Override // com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface
    public void setPrefersGrabberVisible(@NotNull q view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setPrefersGrabberVisible$react_native_screens_release(value);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public Object updateState(@NotNull q view, ReactStylesDiffMap props, StateWrapper stateWrapper) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setStateWrapper$react_native_screens_release(stateWrapper);
        return super.updateState((FormSheetHostViewManager) view, props, stateWrapper);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void addView(@NotNull q parent, @NotNull View child, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(child, "child");
        parent.getClass();
        Intrinsics.checkNotNullParameter(child, "child");
        parent.G.addView(child, index);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public View getChildAt(@NotNull q parent, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        return parent.G.getChildAt(index);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public int getChildCount(@NotNull q parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        return parent.getReactSubviewCount$react_native_screens_release();
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeViewAt(@NotNull q parent, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        parent.G.removeViewAt(index);
    }
}
