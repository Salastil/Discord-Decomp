package dm;

import android.view.View;
import android.view.WindowManager;
import android.view.accessibility.AccessibilityEvent;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.views.view.ReactViewGroup;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends ReactViewGroup {

    /* renamed from: d, reason: collision with root package name */
    public final EventDispatcher f7608d;

    /* renamed from: e, reason: collision with root package name */
    public final WindowManager f7609e;

    /* renamed from: i, reason: collision with root package name */
    public final c f7610i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag(reactContext, getId());
        this.f7608d = eventDispatcherForReactTag;
        Object systemService = reactContext.getSystemService("window");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.view.WindowManager");
        this.f7609e = (WindowManager) systemService;
        c cVar = new c(reactContext);
        this.f7610i = cVar;
        cVar.setEventDispatcher$react_native_keyboard_controller_release(eventDispatcherForReactTag);
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void addChildrenForAccessibility(ArrayList outChildren) {
        Intrinsics.checkNotNullParameter(outChildren, "outChildren");
    }

    @Override // android.view.ViewGroup
    public final void addView(View view, int i5) {
        UiThreadUtil.assertOnUiThread();
        this.f7610i.addView(view, i5);
    }

    @Override // android.view.View
    public final boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        return false;
    }

    @Override // android.view.ViewGroup
    public final View getChildAt(int i5) {
        return this.f7610i.getChildAt(i5);
    }

    @Override // android.view.ViewGroup
    public int getChildCount() {
        return this.f7610i.getChildCount();
    }

    public final StateWrapper getStateWrapper() {
        return this.f7610i.getStateWrapper$react_native_keyboard_controller_release();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        c cVar = this.f7610i;
        if (cVar.f7616x) {
            this.f7609e.removeView(cVar);
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewManager
    public final void removeView(View view) {
        UiThreadUtil.assertOnUiThread();
        if (view != null) {
            this.f7610i.removeView(view);
        }
    }

    @Override // android.view.ViewGroup
    public final void removeViewAt(int i5) {
        UiThreadUtil.assertOnUiThread();
        c cVar = this.f7610i;
        cVar.removeView(cVar.getChildAt(i5));
    }

    public final void setStateWrapper(StateWrapper stateWrapper) {
        this.f7610i.setStateWrapper$react_native_keyboard_controller_release(stateWrapper);
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
    }
}
