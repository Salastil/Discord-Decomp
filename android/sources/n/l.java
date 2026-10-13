package n;

import android.content.Context;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.view.ActionProvider;
import android.view.ContextMenu;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MenuItem;
import android.view.SubMenu;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import androidx.recyclerview.widget.RecyclerView;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class l implements d1.a {
    public m A;
    public MenuItem.OnActionExpandListener B;
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f14671b;

    /* renamed from: c, reason: collision with root package name */
    public final int f14672c;

    /* renamed from: d, reason: collision with root package name */
    public final int f14673d;

    /* renamed from: e, reason: collision with root package name */
    public CharSequence f14674e;

    /* renamed from: f, reason: collision with root package name */
    public CharSequence f14675f;

    /* renamed from: g, reason: collision with root package name */
    public Intent f14676g;

    /* renamed from: h, reason: collision with root package name */
    public char f14677h;
    public char j;

    /* renamed from: l, reason: collision with root package name */
    public Drawable f14679l;

    /* renamed from: n, reason: collision with root package name */
    public final j f14681n;

    /* renamed from: o, reason: collision with root package name */
    public b0 f14682o;

    /* renamed from: p, reason: collision with root package name */
    public MenuItem.OnMenuItemClickListener f14683p;

    /* renamed from: q, reason: collision with root package name */
    public CharSequence f14684q;

    /* renamed from: r, reason: collision with root package name */
    public CharSequence f14685r;

    /* renamed from: y, reason: collision with root package name */
    public int f14692y;

    /* renamed from: z, reason: collision with root package name */
    public View f14693z;

    /* renamed from: i, reason: collision with root package name */
    public int f14678i = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
    public int k = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;

    /* renamed from: m, reason: collision with root package name */
    public int f14680m = 0;

    /* renamed from: s, reason: collision with root package name */
    public ColorStateList f14686s = null;

    /* renamed from: t, reason: collision with root package name */
    public PorterDuff.Mode f14687t = null;

    /* renamed from: u, reason: collision with root package name */
    public boolean f14688u = false;

    /* renamed from: v, reason: collision with root package name */
    public boolean f14689v = false;

    /* renamed from: w, reason: collision with root package name */
    public boolean f14690w = false;

    /* renamed from: x, reason: collision with root package name */
    public int f14691x = 16;
    public boolean C = false;

    public l(j jVar, int i5, int i6, int i10, int i11, CharSequence charSequence, int i12) {
        this.f14681n = jVar;
        this.a = i6;
        this.f14671b = i5;
        this.f14672c = i10;
        this.f14673d = i11;
        this.f14674e = charSequence;
        this.f14692y = i12;
    }

    public static void c(StringBuilder sb2, int i5, int i6, String str) {
        if ((i5 & i6) == i6) {
            sb2.append(str);
        }
    }

    @Override // d1.a
    public final m a() {
        return this.A;
    }

    @Override // d1.a
    public final d1.a b(m mVar) {
        this.f14693z = null;
        this.A = mVar;
        this.f14681n.p(true);
        m mVar2 = this.A;
        if (mVar2 != null) {
            mVar2.a = new ve.i(this);
            mVar2.f14694b.setVisibilityListener(mVar2);
        }
        return this;
    }

    @Override // android.view.MenuItem
    public final boolean collapseActionView() {
        if ((this.f14692y & 8) == 0) {
            return false;
        }
        if (this.f14693z == null) {
            return true;
        }
        MenuItem.OnActionExpandListener onActionExpandListener = this.B;
        if (onActionExpandListener == null || onActionExpandListener.onMenuItemActionCollapse(this)) {
            return this.f14681n.d(this);
        }
        return false;
    }

    public final Drawable d(Drawable drawable) {
        if (drawable != null && this.f14690w && (this.f14688u || this.f14689v)) {
            drawable = drawable.mutate();
            if (this.f14688u) {
                drawable.setTintList(this.f14686s);
            }
            if (this.f14689v) {
                drawable.setTintMode(this.f14687t);
            }
            this.f14690w = false;
        }
        return drawable;
    }

    public final boolean e() {
        m mVar;
        if ((this.f14692y & 8) != 0) {
            if (this.f14693z == null && (mVar = this.A) != null) {
                this.f14693z = mVar.f14694b.onCreateActionView(this);
            }
            if (this.f14693z != null) {
                return true;
            }
        }
        return false;
    }

    @Override // android.view.MenuItem
    public final boolean expandActionView() {
        if (!e()) {
            return false;
        }
        MenuItem.OnActionExpandListener onActionExpandListener = this.B;
        if (onActionExpandListener == null || onActionExpandListener.onMenuItemActionExpand(this)) {
            return this.f14681n.f(this);
        }
        return false;
    }

    public final void f(boolean z5) {
        if (z5) {
            this.f14691x |= 32;
        } else {
            this.f14691x &= -33;
        }
    }

    @Override // android.view.MenuItem
    public final ActionProvider getActionProvider() {
        throw new UnsupportedOperationException("This is not supported, use MenuItemCompat.getActionProvider()");
    }

    @Override // android.view.MenuItem
    public final View getActionView() {
        View view = this.f14693z;
        if (view != null) {
            return view;
        }
        m mVar = this.A;
        if (mVar == null) {
            return null;
        }
        View onCreateActionView = mVar.f14694b.onCreateActionView(this);
        this.f14693z = onCreateActionView;
        return onCreateActionView;
    }

    @Override // d1.a, android.view.MenuItem
    public final int getAlphabeticModifiers() {
        return this.k;
    }

    @Override // android.view.MenuItem
    public final char getAlphabeticShortcut() {
        return this.j;
    }

    @Override // d1.a, android.view.MenuItem
    public final CharSequence getContentDescription() {
        return this.f14684q;
    }

    @Override // android.view.MenuItem
    public final int getGroupId() {
        return this.f14671b;
    }

    @Override // android.view.MenuItem
    public final Drawable getIcon() {
        Drawable drawable = this.f14679l;
        if (drawable != null) {
            return d(drawable);
        }
        int i5 = this.f14680m;
        if (i5 == 0) {
            return null;
        }
        Drawable J = ys.d.J(this.f14681n.a, i5);
        this.f14680m = 0;
        this.f14679l = J;
        return d(J);
    }

    @Override // d1.a, android.view.MenuItem
    public final ColorStateList getIconTintList() {
        return this.f14686s;
    }

    @Override // d1.a, android.view.MenuItem
    public final PorterDuff.Mode getIconTintMode() {
        return this.f14687t;
    }

    @Override // android.view.MenuItem
    public final Intent getIntent() {
        return this.f14676g;
    }

    @Override // android.view.MenuItem
    public final int getItemId() {
        return this.a;
    }

    @Override // android.view.MenuItem
    public final ContextMenu.ContextMenuInfo getMenuInfo() {
        return null;
    }

    @Override // d1.a, android.view.MenuItem
    public final int getNumericModifiers() {
        return this.f14678i;
    }

    @Override // android.view.MenuItem
    public final char getNumericShortcut() {
        return this.f14677h;
    }

    @Override // android.view.MenuItem
    public final int getOrder() {
        return this.f14672c;
    }

    @Override // android.view.MenuItem
    public final SubMenu getSubMenu() {
        return this.f14682o;
    }

    @Override // android.view.MenuItem
    public final CharSequence getTitle() {
        return this.f14674e;
    }

    @Override // android.view.MenuItem
    public final CharSequence getTitleCondensed() {
        CharSequence charSequence = this.f14675f;
        return charSequence != null ? charSequence : this.f14674e;
    }

    @Override // d1.a, android.view.MenuItem
    public final CharSequence getTooltipText() {
        return this.f14685r;
    }

    @Override // android.view.MenuItem
    public final boolean hasSubMenu() {
        return this.f14682o != null;
    }

    @Override // android.view.MenuItem
    public final boolean isActionViewExpanded() {
        return this.C;
    }

    @Override // android.view.MenuItem
    public final boolean isCheckable() {
        return (this.f14691x & 1) == 1;
    }

    @Override // android.view.MenuItem
    public final boolean isChecked() {
        return (this.f14691x & 2) == 2;
    }

    @Override // android.view.MenuItem
    public final boolean isEnabled() {
        return (this.f14691x & 16) != 0;
    }

    @Override // android.view.MenuItem
    public final boolean isVisible() {
        m mVar = this.A;
        return (mVar == null || !mVar.f14694b.overridesItemVisibility()) ? (this.f14691x & 8) == 0 : (this.f14691x & 8) == 0 && this.A.f14694b.isVisible();
    }

    @Override // android.view.MenuItem
    public final MenuItem setActionProvider(ActionProvider actionProvider) {
        throw new UnsupportedOperationException("This is not supported, use MenuItemCompat.setActionProvider()");
    }

    @Override // android.view.MenuItem
    public final MenuItem setActionView(View view) {
        int i5;
        this.f14693z = view;
        this.A = null;
        if (view != null && view.getId() == -1 && (i5 = this.a) > 0) {
            view.setId(i5);
        }
        j jVar = this.f14681n;
        jVar.k = true;
        jVar.p(true);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setAlphabeticShortcut(char c6) {
        if (this.j == c6) {
            return this;
        }
        this.j = Character.toLowerCase(c6);
        this.f14681n.p(false);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setCheckable(boolean z5) {
        int i5 = this.f14691x;
        int i6 = (z5 ? 1 : 0) | (i5 & (-2));
        this.f14691x = i6;
        if (i5 != i6) {
            this.f14681n.p(false);
        }
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setChecked(boolean z5) {
        int i5 = this.f14691x;
        int i6 = i5 & 4;
        j jVar = this.f14681n;
        if (i6 == 0) {
            int i10 = (i5 & (-3)) | (z5 ? 2 : 0);
            this.f14691x = i10;
            if (i5 != i10) {
                jVar.p(false);
            }
            return this;
        }
        ArrayList arrayList = jVar.f14651f;
        int size = arrayList.size();
        jVar.w();
        for (int i11 = 0; i11 < size; i11++) {
            l lVar = (l) arrayList.get(i11);
            if (lVar.f14671b == this.f14671b && (lVar.f14691x & 4) != 0 && lVar.isCheckable()) {
                boolean z6 = lVar == this;
                int i12 = lVar.f14691x;
                int i13 = (z6 ? 2 : 0) | (i12 & (-3));
                lVar.f14691x = i13;
                if (i12 != i13) {
                    lVar.f14681n.p(false);
                }
            }
        }
        jVar.v();
        return this;
    }

    @Override // android.view.MenuItem
    public final /* bridge */ /* synthetic */ MenuItem setContentDescription(CharSequence charSequence) {
        setContentDescription(charSequence);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setEnabled(boolean z5) {
        if (z5) {
            this.f14691x |= 16;
        } else {
            this.f14691x &= -17;
        }
        this.f14681n.p(false);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setIcon(Drawable drawable) {
        this.f14680m = 0;
        this.f14679l = drawable;
        this.f14690w = true;
        this.f14681n.p(false);
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final MenuItem setIconTintList(ColorStateList colorStateList) {
        this.f14686s = colorStateList;
        this.f14688u = true;
        this.f14690w = true;
        this.f14681n.p(false);
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final MenuItem setIconTintMode(PorterDuff.Mode mode) {
        this.f14687t = mode;
        this.f14689v = true;
        this.f14690w = true;
        this.f14681n.p(false);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setIntent(Intent intent) {
        this.f14676g = intent;
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setNumericShortcut(char c6) {
        if (this.f14677h == c6) {
            return this;
        }
        this.f14677h = c6;
        this.f14681n.p(false);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setOnActionExpandListener(MenuItem.OnActionExpandListener onActionExpandListener) {
        this.B = onActionExpandListener;
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setOnMenuItemClickListener(MenuItem.OnMenuItemClickListener onMenuItemClickListener) {
        this.f14683p = onMenuItemClickListener;
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setShortcut(char c6, char c8) {
        this.f14677h = c6;
        this.j = Character.toLowerCase(c8);
        this.f14681n.p(false);
        return this;
    }

    @Override // android.view.MenuItem
    public final void setShowAsAction(int i5) {
        int i6 = i5 & 3;
        if (i6 != 0 && i6 != 1 && i6 != 2) {
            throw new IllegalArgumentException("SHOW_AS_ACTION_ALWAYS, SHOW_AS_ACTION_IF_ROOM, and SHOW_AS_ACTION_NEVER are mutually exclusive.");
        }
        this.f14692y = i5;
        j jVar = this.f14681n;
        jVar.k = true;
        jVar.p(true);
    }

    @Override // android.view.MenuItem
    public final MenuItem setShowAsActionFlags(int i5) {
        setShowAsAction(i5);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setTitle(CharSequence charSequence) {
        this.f14674e = charSequence;
        this.f14681n.p(false);
        b0 b0Var = this.f14682o;
        if (b0Var != null) {
            b0Var.setHeaderTitle(charSequence);
        }
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setTitleCondensed(CharSequence charSequence) {
        this.f14675f = charSequence;
        this.f14681n.p(false);
        return this;
    }

    @Override // android.view.MenuItem
    public final /* bridge */ /* synthetic */ MenuItem setTooltipText(CharSequence charSequence) {
        setTooltipText(charSequence);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setVisible(boolean z5) {
        int i5 = this.f14691x;
        int i6 = (z5 ? 0 : 8) | (i5 & (-9));
        this.f14691x = i6;
        if (i5 != i6) {
            j jVar = this.f14681n;
            jVar.f14653h = true;
            jVar.p(true);
        }
        return this;
    }

    public final String toString() {
        CharSequence charSequence = this.f14674e;
        if (charSequence != null) {
            return charSequence.toString();
        }
        return null;
    }

    @Override // d1.a, android.view.MenuItem
    public final d1.a setContentDescription(CharSequence charSequence) {
        this.f14684q = charSequence;
        this.f14681n.p(false);
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final d1.a setTooltipText(CharSequence charSequence) {
        this.f14685r = charSequence;
        this.f14681n.p(false);
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final MenuItem setAlphabeticShortcut(char c6, int i5) {
        if (this.j == c6 && this.k == i5) {
            return this;
        }
        this.j = Character.toLowerCase(c6);
        this.k = KeyEvent.normalizeMetaState(i5);
        this.f14681n.p(false);
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final MenuItem setNumericShortcut(char c6, int i5) {
        if (this.f14677h == c6 && this.f14678i == i5) {
            return this;
        }
        this.f14677h = c6;
        this.f14678i = KeyEvent.normalizeMetaState(i5);
        this.f14681n.p(false);
        return this;
    }

    @Override // d1.a, android.view.MenuItem
    public final MenuItem setShortcut(char c6, char c8, int i5, int i6) {
        this.f14677h = c6;
        this.f14678i = KeyEvent.normalizeMetaState(i5);
        this.j = Character.toLowerCase(c8);
        this.k = KeyEvent.normalizeMetaState(i6);
        this.f14681n.p(false);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setIcon(int i5) {
        this.f14679l = null;
        this.f14680m = i5;
        this.f14690w = true;
        this.f14681n.p(false);
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setTitle(int i5) {
        setTitle(this.f14681n.a.getString(i5));
        return this;
    }

    @Override // android.view.MenuItem
    public final MenuItem setActionView(int i5) {
        int i6;
        j jVar = this.f14681n;
        Context context = jVar.a;
        View inflate = LayoutInflater.from(context).inflate(i5, (ViewGroup) new LinearLayout(context), false);
        this.f14693z = inflate;
        this.A = null;
        if (inflate != null && inflate.getId() == -1 && (i6 = this.a) > 0) {
            inflate.setId(i6);
        }
        jVar.k = true;
        jVar.p(true);
        return this;
    }
}
