package androidx.fragment.app;

import android.view.View;

/* loaded from: classes.dex */
public final class x extends FragmentContainer {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ FragmentContainer f2117d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ DialogFragment f2118e;

    public x(DialogFragment dialogFragment, FragmentContainer fragmentContainer) {
        this.f2118e = dialogFragment;
        this.f2117d = fragmentContainer;
    }

    @Override // androidx.fragment.app.FragmentContainer
    public final View b(int i5) {
        FragmentContainer fragmentContainer = this.f2117d;
        return fragmentContainer.c() ? fragmentContainer.b(i5) : this.f2118e.onFindViewById(i5);
    }

    @Override // androidx.fragment.app.FragmentContainer
    public final boolean c() {
        return this.f2117d.c() || this.f2118e.onHasView();
    }
}
