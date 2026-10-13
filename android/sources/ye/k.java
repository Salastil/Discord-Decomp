package ye;

import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import androidx.fragment.app.DialogFragment;
import bf.t;

/* loaded from: classes3.dex */
public class k extends DialogFragment {

    /* renamed from: d, reason: collision with root package name */
    public Dialog f20925d;

    /* renamed from: e, reason: collision with root package name */
    public DialogInterface.OnCancelListener f20926e;

    /* renamed from: i, reason: collision with root package name */
    public AlertDialog f20927i;

    @Override // androidx.fragment.app.DialogFragment, android.content.DialogInterface.OnCancelListener
    public final void onCancel(DialogInterface dialogInterface) {
        DialogInterface.OnCancelListener onCancelListener = this.f20926e;
        if (onCancelListener != null) {
            onCancelListener.onCancel(dialogInterface);
        }
    }

    @Override // androidx.fragment.app.DialogFragment
    public final Dialog onCreateDialog(Bundle bundle) {
        Dialog dialog = this.f20925d;
        if (dialog != null) {
            return dialog;
        }
        setShowsDialog(false);
        if (this.f20927i == null) {
            Context context = getContext();
            t.g(context);
            this.f20927i = new AlertDialog.Builder(context).create();
        }
        return this.f20927i;
    }
}
