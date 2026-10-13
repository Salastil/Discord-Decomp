package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import android.os.Parcelable;
import android.util.SparseBooleanArray;
import android.view.LayoutInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import androidx.appcompat.view.menu.ActionMenuItemView;
import com.discord.R;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class n implements n.v {
    public n.x E;
    public int F;
    public l G;
    public Drawable H;
    public boolean I;
    public boolean J;
    public boolean K;
    public int L;
    public int M;
    public int N;
    public boolean O;
    public h Q;
    public h R;
    public j S;
    public i T;
    public int V;

    /* renamed from: d, reason: collision with root package name */
    public final Context f1039d;

    /* renamed from: e, reason: collision with root package name */
    public Context f1040e;

    /* renamed from: i, reason: collision with root package name */
    public n.j f1041i;

    /* renamed from: v, reason: collision with root package name */
    public final LayoutInflater f1042v;

    /* renamed from: w, reason: collision with root package name */
    public n.u f1043w;

    /* renamed from: x, reason: collision with root package name */
    public final int f1044x = R.layout.abc_action_menu_layout;

    /* renamed from: y, reason: collision with root package name */
    public final int f1045y = R.layout.abc_action_menu_item_layout;
    public final SparseBooleanArray P = new SparseBooleanArray();
    public final ve.i U = new ve.i(this);

    public n(Context context) {
        this.f1039d = context;
        this.f1042v = LayoutInflater.from(context);
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // n.v
    public final void a(boolean z5) {
        int i5;
        ViewGroup viewGroup = (ViewGroup) this.E;
        ArrayList arrayList = null;
        boolean z6 = false;
        if (viewGroup != null) {
            n.j jVar = this.f1041i;
            if (jVar != null) {
                jVar.i();
                ArrayList l6 = this.f1041i.l();
                int size = l6.size();
                i5 = 0;
                for (int i6 = 0; i6 < size; i6++) {
                    n.l lVar = (n.l) l6.get(i6);
                    if ((lVar.f14691x & 32) == 32) {
                        View childAt = viewGroup.getChildAt(i5);
                        n.l itemData = childAt instanceof n.w ? ((n.w) childAt).getItemData() : null;
                        View h6 = h(lVar, childAt, viewGroup);
                        if (lVar != itemData) {
                            h6.setPressed(false);
                            h6.jumpDrawablesToCurrentState();
                        }
                        if (h6 != childAt) {
                            ViewGroup viewGroup2 = (ViewGroup) h6.getParent();
                            if (viewGroup2 != null) {
                                viewGroup2.removeView(h6);
                            }
                            ((ViewGroup) this.E).addView(h6, i5);
                        }
                        i5++;
                    }
                }
            } else {
                i5 = 0;
            }
            while (i5 < viewGroup.getChildCount()) {
                if (viewGroup.getChildAt(i5) == this.G) {
                    i5++;
                } else {
                    viewGroup.removeViewAt(i5);
                }
            }
        }
        ((View) this.E).requestLayout();
        n.j jVar2 = this.f1041i;
        if (jVar2 != null) {
            jVar2.i();
            ArrayList arrayList2 = jVar2.f14654i;
            int size2 = arrayList2.size();
            for (int i10 = 0; i10 < size2; i10++) {
                n.m mVar = ((n.l) arrayList2.get(i10)).A;
            }
        }
        n.j jVar3 = this.f1041i;
        if (jVar3 != null) {
            jVar3.i();
            arrayList = jVar3.j;
        }
        if (this.J && arrayList != null) {
            int size3 = arrayList.size();
            if (size3 == 1) {
                z6 = !((n.l) arrayList.get(0)).C;
            } else if (size3 > 0) {
                z6 = true;
            }
        }
        if (z6) {
            if (this.G == null) {
                this.G = new l(this, this.f1039d);
            }
            ViewGroup viewGroup3 = (ViewGroup) this.G.getParent();
            if (viewGroup3 != this.E) {
                if (viewGroup3 != null) {
                    viewGroup3.removeView(this.G);
                }
                ActionMenuView actionMenuView = (ActionMenuView) this.E;
                l lVar2 = this.G;
                actionMenuView.getClass();
                p j = ActionMenuView.j();
                j.a = true;
                actionMenuView.addView(lVar2, j);
            }
        } else {
            l lVar3 = this.G;
            if (lVar3 != null) {
                Object parent = lVar3.getParent();
                Object obj = this.E;
                if (parent == obj) {
                    ((ViewGroup) obj).removeView(this.G);
                }
            }
        }
        ((ActionMenuView) this.E).setOverflowReserved(this.J);
    }

    @Override // n.v
    public final void b(n.j jVar, boolean z5) {
        l();
        h hVar = this.R;
        if (hVar != null && hVar.b()) {
            hVar.f14709i.dismiss();
        }
        n.u uVar = this.f1043w;
        if (uVar != null) {
            uVar.b(jVar, z5);
        }
    }

    @Override // n.v
    public final void c(Context context, n.j jVar) {
        this.f1040e = context;
        LayoutInflater.from(context);
        this.f1041i = jVar;
        Resources resources = context.getResources();
        if (!this.K) {
            this.J = true;
        }
        int i5 = 2;
        this.L = context.getResources().getDisplayMetrics().widthPixels / 2;
        Configuration configuration = context.getResources().getConfiguration();
        int i6 = configuration.screenWidthDp;
        int i10 = configuration.screenHeightDp;
        if (configuration.smallestScreenWidthDp > 600 || i6 > 600 || ((i6 > 960 && i10 > 720) || (i6 > 720 && i10 > 960))) {
            i5 = 5;
        } else if (i6 >= 500 || ((i6 > 640 && i10 > 480) || (i6 > 480 && i10 > 640))) {
            i5 = 4;
        } else if (i6 >= 360) {
            i5 = 3;
        }
        this.N = i5;
        int i11 = this.L;
        if (this.J) {
            if (this.G == null) {
                l lVar = new l(this, this.f1039d);
                this.G = lVar;
                if (this.I) {
                    lVar.setImageDrawable(this.H);
                    this.H = null;
                    this.I = false;
                }
                int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
                this.G.measure(makeMeasureSpec, makeMeasureSpec);
            }
            i11 -= this.G.getMeasuredWidth();
        } else {
            this.G = null;
        }
        this.M = i11;
        float f2 = resources.getDisplayMetrics().density;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // n.v
    public final boolean d(n.b0 b0Var) {
        boolean z5;
        if (b0Var.hasVisibleItems()) {
            n.b0 b0Var2 = b0Var;
            while (true) {
                n.j jVar = b0Var2.f14623z;
                if (jVar == this.f1041i) {
                    break;
                }
                b0Var2 = (n.b0) jVar;
            }
            n.l lVar = b0Var2.A;
            ViewGroup viewGroup = (ViewGroup) this.E;
            View view = null;
            if (viewGroup != null) {
                int childCount = viewGroup.getChildCount();
                int i5 = 0;
                while (true) {
                    if (i5 >= childCount) {
                        break;
                    }
                    View childAt = viewGroup.getChildAt(i5);
                    if ((childAt instanceof n.w) && ((n.w) childAt).getItemData() == lVar) {
                        view = childAt;
                        break;
                    }
                    i5++;
                }
            }
            if (view != null) {
                this.V = b0Var.A.a;
                int size = b0Var.f14651f.size();
                int i6 = 0;
                while (true) {
                    if (i6 >= size) {
                        z5 = false;
                        break;
                    }
                    MenuItem item = b0Var.getItem(i6);
                    if (item.isVisible() && item.getIcon() != null) {
                        z5 = true;
                        break;
                    }
                    i6++;
                }
                h hVar = new h(this, this.f1040e, b0Var, view);
                this.R = hVar;
                hVar.f14707g = z5;
                n.r rVar = hVar.f14709i;
                if (rVar != null) {
                    rVar.o(z5);
                }
                h hVar2 = this.R;
                if (!hVar2.b()) {
                    if (hVar2.f14705e == null) {
                        throw new IllegalStateException("MenuPopupHelper cannot be used without an anchor");
                    }
                    hVar2.d(0, 0, false, false);
                }
                n.u uVar = this.f1043w;
                if (uVar != null) {
                    uVar.h(b0Var);
                }
                return true;
            }
        }
        return false;
    }

    @Override // n.v
    public final boolean e() {
        int i5;
        ArrayList arrayList;
        int i6;
        boolean z5;
        n nVar = this;
        n.j jVar = nVar.f1041i;
        if (jVar != null) {
            arrayList = jVar.l();
            i5 = arrayList.size();
        } else {
            i5 = 0;
            arrayList = null;
        }
        int i10 = nVar.N;
        int i11 = nVar.M;
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        ViewGroup viewGroup = (ViewGroup) nVar.E;
        int i12 = 0;
        boolean z6 = false;
        int i13 = 0;
        int i14 = 0;
        while (true) {
            i6 = 2;
            z5 = true;
            if (i12 >= i5) {
                break;
            }
            n.l lVar = (n.l) arrayList.get(i12);
            int i15 = lVar.f14692y;
            if ((i15 & 2) == 2) {
                i13++;
            } else if ((i15 & 1) == 1) {
                i14++;
            } else {
                z6 = true;
            }
            if (nVar.O && lVar.C) {
                i10 = 0;
            }
            i12++;
        }
        if (nVar.J && (z6 || i14 + i13 > i10)) {
            i10--;
        }
        int i16 = i10 - i13;
        SparseBooleanArray sparseBooleanArray = nVar.P;
        sparseBooleanArray.clear();
        int i17 = 0;
        int i18 = 0;
        while (i17 < i5) {
            n.l lVar2 = (n.l) arrayList.get(i17);
            int i19 = lVar2.f14692y;
            boolean z7 = (i19 & 2) == i6 ? z5 : false;
            int i20 = lVar2.f14671b;
            if (z7) {
                View h6 = nVar.h(lVar2, null, viewGroup);
                h6.measure(makeMeasureSpec, makeMeasureSpec);
                int measuredWidth = h6.getMeasuredWidth();
                i11 -= measuredWidth;
                if (i18 == 0) {
                    i18 = measuredWidth;
                }
                if (i20 != 0) {
                    sparseBooleanArray.put(i20, z5);
                }
                lVar2.f(z5);
            } else if ((i19 & 1) == z5) {
                boolean z8 = sparseBooleanArray.get(i20);
                boolean z10 = ((i16 > 0 || z8) && i11 > 0) ? z5 : false;
                if (z10) {
                    View h7 = nVar.h(lVar2, null, viewGroup);
                    h7.measure(makeMeasureSpec, makeMeasureSpec);
                    int measuredWidth2 = h7.getMeasuredWidth();
                    i11 -= measuredWidth2;
                    if (i18 == 0) {
                        i18 = measuredWidth2;
                    }
                    z10 &= i11 + i18 > 0;
                }
                if (z10 && i20 != 0) {
                    sparseBooleanArray.put(i20, true);
                } else if (z8) {
                    sparseBooleanArray.put(i20, false);
                    for (int i21 = 0; i21 < i17; i21++) {
                        n.l lVar3 = (n.l) arrayList.get(i21);
                        if (lVar3.f14671b == i20) {
                            if ((lVar3.f14691x & 32) == 32) {
                                i16++;
                            }
                            lVar3.f(false);
                        }
                    }
                }
                if (z10) {
                    i16--;
                }
                lVar2.f(z10);
            } else {
                lVar2.f(false);
                i17++;
                i6 = 2;
                nVar = this;
                z5 = true;
            }
            i17++;
            i6 = 2;
            nVar = this;
            z5 = true;
        }
        return z5;
    }

    @Override // n.v
    public final void f(Parcelable parcelable) {
        int i5;
        MenuItem findItem;
        if ((parcelable instanceof m) && (i5 = ((m) parcelable).f1033d) > 0 && (findItem = this.f1041i.findItem(i5)) != null) {
            d((n.b0) findItem.getSubMenu());
        }
    }

    @Override // n.v
    public final boolean g(n.l lVar) {
        return false;
    }

    @Override // n.v
    public final int getId() {
        return this.F;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v0, types: [android.view.View] */
    /* JADX WARN: Type inference failed for: r5v4, types: [n.w] */
    /* JADX WARN: Type inference failed for: r5v7 */
    /* JADX WARN: Type inference failed for: r5v8 */
    public final View h(n.l lVar, View view, ViewGroup viewGroup) {
        View actionView = lVar.getActionView();
        if (actionView == null || lVar.e()) {
            ActionMenuItemView actionMenuItemView = view instanceof n.w ? (n.w) view : (n.w) this.f1042v.inflate(this.f1045y, viewGroup, false);
            actionMenuItemView.a(lVar);
            ActionMenuItemView actionMenuItemView2 = actionMenuItemView;
            actionMenuItemView2.setItemInvoker((ActionMenuView) this.E);
            if (this.T == null) {
                this.T = new i(this);
            }
            actionMenuItemView2.setPopupCallback(this.T);
            actionView = actionMenuItemView;
        }
        actionView.setVisibility(lVar.C ? 8 : 0);
        ViewGroup.LayoutParams layoutParams = actionView.getLayoutParams();
        ((ActionMenuView) viewGroup).getClass();
        if (!(layoutParams instanceof p)) {
            actionView.setLayoutParams(ActionMenuView.k(layoutParams));
        }
        return actionView;
    }

    @Override // n.v
    public final Parcelable i() {
        m mVar = new m();
        mVar.f1033d = this.V;
        return mVar;
    }

    @Override // n.v
    public final void j(n.u uVar) {
        throw null;
    }

    @Override // n.v
    public final boolean k(n.l lVar) {
        return false;
    }

    public final boolean l() {
        Object obj;
        j jVar = this.S;
        if (jVar != null && (obj = this.E) != null) {
            ((View) obj).removeCallbacks(jVar);
            this.S = null;
            return true;
        }
        h hVar = this.Q;
        if (hVar == null) {
            return false;
        }
        if (hVar.b()) {
            hVar.f14709i.dismiss();
        }
        return true;
    }

    public final boolean m() {
        h hVar = this.Q;
        return hVar != null && hVar.b();
    }

    public final boolean n() {
        n.j jVar;
        if (!this.J || m() || (jVar = this.f1041i) == null || this.E == null || this.S != null) {
            return false;
        }
        jVar.i();
        if (jVar.j.isEmpty()) {
            return false;
        }
        j jVar2 = new j(this, new h(this, this.f1040e, this.f1041i, this.G));
        this.S = jVar2;
        ((View) this.E).post(jVar2);
        return true;
    }
}
