package bm;

import android.content.res.Resources;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ScrollView;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.views.view.ReactViewGroup;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class a extends ReactViewGroup {

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f3037d;

    /* renamed from: e, reason: collision with root package name */
    public double f3038e;

    /* renamed from: i, reason: collision with root package name */
    public double f3039i;

    /* renamed from: v, reason: collision with root package name */
    public int f3040v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f3037d = reactContext;
    }

    public static ScrollView d(View view) {
        if (view instanceof ScrollView) {
            return (ScrollView) view;
        }
        ScrollView scrollView = null;
        if (view instanceof ViewGroup) {
            int i5 = 0;
            while (true) {
                ViewGroup viewGroup = (ViewGroup) view;
                if (i5 >= viewGroup.getChildCount() || scrollView != null) {
                    break;
                }
                scrollView = d(viewGroup.getChildAt(i5));
                i5++;
            }
        }
        return scrollView;
    }

    public final void c() {
        ScrollView d6 = d(this);
        if (d6 == null) {
            return;
        }
        d6.setClipToPadding(false);
        int i5 = (int) (((float) this.f3039i) * Resources.getSystem().getDisplayMetrics().density);
        View childAt = d6.getChildAt(0);
        ViewGroup viewGroup = childAt instanceof ViewGroup ? (ViewGroup) childAt : null;
        if (viewGroup == null) {
            return;
        }
        viewGroup.setTranslationY(i5);
        d6.setPadding(d6.getPaddingLeft(), d6.getPaddingTop(), d6.getPaddingRight(), (int) (((float) (this.f3038e + this.f3039i)) * Resources.getSystem().getDisplayMetrics().density));
        int i6 = i5 - this.f3040v;
        if (i6 != 0) {
            d6.scrollBy(0, i6);
        }
        this.f3040v = i5;
    }

    @NotNull
    public final ThemedReactContext getReactContext() {
        return this.f3037d;
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        c();
    }

    public final void setContentInsetBottom(double d6) {
        this.f3038e = d6;
        c();
    }

    public final void setContentInsetTop(double d6) {
        this.f3039i = d6;
        c();
    }

    public final void setApplyWorkaroundForContentInsetHitTestBug(boolean z5) {
    }
}
