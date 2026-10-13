package nm;

import android.view.MotionEvent;
import android.view.ViewGroup;
import com.facebook.react.uimanager.PointerEvents;
import com.facebook.react.uimanager.ReactCompoundViewGroup;
import com.facebook.react.uimanager.ReactPointerEventsView;
import com.facebook.react.uimanager.ThemedReactContext;
import com.swmansion.rnscreens.m;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class b extends ViewGroup implements ReactCompoundViewGroup, ReactPointerEventsView {

    /* renamed from: d, reason: collision with root package name */
    public final m f15553d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(ThemedReactContext context, float f2) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        m pointerEventsProxy = new m(2);
        pointerEventsProxy.f6770e = null;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(pointerEventsProxy, "pointerEventsProxy");
        this.f15553d = pointerEventsProxy;
        pointerEventsProxy.f6770e = new m(this);
        setFocusable(false);
        setBackgroundColor(-16777216);
        setAlpha(f2);
    }

    public final boolean getBlockGestures$react_native_screens_release() {
        return !(Math.abs(getAlpha() - 0.0f) <= 1.0E-4f);
    }

    @Override // com.facebook.react.uimanager.ReactPointerEventsView
    @NotNull
    public PointerEvents getPointerEvents() {
        return this.f15553d.getPointerEvents();
    }

    @Override // com.facebook.react.uimanager.ReactCompoundViewGroup
    public final boolean interceptsTouchEvent(float f2, float f10) {
        return getBlockGestures$react_native_screens_release();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.f15553d.f6770e = null;
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        if (getBlockGestures$react_native_screens_release() && motionEvent != null && motionEvent.getActionMasked() == 1) {
            callOnClick();
        }
        return getBlockGestures$react_native_screens_release();
    }

    @Override // com.facebook.react.uimanager.ReactCompoundView
    public final int reactTagForTouch(float f2, float f10) {
        throw new IllegalStateException("[RNScreens] DimmingView should never be asked for the view tag!");
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
    }
}
