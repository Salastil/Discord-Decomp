package dm;

import android.graphics.Point;
import android.view.MotionEvent;
import android.view.View;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.config.ReactFeatureFlags;
import com.facebook.react.uimanager.JSPointerDispatcher;
import com.facebook.react.uimanager.JSTouchDispatcher;
import com.facebook.react.uimanager.RootView;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.views.view.ReactViewGroup;
import e4.r;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends ReactViewGroup implements RootView {

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f7611d;

    /* renamed from: e, reason: collision with root package name */
    public final JSTouchDispatcher f7612e;

    /* renamed from: i, reason: collision with root package name */
    public final r f7613i;

    /* renamed from: v, reason: collision with root package name */
    public EventDispatcher f7614v;

    /* renamed from: w, reason: collision with root package name */
    public StateWrapper f7615w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f7616x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f7611d = reactContext;
        this.f7612e = new JSTouchDispatcher(this);
        if (ReactFeatureFlags.dispatchPointerEvents) {
            this.f7613i = new r(this);
        }
    }

    public final void c(int i5, int i6) {
        WritableNativeMap writableNativeMap = new WritableNativeMap();
        writableNativeMap.putDouble("screenWidth", tl.c.c(i5));
        writableNativeMap.putDouble("screenHeight", tl.c.c(i6));
        StateWrapper stateWrapper = this.f7615w;
        if (stateWrapper != null) {
            stateWrapper.updateState(writableNativeMap);
        }
    }

    public final EventDispatcher getEventDispatcher$react_native_keyboard_controller_release() {
        return this.f7614v;
    }

    public final StateWrapper getStateWrapper$react_native_keyboard_controller_release() {
        return this.f7615w;
    }

    @Override // com.facebook.react.uimanager.RootView
    public final void handleException(Throwable t5) {
        Intrinsics.checkNotNullParameter(t5, "t");
        this.f7611d.getReactApplicationContext().handleException(new RuntimeException(t5));
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        Point a = tl.a.a(this.f7611d);
        c(a.x, a.y);
        this.f7616x = true;
    }

    @Override // com.facebook.react.uimanager.RootView
    public final void onChildEndedNativeGesture(View childView, MotionEvent ev) {
        Intrinsics.checkNotNullParameter(childView, "childView");
        Intrinsics.checkNotNullParameter(ev, "ev");
        EventDispatcher eventDispatcher = this.f7614v;
        if (eventDispatcher != null) {
            this.f7612e.onChildEndedNativeGesture(ev, eventDispatcher);
        }
        r rVar = this.f7613i;
        if (rVar != null) {
            ((JSPointerDispatcher) rVar.f8000e).onChildEndedNativeGesture();
        }
    }

    @Override // com.facebook.react.uimanager.RootView
    public final void onChildStartedNativeGesture(MotionEvent ev) {
        Intrinsics.checkNotNullParameter(ev, "ev");
        onChildStartedNativeGesture(null, ev);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        c(0, 0);
        this.f7616x = false;
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public final boolean onHoverEvent(MotionEvent event) {
        r rVar;
        Intrinsics.checkNotNullParameter(event, "event");
        EventDispatcher eventDispatcher = this.f7614v;
        if (eventDispatcher != null && (rVar = this.f7613i) != null) {
            rVar.o(event, eventDispatcher, false);
        }
        return super.onHoverEvent(event);
    }

    @Override // android.view.ViewGroup
    public final boolean onInterceptHoverEvent(MotionEvent event) {
        r rVar;
        Intrinsics.checkNotNullParameter(event, "event");
        EventDispatcher eventDispatcher = this.f7614v;
        if (eventDispatcher != null && (rVar = this.f7613i) != null) {
            rVar.o(event, eventDispatcher, true);
        }
        return super.onInterceptHoverEvent(event);
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup
    public final boolean onInterceptTouchEvent(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        EventDispatcher eventDispatcher = this.f7614v;
        if (eventDispatcher != null) {
            try {
                this.f7612e.handleTouchEvent(event, eventDispatcher);
                r rVar = this.f7613i;
                if (rVar != null) {
                    rVar.o(event, eventDispatcher, true);
                    Unit unit = Unit.a;
                }
            } catch (RuntimeException unused) {
                int i5 = d.a;
                Intrinsics.checkNotNullParameter("Can not handle touch event", "message");
                Unit unit2 = Unit.a;
            }
        }
        return super.onInterceptTouchEvent(event);
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public final void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        c(i5, i6);
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public final boolean onTouchEvent(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        EventDispatcher eventDispatcher = this.f7614v;
        if (eventDispatcher != null) {
            try {
                this.f7612e.handleTouchEvent(event, eventDispatcher);
                r rVar = this.f7613i;
                if (rVar != null) {
                    rVar.o(event, eventDispatcher, false);
                    Unit unit = Unit.a;
                }
            } catch (RuntimeException unused) {
                int i5 = d.a;
                Intrinsics.checkNotNullParameter("Can not handle touch event", "message");
                Unit unit2 = Unit.a;
            }
        }
        super.onTouchEvent(event);
        return true;
    }

    public final void setAttached$react_native_keyboard_controller_release(boolean z5) {
        this.f7616x = z5;
    }

    public final void setEventDispatcher$react_native_keyboard_controller_release(EventDispatcher eventDispatcher) {
        this.f7614v = eventDispatcher;
    }

    public final void setStateWrapper$react_native_keyboard_controller_release(StateWrapper stateWrapper) {
        this.f7615w = stateWrapper;
    }

    @Override // com.facebook.react.uimanager.RootView
    public final void onChildStartedNativeGesture(View view, MotionEvent ev) {
        Intrinsics.checkNotNullParameter(ev, "ev");
        EventDispatcher eventDispatcher = this.f7614v;
        if (eventDispatcher != null) {
            this.f7612e.onChildStartedNativeGesture(ev, eventDispatcher);
            r rVar = this.f7613i;
            if (rVar != null) {
                Intrinsics.checkNotNullParameter(ev, "ev");
                Intrinsics.checkNotNullParameter(eventDispatcher, "eventDispatcher");
                ((JSPointerDispatcher) rVar.f8000e).onChildStartedNativeGesture(view, ev, eventDispatcher);
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void requestDisallowInterceptTouchEvent(boolean z5) {
    }
}
