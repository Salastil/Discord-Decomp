package androidx.appcompat.widget;

import android.view.View;

/* loaded from: classes.dex */
public final class j implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final h f1013d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ n f1014e;

    public j(n nVar, h hVar) {
        this.f1014e = nVar;
        this.f1013d = hVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        n.h hVar;
        n nVar = this.f1014e;
        n.j jVar = nVar.f1041i;
        if (jVar != null && (hVar = jVar.f14650e) != null) {
            hVar.v(jVar);
        }
        View view = (View) nVar.E;
        if (view != null && view.getWindowToken() != null) {
            h hVar2 = this.f1013d;
            if (!hVar2.b()) {
                if (hVar2.f14705e != null) {
                    hVar2.d(0, 0, false, false);
                }
            }
            nVar.Q = hVar2;
        }
        nVar.S = null;
    }
}
