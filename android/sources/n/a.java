package n;

import android.R;
import android.content.Context;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.view.ActionProvider;
import android.view.ContextMenu;
import android.view.KeyEvent;
import android.view.MenuItem;
import android.view.SubMenu;
import android.view.View;

/* loaded from: classes.dex */
public final class a implements d1.a {
    public CharSequence a;

    /* renamed from: b, reason: collision with root package name */
    public CharSequence f14604b;

    /* renamed from: c, reason: collision with root package name */
    public Intent f14605c;

    /* renamed from: d, reason: collision with root package name */
    public char f14606d;

    /* renamed from: e, reason: collision with root package name */
    public int f14607e;

    /* renamed from: f, reason: collision with root package name */
    public char f14608f;

    /* renamed from: g, reason: collision with root package name */
    public int f14609g;

    /* renamed from: h, reason: collision with root package name */
    public Drawable f14610h;

    /* renamed from: i, reason: collision with root package name */
    public Context f14611i;
    public CharSequence j;
    public CharSequence k;

    /* renamed from: l, reason: collision with root package name */
    public ColorStateList f14612l;

    /* renamed from: m, reason: collision with root package name */
    public PorterDuff.Mode f14613m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f14614n;

    /* renamed from: o, reason: collision with root package name */
    public boolean f14615o;

    /* renamed from: p, reason: collision with root package name */
    public int f14616p;

    @Override // d1.a
    public final m a() {
        return null;
    }

    @Override // d1.a
    public final d1.a b(m mVar) {
        throw new UnsupportedOperationException();
    }

    public final void c() {
        Drawable drawable = this.f14610h;
        if (drawable != null) {
            if (this.f14614n || this.f14615o) {
                this.f14610h = drawable;
                Drawable mutate = drawable.mutate();
                this.f14610h = mutate;
                if (this.f14614n) {
                    mutate.setTintList(this.f14612l);
                }
                if (this.f14615o) {
                    this.f14610h.setTintMode(this.f14613m);
                }
            }
        }
    }

    @Override // android.view.MenuItem
    public final boolean collapseActionView() {
        return false;
    }

    @Override // android.view.MenuItem
    public final boolean expandActionView() {
        return false;
    }

    @Override // android.view.MenuItem
    public final ActionProvider getActionProvider() {
        throw new UnsupportedOperationException();
    }

    @Override // android.view.MenuItem
    public final View getActionView() {
        return null;
    }

    @Override // d1.a, android.view.MenuItem
    public final int getAlphabeticModifiers() {
        return this.f14609g;
    }

    @Override // android.view.MenuItem
    public final char getAlphabeticShortcut() {
        return this.f14608f;
    }

    @Override // d1.a, android.view.MenuItem
    public final CharSequence getContentDescription() {
        return this.j;
    }

    @Override // android.view.MenuItem
    public final int getGroupId() {
        return 0;
    }

    @Override // android.view.MenuItem
    public final Drawable getIcon() {
        return this.f14610h;
    }

    @Override // d1.a, android.view.MenuItem
    public final ColorStateList getIconTintList() {
        return this.f14612l;
    }

    @Override // d1.a, android.view.MenuItem
    public final PorterDuff.Mode getIconTintMode() {
        return this.f14613m;
    }

    @Override // android.view.MenuItem
    public final Intent getIntent() {
        return this.f14605c;
    }

    @Override // android.view.MenuItem
    public final int getItemId() {
        return R.id.home;
    }

    @Override // android.view.MenuItem
    public final ContextMenu.ContextMenuInfo getMenuInfo() {
        return null;
    }

    @Override // d1.a, android.view.MenuItem
    public final int getNumericModifiers() {
        return this.f14607e;
    }

    @Override // android.view.MenuItem
    public final char getNumericShortcut() {
        return this.f14606d;
    }

    @Override // android.view.MenuItem
    public final int getOrder() {
        return 0;
    }

    @Override // android.view.MenuItem
    public final SubMenu getSubMenu() {
        return null;
    }

    @Override // android.view.MenuItem
    public final CharSequence getTitle() {
        return this.a;
    }

    @Override // android.view.MenuItem
    public final CharSequence getTitleCondensed() {
        CharSequence charSequence = this.f14604b;
        return charSequence != null ? charSequence : this.a;
    }

    @Override // d1.a, android.view.MenuItem
    public final CharSequence getTooltipText() {
        return this.k;
    }

    @Override // android.view.MenuItem
    public final boolean hasSubMenu() {
        return false;
    }

    @Override // android.view.MenuItem
    public final boolean isActionViewExpanded() {
        return false;
    }

    @Override // android.view.MenuItem
    public final boolean isCheckable() {
        return (this.f14616p & 1) != 0;
    }

    @Override // android.view.MenuItem
    public final boolean isChecked() {
        return (this.f14616p & 2) != 0;
    }

    @Override // android.view.MenuItem
    public final boolean isEnabled() {
        return (this.f14616p & 16) != 0;
    }

    @Override // android.view.MenuItem
    public final boolean isVisible() {
        return (this.f14616p & 8) == 0;
    }

    @Override // android.view.MenuItem
    public final MenuItem setActionProvider(ActionProvider actionProvider) {
        throw new UnsupportedOperationException();
    }

    @Override // android.view.MenuItem
    public final MenuItem setActionView(View view) {
        throw new UnsupportedOperationException();
    }

    @Override // android.view.MenuItem
    public final MenuItem setAlphabeticShortcut(char c6) {
        this.f14608f = Character.toLowerCase(c6);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setCheckable(boolean z5) {
        this.f14616p = (z5 ? 1 : 0) | (this.f14616p & (-2));
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setChecked(boolean z5) {
        this.f14616p = (z5 ? 2 : 0) | (this.f14616p & (-3));
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setContentDescription(CharSequence charSequence) {
        this.j = charSequence;
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setEnabled(boolean z5) {
        this.f14616p = (z5 ? 16 : 0) | (this.f14616p & (-17));
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setIcon(Drawable drawable) {
        this.f14610h = drawable;
        c();
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final MenuItem setIconTintList(ColorStateList colorStateList) {
        this.f14612l = colorStateList;
        this.f14614n = true;
        c();
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final MenuItem setIconTintMode(PorterDuff.Mode mode) {
        this.f14613m = mode;
        this.f14615o = true;
        c();
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setIntent(Intent intent) {
        this.f14605c = intent;
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setNumericShortcut(char c6) {
        this.f14606d = c6;
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setOnActionExpandListener(MenuItem.OnActionExpandListener onActionExpandListener) {
        throw new UnsupportedOperationException();
    }

    @Override // android.view.MenuItem
    public final MenuItem setShortcut(char c6, char c8) {
        this.f14606d = c6;
        this.f14608f = Character.toLowerCase(c8);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setTitle(CharSequence charSequence) {
        this.a = charSequence;
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setTitleCondensed(CharSequence charSequence) {
        this.f14604b = charSequence;
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setTooltipText(CharSequence charSequence) {
        this.k = charSequence;
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setVisible(boolean z5) {
        this.f14616p = (this.f14616p & 8) | (z5 ? 0 : 8);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setActionView(int i5) {
        throw new UnsupportedOperationException();
    }

    @Override // d1.a, android.view.MenuItem
    public final MenuItem setAlphabeticShortcut(char c6, int i5) {
        this.f14608f = Character.toLowerCase(c6);
        this.f14609g = KeyEvent.normalizeMetaState(i5);
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final d1.a setContentDescription(CharSequence charSequence) {
        this.j = charSequence;
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final MenuItem setNumericShortcut(char c6, int i5) {
        this.f14606d = c6;
        this.f14607e = KeyEvent.normalizeMetaState(i5);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setTitle(int i5) {
        this.a = this.f14611i.getResources().getString(i5);
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final d1.a setTooltipText(CharSequence charSequence) {
        this.k = charSequence;
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setIcon(int i5) {
        this.f14610h = this.f14611i.getDrawable(i5);
        c();
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final MenuItem setShortcut(char c6, char c8, int i5, int i6) {
        this.f14606d = c6;
        this.f14607e = KeyEvent.normalizeMetaState(i5);
        this.f14608f = Character.toLowerCase(c8);
        this.f14609g = KeyEvent.normalizeMetaState(i6);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setOnMenuItemClickListener(MenuItem.OnMenuItemClickListener onMenuItemClickListener) {
        return this;
    }

    @Override // android.view.MenuItem
    public final void setShowAsAction(int i5) {
    }

    @Override // android.view.MenuItem
    public final MenuItem setShowAsActionFlags(int i5) {
        return this;
    }
}
