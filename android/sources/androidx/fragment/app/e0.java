package androidx.fragment.app;

import android.app.Dialog;
import android.util.Log;
import android.view.View;
import androidx.activity.result.ActivityResultRegistry;
import androidx.arch.core.util.Function;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.Observer;

/* loaded from: classes.dex */
public final class e0 implements Function, Observer {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1991d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f1992e;

    public /* synthetic */ e0(int i5, Object obj) {
        this.f1991d = i5;
        this.f1992e = obj;
    }

    @Override // androidx.arch.core.util.Function
    public Object apply(Object obj) {
        switch (this.f1991d) {
            case 0:
                Fragment fragment = (Fragment) this.f1992e;
                Object obj2 = fragment.mHost;
                return obj2 instanceof f.g ? ((f.g) obj2).getActivityResultRegistry() : fragment.requireActivity().getActivityResultRegistry();
            default:
                return (ActivityResultRegistry) this.f1992e;
        }
    }

    @Override // androidx.lifecycle.Observer
    public void onChanged(Object obj) {
        boolean z5;
        Dialog dialog;
        Dialog dialog2;
        Dialog dialog3;
        LifecycleOwner lifecycleOwner = (LifecycleOwner) obj;
        DialogFragment dialogFragment = (DialogFragment) this.f1992e;
        if (lifecycleOwner != null) {
            z5 = dialogFragment.mShowsDialog;
            if (z5) {
                View requireView = dialogFragment.requireView();
                if (requireView.getParent() != null) {
                    throw new IllegalStateException("DialogFragment can not be attached to a container view");
                }
                dialog = dialogFragment.mDialog;
                if (dialog != null) {
                    if (FragmentManager.M(3)) {
                        StringBuilder sb2 = new StringBuilder("DialogFragment ");
                        sb2.append(this);
                        sb2.append(" setting the content view on ");
                        dialog3 = dialogFragment.mDialog;
                        sb2.append(dialog3);
                        Log.d("FragmentManager", sb2.toString());
                    }
                    dialog2 = dialogFragment.mDialog;
                    dialog2.setContentView(requireView);
                }
            }
        }
    }
}
