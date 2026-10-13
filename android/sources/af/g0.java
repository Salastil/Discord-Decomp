package af;

import android.app.AlertDialog;

/* loaded from: classes3.dex */
public final class g0 extends u {
    public final /* synthetic */ AlertDialog a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ii.o f559b;

    public g0(ii.o oVar, AlertDialog alertDialog) {
        this.f559b = oVar;
        this.a = alertDialog;
    }

    @Override // af.u
    public final void a() {
        m mVar = (m) this.f559b.f10839i;
        mVar.f572i.set(null);
        fg.a aVar = mVar.f576y.K;
        aVar.sendMessage(aVar.obtainMessage(3));
        AlertDialog alertDialog = this.a;
        if (alertDialog.isShowing()) {
            alertDialog.dismiss();
        }
    }
}
