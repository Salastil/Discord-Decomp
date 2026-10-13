package gk;

import android.content.DialogInterface;

/* loaded from: classes3.dex */
public final class b implements DialogInterface.OnCancelListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ a f9332d;

    public b(a aVar) {
        this.f9332d = aVar;
    }

    @Override // android.content.DialogInterface.OnCancelListener
    public final void onCancel(DialogInterface dialogInterface) {
        this.f9332d.invoke(new Object[0]);
    }
}
