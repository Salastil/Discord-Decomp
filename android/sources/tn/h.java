package tn;

import android.view.View;
import android.view.ViewParent;
import android.view.ViewTreeObserver;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.UIManagerModule;
import com.facebook.react.views.view.ReactViewGroup;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class h extends ReactViewGroup implements ViewTreeObserver.OnPreDrawListener {

    /* renamed from: d, reason: collision with root package name */
    public m f18666d;

    /* renamed from: e, reason: collision with root package name */
    public a f18667e;

    /* renamed from: i, reason: collision with root package name */
    public j f18668i;

    /* renamed from: v, reason: collision with root package name */
    public View f18669v;

    /* renamed from: w, reason: collision with root package name */
    public StateWrapper f18670w;

    public final void c() {
        a aVar = this.f18667e;
        if (aVar != null) {
            j jVar = this.f18668i;
            if (jVar == null) {
                i iVar = i.f18672e;
                jVar = new j(iVar, iVar, iVar, iVar);
            }
            StateWrapper stateWrapper = getStateWrapper();
            if (stateWrapper != null) {
                WritableMap createMap = Arguments.createMap();
                createMap.putMap("insets", jb.a.i(aVar));
                stateWrapper.updateState(createMap);
            } else {
                k kVar = new k(aVar, this.f18666d, jVar);
                Intrinsics.checkNotNullParameter(this, "view");
                UIManagerModule uIManagerModule = (UIManagerModule) UIManagerHelper.getReactContext(this).getNativeModule(UIManagerModule.class);
                if (uIManagerModule != null) {
                    uIManagerModule.setViewLocalData(getId(), kVar);
                }
            }
        }
    }

    public final StateWrapper getStateWrapper() {
        return this.f18670w;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        View view;
        a c6;
        super.onAttachedToWindow();
        ViewParent viewParent = getParent();
        while (true) {
            if (viewParent == 0) {
                view = this;
                break;
            } else {
                if (viewParent instanceof d) {
                    view = (View) viewParent;
                    break;
                }
                viewParent = viewParent.getParent();
            }
        }
        this.f18669v = view;
        ViewTreeObserver viewTreeObserver = view.getViewTreeObserver();
        if (viewTreeObserver != null) {
            viewTreeObserver.addOnPreDrawListener(this);
        }
        View view2 = this.f18669v;
        if (view2 == null || (c6 = z0.d.c(view2)) == null || Intrinsics.areEqual(this.f18667e, c6)) {
            return;
        }
        this.f18667e = c6;
        c();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        ViewTreeObserver viewTreeObserver;
        super.onDetachedFromWindow();
        View view = this.f18669v;
        if (view != null && (viewTreeObserver = view.getViewTreeObserver()) != null) {
            viewTreeObserver.removeOnPreDrawListener(this);
        }
        this.f18669v = null;
    }

    @Override // android.view.ViewTreeObserver.OnPreDrawListener
    public final boolean onPreDraw() {
        a c6;
        View view = this.f18669v;
        boolean z5 = false;
        if (view != null && (c6 = z0.d.c(view)) != null && !Intrinsics.areEqual(this.f18667e, c6)) {
            this.f18667e = c6;
            c();
            z5 = true;
        }
        if (z5) {
            requestLayout();
        }
        return !z5;
    }

    public final void setEdges(@NotNull j edges) {
        Intrinsics.checkNotNullParameter(edges, "edges");
        this.f18668i = edges;
        c();
    }

    public final void setMode(@NotNull m mode) {
        Intrinsics.checkNotNullParameter(mode, "mode");
        this.f18666d = mode;
        c();
    }

    public final void setStateWrapper(StateWrapper stateWrapper) {
        this.f18670w = stateWrapper;
    }
}
