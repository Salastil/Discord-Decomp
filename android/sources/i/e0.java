package i;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.view.KeyCharacterMap;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.Window;
import androidx.appcompat.app.ActionBar;
import androidx.appcompat.widget.ActionMenuView;
import androidx.appcompat.widget.Toolbar;
import androidx.appcompat.widget.r3;
import androidx.appcompat.widget.x3;
import androidx.core.view.s0;
import java.util.ArrayList;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class e0 extends ActionBar {
    public final x3 a;

    /* renamed from: b, reason: collision with root package name */
    public final Window.Callback f10303b;

    /* renamed from: c, reason: collision with root package name */
    public final ve.i f10304c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f10305d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f10306e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f10307f;

    /* renamed from: g, reason: collision with root package name */
    public final ArrayList f10308g = new ArrayList();

    /* renamed from: h, reason: collision with root package name */
    public final a3.h f10309h = new a3.h(19, this);

    public e0(Toolbar toolbar, CharSequence charSequence, Window.Callback callback) {
        u4.b bVar = new u4.b(15, this);
        toolbar.getClass();
        x3 x3Var = new x3(toolbar, false);
        this.a = x3Var;
        callback.getClass();
        this.f10303b = callback;
        x3Var.k = callback;
        toolbar.setOnMenuItemClickListener(bVar);
        if (!x3Var.f1165g) {
            x3Var.f1166h = charSequence;
            if ((x3Var.f1160b & 8) != 0) {
                toolbar.setTitle(charSequence);
                if (x3Var.f1165g) {
                    s0.q(toolbar.getRootView(), charSequence);
                }
            }
        }
        this.f10304c = new ve.i(this);
    }

    @Override // androidx.appcompat.app.ActionBar
    public final boolean a() {
        androidx.appcompat.widget.n nVar;
        ActionMenuView actionMenuView = this.a.a.f883d;
        return (actionMenuView == null || (nVar = actionMenuView.Q) == null || !nVar.l()) ? false : true;
    }

    @Override // androidx.appcompat.app.ActionBar
    public final boolean b() {
        n.l lVar;
        r3 r3Var = this.a.a.f894m0;
        if (r3Var == null || (lVar = r3Var.f1089e) == null) {
            return false;
        }
        if (r3Var == null) {
            lVar = null;
        }
        if (lVar == null) {
            return true;
        }
        lVar.collapseActionView();
        return true;
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void c(boolean z5) {
        if (z5 == this.f10307f) {
            return;
        }
        this.f10307f = z5;
        ArrayList arrayList = this.f10308g;
        if (arrayList.size() <= 0) {
            return;
        }
        arrayList.get(0).getClass();
        throw new ClassCastException();
    }

    @Override // androidx.appcompat.app.ActionBar
    public final int d() {
        return this.a.f1160b;
    }

    @Override // androidx.appcompat.app.ActionBar
    public final Context e() {
        return this.a.a.getContext();
    }

    @Override // androidx.appcompat.app.ActionBar
    public final boolean f() {
        x3 x3Var = this.a;
        Toolbar toolbar = x3Var.a;
        a3.h hVar = this.f10309h;
        toolbar.removeCallbacks(hVar);
        Toolbar toolbar2 = x3Var.a;
        WeakHashMap weakHashMap = s0.a;
        toolbar2.postOnAnimation(hVar);
        return true;
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void h() {
        this.a.a.removeCallbacks(this.f10309h);
    }

    @Override // androidx.appcompat.app.ActionBar
    public final boolean i(int i5, KeyEvent keyEvent) {
        Menu t5 = t();
        if (t5 == null) {
            return false;
        }
        t5.setQwertyMode(KeyCharacterMap.load(keyEvent.getDeviceId()).getKeyboardType() != 1);
        return t5.performShortcut(i5, keyEvent, 0);
    }

    @Override // androidx.appcompat.app.ActionBar
    public final boolean j(KeyEvent keyEvent) {
        if (keyEvent.getAction() == 1) {
            k();
        }
        return true;
    }

    @Override // androidx.appcompat.app.ActionBar
    public final boolean k() {
        return this.a.a.u();
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void m(boolean z5) {
        int i5 = z5 ? 4 : 0;
        x3 x3Var = this.a;
        x3Var.a((i5 & 4) | (x3Var.f1160b & (-5)));
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void n() {
        x3 x3Var = this.a;
        x3Var.a(x3Var.f1160b & (-9));
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void o(Drawable drawable) {
        x3 x3Var = this.a;
        x3Var.f1164f = drawable;
        Toolbar toolbar = x3Var.a;
        if ((x3Var.f1160b & 4) == 0) {
            toolbar.setNavigationIcon((Drawable) null);
            return;
        }
        if (drawable == null) {
            drawable = x3Var.f1171o;
        }
        toolbar.setNavigationIcon(drawable);
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void q(CharSequence charSequence) {
        x3 x3Var = this.a;
        x3Var.f1165g = true;
        Toolbar toolbar = x3Var.a;
        x3Var.f1166h = charSequence;
        if ((x3Var.f1160b & 8) != 0) {
            toolbar.setTitle(charSequence);
            if (x3Var.f1165g) {
                s0.q(toolbar.getRootView(), charSequence);
            }
        }
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void r(CharSequence charSequence) {
        x3 x3Var = this.a;
        if (x3Var.f1165g) {
            return;
        }
        Toolbar toolbar = x3Var.a;
        x3Var.f1166h = charSequence;
        if ((x3Var.f1160b & 8) != 0) {
            toolbar.setTitle(charSequence);
            if (x3Var.f1165g) {
                s0.q(toolbar.getRootView(), charSequence);
            }
        }
    }

    public final Menu t() {
        boolean z5 = this.f10306e;
        x3 x3Var = this.a;
        if (!z5) {
            a5.h0 h0Var = new a5.h0(3, this);
            u4.c cVar = new u4.c(this);
            Toolbar toolbar = x3Var.a;
            toolbar.f895n0 = h0Var;
            toolbar.f896o0 = cVar;
            ActionMenuView actionMenuView = toolbar.f883d;
            if (actionMenuView != null) {
                actionMenuView.R = h0Var;
                actionMenuView.S = cVar;
            }
            this.f10306e = true;
        }
        return x3Var.a.getMenu();
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void g() {
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void l(boolean z5) {
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void p(boolean z5) {
    }
}
