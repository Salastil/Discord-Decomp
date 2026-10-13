package androidx.fragment.app;

import android.content.pm.PackageManager;
import android.os.Build;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.Window;
import androidx.activity.OnBackPressedDispatcher;
import androidx.activity.result.ActivityResultRegistry;
import androidx.core.util.Consumer;
import androidx.core.view.MenuProvider;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.ViewModelStore;
import androidx.savedstate.SavedStateRegistry;
import java.io.PrintWriter;
import java.lang.reflect.InvocationTargetException;

/* loaded from: classes.dex */
public final class k0 extends FragmentHostCallback implements y0.f, y0.g, x0.c1, x0.d1, androidx.lifecycle.d1, e.t, f.g, d3.e, h1, androidx.core.view.k {

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ FragmentActivity f2034w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k0(FragmentActivity fragmentActivity) {
        super(fragmentActivity);
        this.f2034w = fragmentActivity;
    }

    @Override // androidx.fragment.app.h1
    public final void a(Fragment fragment) {
        this.f2034w.onAttachFragment(fragment);
    }

    @Override // androidx.core.view.k
    public final void addMenuProvider(MenuProvider menuProvider) {
        this.f2034w.addMenuProvider(menuProvider);
    }

    @Override // y0.f
    public final void addOnConfigurationChangedListener(Consumer consumer) {
        this.f2034w.addOnConfigurationChangedListener(consumer);
    }

    @Override // x0.c1
    public final void addOnMultiWindowModeChangedListener(Consumer consumer) {
        this.f2034w.addOnMultiWindowModeChangedListener(consumer);
    }

    @Override // x0.d1
    public final void addOnPictureInPictureModeChangedListener(Consumer consumer) {
        this.f2034w.addOnPictureInPictureModeChangedListener(consumer);
    }

    @Override // y0.g
    public final void addOnTrimMemoryListener(Consumer consumer) {
        this.f2034w.addOnTrimMemoryListener(consumer);
    }

    @Override // androidx.fragment.app.FragmentHostCallback, androidx.fragment.app.FragmentContainer
    public final View b(int i5) {
        return this.f2034w.findViewById(i5);
    }

    @Override // androidx.fragment.app.FragmentHostCallback, androidx.fragment.app.FragmentContainer
    public final boolean c() {
        Window window = this.f2034w.getWindow();
        return (window == null || window.peekDecorView() == null) ? false : true;
    }

    @Override // androidx.fragment.app.FragmentHostCallback
    public final void d(PrintWriter printWriter, String[] strArr) {
        this.f2034w.dump("  ", null, printWriter, strArr);
    }

    @Override // androidx.fragment.app.FragmentHostCallback
    public final FragmentActivity e() {
        return this.f2034w;
    }

    @Override // androidx.fragment.app.FragmentHostCallback
    public final LayoutInflater f() {
        FragmentActivity fragmentActivity = this.f2034w;
        return fragmentActivity.getLayoutInflater().cloneInContext(fragmentActivity);
    }

    @Override // androidx.fragment.app.FragmentHostCallback
    public final boolean g(String str) {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 < 33 && TextUtils.equals("android.permission.POST_NOTIFICATIONS", str)) {
            return false;
        }
        FragmentActivity fragmentActivity = this.f2034w;
        if (i5 >= 32) {
            return fragmentActivity.shouldShowRequestPermissionRationale(str);
        }
        if (i5 != 31) {
            return fragmentActivity.shouldShowRequestPermissionRationale(str);
        }
        try {
            return ((Boolean) PackageManager.class.getMethod("shouldShowRequestPermissionRationale", String.class).invoke(fragmentActivity.getApplication().getPackageManager(), str)).booleanValue();
        } catch (IllegalAccessException | NoSuchMethodException | InvocationTargetException unused) {
            return fragmentActivity.shouldShowRequestPermissionRationale(str);
        }
    }

    @Override // f.g
    public final ActivityResultRegistry getActivityResultRegistry() {
        return this.f2034w.getActivityResultRegistry();
    }

    @Override // androidx.lifecycle.LifecycleOwner
    public final Lifecycle getLifecycle() {
        return this.f2034w.mFragmentLifecycleRegistry;
    }

    @Override // e.t
    public final OnBackPressedDispatcher getOnBackPressedDispatcher() {
        return this.f2034w.getOnBackPressedDispatcher();
    }

    @Override // d3.e
    public final SavedStateRegistry getSavedStateRegistry() {
        return this.f2034w.getSavedStateRegistry();
    }

    @Override // androidx.lifecycle.d1
    public final ViewModelStore getViewModelStore() {
        return this.f2034w.getViewModelStore();
    }

    @Override // androidx.fragment.app.FragmentHostCallback
    public final void h() {
        this.f2034w.invalidateMenu();
    }

    @Override // androidx.core.view.k
    public final void removeMenuProvider(MenuProvider menuProvider) {
        this.f2034w.removeMenuProvider(menuProvider);
    }

    @Override // y0.f
    public final void removeOnConfigurationChangedListener(Consumer consumer) {
        this.f2034w.removeOnConfigurationChangedListener(consumer);
    }

    @Override // x0.c1
    public final void removeOnMultiWindowModeChangedListener(Consumer consumer) {
        this.f2034w.removeOnMultiWindowModeChangedListener(consumer);
    }

    @Override // x0.d1
    public final void removeOnPictureInPictureModeChangedListener(Consumer consumer) {
        this.f2034w.removeOnPictureInPictureModeChangedListener(consumer);
    }

    @Override // y0.g
    public final void removeOnTrimMemoryListener(Consumer consumer) {
        this.f2034w.removeOnTrimMemoryListener(consumer);
    }
}
