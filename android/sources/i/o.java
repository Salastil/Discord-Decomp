package i;

import android.view.ViewGroup;
import androidx.core.view.a1;
import androidx.core.view.s0;

/* loaded from: classes.dex */
public final class o implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ androidx.appcompat.app.a f10351d;

    public o(androidx.appcompat.app.a aVar) {
        this.f10351d = aVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ViewGroup viewGroup;
        androidx.appcompat.app.a aVar = this.f10351d;
        aVar.T.showAtLocation(aVar.S, 55, 0, 0);
        a1 a1Var = aVar.V;
        if (a1Var != null) {
            a1Var.b();
        }
        if (!aVar.W || (viewGroup = aVar.X) == null || !viewGroup.isLaidOut()) {
            aVar.S.setAlpha(1.0f);
            aVar.S.setVisibility(0);
            return;
        }
        aVar.S.setAlpha(0.0f);
        a1 b10 = s0.b(aVar.S);
        b10.a(1.0f);
        aVar.V = b10;
        b10.d(new n(0, this));
    }
}
