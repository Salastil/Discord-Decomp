package n;

import android.view.MenuItem;

/* loaded from: classes.dex */
public final class o implements MenuItem.OnActionExpandListener {
    public final MenuItem.OnActionExpandListener a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ q f14696b;

    public o(q qVar, MenuItem.OnActionExpandListener onActionExpandListener) {
        this.f14696b = qVar;
        this.a = onActionExpandListener;
    }

    @Override // android.view.MenuItem.OnActionExpandListener
    public final boolean onMenuItemActionCollapse(MenuItem menuItem) {
        return this.a.onMenuItemActionCollapse(this.f14696b.h(menuItem));
    }

    @Override // android.view.MenuItem.OnActionExpandListener
    public final boolean onMenuItemActionExpand(MenuItem menuItem) {
        return this.a.onMenuItemActionExpand(this.f14696b.h(menuItem));
    }
}
