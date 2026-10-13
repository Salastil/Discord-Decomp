package ai;

import android.os.IBinder;
import android.os.RemoteException;
import di.a0;
import di.b0;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import uh.o;
import uh.q;

/* loaded from: classes3.dex */
public final /* synthetic */ class g implements IBinder.DeathRecipient {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f617b;

    public /* synthetic */ g(int i5, Object obj) {
        this.a = i5;
        this.f617b = obj;
    }

    @Override // android.os.IBinder.DeathRecipient
    public final void binderDied() {
        switch (this.a) {
            case 0:
                j jVar = (j) this.f617b;
                String str = jVar.f625c;
                e eVar = jVar.f624b;
                eVar.b("reportBinderDeath", new Object[0]);
                if (jVar.f631i.get() != null) {
                    throw new ClassCastException();
                }
                eVar.b("%s : Binder has died.", str);
                ArrayList arrayList = jVar.f626d;
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    f fVar = (f) it.next();
                    RemoteException remoteException = new RemoteException(String.valueOf(str).concat(" : Binder has died."));
                    jg.g gVar = fVar.f616d;
                    if (gVar != null) {
                        gVar.c(remoteException);
                    }
                }
                arrayList.clear();
                jVar.b();
                return;
            case 1:
                dg.g gVar2 = (dg.g) this.f617b;
                dg.b bVar = gVar2.f7550b;
                bVar.c("reportBinderDeath", new Object[0]);
                if (gVar2.f7557i.get() != null) {
                    throw new ClassCastException();
                }
                bVar.c("%s : Binder has died.", gVar2.f7551c);
                ArrayList arrayList2 = gVar2.f7552d;
                Iterator it2 = arrayList2.iterator();
                while (it2.hasNext()) {
                    ((dg.c) it2.next()).a(new RemoteException(String.valueOf(gVar2.f7551c).concat(" : Binder has died.")));
                }
                arrayList2.clear();
                synchronized (gVar2.f7554f) {
                    HashSet hashSet = gVar2.f7553e;
                    Iterator it3 = hashSet.iterator();
                    while (it3.hasNext()) {
                        ((jg.g) it3.next()).c(new RemoteException(String.valueOf(gVar2.f7551c).concat(" : Binder has died.")));
                    }
                    hashSet.clear();
                }
                return;
            case 2:
                di.c cVar = (di.c) this.f617b;
                a0 a0Var = cVar.f7567b;
                a0Var.b("reportBinderDeath", new Object[0]);
                if (cVar.j.get() != null) {
                    throw new ClassCastException();
                }
                a0Var.b("%s : Binder has died.", cVar.f7568c);
                ArrayList arrayList3 = cVar.f7569d;
                Iterator it4 = arrayList3.iterator();
                while (it4.hasNext()) {
                    ((b0) it4.next()).a(new RemoteException(String.valueOf(cVar.f7568c).concat(" : Binder has died.")));
                }
                arrayList3.clear();
                synchronized (cVar.f7571f) {
                    HashSet hashSet2 = cVar.f7570e;
                    Iterator it5 = hashSet2.iterator();
                    while (it5.hasNext()) {
                        ((jg.g) it5.next()).c(new RemoteException(String.valueOf(cVar.f7568c).concat(" : Binder has died.")));
                    }
                    hashSet2.clear();
                }
                return;
            default:
                q qVar = (q) this.f617b;
                qVar.f18921b.e("reportBinderDeath", new Object[0]);
                if (qVar.f18928i.get() != null) {
                    throw new ClassCastException();
                }
                qVar.f18921b.e("%s : Binder has died.", qVar.f18922c);
                Iterator it6 = qVar.f18923d.iterator();
                while (it6.hasNext()) {
                    o oVar = (o) it6.next();
                    RemoteException remoteException2 = new RemoteException(String.valueOf(qVar.f18922c).concat(" : Binder has died."));
                    jg.g gVar3 = oVar.f18917d;
                    if (gVar3 != null) {
                        gVar3.c(remoteException2);
                    }
                }
                qVar.f18923d.clear();
                synchronized (qVar.f18925f) {
                    qVar.e();
                }
                return;
        }
    }
}
