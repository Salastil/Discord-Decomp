package cm;

import android.content.res.Configuration;
import android.view.WindowInsets;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.views.view.ReactViewGroup;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends ReactViewGroup {

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f3584d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f3584d = reactContext;
    }

    @Override // android.view.View
    public final WindowInsets onApplyWindowInsets(WindowInsets windowInsets) {
        super.setBackgroundColor(b.a(this.f3584d));
        WindowInsets onApplyWindowInsets = super.onApplyWindowInsets(windowInsets);
        Intrinsics.checkNotNullExpressionValue(onApplyWindowInsets, "onApplyWindowInsets(...)");
        return onApplyWindowInsets;
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        super.setBackgroundColor(b.a(this.f3584d));
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public final void onConfigurationChanged(Configuration newConfig) {
        Intrinsics.checkNotNullParameter(newConfig, "newConfig");
        super.onConfigurationChanged(newConfig);
        super.setBackgroundColor(b.a(this.f3584d));
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public void setBackgroundColor(int i5) {
    }
}
