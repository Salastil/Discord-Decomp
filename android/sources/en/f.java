package en;

import android.view.ViewGroup;
import android.widget.FrameLayout;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import java.lang.ref.WeakReference;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class f extends ViewGroup implements qm.a, xm.c, sm.b {
    public static final /* synthetic */ KProperty[] J = {com.discord.chat.bridge.botuikit.a.p(f.class, "isPreventNativeDismissEnabled", "isPreventNativeDismissEnabled$react_native_screens_release()Z", 0), com.discord.chat.bridge.botuikit.a.p(f.class, "activityMode", "getActivityMode()Lcom/swmansion/rnscreens/gamma/stack/screen/StackScreen$ActivityMode;", 0)};
    public final qm.b E;
    public zm.c F;
    public WeakReference G;
    public h H;
    public c I;

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f8173d;

    /* renamed from: e, reason: collision with root package name */
    public final e4.e f8174e;

    /* renamed from: i, reason: collision with root package name */
    public final e f8175i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f8176v;

    /* renamed from: w, reason: collision with root package name */
    public WeakReference f8177w;

    /* renamed from: x, reason: collision with root package name */
    public final e f8178x;

    /* renamed from: y, reason: collision with root package name */
    public String f8179y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f8173d = reactContext;
        this.f8174e = new e4.e(21);
        this.f8175i = new e(this, 0);
        this.f8177w = new WeakReference(null);
        d dVar = d.f8168d;
        this.f8178x = new e(this, 1);
        this.E = new qm.b(true);
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // sm.b
    public final void a(sm.a container) {
        Intrinsics.checkNotNullParameter(container, "container");
        e4.e eVar = this.f8174e;
        eVar.getClass();
        Intrinsics.checkNotNullParameter(container, "container");
        if (e.e.g((WeakReference) eVar.f7943e, (FrameLayout) container)) {
            ((WeakReference) eVar.f7943e).clear();
        }
    }

    @Override // sm.b
    public final void b(sm.a container) {
        Intrinsics.checkNotNullParameter(container, "container");
        e4.e eVar = this.f8174e;
        eVar.getClass();
        Intrinsics.checkNotNullParameter(container, "container");
        eVar.f7943e = new WeakReference(container);
    }

    @Override // xm.c
    public final void c(xm.a marker, ViewGroup scrollView) {
        Intrinsics.checkNotNullParameter(marker, "marker");
        Intrinsics.checkNotNullParameter(scrollView, "scrollView");
        e4.e eVar = this.f8174e;
        eVar.getClass();
        Intrinsics.checkNotNullParameter(scrollView, "scrollView");
        eVar.f7944i = new WeakReference(scrollView);
    }

    @NotNull
    public final d getActivityMode() {
        return (d) this.f8178x.getValue(this, J[1]);
    }

    @Override // qm.a
    public Fragment getAssociatedFragment() {
        Fragment fragment;
        Intrinsics.checkNotNullParameter(this, "<this>");
        try {
            fragment = FragmentManager.C(this);
        } catch (IllegalStateException unused) {
            fragment = null;
        }
        if (fragment == null) {
            return null;
        }
        if (fragment instanceof i) {
            return fragment;
        }
        throw new IllegalStateException("[RNScreens] Unexpected fragment type: ".concat(fragment.getClass().getSimpleName()).toString());
    }

    @NotNull
    public final h getEventEmitter$react_native_screens_release() {
        h hVar = this.H;
        if (hVar != null) {
            return hVar;
        }
        Intrinsics.throwUninitializedPropertyAccessException("eventEmitter");
        return null;
    }

    public final zm.c getHeaderConfig$react_native_screens_release() {
        return this.F;
    }

    public final c getPreventNativeDismissChangeObserver$react_native_screens_release() {
        return this.I;
    }

    public final String getScreenKey() {
        return this.f8179y;
    }

    @NotNull
    public final WeakReference<dn.i> getStackHost$react_native_screens_release() {
        return this.f8177w;
    }

    public final StateWrapper getStateWrapper$react_native_screens_release() {
        return this.E.f16905b;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        qm.b.a(this.E, getResources().getDisplayMetrics().density, Integer.valueOf(i10 - i5), Integer.valueOf(i11 - i6), null, null, 24);
    }

    public final void setActivityMode(@NotNull d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<set-?>");
        this.f8178x.setValue(this, J[1], dVar);
    }

    public final void setEventEmitter$react_native_screens_release(@NotNull h hVar) {
        Intrinsics.checkNotNullParameter(hVar, "<set-?>");
        this.H = hVar;
    }

    public final void setNativelyDismissed$react_native_screens_release(boolean z5) {
        if (!z5) {
            throw new IllegalArgumentException("[RNScreens] Natively dismissed StackScreen must remain dismissed.");
        }
        this.f8176v = true;
    }

    public final void setPreventNativeDismissChangeObserver$react_native_screens_release(c cVar) {
        this.I = cVar;
    }

    public final void setPreventNativeDismissEnabled$react_native_screens_release(boolean z5) {
        this.f8175i.setValue(this, J[0], Boolean.valueOf(z5));
    }

    public final void setScreenKey(String str) {
        if (this.f8179y != null) {
            throw new IllegalArgumentException("[RNScreens] StackScreen can't change its screenKey.");
        }
        this.f8179y = str;
    }

    public final void setStackHost$react_native_screens_release(@NotNull WeakReference<dn.i> weakReference) {
        Intrinsics.checkNotNullParameter(weakReference, "<set-?>");
        this.f8177w = weakReference;
    }

    public final void setStateWrapper$react_native_screens_release(StateWrapper stateWrapper) {
        this.E.f16905b = stateWrapper;
    }
}
