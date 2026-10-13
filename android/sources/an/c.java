package an;

import android.view.View;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.views.view.ReactViewGroup;
import java.lang.ref.WeakReference;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class c extends ReactViewGroup implements e {
    public static final /* synthetic */ KProperty[] F = {com.discord.chat.bridge.botuikit.a.p(c.class, "collapseMode", "getCollapseMode()Lcom/swmansion/rnscreens/gamma/stack/header/subview/StackHeaderSubviewCollapseMode;", 0)};
    public int E;

    /* renamed from: d, reason: collision with root package name */
    public final ReactContext f682d;

    /* renamed from: e, reason: collision with root package name */
    public WeakReference f683e;

    /* renamed from: i, reason: collision with root package name */
    public f f684i;

    /* renamed from: v, reason: collision with root package name */
    public final b f685v;

    /* renamed from: w, reason: collision with root package name */
    public final c f686w;

    /* renamed from: x, reason: collision with root package name */
    public final qm.b f687x;

    /* renamed from: y, reason: collision with root package name */
    public int f688y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f682d = reactContext;
        this.f684i = f.f694i;
        d dVar = d.f689d;
        this.f685v = new b(this);
        this.f686w = this;
        this.f687x = new qm.b(false);
    }

    @NotNull
    public d getCollapseMode() {
        return (d) this.f685v.getValue(this, F[0]);
    }

    public final WeakReference<a> getOnStackHeaderSubviewChangeListener$react_native_screens_release() {
        return this.f683e;
    }

    @NotNull
    public final ReactContext getReactContext() {
        return this.f682d;
    }

    public final StateWrapper getStateWrapper$react_native_screens_release() {
        return this.f687x.f16905b;
    }

    @NotNull
    public f getType() {
        return this.f684i;
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public final void onMeasure(int i5, int i6) {
        boolean z5;
        int size;
        int size2;
        boolean z6 = true;
        if (View.MeasureSpec.getMode(i5) != 1073741824 || (size2 = View.MeasureSpec.getSize(i5)) == this.f688y) {
            z5 = false;
        } else {
            this.f688y = size2;
            z5 = true;
        }
        if (View.MeasureSpec.getMode(i6) != 1073741824 || (size = View.MeasureSpec.getSize(i6)) == this.E) {
            z6 = z5;
        } else {
            this.E = size;
        }
        setMeasuredDimension(this.f688y, this.E);
        if (!z6 || isInLayout()) {
            return;
        }
        requestLayout();
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View, android.view.ViewParent
    public final void requestLayout() {
        super.requestLayout();
        forceLayout();
        Intrinsics.checkNotNullParameter(this, "<this>");
        Object parent = getParent();
        View view = parent instanceof View ? (View) parent : null;
        if (view != null) {
            view.requestLayout();
        }
    }

    public void setCollapseMode$react_native_screens_release(@NotNull d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<set-?>");
        this.f685v.setValue(this, F[0], dVar);
    }

    public final void setOnStackHeaderSubviewChangeListener$react_native_screens_release(WeakReference<a> weakReference) {
        this.f683e = weakReference;
    }

    public final void setStateWrapper$react_native_screens_release(StateWrapper stateWrapper) {
        this.f687x.f16905b = stateWrapper;
    }

    public void setType$react_native_screens_release(@NotNull f fVar) {
        Intrinsics.checkNotNullParameter(fVar, "<set-?>");
        this.f684i = fVar;
    }

    @NotNull
    /* renamed from: getView, reason: merged with bridge method [inline-methods] */
    public c m0getView() {
        return this.f686w;
    }
}
