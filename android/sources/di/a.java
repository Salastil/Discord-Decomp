package di;

import android.content.Context;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class a extends b0 {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7560e = 0;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f7561i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f7562v;

    public a(a5.c0 c0Var, IBinder iBinder) {
        this.f7561i = iBinder;
        this.f7562v = c0Var;
    }

    @Override // di.b0
    public final void b() {
        switch (this.f7560e) {
            case 0:
                c cVar = (c) ((a5.c0) this.f7562v).f151e;
                d0 d0Var = cVar.f7574i;
                ArrayList arrayList = cVar.f7569d;
                cVar.f7577n = (IInterface) d0Var.l((IBinder) this.f7561i);
                a0 a0Var = cVar.f7567b;
                a0Var.b("linkToDeath", new Object[0]);
                try {
                    cVar.f7577n.asBinder().linkToDeath(cVar.k, 0);
                } catch (RemoteException e9) {
                    a0Var.a(e9, "linkToDeath failed", new Object[0]);
                }
                cVar.f7572g = false;
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    ((Runnable) it.next()).run();
                }
                arrayList.clear();
                break;
            default:
                ((com.google.android.play.core.integrity.c) this.f7562v).f6178c.d(Integer.valueOf(e.a((Context) this.f7561i)));
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(com.google.android.play.core.integrity.c cVar, jg.g gVar, Context context) {
        super(gVar);
        this.f7561i = context;
        this.f7562v = cVar;
    }
}
