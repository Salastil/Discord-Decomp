package wm;

import android.content.Context;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewTreeObserver;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.UIManagerListener;
import com.facebook.react.config.ReactFeatureFlags;
import com.facebook.react.uimanager.JSPointerDispatcher;
import com.facebook.react.uimanager.JSTouchDispatcher;
import com.facebook.react.uimanager.RootView;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.views.view.ReactViewGroup;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i extends ReactViewGroup implements RootView, UIManagerListener, ViewTreeObserver.OnPreDrawListener {

    /* renamed from: d, reason: collision with root package name */
    public final com.discord.chat.input.views.a f19913d;

    /* renamed from: e, reason: collision with root package name */
    public g f19914e;

    /* renamed from: i, reason: collision with root package name */
    public final JSTouchDispatcher f19915i;

    /* renamed from: v, reason: collision with root package name */
    public final JSPointerDispatcher f19916v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f19917w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(Context context, com.discord.chat.input.views.a onSizeChangedCallback) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(onSizeChangedCallback, "onSizeChangedCallback");
        this.f19913d = onSizeChangedCallback;
        this.f19915i = new JSTouchDispatcher(this);
        if (ReactFeatureFlags.dispatchPointerEvents) {
            this.f19916v = new JSPointerDispatcher(this);
        }
    }

    private final EventDispatcher getEventDispatcher() {
        return UIManagerHelper.getEventDispatcher(getThemedReactContext(), 2);
    }

    private final ThemedReactContext getThemedReactContext() {
        Context context = getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.uimanager.ThemedReactContext");
        return (ThemedReactContext) context;
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didDispatchMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
        this.f19917w = false;
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didScheduleMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    public final g getContentSizeChangeDelegate$react_native_screens_release() {
        return this.f19914e;
    }

    @Override // com.facebook.react.uimanager.RootView
    public final void handleException(Throwable t5) {
        Intrinsics.checkNotNullParameter(t5, "t");
        getThemedReactContext().getReactApplicationContext().handleException(new RuntimeException(t5));
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        getViewTreeObserver().addOnPreDrawListener(this);
        ki.b.w(UIManagerHelper.INSTANCE, getThemedReactContext()).addUIManagerEventListener(this);
    }

    @Override // com.facebook.react.uimanager.RootView
    public final void onChildEndedNativeGesture(View childView, MotionEvent ev) {
        Intrinsics.checkNotNullParameter(childView, "childView");
        Intrinsics.checkNotNullParameter(ev, "ev");
        EventDispatcher eventDispatcher = getEventDispatcher();
        if (eventDispatcher != null) {
            this.f19915i.onChildEndedNativeGesture(ev, eventDispatcher);
        }
        JSPointerDispatcher jSPointerDispatcher = this.f19916v;
        if (jSPointerDispatcher != null) {
            jSPointerDispatcher.onChildEndedNativeGesture();
        }
    }

    @Override // com.facebook.react.uimanager.RootView
    public final void onChildStartedNativeGesture(View view, MotionEvent ev) {
        Intrinsics.checkNotNullParameter(ev, "ev");
        EventDispatcher eventDispatcher = getEventDispatcher();
        if (eventDispatcher != null) {
            this.f19915i.onChildStartedNativeGesture(ev, eventDispatcher, getThemedReactContext());
            JSPointerDispatcher jSPointerDispatcher = this.f19916v;
            if (jSPointerDispatcher != null) {
                jSPointerDispatcher.onChildStartedNativeGesture(view, ev, eventDispatcher);
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        getViewTreeObserver().removeOnPreDrawListener(this);
        ki.b.w(UIManagerHelper.INSTANCE, getThemedReactContext()).removeUIManagerEventListener(this);
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public final boolean onHoverEvent(MotionEvent event) {
        JSPointerDispatcher jSPointerDispatcher;
        Intrinsics.checkNotNullParameter(event, "event");
        EventDispatcher eventDispatcher = getEventDispatcher();
        if (eventDispatcher != null && (jSPointerDispatcher = this.f19916v) != null) {
            jSPointerDispatcher.handleMotionEvent(event, eventDispatcher, false);
        }
        return super.onHoverEvent(event);
    }

    @Override // android.view.ViewGroup
    public final boolean onInterceptHoverEvent(MotionEvent event) {
        JSPointerDispatcher jSPointerDispatcher;
        Intrinsics.checkNotNullParameter(event, "event");
        EventDispatcher eventDispatcher = getEventDispatcher();
        if (eventDispatcher != null && (jSPointerDispatcher = this.f19916v) != null) {
            jSPointerDispatcher.handleMotionEvent(event, eventDispatcher, true);
        }
        return super.onInterceptHoverEvent(event);
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup
    public final boolean onInterceptTouchEvent(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        EventDispatcher eventDispatcher = getEventDispatcher();
        if (eventDispatcher != null) {
            this.f19915i.handleTouchEvent(event, eventDispatcher, getThemedReactContext());
            JSPointerDispatcher jSPointerDispatcher = this.f19916v;
            if (jSPointerDispatcher != null) {
                jSPointerDispatcher.handleMotionEvent(event, eventDispatcher, true);
            }
        }
        return super.onInterceptTouchEvent(event);
    }

    @Override // android.view.ViewTreeObserver.OnPreDrawListener
    public final boolean onPreDraw() {
        return !this.f19917w;
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public final void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        if (i5 == i10 && i6 == i11) {
            return;
        }
        this.f19917w = true;
        this.f19913d.invoke(Integer.valueOf(i5), Integer.valueOf(i6));
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public final boolean onTouchEvent(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        EventDispatcher eventDispatcher = getEventDispatcher();
        if (eventDispatcher != null) {
            this.f19915i.handleTouchEvent(event, eventDispatcher, getThemedReactContext());
            JSPointerDispatcher jSPointerDispatcher = this.f19916v;
            if (jSPointerDispatcher != null) {
                jSPointerDispatcher.handleMotionEvent(event, eventDispatcher, false);
            }
        }
        super.onTouchEvent(event);
        return true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup
    public final void onViewAdded(View child) {
        Intrinsics.checkNotNullParameter(child, "child");
        super.onViewAdded(child);
        h hVar = child instanceof h ? (h) child : null;
        if (hVar != null) {
            ((j) hVar).setContentSizeChangeDelegate(this.f19914e);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup
    public final void onViewRemoved(View child) {
        Intrinsics.checkNotNullParameter(child, "child");
        super.onViewRemoved(child);
        h hVar = child instanceof h ? (h) child : null;
        if (hVar != null) {
            ((j) hVar).setContentSizeChangeDelegate(null);
        }
    }

    public final void setContentSizeChangeDelegate$react_native_screens_release(g gVar) {
        this.f19914e = gVar;
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void willDispatchViewUpdates(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void willMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void requestDisallowInterceptTouchEvent(boolean z5) {
    }
}
