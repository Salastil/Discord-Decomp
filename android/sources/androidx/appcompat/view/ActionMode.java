package androidx.appcompat.view;

import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import n.j;

/* loaded from: classes.dex */
public abstract class ActionMode {

    /* renamed from: d, reason: collision with root package name */
    public Object f791d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f792e;

    public interface Callback {
        void a(ActionMode actionMode);

        boolean b(ActionMode actionMode, Menu menu);

        boolean c(ActionMode actionMode, Menu menu);

        boolean d(ActionMode actionMode, MenuItem menuItem);
    }

    public abstract void a();

    public abstract View b();

    public abstract j c();

    public abstract MenuInflater d();

    public abstract CharSequence e();

    public abstract CharSequence f();

    public abstract void g();

    public boolean h() {
        return false;
    }

    public abstract void j(View view);

    public abstract void k(int i5);

    public abstract void l(CharSequence charSequence);

    public abstract void m(int i5);

    public abstract void n(CharSequence charSequence);

    public void o(boolean z5) {
        this.f792e = z5;
    }
}
