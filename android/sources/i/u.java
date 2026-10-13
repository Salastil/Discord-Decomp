package i;

import android.view.ActionMode;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.View;
import android.view.Window;
import androidx.appcompat.app.ActionBar;
import java.util.List;

/* loaded from: classes.dex */
public final class u extends m.j {

    /* renamed from: e, reason: collision with root package name */
    public ve.i f10354e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f10355i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f10356v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f10357w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ androidx.appcompat.app.a f10358x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u(androidx.appcompat.app.a aVar, Window.Callback callback) {
        super(callback);
        this.f10358x = aVar;
    }

    public final void a(Window.Callback callback) {
        try {
            this.f10355i = true;
            callback.onContentChanged();
        } finally {
            this.f10355i = false;
        }
    }

    @Override // android.view.Window.Callback
    public final boolean dispatchKeyEvent(KeyEvent keyEvent) {
        boolean z5 = this.f10356v;
        Window.Callback callback = this.f14308d;
        return z5 ? callback.dispatchKeyEvent(keyEvent) : this.f10358x.M(keyEvent) || callback.dispatchKeyEvent(keyEvent);
    }

    @Override // android.view.Window.Callback
    public final boolean dispatchKeyShortcutEvent(KeyEvent keyEvent) {
        if (!this.f14308d.dispatchKeyShortcutEvent(keyEvent)) {
            int keyCode = keyEvent.getKeyCode();
            androidx.appcompat.app.a aVar = this.f10358x;
            aVar.S();
            ActionBar actionBar = aVar.L;
            if (actionBar == null || !actionBar.i(keyCode, keyEvent)) {
                x xVar = aVar.f774j0;
                if (xVar == null || !aVar.X(xVar, keyEvent.getKeyCode(), keyEvent)) {
                    if (aVar.f774j0 == null) {
                        x R = aVar.R(0);
                        aVar.Y(R, keyEvent);
                        boolean X = aVar.X(R, keyEvent.getKeyCode(), keyEvent);
                        R.k = false;
                        if (X) {
                        }
                    }
                    return false;
                }
                x xVar2 = aVar.f774j0;
                if (xVar2 != null) {
                    xVar2.f10370l = true;
                    return true;
                }
            }
        }
        return true;
    }

    @Override // android.view.Window.Callback
    public final void onContentChanged() {
        if (this.f10355i) {
            this.f14308d.onContentChanged();
        }
    }

    @Override // android.view.Window.Callback
    public final boolean onCreatePanelMenu(int i5, Menu menu) {
        if (i5 != 0 || (menu instanceof n.j)) {
            return this.f14308d.onCreatePanelMenu(i5, menu);
        }
        return false;
    }

    @Override // android.view.Window.Callback
    public final View onCreatePanelView(int i5) {
        ve.i iVar = this.f10354e;
        if (iVar != null) {
            View view = i5 == 0 ? new View(((e0) iVar.f19405d).a.a.getContext()) : null;
            if (view != null) {
                return view;
            }
        }
        return this.f14308d.onCreatePanelView(i5);
    }

    @Override // m.j, android.view.Window.Callback
    public final boolean onMenuOpened(int i5, Menu menu) {
        super.onMenuOpened(i5, menu);
        if (i5 == 108) {
            androidx.appcompat.app.a aVar = this.f10358x;
            aVar.S();
            ActionBar actionBar = aVar.L;
            if (actionBar != null) {
                actionBar.c(true);
            }
        }
        return true;
    }

    @Override // m.j, android.view.Window.Callback
    public final void onPanelClosed(int i5, Menu menu) {
        if (this.f10357w) {
            this.f14308d.onPanelClosed(i5, menu);
            return;
        }
        super.onPanelClosed(i5, menu);
        androidx.appcompat.app.a aVar = this.f10358x;
        if (i5 == 108) {
            aVar.S();
            ActionBar actionBar = aVar.L;
            if (actionBar != null) {
                actionBar.c(false);
                return;
            }
            return;
        }
        if (i5 == 0) {
            x R = aVar.R(i5);
            if (R.f10371m) {
                aVar.K(R, false);
            }
        }
    }

    @Override // android.view.Window.Callback
    public final boolean onPreparePanel(int i5, View view, Menu menu) {
        n.j jVar = menu instanceof n.j ? (n.j) menu : null;
        if (i5 == 0 && jVar == null) {
            return false;
        }
        if (jVar != null) {
            jVar.f14667x = true;
        }
        ve.i iVar = this.f10354e;
        if (iVar != null && i5 == 0) {
            e0 e0Var = (e0) iVar.f19405d;
            if (!e0Var.f10305d) {
                e0Var.a.f1168l = true;
                e0Var.f10305d = true;
            }
        }
        boolean onPreparePanel = this.f14308d.onPreparePanel(i5, view, menu);
        if (jVar != null) {
            jVar.f14667x = false;
        }
        return onPreparePanel;
    }

    @Override // m.j, android.view.Window.Callback
    public final void onProvideKeyboardShortcuts(List list, Menu menu, int i5) {
        n.j jVar = this.f10358x.R(0).f10368h;
        if (jVar != null) {
            super.onProvideKeyboardShortcuts(list, jVar, i5);
        } else {
            super.onProvideKeyboardShortcuts(list, menu, i5);
        }
    }

    @Override // android.view.Window.Callback
    public final ActionMode onWindowStartingActionMode(ActionMode.Callback callback, int i5) {
        if (i5 != 0) {
            return m.g.b(this.f14308d, callback, i5);
        }
        androidx.appcompat.app.a aVar = this.f10358x;
        androidx.appcompat.view.b bVar = new androidx.appcompat.view.b(aVar.H, callback);
        androidx.appcompat.view.ActionMode E = aVar.E(bVar);
        if (E != null) {
            return bVar.e(E);
        }
        return null;
    }

    @Override // android.view.Window.Callback
    public final ActionMode onWindowStartingActionMode(ActionMode.Callback callback) {
        return null;
    }
}
