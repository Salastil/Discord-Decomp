package gk;

import android.content.DialogInterface;

/* loaded from: classes3.dex */
public final class d implements DialogInterface.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ a f9334d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ n f9335e;

    public d(a aVar, n nVar) {
        this.f9334d = aVar;
        this.f9335e = nVar;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public final void onClick(DialogInterface dialogInterface, int i5) {
        this.f9334d.invoke(this.f9335e.getDate());
        dialogInterface.dismiss();
    }
}
