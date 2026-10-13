package androidx.fragment.app;

import android.app.Application;
import android.content.Context;
import android.content.ContextWrapper;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleRegistry;
import androidx.lifecycle.ViewModelStore;
import androidx.lifecycle.viewmodel.CreationExtras;
import androidx.savedstate.SavedStateRegistry;
import androidx.savedstate.SavedStateRegistryController;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class FragmentViewLifecycleOwner implements androidx.lifecycle.i, d3.e, androidx.lifecycle.d1 {

    /* renamed from: d, reason: collision with root package name */
    public final Fragment f1951d;

    /* renamed from: e, reason: collision with root package name */
    public final ViewModelStore f1952e;

    /* renamed from: i, reason: collision with root package name */
    public final y f1953i;

    /* renamed from: v, reason: collision with root package name */
    public LifecycleRegistry f1954v = null;

    /* renamed from: w, reason: collision with root package name */
    public SavedStateRegistryController f1955w = null;

    public FragmentViewLifecycleOwner(Fragment fragment, ViewModelStore viewModelStore, y yVar) {
        this.f1951d = fragment;
        this.f1952e = viewModelStore;
        this.f1953i = yVar;
    }

    public final void a(androidx.lifecycle.n nVar) {
        this.f1954v.f(nVar);
    }

    public final void b() {
        if (this.f1954v == null) {
            this.f1954v = new LifecycleRegistry(this);
            Intrinsics.checkNotNullParameter(this, "owner");
            e3.a aVar = new e3.a(this, new androidx.lifecycle.s0(28, this));
            this.f1955w = new SavedStateRegistryController(aVar);
            aVar.a();
            this.f1953i.run();
        }
    }

    @Override // androidx.lifecycle.i
    public final CreationExtras getDefaultViewModelCreationExtras() {
        Application application;
        Fragment fragment = this.f1951d;
        Context applicationContext = fragment.requireContext().getApplicationContext();
        while (true) {
            if (!(applicationContext instanceof ContextWrapper)) {
                application = null;
                break;
            }
            if (applicationContext instanceof Application) {
                application = (Application) applicationContext;
                break;
            }
            applicationContext = ((ContextWrapper) applicationContext).getBaseContext();
        }
        t2.c cVar = new t2.c(0);
        if (application != null) {
            cVar.b(androidx.lifecycle.a1.f2171d, application);
        }
        cVar.b(androidx.lifecycle.r0.a, fragment);
        cVar.b(androidx.lifecycle.r0.f2220b, this);
        if (fragment.getArguments() != null) {
            cVar.b(androidx.lifecycle.r0.f2221c, fragment.getArguments());
        }
        return cVar;
    }

    @Override // androidx.lifecycle.LifecycleOwner
    public final Lifecycle getLifecycle() {
        b();
        return this.f1954v;
    }

    @Override // d3.e
    public final SavedStateRegistry getSavedStateRegistry() {
        b();
        return this.f1955w.f2496b;
    }

    @Override // androidx.lifecycle.d1
    public final ViewModelStore getViewModelStore() {
        b();
        return this.f1952e;
    }
}
