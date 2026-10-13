package dg;

import a5.c0;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class f extends c {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ IBinder f7547e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ c0 f7548i;

    public f(c0 c0Var, IBinder iBinder) {
        this.f7547e = iBinder;
        this.f7548i = c0Var;
    }

    @Override // dg.c
    public final void b() {
        rh.d bVar;
        int i5 = rh.c.f17387g;
        IBinder iBinder = this.f7547e;
        if (iBinder == null) {
            bVar = null;
        } else {
            IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.play.agesignals.protocol.IAgeSignalsService");
            bVar = queryLocalInterface instanceof rh.d ? (rh.d) queryLocalInterface : new rh.b(iBinder);
        }
        g gVar = (g) this.f7548i.f151e;
        gVar.f7559m = bVar;
        ArrayList arrayList = gVar.f7552d;
        b bVar2 = gVar.f7550b;
        bVar2.c("linkToDeath", new Object[0]);
        try {
            gVar.f7559m.asBinder().linkToDeath(gVar.j, 0);
        } catch (RemoteException e9) {
            bVar2.b(e9, "linkToDeath failed", new Object[0]);
        }
        gVar.f7555g = false;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((Runnable) it.next()).run();
        }
        arrayList.clear();
    }
}
