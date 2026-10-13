package in;

import a5.h0;
import android.view.ViewTreeObserver;
import android.widget.FrameLayout;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.UIManagerListener;
import com.facebook.react.modules.core.ReactChoreographer;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.google.firebase.messaging.s;
import hn.f;
import hn.i;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class a extends FrameLayout implements i, ViewTreeObserver.OnPreDrawListener, UIManagerListener {
    public static final /* synthetic */ KProperty[] E = {com.discord.chat.bridge.botuikit.a.p(a.class, "nativeContainerBackgroundColor", "getNativeContainerBackgroundColor()Ljava/lang/Integer;", 0)};

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f10961d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f10962e;

    /* renamed from: i, reason: collision with root package name */
    public final d f10963i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f10964v;

    /* renamed from: w, reason: collision with root package name */
    public final f f10965w;

    /* renamed from: x, reason: collision with root package name */
    public c f10966x;

    /* renamed from: y, reason: collision with root package name */
    public final an.b f10967y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f10961d = reactContext;
        this.f10962e = new ArrayList();
        this.f10963i = new d(this, new bm.c(0, this, a.class, "forceSubtreeMeasureAndLayoutPass", "forceSubtreeMeasureAndLayoutPass()V", 0, 3));
        f fVar = new f(reactContext);
        fVar.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        this.f10965w = fVar;
        this.f10967y = new an.b(2, this);
        addView(fVar);
        Intrinsics.checkNotNullParameter(this, "observer");
        h0 h0Var = fVar.K;
        ArrayList arrayList = (ArrayList) h0Var.f176i;
        Intrinsics.checkNotNullParameter(this, "observer");
        if (h0Var.f175e || arrayList.contains(this)) {
            throw new IllegalStateException("[RNScreens] Failed to register TabsHost as navigation state observer");
        }
        arrayList.add(this);
        ki.b.w(UIManagerHelper.INSTANCE, reactContext).addUIManagerEventListener(this);
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didDispatchMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
        this.f10965w.f();
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didScheduleMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @NotNull
    public final rm.a getColorScheme$react_native_screens_release() {
        return this.f10965w.getColorScheme$react_native_screens_release();
    }

    @NotNull
    public final c getEventEmitter$react_native_screens_release() {
        c cVar = this.f10966x;
        if (cVar != null) {
            return cVar;
        }
        Intrinsics.throwUninitializedPropertyAccessException("eventEmitter");
        return null;
    }

    public final Integer getNativeContainerBackgroundColor() {
        return (Integer) this.f10967y.getValue(this, E[0]);
    }

    @NotNull
    public final ThemedReactContext getReactContext() {
        return this.f10961d;
    }

    public final boolean getRejectStaleNavigationStateUpdates$react_native_screens_release() {
        return this.f10965w.getRejectStaleNavigationStateUpdates$react_native_screens_release();
    }

    public final boolean getTabBarHidden() {
        return this.f10965w.getTabBarHidden$react_native_screens_release();
    }

    public final boolean getTabBarRespectsIMEInsets() {
        return this.f10965w.getTabBarRespectsIMEInsets$react_native_screens_release();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        String msg = "TabsHost [" + getId() + "] attached to window";
        Intrinsics.checkNotNullParameter("TabsHost", "tag");
        Intrinsics.checkNotNullParameter(msg, "msg");
        getViewTreeObserver().addOnPreDrawListener(this);
        super.onAttachedToWindow();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        getViewTreeObserver().removeOnPreDrawListener(this);
        this.f10964v = false;
        super.onDetachedFromWindow();
    }

    @Override // android.view.ViewTreeObserver.OnPreDrawListener
    public final boolean onPreDraw() {
        this.f10964v = true;
        return true;
    }

    @Override // android.view.View, android.view.ViewParent
    public final void requestLayout() {
        super.requestLayout();
        d dVar = this.f10963i;
        if (dVar != null) {
            if (this.f10964v) {
                if (dVar.f10971d) {
                    return;
                }
                dVar.f10971d = true;
                ReactChoreographer.INSTANCE.getInstance().postFrameCallback(ReactChoreographer.CallbackType.NATIVE_ANIMATED_MODULE, new com.facebook.react.modules.core.b(1, dVar));
                return;
            }
            if (dVar.f10970c) {
                return;
            }
            dVar.f10970c = true;
            dVar.a.post(new s(22, dVar));
        }
    }

    public final void setColorScheme$react_native_screens_release(@NotNull rm.a aVar) {
        Intrinsics.checkNotNullParameter(aVar, "<set-?>");
        this.f10965w.setColorScheme$react_native_screens_release(aVar);
    }

    public final void setEventEmitter$react_native_screens_release(@NotNull c cVar) {
        Intrinsics.checkNotNullParameter(cVar, "<set-?>");
        this.f10966x = cVar;
    }

    public final void setNativeContainerBackgroundColor(Integer num) {
        this.f10967y.setValue(this, E[0], num);
    }

    public final void setRejectStaleNavigationStateUpdates$react_native_screens_release(boolean z5) {
        this.f10965w.setRejectStaleNavigationStateUpdates$react_native_screens_release(z5);
    }

    public final void setTabBarHidden(boolean z5) {
        this.f10965w.setTabBarHidden$react_native_screens_release(z5);
    }

    public final void setTabBarRespectsIMEInsets(boolean z5) {
        this.f10965w.setTabBarRespectsIMEInsets$react_native_screens_release(z5);
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void willDispatchViewUpdates(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void willMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }
}
