package androidx.appcompat.view;

import android.content.Context;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import androidx.appcompat.widget.ActionBarContextView;
import androidx.appcompat.widget.n;
import i.q;
import java.lang.ref.WeakReference;
import m.e;
import n.h;
import n.j;

/* loaded from: classes.dex */
public final class a extends ActionMode implements h {
    public j E;

    /* renamed from: i, reason: collision with root package name */
    public Context f798i;

    /* renamed from: v, reason: collision with root package name */
    public ActionBarContextView f799v;

    /* renamed from: w, reason: collision with root package name */
    public q f800w;

    /* renamed from: x, reason: collision with root package name */
    public WeakReference f801x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f802y;

    @Override // androidx.appcompat.view.ActionMode
    public final void a() {
        if (this.f802y) {
            return;
        }
        this.f802y = true;
        this.f800w.a(this);
    }

    @Override // androidx.appcompat.view.ActionMode
    public final View b() {
        WeakReference weakReference = this.f801x;
        if (weakReference != null) {
            return (View) weakReference.get();
        }
        return null;
    }

    @Override // androidx.appcompat.view.ActionMode
    public final j c() {
        return this.E;
    }

    @Override // androidx.appcompat.view.ActionMode
    public final MenuInflater d() {
        return new e(this.f799v.getContext());
    }

    @Override // androidx.appcompat.view.ActionMode
    public final CharSequence e() {
        return this.f799v.getSubtitle();
    }

    @Override // androidx.appcompat.view.ActionMode
    public final CharSequence f() {
        return this.f799v.getTitle();
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void g() {
        this.f800w.c(this, this.E);
    }

    @Override // androidx.appcompat.view.ActionMode
    public final boolean h() {
        return this.f799v.P;
    }

    @Override // n.h
    public final boolean i(j jVar, MenuItem menuItem) {
        return this.f800w.a.d(this, menuItem);
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void j(View view) {
        this.f799v.setCustomView(view);
        this.f801x = view != null ? new WeakReference(view) : null;
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void k(int i5) {
        l(this.f798i.getString(i5));
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void l(CharSequence charSequence) {
        this.f799v.setSubtitle(charSequence);
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void m(int i5) {
        n(this.f798i.getString(i5));
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void n(CharSequence charSequence) {
        this.f799v.setTitle(charSequence);
    }

    @Override // androidx.appcompat.view.ActionMode
    public final void o(boolean z5) {
        this.f792e = z5;
        this.f799v.setTitleOptional(z5);
    }

    @Override // n.h
    public final void v(j jVar) {
        g();
        n nVar = this.f799v.f832v;
        if (nVar != null) {
            nVar.n();
        }
    }
}
