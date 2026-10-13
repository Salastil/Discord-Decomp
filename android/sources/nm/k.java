package nm;

import a5.k0;
import android.app.Activity;
import android.content.res.Resources;
import android.graphics.Rect;
import android.os.Build;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.view.WindowMetrics;
import android.view.inputmethod.InputMethodManager;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.c2;
import androidx.core.view.j0;
import androidx.core.view.r;
import androidx.core.view.s0;
import androidx.fragment.app.Fragment;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.t;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ThemedReactContext;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.ScreenContainer;
import com.swmansion.rnscreens.ScreenFooter;
import com.swmansion.rnscreens.bottomsheet.SheetAnimationCoordinator;
import com.swmansion.rnscreens.bottomsheet.SheetDetents;
import fo.n;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k implements t, r {
    public View E;

    /* renamed from: d, reason: collision with root package name */
    public final Screen f15571d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f15572e;

    /* renamed from: i, reason: collision with root package name */
    public tn.g f15573i;

    /* renamed from: v, reason: collision with root package name */
    public int f15574v;

    /* renamed from: w, reason: collision with root package name */
    public int f15575w;

    /* renamed from: x, reason: collision with root package name */
    public final h f15576x;

    /* renamed from: y, reason: collision with root package name */
    public final h f15577y;

    public k(Screen screen) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        this.f15571d = screen;
        this.f15573i = com.swmansion.rnscreens.j.a;
        this.f15575w = screen.getSheetInitialDetentIndex();
        screen.getSheetDetents().e(screen.getSheetInitialDetentIndex());
        h hVar = new h(this, 1);
        this.f15576x = hVar;
        this.f15577y = new h(this, 0);
        screen.getFragment();
        Fragment fragment = screen.getFragment();
        Intrinsics.checkNotNull(fragment);
        fragment.getLifecycle().a(this);
        BottomSheetBehavior<Screen> sheetBehavior = screen.getSheetBehavior();
        if (sheetBehavior == null) {
            throw new IllegalStateException("[RNScreens] Sheet delegate accepts screen with initialized sheet behaviour only.");
        }
        sheetBehavior.w(hVar);
    }

    public static void b(k kVar, BottomSheetBehavior behavior, tn.g keyboardState, int i5) {
        int c6;
        int c8;
        if ((i5 & 2) != 0) {
            keyboardState = com.swmansion.rnscreens.j.a;
        }
        int i6 = kVar.f15575w;
        h hVar = kVar.f15577y;
        Screen screen = kVar.f15571d;
        Intrinsics.checkNotNullParameter(behavior, "behavior");
        Intrinsics.checkNotNullParameter(keyboardState, "keyboardState");
        Integer g6 = kVar.g();
        if (g6 == null) {
            throw new IllegalStateException("[RNScreens] Failed to find window height during bottom sheet behaviour configuration");
        }
        behavior.N(true);
        behavior.K = true;
        behavior.w(kVar.f15576x);
        ScreenFooter footer = screen.getFooter();
        if (footer != null) {
            footer.g(behavior);
        }
        if (keyboardState instanceof com.swmansion.rnscreens.j) {
            int size = screen.getSheetDetents().a.size();
            if (size == 1) {
                if (l.a(screen)) {
                    screen.getSheetDetents().getClass();
                    c8 = SheetDetents.d(screen);
                } else {
                    c8 = screen.getSheetDetents().c(g6.intValue());
                }
                k0.W(behavior, Integer.valueOf(c8), true, Boolean.valueOf(screen.getSheetShouldOverflowTopInset()));
                return;
            }
            if (size == 2) {
                k0.Z(behavior, Integer.valueOf(screen.getSheetDetents().e(i6)), Integer.valueOf(screen.getSheetDetents().b(0, g6.intValue())), Integer.valueOf(screen.getSheetDetents().c(g6.intValue())), Boolean.valueOf(screen.getSheetShouldOverflowTopInset()));
                return;
            }
            if (size != 3) {
                throw new IllegalStateException(s4.h.e(screen.getSheetDetents().a.size(), "[RNScreens] Invalid detent count ", ". Expected at most 3."));
            }
            int e9 = screen.getSheetDetents().e(i6);
            int b10 = screen.getSheetDetents().b(0, g6.intValue());
            List list = screen.getSheetDetents().a;
            if (list.size() < 3) {
                throw new IllegalStateException("[RNScreens] At least 3 detents required for halfExpandedRatio.");
            }
            k0.X(behavior, Integer.valueOf(e9), Integer.valueOf(b10), Integer.valueOf(screen.getSheetDetents().c(g6.intValue())), Float.valueOf((float) (((Number) list.get(1)).doubleValue() / ((Number) list.get(2)).doubleValue())), Integer.valueOf(screen.getSheetDetents().a(g6.intValue(), kVar.f15574v, screen.getSheetShouldOverflowTopInset())), Boolean.valueOf(screen.getSheetShouldOverflowTopInset()));
            return;
        }
        if (keyboardState instanceof com.swmansion.rnscreens.k) {
            boolean z5 = ((com.swmansion.rnscreens.k) keyboardState).a != 0;
            int size2 = screen.getSheetDetents().a.size();
            if (size2 == 1) {
                behavior.w(hVar);
                return;
            }
            if (size2 == 2) {
                if (z5) {
                    k0.a0(behavior, null, null, null, 14);
                } else {
                    k0.a0(behavior, null, null, null, 15);
                }
                behavior.w(hVar);
                return;
            }
            if (size2 != 3) {
                throw new IllegalStateException(s4.h.e(screen.getSheetDetents().a.size(), "[RNScreens] Invalid detent count ", ". Expected at most 3."));
            }
            if (z5) {
                k0.Y(behavior, null, null, null, null, null, 62);
            } else {
                k0.Y(behavior, null, null, null, null, null, 63);
            }
            behavior.w(hVar);
            return;
        }
        if (!(keyboardState instanceof com.swmansion.rnscreens.i)) {
            throw new n();
        }
        behavior.I(hVar);
        int size3 = screen.getSheetDetents().a.size();
        if (size3 == 1) {
            if (l.a(screen)) {
                screen.getSheetDetents().getClass();
                c6 = SheetDetents.d(screen);
            } else {
                c6 = screen.getSheetDetents().c(g6.intValue());
            }
            k0.W(behavior, Integer.valueOf(c6), false, Boolean.valueOf(screen.getSheetShouldOverflowTopInset()));
            return;
        }
        if (size3 == 2) {
            k0.a0(behavior, Integer.valueOf(screen.getSheetDetents().b(0, g6.intValue())), Integer.valueOf(screen.getSheetDetents().c(g6.intValue())), Boolean.valueOf(screen.getSheetShouldOverflowTopInset()), 1);
            return;
        }
        if (size3 != 3) {
            throw new IllegalStateException(s4.h.e(screen.getSheetDetents().a.size(), "[RNScreens] Invalid detent count ", ". Expected at most 3."));
        }
        int b11 = screen.getSheetDetents().b(0, g6.intValue());
        List list2 = screen.getSheetDetents().a;
        if (list2.size() < 3) {
            throw new IllegalStateException("[RNScreens] At least 3 detents required for halfExpandedRatio.");
        }
        k0.Y(behavior, Integer.valueOf(b11), Integer.valueOf(screen.getSheetDetents().c(g6.intValue())), Float.valueOf((float) (((Number) list2.get(1)).doubleValue() / ((Number) list2.get(2)).doubleValue())), Integer.valueOf(screen.getSheetDetents().a(g6.intValue(), kVar.f15574v, screen.getSheetShouldOverflowTopInset())), Boolean.valueOf(screen.getSheetShouldOverflowTopInset()), 1);
    }

    @Override // androidx.core.view.r
    public final WindowInsetsCompat a(View v5, WindowInsetsCompat insets) {
        Intrinsics.checkNotNullParameter(v5, "v");
        Intrinsics.checkNotNullParameter(insets, "insets");
        c2 c2Var = insets.a;
        boolean p3 = c2Var.p(8);
        Insets f2 = c2Var.f(8);
        Intrinsics.checkNotNullExpressionValue(f2, "getInsets(...)");
        Insets f10 = c2Var.f(519);
        Intrinsics.checkNotNullExpressionValue(f10, "getInsets(...)");
        Insets f11 = c2Var.f(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        Intrinsics.checkNotNullExpressionValue(f11, "getInsets(...)");
        this.f15574v = Math.max(f10.f1512b, f11.f1512b);
        Screen screen = this.f15571d;
        if (p3) {
            this.f15572e = true;
            this.f15573i = new com.swmansion.rnscreens.k(f2.f1514d);
            BottomSheetBehavior<Screen> sheetBehavior = screen.getSheetBehavior();
            if (sheetBehavior != null) {
                b(this, sheetBehavior, this.f15573i, 4);
            }
            return insets;
        }
        BottomSheetBehavior<Screen> sheetBehavior2 = screen.getSheetBehavior();
        com.swmansion.rnscreens.j jVar = com.swmansion.rnscreens.j.a;
        if (sheetBehavior2 != null) {
            if (this.f15572e) {
                b(this, sheetBehavior2, com.swmansion.rnscreens.i.a, 4);
            } else if (!Intrinsics.areEqual(this.f15573i, jVar)) {
                b(this, sheetBehavior2, jVar, 4);
            }
        }
        this.f15573i = jVar;
        this.f15572e = false;
        return insets;
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner source, androidx.lifecycle.n event) {
        View currentFocus;
        View decorView;
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(event, "event");
        int i5 = j.a[event.ordinal()];
        Screen screen = this.f15571d;
        if (i5 == 1) {
            Activity currentActivity = screen.getReactContext().getCurrentActivity();
            if (currentActivity == null || (currentFocus = currentActivity.getCurrentFocus()) == null) {
                return;
            }
            Window window = currentActivity.getWindow();
            if (window != null && (decorView = window.getDecorView()) != null) {
                Intrinsics.checkNotNullParameter(decorView, "decorView");
                WeakHashMap weakHashMap = s0.a;
                WindowInsetsCompat a = androidx.core.view.k0.a(decorView);
                if (Intrinsics.areEqual(a != null ? Boolean.valueOf(a.a.p(8)) : null, Boolean.TRUE)) {
                    this.E = currentFocus;
                }
            }
            screen.requestFocus();
            InputMethodManager d6 = d();
            if (d6 != null) {
                d6.hideSoftInputFromWindow(currentFocus.getWindowToken(), 0);
                return;
            }
            return;
        }
        if (i5 == 2) {
            com.swmansion.rnscreens.h hVar = com.swmansion.rnscreens.h.f6758d;
            Activity currentActivity2 = screen.getReactContext().getCurrentActivity();
            if (currentActivity2 == null) {
                throw new IllegalStateException("[RNScreens] Attempt to access activity on detached context");
            }
            View view = currentActivity2.getWindow().getDecorView();
            Intrinsics.checkNotNullExpressionValue(view, "getDecorView(...)");
            Intrinsics.checkNotNullParameter(view, "view");
            if (!com.swmansion.rnscreens.h.f6761v || com.swmansion.rnscreens.h.f6760i.get() == null) {
                WeakHashMap weakHashMap2 = s0.a;
                j0.m(view, hVar);
                com.swmansion.rnscreens.h.f6760i = new WeakReference(view);
                com.swmansion.rnscreens.h.f6761v = true;
                return;
            }
            return;
        }
        if (i5 == 3) {
            com.swmansion.rnscreens.h hVar2 = com.swmansion.rnscreens.h.f6758d;
            Intrinsics.checkNotNullParameter(this, "listener");
            com.swmansion.rnscreens.h.f6759e.add(this);
        } else if (i5 == 4) {
            com.swmansion.rnscreens.h hVar3 = com.swmansion.rnscreens.h.f6758d;
            Intrinsics.checkNotNullParameter(this, "listener");
            com.swmansion.rnscreens.h.f6759e.remove(this);
        } else {
            if (i5 != 5) {
                return;
            }
            View view2 = this.E;
            if (view2 != null) {
                view2.requestFocus();
                InputMethodManager d7 = d();
                if (d7 != null) {
                    d7.showSoftInput(view2, 0);
                }
            }
            this.E = null;
        }
    }

    public final InputMethodManager d() {
        Object systemService = this.f15571d.getReactContext().getSystemService("input_method");
        if (systemService instanceof InputMethodManager) {
            return (InputMethodManager) systemService;
        }
        return null;
    }

    public final void e(WindowInsetsCompat insets) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        Screen screen = this.f15571d;
        SheetAnimationCoordinator sheetAnimationCoordinator$react_native_screens_release = screen.getSheetAnimationCoordinator$react_native_screens_release();
        sheetAnimationCoordinator$react_native_screens_release.getClass();
        Intrinsics.checkNotNullParameter(insets, "insets");
        sheetAnimationCoordinator$react_native_screens_release.f6725e = insets.a.f(8).f1514d;
        sheetAnimationCoordinator$react_native_screens_release.f6728h = insets.a.f(519).f1514d;
        if (!sheetAnimationCoordinator$react_native_screens_release.f6723c) {
            sheetAnimationCoordinator$react_native_screens_release.e(0.0f);
        }
        ScreenFooter footer = screen.getFooter();
        if (footer != null) {
            footer.d(insets);
        }
    }

    public final Integer f() {
        WindowMetrics currentWindowMetrics;
        Rect bounds;
        DisplayMetrics displayMetrics;
        Screen screen = this.f15571d;
        ScreenContainer container = screen.getContainer();
        if (container != null) {
            return Integer.valueOf(container.getHeight());
        }
        ThemedReactContext reactContext = screen.getReactContext();
        Resources resources = reactContext.getResources();
        if (resources != null && (displayMetrics = resources.getDisplayMetrics()) != null) {
            return Integer.valueOf(displayMetrics.heightPixels);
        }
        if (Build.VERSION.SDK_INT >= 30) {
            Object systemService = reactContext.getSystemService("window");
            WindowManager windowManager = systemService instanceof WindowManager ? (WindowManager) systemService : null;
            if (windowManager != null && (currentWindowMetrics = windowManager.getCurrentWindowMetrics()) != null && (bounds = currentWindowMetrics.getBounds()) != null) {
                return Integer.valueOf(bounds.height());
            }
        }
        return null;
    }

    public final Integer g() {
        if (this.f15571d.getSheetShouldOverflowTopInset()) {
            return f();
        }
        Integer f2 = f();
        if (f2 != null) {
            return Integer.valueOf(f2.intValue() - this.f15574v);
        }
        return null;
    }
}
