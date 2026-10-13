package androidx.fragment.app;

import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import androidx.core.view.MenuProvider;

/* loaded from: classes.dex */
public final class t0 implements MenuProvider {
    public final /* synthetic */ FragmentManager a;

    public t0(FragmentManager fragmentManager) {
        this.a = fragmentManager;
    }

    @Override // androidx.core.view.MenuProvider
    public final boolean a(MenuItem menuItem) {
        return this.a.p(menuItem);
    }

    @Override // androidx.core.view.MenuProvider
    public final void b(Menu menu) {
        this.a.q(menu);
    }

    @Override // androidx.core.view.MenuProvider
    public final void c(Menu menu, MenuInflater menuInflater) {
        this.a.k(menu, menuInflater);
    }

    @Override // androidx.core.view.MenuProvider
    public final void d(Menu menu) {
        this.a.t(menu);
    }
}
