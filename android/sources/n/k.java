package n;

import android.content.DialogInterface;
import android.view.KeyEvent;
import android.view.View;
import android.view.Window;

/* loaded from: classes.dex */
public final class k implements DialogInterface.OnKeyListener, DialogInterface.OnClickListener, DialogInterface.OnDismissListener, u {

    /* renamed from: d, reason: collision with root package name */
    public b0 f14668d;

    /* renamed from: e, reason: collision with root package name */
    public i.f f14669e;

    /* renamed from: i, reason: collision with root package name */
    public f f14670i;

    @Override // n.u
    public final void b(j jVar, boolean z5) {
        i.f fVar;
        if ((z5 || jVar == this.f14668d) && (fVar = this.f14669e) != null) {
            fVar.dismiss();
        }
    }

    @Override // n.u
    public final boolean h(j jVar) {
        return false;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public final void onClick(DialogInterface dialogInterface, int i5) {
        b0 b0Var = this.f14668d;
        f fVar = this.f14670i;
        if (fVar.f14639x == null) {
            fVar.f14639x = new e(fVar);
        }
        b0Var.q(fVar.f14639x.getItem(i5), null, 0);
    }

    @Override // android.content.DialogInterface.OnDismissListener
    public final void onDismiss(DialogInterface dialogInterface) {
        this.f14670i.b(this.f14668d, true);
    }

    @Override // android.content.DialogInterface.OnKeyListener
    public final boolean onKey(DialogInterface dialogInterface, int i5, KeyEvent keyEvent) {
        Window window;
        View decorView;
        KeyEvent.DispatcherState keyDispatcherState;
        View decorView2;
        KeyEvent.DispatcherState keyDispatcherState2;
        b0 b0Var = this.f14668d;
        if (i5 == 82 || i5 == 4) {
            if (keyEvent.getAction() == 0 && keyEvent.getRepeatCount() == 0) {
                Window window2 = this.f14669e.getWindow();
                if (window2 != null && (decorView2 = window2.getDecorView()) != null && (keyDispatcherState2 = decorView2.getKeyDispatcherState()) != null) {
                    keyDispatcherState2.startTracking(keyEvent, this);
                    return true;
                }
            } else if (keyEvent.getAction() == 1 && !keyEvent.isCanceled() && (window = this.f14669e.getWindow()) != null && (decorView = window.getDecorView()) != null && (keyDispatcherState = decorView.getKeyDispatcherState()) != null && keyDispatcherState.isTracking(keyEvent)) {
                b0Var.c(true);
                dialogInterface.dismiss();
                return true;
            }
        }
        return b0Var.performShortcut(i5, keyEvent, 0);
    }
}
