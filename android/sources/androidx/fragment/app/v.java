package androidx.fragment.app;

import android.app.Dialog;
import android.content.DialogInterface;

/* loaded from: classes.dex */
public final class v implements DialogInterface.OnCancelListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ DialogFragment f2109d;

    public v(DialogFragment dialogFragment) {
        this.f2109d = dialogFragment;
    }

    @Override // android.content.DialogInterface.OnCancelListener
    public final void onCancel(DialogInterface dialogInterface) {
        Dialog dialog;
        Dialog dialog2;
        DialogFragment dialogFragment = this.f2109d;
        dialog = dialogFragment.mDialog;
        if (dialog != null) {
            dialog2 = dialogFragment.mDialog;
            dialogFragment.onCancel(dialog2);
        }
    }
}
