package th;

import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class g extends uh.o {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f18451e = 1;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f18452i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f18453v;

    public g(a5.c0 c0Var, IBinder iBinder) {
        this.f18452i = iBinder;
        this.f18453v = c0Var;
    }

    @Override // uh.o
    public final void a() {
        uh.k iVar;
        int i5 = this.f18451e;
        Object obj = this.f18452i;
        Object obj2 = this.f18453v;
        switch (i5) {
            case 0:
                m mVar = (m) obj2;
                try {
                    uh.k kVar = mVar.f18507e.f18930m;
                    String str = mVar.a;
                    Bundle h6 = m.h();
                    j jVar = new j(mVar, (jg.g) obj, 1);
                    uh.i iVar2 = (uh.i) kVar;
                    Parcel b10 = iVar2.b();
                    b10.writeString(str);
                    int i6 = uh.h.a;
                    b10.writeInt(1);
                    h6.writeToParcel(b10, 0);
                    b10.writeStrongBinder(jVar);
                    iVar2.k(10, b10);
                    break;
                } catch (RemoteException e9) {
                    m.f18502g.d(e9, "keepAlive", new Object[0]);
                    return;
                }
            default:
                uh.q qVar = (uh.q) ((a5.c0) obj2).f151e;
                IBinder iBinder = (IBinder) obj;
                int i10 = uh.j.f18911g;
                if (iBinder == null) {
                    iVar = null;
                } else {
                    IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.play.core.assetpacks.protocol.IAssetModuleService");
                    iVar = queryLocalInterface instanceof uh.k ? (uh.k) queryLocalInterface : new uh.i(iBinder, "com.google.android.play.core.assetpacks.protocol.IAssetModuleService", 2);
                }
                qVar.f18930m = iVar;
                a5.m mVar2 = qVar.f18921b;
                mVar2.e("linkToDeath", new Object[0]);
                try {
                    qVar.f18930m.asBinder().linkToDeath(qVar.j, 0);
                } catch (RemoteException e10) {
                    mVar2.d(e10, "linkToDeath failed", new Object[0]);
                }
                qVar.f18926g = false;
                Iterator it = qVar.f18923d.iterator();
                while (it.hasNext()) {
                    ((Runnable) it.next()).run();
                }
                qVar.f18923d.clear();
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(m mVar, jg.g gVar, jg.g gVar2) {
        super(gVar);
        this.f18452i = gVar2;
        this.f18453v = mVar;
    }
}
