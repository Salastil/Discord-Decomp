package androidx.fragment.app;

import android.app.Dialog;
import android.content.DialogInterface;

/* loaded from: classes.dex */
public final class u implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2106d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f2107e;

    public /* synthetic */ u(int i5, Object obj) {
        this.f2106d = i5;
        this.f2107e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        DialogInterface.OnDismissListener onDismissListener;
        Dialog dialog;
        switch (this.f2106d) {
            case 0:
                DialogFragment dialogFragment = (DialogFragment) this.f2107e;
                onDismissListener = dialogFragment.mOnDismissListener;
                dialog = dialogFragment.mDialog;
                onDismissListener.onDismiss(dialog);
                break;
            case 1:
                c2 c2Var = (c2) this.f2107e;
                if (!c2Var.f1978b.isEmpty()) {
                    c2Var.f();
                    break;
                }
                break;
            default:
                ((FragmentManager) this.f2107e).z(true);
                break;
        }
    }
}
