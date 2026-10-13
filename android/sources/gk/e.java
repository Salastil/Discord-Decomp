package gk;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.graphics.Color;

/* loaded from: classes3.dex */
public final class e implements DialogInterface.OnShowListener {
    public final /* synthetic */ String a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ AlertDialog f9336b;

    public e(String str, AlertDialog alertDialog) {
        this.a = str;
        this.f9336b = alertDialog;
    }

    @Override // android.content.DialogInterface.OnShowListener
    public final void onShow(DialogInterface dialogInterface) {
        String str = this.a;
        if (str != null) {
            int parseColor = Color.parseColor(str);
            AlertDialog alertDialog = this.f9336b;
            alertDialog.getButton(-1).setTextColor(parseColor);
            alertDialog.getButton(-2).setTextColor(parseColor);
        }
    }
}
