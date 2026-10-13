package n;

import android.view.MenuItem;

/* loaded from: classes.dex */
public final class p implements MenuItem.OnMenuItemClickListener {
    public final MenuItem.OnMenuItemClickListener a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ q f14697b;

    public p(q qVar, MenuItem.OnMenuItemClickListener onMenuItemClickListener) {
        this.f14697b = qVar;
        this.a = onMenuItemClickListener;
    }

    @Override // android.view.MenuItem.OnMenuItemClickListener
    public final boolean onMenuItemClick(MenuItem menuItem) {
        return this.a.onMenuItemClick(this.f14697b.h(menuItem));
    }
}
