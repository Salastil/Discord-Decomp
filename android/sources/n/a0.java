package n;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Rect;
import android.os.Parcelable;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.widget.FrameLayout;
import android.widget.PopupWindow;
import android.widget.TextView;
import androidx.appcompat.widget.j0;
import androidx.appcompat.widget.l2;
import androidx.appcompat.widget.t1;
import com.discord.R;

/* loaded from: classes.dex */
public final class a0 extends r implements PopupWindow.OnDismissListener, View.OnKeyListener {
    public final l2 E;
    public PopupWindow.OnDismissListener H;
    public View I;
    public View J;
    public u K;
    public ViewTreeObserver L;
    public boolean M;
    public boolean N;
    public int O;
    public boolean Q;

    /* renamed from: e, reason: collision with root package name */
    public final Context f14617e;

    /* renamed from: i, reason: collision with root package name */
    public final j f14618i;

    /* renamed from: v, reason: collision with root package name */
    public final g f14619v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f14620w;

    /* renamed from: x, reason: collision with root package name */
    public final int f14621x;

    /* renamed from: y, reason: collision with root package name */
    public final int f14622y;
    public final j0 F = new j0(4, this);
    public final el.i G = new el.i(3, this);
    public int P = 0;

    public a0(Context context, j jVar, View view, int i5, boolean z5) {
        this.f14617e = context;
        this.f14618i = jVar;
        this.f14620w = z5;
        this.f14619v = new g(jVar, LayoutInflater.from(context), z5, R.layout.abc_popup_menu_item_layout);
        this.f14622y = i5;
        Resources resources = context.getResources();
        this.f14621x = Math.max(resources.getDisplayMetrics().widthPixels / 2, resources.getDimensionPixelSize(R.dimen.abc_config_prefDialogWidth));
        this.I = view;
        this.E = new l2(context, null, i5, 0);
        jVar.b(this, context);
    }

    @Override // n.v
    public final void a(boolean z5) {
        this.N = false;
        g gVar = this.f14619v;
        if (gVar != null) {
            gVar.notifyDataSetChanged();
        }
    }

    @Override // n.v
    public final void b(j jVar, boolean z5) {
        if (jVar != this.f14618i) {
            return;
        }
        dismiss();
        u uVar = this.K;
        if (uVar != null) {
            uVar.b(jVar, z5);
        }
    }

    @Override // n.v
    public final boolean d(b0 b0Var) {
        boolean z5;
        if (b0Var.hasVisibleItems()) {
            t tVar = new t(this.f14617e, b0Var, this.J, this.f14620w, this.f14622y, 0);
            u uVar = this.K;
            tVar.f14708h = uVar;
            r rVar = tVar.f14709i;
            if (rVar != null) {
                rVar.j(uVar);
            }
            int size = b0Var.f14651f.size();
            int i5 = 0;
            while (true) {
                if (i5 >= size) {
                    z5 = false;
                    break;
                }
                MenuItem item = b0Var.getItem(i5);
                if (item.isVisible() && item.getIcon() != null) {
                    z5 = true;
                    break;
                }
                i5++;
            }
            tVar.f14707g = z5;
            r rVar2 = tVar.f14709i;
            if (rVar2 != null) {
                rVar2.o(z5);
            }
            tVar.j = this.H;
            this.H = null;
            this.f14618i.c(false);
            l2 l2Var = this.E;
            int i6 = l2Var.f996x;
            int l6 = l2Var.l();
            if ((Gravity.getAbsoluteGravity(this.P, this.I.getLayoutDirection()) & 7) == 5) {
                i6 += this.I.getWidth();
            }
            if (!tVar.b()) {
                if (tVar.f14705e != null) {
                    tVar.d(i6, l6, true, true);
                }
            }
            u uVar2 = this.K;
            if (uVar2 != null) {
                uVar2.h(b0Var);
            }
            return true;
        }
        return false;
    }

    @Override // n.z
    public final void dismiss() {
        if (isShowing()) {
            this.E.dismiss();
        }
    }

    @Override // n.v
    public final boolean e() {
        return false;
    }

    @Override // n.z
    public final t1 h() {
        return this.E.f993i;
    }

    @Override // n.v
    public final Parcelable i() {
        return null;
    }

    @Override // n.z
    public final boolean isShowing() {
        return !this.M && this.E.W.isShowing();
    }

    @Override // n.v
    public final void j(u uVar) {
        this.K = uVar;
    }

    @Override // n.r
    public final void n(View view) {
        this.I = view;
    }

    @Override // n.r
    public final void o(boolean z5) {
        this.f14619v.f14642i = z5;
    }

    @Override // android.widget.PopupWindow.OnDismissListener
    public final void onDismiss() {
        this.M = true;
        this.f14618i.c(true);
        ViewTreeObserver viewTreeObserver = this.L;
        if (viewTreeObserver != null) {
            if (!viewTreeObserver.isAlive()) {
                this.L = this.J.getViewTreeObserver();
            }
            this.L.removeGlobalOnLayoutListener(this.F);
            this.L = null;
        }
        this.J.removeOnAttachStateChangeListener(this.G);
        PopupWindow.OnDismissListener onDismissListener = this.H;
        if (onDismissListener != null) {
            onDismissListener.onDismiss();
        }
    }

    @Override // android.view.View.OnKeyListener
    public final boolean onKey(View view, int i5, KeyEvent keyEvent) {
        if (keyEvent.getAction() != 1 || i5 != 82) {
            return false;
        }
        dismiss();
        return true;
    }

    @Override // n.r
    public final void p(int i5) {
        this.P = i5;
    }

    @Override // n.r
    public final void q(int i5) {
        this.E.f996x = i5;
    }

    @Override // n.r
    public final void r(PopupWindow.OnDismissListener onDismissListener) {
        this.H = onDismissListener;
    }

    @Override // n.r
    public final void s(boolean z5) {
        this.Q = z5;
    }

    @Override // n.z
    public final void show() {
        View view;
        if (isShowing()) {
            return;
        }
        if (this.M || (view = this.I) == null) {
            throw new IllegalStateException("StandardMenuPopup cannot be used without an anchor");
        }
        this.J = view;
        l2 l2Var = this.E;
        androidx.appcompat.widget.b0 b0Var = l2Var.W;
        androidx.appcompat.widget.b0 b0Var2 = l2Var.W;
        b0Var.setOnDismissListener(this);
        l2Var.M = this;
        l2Var.V = true;
        b0Var2.setFocusable(true);
        View view2 = this.J;
        boolean z5 = this.L == null;
        ViewTreeObserver viewTreeObserver = view2.getViewTreeObserver();
        this.L = viewTreeObserver;
        if (z5) {
            viewTreeObserver.addOnGlobalLayoutListener(this.F);
        }
        view2.addOnAttachStateChangeListener(this.G);
        l2Var.L = view2;
        l2Var.I = this.P;
        boolean z6 = this.N;
        Context context = this.f14617e;
        g gVar = this.f14619v;
        if (!z6) {
            this.O = r.m(gVar, context, this.f14621x);
            this.N = true;
        }
        l2Var.o(this.O);
        b0Var2.setInputMethodMode(2);
        Rect rect = this.f14700d;
        l2Var.U = rect != null ? new Rect(rect) : null;
        l2Var.show();
        t1 t1Var = l2Var.f993i;
        t1Var.setOnKeyListener(this);
        if (this.Q) {
            j jVar = this.f14618i;
            if (jVar.f14656m != null) {
                FrameLayout frameLayout = (FrameLayout) LayoutInflater.from(context).inflate(R.layout.abc_popup_menu_header_item_layout, (ViewGroup) t1Var, false);
                TextView textView = (TextView) frameLayout.findViewById(android.R.id.title);
                if (textView != null) {
                    textView.setText(jVar.f14656m);
                }
                frameLayout.setEnabled(false);
                t1Var.addHeaderView(frameLayout, null, false);
            }
        }
        l2Var.m(gVar);
        l2Var.show();
    }

    @Override // n.r
    public final void t(int i5) {
        this.E.i(i5);
    }

    @Override // n.v
    public final void f(Parcelable parcelable) {
    }

    @Override // n.r
    public final void l(j jVar) {
    }
}
