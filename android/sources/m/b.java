package m;

import android.content.Context;
import android.view.ActionMode;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.View;
import n.y;

/* loaded from: classes.dex */
public final class b extends ActionMode {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final androidx.appcompat.view.ActionMode f14272b;

    public b(Context context, androidx.appcompat.view.ActionMode actionMode) {
        this.a = context;
        this.f14272b = actionMode;
    }

    @Override // android.view.ActionMode
    public final void finish() {
        this.f14272b.a();
    }

    @Override // android.view.ActionMode
    public final View getCustomView() {
        return this.f14272b.b();
    }

    @Override // android.view.ActionMode
    public final Menu getMenu() {
        return new y(this.a, this.f14272b.c());
    }

    @Override // android.view.ActionMode
    public final MenuInflater getMenuInflater() {
        return this.f14272b.d();
    }

    @Override // android.view.ActionMode
    public final CharSequence getSubtitle() {
        return this.f14272b.e();
    }

    @Override // android.view.ActionMode
    public final Object getTag() {
        return this.f14272b.f791d;
    }

    @Override // android.view.ActionMode
    public final CharSequence getTitle() {
        return this.f14272b.f();
    }

    @Override // android.view.ActionMode
    public final boolean getTitleOptionalHint() {
        return this.f14272b.f792e;
    }

    @Override // android.view.ActionMode
    public final void invalidate() {
        this.f14272b.g();
    }

    @Override // android.view.ActionMode
    public final boolean isTitleOptional() {
        return this.f14272b.h();
    }

    @Override // android.view.ActionMode
    public final void setCustomView(View view) {
        this.f14272b.j(view);
    }

    @Override // android.view.ActionMode
    public final void setSubtitle(CharSequence charSequence) {
        this.f14272b.l(charSequence);
    }

    @Override // android.view.ActionMode
    public final void setTag(Object obj) {
        this.f14272b.f791d = obj;
    }

    @Override // android.view.ActionMode
    public final void setTitle(CharSequence charSequence) {
        this.f14272b.n(charSequence);
    }

    @Override // android.view.ActionMode
    public final void setTitleOptionalHint(boolean z5) {
        this.f14272b.o(z5);
    }

    @Override // android.view.ActionMode
    public final void setSubtitle(int i5) {
        this.f14272b.k(i5);
    }

    @Override // android.view.ActionMode
    public final void setTitle(int i5) {
        this.f14272b.m(i5);
    }
}
