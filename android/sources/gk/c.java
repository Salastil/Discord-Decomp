package gk;

import android.content.DialogInterface;

/* loaded from: classes3.dex */
public final class c implements DialogInterface.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ a f9333d;

    public c(a aVar) {
        this.f9333d = aVar;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public final void onClick(DialogInterface dialogInterface, int i5) {
        this.f9333d.invoke(new Object[0]);
        dialogInterface.dismiss();
    }
}
