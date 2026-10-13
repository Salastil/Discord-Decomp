package bm;

import a5.k0;
import android.app.Activity;
import android.content.res.Configuration;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import androidx.core.view.j0;
import androidx.core.view.s0;
import androidx.lifecycle.c0;
import ch.s;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.views.view.ReactViewGroup;
import java.lang.ref.WeakReference;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class d extends ReactViewGroup {
    public wl.f E;
    public final wl.g F;
    public final yl.b G;

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f3044d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f3045e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f3046i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f3047v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f3048w;

    /* renamed from: x, reason: collision with root package name */
    public ReactViewGroup f3049x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f3050y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f3044d = reactContext;
        boolean z5 = this.f3046i;
        wl.g gVar = new wl.g();
        gVar.a = z5;
        this.F = gVar;
        this.G = new yl.b(this, reactContext, gVar, new c(0, this, d.class, "getKeyboardCallback", "getKeyboardCallback()Lcom/reactnativekeyboardcontroller/listeners/KeyboardAnimationCallback;", 0, 0));
        Intrinsics.checkNotNullParameter(this, "view");
        k0.a = new WeakReference(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final wl.f getKeyboardCallback() {
        return this.E;
    }

    public final void d() {
        ThemedReactContext themedReactContext = this.f3044d;
        if (themedReactContext.getCurrentActivity() != null) {
            this.f3049x = new ReactViewGroup(getContext());
            ViewGroup b10 = tl.c.b(themedReactContext);
            if (b10 != null) {
                b10.addView(this.f3049x);
            }
            wl.f fVar = new wl.f(this, this, themedReactContext, this.F);
            this.E = fVar;
            ReactViewGroup reactViewGroup = this.f3049x;
            if (reactViewGroup != null) {
                s0.r(reactViewGroup, fVar);
                j0.m(reactViewGroup, this.E);
                Intrinsics.checkNotNullParameter(reactViewGroup, "<this>");
                if (reactViewGroup.isAttachedToWindow()) {
                    reactViewGroup.requestApplyInsets();
                } else {
                    reactViewGroup.addOnAttachStateChangeListener(new s(1));
                }
            }
        } else {
            int i5 = e.a;
            Intrinsics.checkNotNullParameter("Can not setup keyboard animation listener, since `currentActivity` is null", "message");
        }
        yl.b bVar = this.G;
        EventDispatcher eventDispatcher = bVar.f20960f;
        if (eventDispatcher != null) {
            eventDispatcher.addListener(bVar);
        }
    }

    public final void e() {
        wl.f fVar = this.E;
        if (fVar != null) {
            fVar.J = null;
            fVar.f19886e.getViewTreeObserver().removeOnGlobalFocusChangeListener(fVar.M);
        }
        new Handler(Looper.getMainLooper()).post(new c0(2, this.f3049x));
        yl.b bVar = this.G;
        EventDispatcher eventDispatcher = bVar.f20960f;
        if (eventDispatcher != null) {
            eventDispatcher.removeListener(bVar);
        }
    }

    public final void f() {
        Window window;
        View decorView;
        ThemedReactContext themedReactContext = this.f3044d;
        Intrinsics.checkNotNullParameter(themedReactContext, "<this>");
        Activity currentActivity = themedReactContext.getCurrentActivity();
        View rootView = (currentActivity == null || (window = currentActivity.getWindow()) == null || (decorView = window.getDecorView()) == null) ? null : decorView.getRootView();
        if (rootView != null) {
            b bVar = new b(0, this);
            WeakHashMap weakHashMap = s0.a;
            j0.m(rootView, bVar);
        }
    }

    public final boolean getActive() {
        return this.f3048w;
    }

    public final wl.f getCallback$react_native_keyboard_controller_release() {
        return this.E;
    }

    @NotNull
    public final ThemedReactContext getReactContext() {
        return this.f3044d;
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.f3050y) {
            d();
        } else {
            this.f3050y = true;
        }
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public final void onConfigurationChanged(Configuration newConfig) {
        Intrinsics.checkNotNullParameter(newConfig, "newConfig");
        f();
        Intrinsics.checkNotNullParameter(this, "<this>");
        if (isAttachedToWindow()) {
            requestApplyInsets();
        } else {
            addOnAttachStateChangeListener(new s(1));
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        e();
    }

    public final void setActive(boolean z5) {
        if (this.f3048w == z5) {
            return;
        }
        this.f3048w = z5;
        if (z5) {
            f();
            d();
        } else {
            f();
            e();
        }
    }

    public final void setCallback$react_native_keyboard_controller_release(wl.f fVar) {
        this.E = fVar;
    }

    public final void setNavigationBarTranslucent(boolean z5) {
        this.f3046i = z5;
        this.F.a = z5;
    }

    public final void setPreserveEdgeToEdge(boolean z5) {
        this.f3047v = z5;
    }

    public final void setStatusBarTranslucent(boolean z5) {
        this.f3045e = z5;
    }
}
