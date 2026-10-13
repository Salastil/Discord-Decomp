package i;

import android.content.Context;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import androidx.appcompat.view.ActionMode;
import androidx.appcompat.widget.ActionBarContextView;
import java.lang.ref.WeakReference;

/* loaded from: classes.dex */
public final class i0 extends ActionMode implements n.h {

    /* renamed from: i, reason: collision with root package name */
    public final Context f10317i;

    /* renamed from: v, reason: collision with root package name */
    public final n.j f10318v;

    /* renamed from: w, reason: collision with root package name */
    public q f10319w;

    /* renamed from: x, reason: collision with root package name */
    public WeakReference f10320x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ j0 f10321y;

    public i0(j0 j0Var, Context context, q qVar) {
        this.f10321y = j0Var;
        this.f10317i = context;
        this.f10319w = qVar;
        n.j jVar = new n.j(context);
        jVar.f14655l = 1;
        this.f10318v = jVar;
        jVar.f14650e = this;
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void a() {
        j0 j0Var = this.f10321y;
        if (j0Var.f10333i != this) {
            return;
        }
        if (j0Var.f10338p) {
            j0Var.j = this;
            j0Var.k = this.f10319w;
        } else {
            this.f10319w.a(this);
        }
        this.f10319w = null;
        j0Var.t(false);
        ActionBarContextView actionBarContextView = j0Var.f10330f;
        if (actionBarContextView.H == null) {
            actionBarContextView.e();
        }
        j0Var.f10327c.setHideOnContentScrollEnabled(j0Var.f10343u);
        j0Var.f10333i = null;
    }

    @Override // androidx.appcompat.view.ActionMode
    public final View b() {
        WeakReference weakReference = this.f10320x;
        if (weakReference != null) {
            return (View) weakReference.get();
        }
        return null;
    }

    @Override // androidx.appcompat.view.ActionMode
    public final n.j c() {
        return this.f10318v;
    }

    @Override // androidx.appcompat.view.ActionMode
    public final MenuInflater d() {
        return new m.e(this.f10317i);
    }

    @Override // androidx.appcompat.view.ActionMode
    public final CharSequence e() {
        return this.f10321y.f10330f.getSubtitle();
    }

    @Override // androidx.appcompat.view.ActionMode
    public final CharSequence f() {
        return this.f10321y.f10330f.getTitle();
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void g() {
        if (this.f10321y.f10333i != this) {
            return;
        }
        n.j jVar = this.f10318v;
        jVar.w();
        try {
            this.f10319w.c(this, jVar);
        } finally {
            jVar.v();
        }
    }

    @Override // androidx.appcompat.view.ActionMode
    public final boolean h() {
        return this.f10321y.f10330f.P;
    }

    @Override // n.h
    public final boolean i(n.j jVar, MenuItem menuItem) {
        q qVar = this.f10319w;
        if (qVar != null) {
            return qVar.a.d(this, menuItem);
        }
        return false;
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void j(View view) {
        this.f10321y.f10330f.setCustomView(view);
        this.f10320x = new WeakReference(view);
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void k(int i5) {
        l(this.f10321y.a.getResources().getString(i5));
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void l(CharSequence charSequence) {
        this.f10321y.f10330f.setSubtitle(charSequence);
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void m(int i5) {
        n(this.f10321y.a.getResources().getString(i5));
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void n(CharSequence charSequence) {
        this.f10321y.f10330f.setTitle(charSequence);
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void o(boolean z5) {
        this.f792e = z5;
        this.f10321y.f10330f.setTitleOptional(z5);
    }

    @Override // n.h
    public final void v(n.j jVar) {
        if (this.f10319w == null) {
            return;
        }
        g();
        androidx.appcompat.widget.n nVar = this.f10321y.f10330f.f832v;
        if (nVar != null) {
            nVar.n();
        }
    }
}
