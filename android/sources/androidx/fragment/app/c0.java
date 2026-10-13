package androidx.fragment.app;

import android.view.View;

/* loaded from: classes.dex */
public final class c0 extends FragmentContainer {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Fragment f1977d;

    public c0(Fragment fragment) {
        this.f1977d = fragment;
    }

    @Override // androidx.fragment.app.FragmentContainer
    public final View b(int i5) {
        Fragment fragment = this.f1977d;
        View view = fragment.mView;
        if (view != null) {
            return view.findViewById(i5);
        }
        throw new IllegalStateException("Fragment " + fragment + " does not have a view");
    }

    @Override // androidx.fragment.app.FragmentContainer
    public final boolean c() {
        return this.f1977d.mView != null;
    }
}
