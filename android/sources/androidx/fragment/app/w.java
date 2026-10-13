package androidx.fragment.app;

import android.app.Dialog;
import android.content.DialogInterface;

/* loaded from: classes.dex */
public final class w implements DialogInterface.OnDismissListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ DialogFragment f2113d;

    public w(DialogFragment dialogFragment) {
        this.f2113d = dialogFragment;
    }

    @Override // android.content.DialogInterface.OnDismissListener
    public final void onDismiss(DialogInterface dialogInterface) {
        Dialog dialog;
        Dialog dialog2;
        DialogFragment dialogFragment = this.f2113d;
        dialog = dialogFragment.mDialog;
        if (dialog != null) {
            dialog2 = dialogFragment.mDialog;
            dialogFragment.onDismiss(dialog2);
        }
    }
}
