package n;

import android.widget.PopupWindow;

/* loaded from: classes.dex */
public final class s implements PopupWindow.OnDismissListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ t f14701d;

    public s(t tVar) {
        this.f14701d = tVar;
    }

    @Override // android.widget.PopupWindow.OnDismissListener
    public final void onDismiss() {
        this.f14701d.c();
    }
}
