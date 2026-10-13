package i;

import android.view.Menu;
import android.view.MenuItem;
import android.view.ViewGroup;
import androidx.appcompat.view.ActionMode;
import androidx.core.view.a1;
import androidx.core.view.s0;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class q implements ActionMode.Callback {
    public final ActionMode.Callback a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ androidx.appcompat.app.a f10353b;

    public q(androidx.appcompat.app.a aVar, ActionMode.Callback callback) {
        this.f10353b = aVar;
        this.a = callback;
    }

    /* JADX WARN: Type inference failed for: r0v3, types: [i.i, java.lang.Object] */
    @Override // androidx.appcompat.view.ActionMode.Callback
    public final void a(ActionMode actionMode) {
        this.a.a(actionMode);
        androidx.appcompat.app.a aVar = this.f10353b;
        if (aVar.T != null) {
            aVar.I.getDecorView().removeCallbacks(aVar.U);
        }
        if (aVar.S != null) {
            a1 a1Var = aVar.V;
            if (a1Var != null) {
                a1Var.b();
            }
            a1 b10 = s0.b(aVar.S);
            b10.a(0.0f);
            aVar.V = b10;
            b10.d(new n(1, this));
        }
        aVar.K.onSupportActionModeFinished(aVar.R);
        aVar.R = null;
        ViewGroup viewGroup = aVar.X;
        WeakHashMap weakHashMap = s0.a;
        androidx.core.view.h0.c(viewGroup);
        aVar.a0();
    }

    @Override // androidx.appcompat.view.ActionMode.Callback
    public final boolean b(ActionMode actionMode, Menu menu) {
        return this.a.b(actionMode, menu);
    }

    @Override // androidx.appcompat.view.ActionMode.Callback
    public final boolean c(ActionMode actionMode, Menu menu) {
        ViewGroup viewGroup = this.f10353b.X;
        WeakHashMap weakHashMap = s0.a;
        androidx.core.view.h0.c(viewGroup);
        return this.a.c(actionMode, menu);
    }

    @Override // androidx.appcompat.view.ActionMode.Callback
    public final boolean d(ActionMode actionMode, MenuItem menuItem) {
        return this.a.d(actionMode, menuItem);
    }
}
