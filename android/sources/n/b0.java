package n;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.view.MenuItem;
import android.view.SubMenu;
import android.view.View;

/* loaded from: classes.dex */
public class b0 extends j implements SubMenu {
    public final l A;

    /* renamed from: z, reason: collision with root package name */
    public final j f14623z;

    public b0(Context context, j jVar, l lVar) {
        super(context);
        this.f14623z = jVar;
        this.A = lVar;
    }

    @Override // n.j
    public final boolean d(l lVar) {
        return this.f14623z.d(lVar);
    }

    @Override // n.j
    public final boolean e(j jVar, MenuItem menuItem) {
        return super.e(jVar, menuItem) || this.f14623z.e(jVar, menuItem);
    }

    @Override // n.j
    public final boolean f(l lVar) {
        return this.f14623z.f(lVar);
    }

    @Override // android.view.SubMenu
    public final MenuItem getItem() {
        return this.A;
    }

    @Override // n.j
    public final String j() {
        l lVar = this.A;
        int i5 = lVar != null ? lVar.a : 0;
        if (i5 == 0) {
            return null;
        }
        return k0.d.i(i5, "android:menu:actionviewstates:");
    }

    @Override // n.j
    public final j k() {
        return this.f14623z.k();
    }

    @Override // n.j
    public final boolean m() {
        return this.f14623z.m();
    }

    @Override // n.j
    public final boolean n() {
        return this.f14623z.n();
    }

    @Override // n.j
    public final boolean o() {
        return this.f14623z.o();
    }

    @Override // n.j, android.view.Menu
    public final void setGroupDividerEnabled(boolean z5) {
        this.f14623z.setGroupDividerEnabled(z5);
    }

    @Override // android.view.SubMenu
    public final SubMenu setHeaderIcon(Drawable drawable) {
        u(0, null, 0, drawable, null);
        return this;
    }

    @Override // android.view.SubMenu
    public final SubMenu setHeaderTitle(CharSequence charSequence) {
        u(0, charSequence, 0, null, null);
        return this;
    }

    @Override // android.view.SubMenu
    public final SubMenu setHeaderView(View view) {
        u(0, null, 0, null, view);
        return this;
    }

    @Override // android.view.SubMenu
    public final SubMenu setIcon(Drawable drawable) {
        this.A.setIcon(drawable);
        return this;
    }

    @Override // n.j, android.view.Menu
    public final void setQwertyMode(boolean z5) {
        this.f14623z.setQwertyMode(z5);
    }

    @Override // android.view.SubMenu
    public final SubMenu setHeaderIcon(int i5) {
        u(0, null, i5, null, null);
        return this;
    }

    @Override // android.view.SubMenu
    public final SubMenu setHeaderTitle(int i5) {
        u(i5, null, 0, null, null);
        return this;
    }

    @Override // android.view.SubMenu
    public final SubMenu setIcon(int i5) {
        this.A.setIcon(i5);
        return this;
    }
}
