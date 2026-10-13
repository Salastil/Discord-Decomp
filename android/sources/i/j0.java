package i;

import android.R;
import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.util.TypedValue;
import android.view.ContextThemeWrapper;
import android.view.KeyCharacterMap;
import android.view.KeyEvent;
import android.view.View;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.DecelerateInterpolator;
import androidx.appcompat.app.ActionBar;
import androidx.appcompat.view.ActionMode;
import androidx.appcompat.widget.ActionBarContainer;
import androidx.appcompat.widget.ActionBarContextView;
import androidx.appcompat.widget.ActionBarOverlayLayout;
import androidx.appcompat.widget.Toolbar;
import androidx.appcompat.widget.k1;
import androidx.appcompat.widget.r3;
import androidx.appcompat.widget.w3;
import androidx.appcompat.widget.x3;
import androidx.core.view.a1;
import androidx.core.view.s0;
import androidx.core.view.y0;
import java.util.ArrayList;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class j0 extends ActionBar implements androidx.appcompat.widget.e {

    /* renamed from: y, reason: collision with root package name */
    public static final AccelerateInterpolator f10324y = new AccelerateInterpolator();

    /* renamed from: z, reason: collision with root package name */
    public static final DecelerateInterpolator f10325z = new DecelerateInterpolator();
    public Context a;

    /* renamed from: b, reason: collision with root package name */
    public Context f10326b;

    /* renamed from: c, reason: collision with root package name */
    public ActionBarOverlayLayout f10327c;

    /* renamed from: d, reason: collision with root package name */
    public ActionBarContainer f10328d;

    /* renamed from: e, reason: collision with root package name */
    public k1 f10329e;

    /* renamed from: f, reason: collision with root package name */
    public ActionBarContextView f10330f;

    /* renamed from: g, reason: collision with root package name */
    public final View f10331g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f10332h;

    /* renamed from: i, reason: collision with root package name */
    public i0 f10333i;
    public i0 j;
    public q k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f10334l;

    /* renamed from: m, reason: collision with root package name */
    public final ArrayList f10335m;

    /* renamed from: n, reason: collision with root package name */
    public int f10336n;

    /* renamed from: o, reason: collision with root package name */
    public boolean f10337o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f10338p;

    /* renamed from: q, reason: collision with root package name */
    public boolean f10339q;

    /* renamed from: r, reason: collision with root package name */
    public boolean f10340r;

    /* renamed from: s, reason: collision with root package name */
    public m.f f10341s;

    /* renamed from: t, reason: collision with root package name */
    public boolean f10342t;

    /* renamed from: u, reason: collision with root package name */
    public boolean f10343u;

    /* renamed from: v, reason: collision with root package name */
    public final h0 f10344v;

    /* renamed from: w, reason: collision with root package name */
    public final h0 f10345w;

    /* renamed from: x, reason: collision with root package name */
    public final gj.c f10346x;

    public j0(Activity activity, boolean z5) {
        new ArrayList();
        this.f10335m = new ArrayList();
        this.f10336n = 0;
        this.f10337o = true;
        this.f10340r = true;
        this.f10344v = new h0(this, 0);
        this.f10345w = new h0(this, 1);
        this.f10346x = new gj.c(16, this);
        View decorView = activity.getWindow().getDecorView();
        u(decorView);
        if (z5) {
            return;
        }
        this.f10331g = decorView.findViewById(R.id.content);
    }

    @Override // androidx.appcompat.app.ActionBar
    public final boolean b() {
        r3 r3Var;
        k1 k1Var = this.f10329e;
        if (k1Var == null || (r3Var = ((x3) k1Var).a.f894m0) == null || r3Var.f1089e == null) {
            return false;
        }
        r3 r3Var2 = ((x3) k1Var).a.f894m0;
        n.l lVar = r3Var2 == null ? null : r3Var2.f1089e;
        if (lVar == null) {
            return true;
        }
        lVar.collapseActionView();
        return true;
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void c(boolean z5) {
        if (z5 == this.f10334l) {
            return;
        }
        this.f10334l = z5;
        ArrayList arrayList = this.f10335m;
        if (arrayList.size() <= 0) {
            return;
        }
        arrayList.get(0).getClass();
        throw new ClassCastException();
    }

    @Override // androidx.appcompat.app.ActionBar
    public final int d() {
        return ((x3) this.f10329e).f1160b;
    }

    @Override // androidx.appcompat.app.ActionBar
    public final Context e() {
        if (this.f10326b == null) {
            TypedValue typedValue = new TypedValue();
            this.a.getTheme().resolveAttribute(com.discord.R.attr.actionBarWidgetTheme, typedValue, true);
            int i5 = typedValue.resourceId;
            if (i5 != 0) {
                this.f10326b = new ContextThemeWrapper(this.a, i5);
            } else {
                this.f10326b = this.a;
            }
        }
        return this.f10326b;
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void g() {
        v(this.a.getResources().getBoolean(com.discord.R.bool.abc_action_bar_embed_tabs));
    }

    @Override // androidx.appcompat.app.ActionBar
    public final boolean i(int i5, KeyEvent keyEvent) {
        n.j jVar;
        i0 i0Var = this.f10333i;
        if (i0Var == null || (jVar = i0Var.f10318v) == null) {
            return false;
        }
        jVar.setQwertyMode(KeyCharacterMap.load(keyEvent.getDeviceId()).getKeyboardType() != 1);
        return jVar.performShortcut(i5, keyEvent, 0);
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void l(boolean z5) {
        if (this.f10332h) {
            return;
        }
        m(z5);
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void m(boolean z5) {
        int i5 = z5 ? 4 : 0;
        x3 x3Var = (x3) this.f10329e;
        int i6 = x3Var.f1160b;
        this.f10332h = true;
        x3Var.a((i5 & 4) | (i6 & (-5)));
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void n() {
        x3 x3Var = (x3) this.f10329e;
        x3Var.a(x3Var.f1160b & (-9));
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void o(Drawable drawable) {
        x3 x3Var = (x3) this.f10329e;
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
    public final void p(boolean z5) {
        m.f fVar;
        this.f10342t = z5;
        if (z5 || (fVar = this.f10341s) == null) {
            return;
        }
        fVar.a();
    }

    @Override // androidx.appcompat.app.ActionBar
    public final void q(CharSequence charSequence) {
        x3 x3Var = (x3) this.f10329e;
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
        x3 x3Var = (x3) this.f10329e;
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

    @Override // androidx.appcompat.app.ActionBar
    public final ActionMode s(q qVar) {
        i0 i0Var = this.f10333i;
        if (i0Var != null) {
            i0Var.a();
        }
        this.f10327c.setHideOnContentScrollEnabled(false);
        this.f10330f.e();
        i0 i0Var2 = new i0(this, this.f10330f.getContext(), qVar);
        n.j jVar = i0Var2.f10318v;
        jVar.w();
        try {
            if (!i0Var2.f10319w.a.b(i0Var2, jVar)) {
                return null;
            }
            this.f10333i = i0Var2;
            i0Var2.g();
            this.f10330f.c(i0Var2);
            t(true);
            return i0Var2;
        } finally {
            jVar.v();
        }
    }

    public final void t(boolean z5) {
        a1 i5;
        a1 a1Var;
        if (z5) {
            if (!this.f10339q) {
                this.f10339q = true;
                ActionBarOverlayLayout actionBarOverlayLayout = this.f10327c;
                if (actionBarOverlayLayout != null) {
                    actionBarOverlayLayout.setShowingForActionMode(true);
                }
                w(false);
            }
        } else if (this.f10339q) {
            this.f10339q = false;
            ActionBarOverlayLayout actionBarOverlayLayout2 = this.f10327c;
            if (actionBarOverlayLayout2 != null) {
                actionBarOverlayLayout2.setShowingForActionMode(false);
            }
            w(false);
        }
        if (!this.f10328d.isLaidOut()) {
            if (z5) {
                ((x3) this.f10329e).a.setVisibility(4);
                this.f10330f.setVisibility(0);
                return;
            } else {
                ((x3) this.f10329e).a.setVisibility(0);
                this.f10330f.setVisibility(8);
                return;
            }
        }
        if (z5) {
            x3 x3Var = (x3) this.f10329e;
            i5 = s0.b(x3Var.a);
            i5.a(0.0f);
            i5.c(100L);
            i5.d(new w3(x3Var, 4));
            a1Var = this.f10330f.i(0, 200L);
        } else {
            x3 x3Var2 = (x3) this.f10329e;
            a1 b10 = s0.b(x3Var2.a);
            b10.a(1.0f);
            b10.c(200L);
            b10.d(new w3(x3Var2, 0));
            i5 = this.f10330f.i(8, 100L);
            a1Var = b10;
        }
        m.f fVar = new m.f();
        ArrayList arrayList = fVar.a;
        arrayList.add(i5);
        View view = (View) i5.a.get();
        long duration = view != null ? view.animate().getDuration() : 0L;
        View view2 = (View) a1Var.a.get();
        if (view2 != null) {
            view2.animate().setStartDelay(duration);
        }
        arrayList.add(a1Var);
        fVar.b();
    }

    public final void u(View view) {
        k1 wrapper;
        ActionBarOverlayLayout actionBarOverlayLayout = (ActionBarOverlayLayout) view.findViewById(com.discord.R.id.decor_content_parent);
        this.f10327c = actionBarOverlayLayout;
        if (actionBarOverlayLayout != null) {
            actionBarOverlayLayout.setActionBarVisibilityCallback(this);
        }
        KeyEvent.Callback findViewById = view.findViewById(com.discord.R.id.action_bar);
        if (findViewById instanceof k1) {
            wrapper = (k1) findViewById;
        } else {
            if (!(findViewById instanceof Toolbar)) {
                throw new IllegalStateException("Can't make a decor toolbar out of ".concat(findViewById != null ? findViewById.getClass().getSimpleName() : "null"));
            }
            wrapper = ((Toolbar) findViewById).getWrapper();
        }
        this.f10329e = wrapper;
        this.f10330f = (ActionBarContextView) view.findViewById(com.discord.R.id.action_context_bar);
        ActionBarContainer actionBarContainer = (ActionBarContainer) view.findViewById(com.discord.R.id.action_bar_container);
        this.f10328d = actionBarContainer;
        k1 k1Var = this.f10329e;
        if (k1Var == null || this.f10330f == null || actionBarContainer == null) {
            throw new IllegalStateException(j0.class.getSimpleName().concat(" can only be used with a compatible window decor layout"));
        }
        Context context = ((x3) k1Var).a.getContext();
        this.a = context;
        if ((((x3) this.f10329e).f1160b & 4) != 0) {
            this.f10332h = true;
        }
        int i5 = context.getApplicationInfo().targetSdkVersion;
        this.f10329e.getClass();
        v(context.getResources().getBoolean(com.discord.R.bool.abc_action_bar_embed_tabs));
        TypedArray obtainStyledAttributes = this.a.obtainStyledAttributes(null, h.a.a, com.discord.R.attr.actionBarStyle, 0);
        if (obtainStyledAttributes.getBoolean(14, false)) {
            ActionBarOverlayLayout actionBarOverlayLayout2 = this.f10327c;
            if (!actionBarOverlayLayout2.f846y) {
                throw new IllegalStateException("Action bar must be in overlay mode (Window.FEATURE_OVERLAY_ACTION_BAR) to enable hide on content scroll");
            }
            this.f10343u = true;
            actionBarOverlayLayout2.setHideOnContentScrollEnabled(true);
        }
        int dimensionPixelSize = obtainStyledAttributes.getDimensionPixelSize(12, 0);
        if (dimensionPixelSize != 0) {
            ActionBarContainer actionBarContainer2 = this.f10328d;
            WeakHashMap weakHashMap = s0.a;
            androidx.core.view.j0.k(actionBarContainer2, dimensionPixelSize);
        }
        obtainStyledAttributes.recycle();
    }

    public final void v(boolean z5) {
        if (z5) {
            this.f10328d.setTabContainer(null);
            ((x3) this.f10329e).getClass();
        } else {
            ((x3) this.f10329e).getClass();
            this.f10328d.setTabContainer(null);
        }
        this.f10329e.getClass();
        ((x3) this.f10329e).a.setCollapsible(false);
        this.f10327c.setHasNonEmbeddedTabs(false);
    }

    public final void w(boolean z5) {
        boolean z6 = this.f10338p;
        boolean z7 = this.f10339q;
        gj.c cVar = this.f10346x;
        View view = this.f10331g;
        int i5 = 0;
        if (!z7 && z6) {
            if (this.f10340r) {
                this.f10340r = false;
                m.f fVar = this.f10341s;
                if (fVar != null) {
                    fVar.a();
                }
                int i6 = this.f10336n;
                h0 h0Var = this.f10344v;
                if (i6 != 0 || (!this.f10342t && !z5)) {
                    h0Var.onAnimationEnd();
                    return;
                }
                this.f10328d.setAlpha(1.0f);
                this.f10328d.setTransitioning(true);
                m.f fVar2 = new m.f();
                float f2 = -this.f10328d.getHeight();
                if (z5) {
                    this.f10328d.getLocationInWindow(new int[]{0, 0});
                    f2 -= r12[1];
                }
                a1 b10 = s0.b(this.f10328d);
                b10.e(f2);
                View view2 = (View) b10.a.get();
                if (view2 != null) {
                    view2.animate().setUpdateListener(cVar != null ? new y0(i5, cVar, view2) : null);
                }
                boolean z8 = fVar2.f14306e;
                ArrayList arrayList = fVar2.a;
                if (!z8) {
                    arrayList.add(b10);
                }
                if (this.f10337o && view != null) {
                    a1 b11 = s0.b(view);
                    b11.e(f2);
                    if (!fVar2.f14306e) {
                        arrayList.add(b11);
                    }
                }
                boolean z10 = fVar2.f14306e;
                if (!z10) {
                    fVar2.f14304c = f10324y;
                }
                if (!z10) {
                    fVar2.f14303b = 250L;
                }
                if (!z10) {
                    fVar2.f14305d = h0Var;
                }
                this.f10341s = fVar2;
                fVar2.b();
                return;
            }
            return;
        }
        if (this.f10340r) {
            return;
        }
        this.f10340r = true;
        m.f fVar3 = this.f10341s;
        if (fVar3 != null) {
            fVar3.a();
        }
        this.f10328d.setVisibility(0);
        int i10 = this.f10336n;
        h0 h0Var2 = this.f10345w;
        if (i10 == 0 && (this.f10342t || z5)) {
            this.f10328d.setTranslationY(0.0f);
            float f10 = -this.f10328d.getHeight();
            if (z5) {
                this.f10328d.getLocationInWindow(new int[]{0, 0});
                f10 -= r12[1];
            }
            this.f10328d.setTranslationY(f10);
            m.f fVar4 = new m.f();
            a1 b12 = s0.b(this.f10328d);
            b12.e(0.0f);
            View view3 = (View) b12.a.get();
            if (view3 != null) {
                view3.animate().setUpdateListener(cVar != null ? new y0(i5, cVar, view3) : null);
            }
            boolean z11 = fVar4.f14306e;
            ArrayList arrayList2 = fVar4.a;
            if (!z11) {
                arrayList2.add(b12);
            }
            if (this.f10337o && view != null) {
                view.setTranslationY(f10);
                a1 b13 = s0.b(view);
                b13.e(0.0f);
                if (!fVar4.f14306e) {
                    arrayList2.add(b13);
                }
            }
            boolean z12 = fVar4.f14306e;
            if (!z12) {
                fVar4.f14304c = f10325z;
            }
            if (!z12) {
                fVar4.f14303b = 250L;
            }
            if (!z12) {
                fVar4.f14305d = h0Var2;
            }
            this.f10341s = fVar4;
            fVar4.b();
        } else {
            this.f10328d.setAlpha(1.0f);
            this.f10328d.setTranslationY(0.0f);
            if (this.f10337o && view != null) {
                view.setTranslationY(0.0f);
            }
            h0Var2.onAnimationEnd();
        }
        ActionBarOverlayLayout actionBarOverlayLayout = this.f10327c;
        if (actionBarOverlayLayout != null) {
            WeakHashMap weakHashMap = s0.a;
            androidx.core.view.h0.c(actionBarOverlayLayout);
        }
    }

    public j0(Dialog dialog) {
        new ArrayList();
        this.f10335m = new ArrayList();
        this.f10336n = 0;
        this.f10337o = true;
        this.f10340r = true;
        this.f10344v = new h0(this, 0);
        this.f10345w = new h0(this, 1);
        this.f10346x = new gj.c(16, this);
        u(dialog.getWindow().getDecorView());
    }
}
