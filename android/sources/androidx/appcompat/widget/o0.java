package androidx.appcompat.widget;

import android.view.ViewTreeObserver;
import android.widget.PopupWindow;

/* loaded from: classes.dex */
public final class o0 implements PopupWindow.OnDismissListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ j0 f1057d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ p0 f1058e;

    public o0(p0 p0Var, j0 j0Var) {
        this.f1058e = p0Var;
        this.f1057d = j0Var;
    }

    @Override // android.widget.PopupWindow.OnDismissListener
    public final void onDismiss() {
        ViewTreeObserver viewTreeObserver = this.f1058e.f1068d0.getViewTreeObserver();
        if (viewTreeObserver != null) {
            viewTreeObserver.removeGlobalOnLayoutListener(this.f1057d);
        }
    }
}
