package androidx.activity;

import android.app.Dialog;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.window.OnBackInvokedDispatcher;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.LifecycleRegistry;
import androidx.lifecycle.c1;
import androidx.lifecycle.n;
import androidx.lifecycle.s0;
import androidx.savedstate.SavedStateRegistry;
import androidx.savedstate.SavedStateRegistryController;
import com.discord.R;
import com.google.firebase.messaging.s;
import d3.e;
import e.t;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class ComponentDialog extends Dialog implements LifecycleOwner, t, e {

    /* renamed from: d, reason: collision with root package name */
    public LifecycleRegistry f734d;

    /* renamed from: e, reason: collision with root package name */
    public final SavedStateRegistryController f735e;

    /* renamed from: i, reason: collision with root package name */
    public final OnBackPressedDispatcher f736i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ComponentDialog(Context context, int i5) {
        super(context, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(this, "owner");
        this.f735e = new SavedStateRegistryController(new e3.a(this, new s0(28, this)));
        this.f736i = new OnBackPressedDispatcher(new s(9, this));
    }

    public static void a(ComponentDialog componentDialog) {
        super.onBackPressed();
    }

    @Override // android.app.Dialog
    public void addContentView(View view, ViewGroup.LayoutParams layoutParams) {
        Intrinsics.checkNotNullParameter(view, "view");
        b();
        super.addContentView(view, layoutParams);
    }

    public final void b() {
        Window window = getWindow();
        Intrinsics.checkNotNull(window);
        View decorView = window.getDecorView();
        Intrinsics.checkNotNullExpressionValue(decorView, "window!!.decorView");
        c1.d(decorView, this);
        Window window2 = getWindow();
        Intrinsics.checkNotNull(window2);
        View decorView2 = window2.getDecorView();
        Intrinsics.checkNotNullExpressionValue(decorView2, "window!!.decorView");
        Intrinsics.checkNotNullParameter(decorView2, "<this>");
        Intrinsics.checkNotNullParameter(this, "onBackPressedDispatcherOwner");
        decorView2.setTag(R.id.view_tree_on_back_pressed_dispatcher_owner, this);
        Window window3 = getWindow();
        Intrinsics.checkNotNull(window3);
        View decorView3 = window3.getDecorView();
        Intrinsics.checkNotNullExpressionValue(decorView3, "window!!.decorView");
        jb.a.H(decorView3, this);
    }

    @Override // androidx.lifecycle.LifecycleOwner
    public final Lifecycle getLifecycle() {
        LifecycleRegistry lifecycleRegistry = this.f734d;
        if (lifecycleRegistry != null) {
            return lifecycleRegistry;
        }
        LifecycleRegistry lifecycleRegistry2 = new LifecycleRegistry(this);
        this.f734d = lifecycleRegistry2;
        return lifecycleRegistry2;
    }

    @Override // e.t
    public final OnBackPressedDispatcher getOnBackPressedDispatcher() {
        return this.f736i;
    }

    @Override // d3.e
    public final SavedStateRegistry getSavedStateRegistry() {
        return this.f735e.f2496b;
    }

    @Override // android.app.Dialog
    public final void onBackPressed() {
        this.f736i.d();
    }

    @Override // android.app.Dialog
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (Build.VERSION.SDK_INT >= 33) {
            OnBackInvokedDispatcher invoker = getOnBackInvokedDispatcher();
            Intrinsics.checkNotNullExpressionValue(invoker, "onBackInvokedDispatcher");
            OnBackPressedDispatcher onBackPressedDispatcher = this.f736i;
            onBackPressedDispatcher.getClass();
            Intrinsics.checkNotNullParameter(invoker, "invoker");
            onBackPressedDispatcher.f743e = invoker;
            onBackPressedDispatcher.e(onBackPressedDispatcher.f745g);
        }
        this.f735e.a(bundle);
        LifecycleRegistry lifecycleRegistry = this.f734d;
        if (lifecycleRegistry == null) {
            lifecycleRegistry = new LifecycleRegistry(this);
            this.f734d = lifecycleRegistry;
        }
        lifecycleRegistry.f(n.ON_CREATE);
    }

    @Override // android.app.Dialog
    public final Bundle onSaveInstanceState() {
        Bundle onSaveInstanceState = super.onSaveInstanceState();
        Intrinsics.checkNotNullExpressionValue(onSaveInstanceState, "super.onSaveInstanceState()");
        this.f735e.b(onSaveInstanceState);
        return onSaveInstanceState;
    }

    @Override // android.app.Dialog
    public void onStart() {
        super.onStart();
        LifecycleRegistry lifecycleRegistry = this.f734d;
        if (lifecycleRegistry == null) {
            lifecycleRegistry = new LifecycleRegistry(this);
            this.f734d = lifecycleRegistry;
        }
        lifecycleRegistry.f(n.ON_RESUME);
    }

    @Override // android.app.Dialog
    public void onStop() {
        LifecycleRegistry lifecycleRegistry = this.f734d;
        if (lifecycleRegistry == null) {
            lifecycleRegistry = new LifecycleRegistry(this);
            this.f734d = lifecycleRegistry;
        }
        lifecycleRegistry.f(n.ON_DESTROY);
        this.f734d = null;
        super.onStop();
    }

    @Override // android.app.Dialog
    public void setContentView(int i5) {
        b();
        super.setContentView(i5);
    }

    @Override // android.app.Dialog
    public void setContentView(View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        b();
        super.setContentView(view);
    }

    @Override // android.app.Dialog
    public void setContentView(View view, ViewGroup.LayoutParams layoutParams) {
        Intrinsics.checkNotNullParameter(view, "view");
        b();
        super.setContentView(view, layoutParams);
    }
}
