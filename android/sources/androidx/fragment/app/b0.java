package androidx.fragment.app;

import android.os.Bundle;
import androidx.fragment.app.Fragment;

/* loaded from: classes.dex */
public final class b0 extends Fragment.OnPreAttachedListener {
    public final /* synthetic */ Fragment a;

    public b0(Fragment fragment) {
        this.a = fragment;
    }

    @Override // androidx.fragment.app.Fragment.OnPreAttachedListener
    public final void a() {
        Fragment fragment = this.a;
        fragment.mSavedStateRegistryController.a.a();
        androidx.lifecycle.r0.b(fragment);
        Bundle bundle = fragment.mSavedFragmentState;
        fragment.mSavedStateRegistryController.a(bundle != null ? bundle.getBundle("registryState") : null);
    }
}
