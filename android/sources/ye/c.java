package ye;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.DialogFragment;
import android.content.DialogInterface;
import android.os.Bundle;
import bf.t;

/* loaded from: classes3.dex */
public class c extends DialogFragment {

    /* renamed from: d, reason: collision with root package name */
    public Dialog f20910d;

    /* renamed from: e, reason: collision with root package name */
    public DialogInterface.OnCancelListener f20911e;

    /* renamed from: i, reason: collision with root package name */
    public AlertDialog f20912i;

    @Override // android.app.DialogFragment, android.content.DialogInterface.OnCancelListener
    public final void onCancel(DialogInterface dialogInterface) {
        DialogInterface.OnCancelListener onCancelListener = this.f20911e;
        if (onCancelListener != null) {
            onCancelListener.onCancel(dialogInterface);
        }
    }

    @Override // android.app.DialogFragment
    public final Dialog onCreateDialog(Bundle bundle) {
        Dialog dialog = this.f20910d;
        if (dialog != null) {
            return dialog;
        }
        setShowsDialog(false);
        if (this.f20912i == null) {
            Activity activity = getActivity();
            t.g(activity);
            this.f20912i = new AlertDialog.Builder(activity).create();
        }
        return this.f20912i;
    }
}
