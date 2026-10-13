package ai;

import a5.c0;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import android.util.Log;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class h extends f {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f618e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f619i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f620v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ h(Object obj, jg.g gVar, Object obj2, int i5) {
        super(gVar);
        this.f618e = i5;
        this.f620v = obj;
        this.f619i = obj2;
    }

    @Override // ai.f
    public final void a() {
        d bVar;
        int i5 = this.f618e;
        Object obj = this.f620v;
        Object obj2 = this.f619i;
        switch (i5) {
            case 0:
                j jVar = (j) obj;
                h hVar = (h) obj2;
                d dVar = jVar.f633m;
                e eVar = jVar.f624b;
                ArrayList arrayList = jVar.f626d;
                if (dVar == null && !jVar.f629g) {
                    eVar.b("Initiate binding to the service.", new Object[0]);
                    arrayList.add(hVar);
                    c0 c0Var = new c0(1, jVar);
                    jVar.f632l = c0Var;
                    jVar.f629g = true;
                    if (!jVar.a.bindService(jVar.f630h, c0Var, 1)) {
                        eVar.b("Failed to bind to the service.", new Object[0]);
                        jVar.f629g = false;
                        Iterator it = arrayList.iterator();
                        while (it.hasNext()) {
                            f fVar = (f) it.next();
                            k kVar = new k("Failed to bind to the service.");
                            jg.g gVar = fVar.f616d;
                            if (gVar != null) {
                                gVar.c(kVar);
                            }
                        }
                        arrayList.clear();
                        break;
                    }
                } else if (!jVar.f629g) {
                    hVar.run();
                    break;
                } else {
                    eVar.b("Waiting to bind to the service.", new Object[0]);
                    arrayList.add(hVar);
                    break;
                }
                break;
            case 1:
                j jVar2 = (j) ((c0) obj).f151e;
                IBinder iBinder = (IBinder) obj2;
                int i6 = c.f615g;
                if (iBinder == null) {
                    bVar = null;
                } else {
                    IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.play.core.inappreview.protocol.IInAppReviewService");
                    bVar = queryLocalInterface instanceof d ? (d) queryLocalInterface : new b(iBinder);
                }
                jVar2.f633m = bVar;
                jVar2.f624b.b("linkToDeath", new Object[0]);
                try {
                    jVar2.f633m.asBinder().linkToDeath(jVar2.j, 0);
                } catch (RemoteException e9) {
                    e eVar2 = jVar2.f624b;
                    Object[] objArr = new Object[0];
                    eVar2.getClass();
                    if (Log.isLoggable("PlayCore", 6)) {
                        Log.e("PlayCore", e.c(eVar2.a, "linkToDeath failed", objArr), e9);
                    }
                }
                jVar2.f629g = false;
                Iterator it2 = jVar2.f626d.iterator();
                while (it2.hasNext()) {
                    ((Runnable) it2.next()).run();
                }
                jVar2.f626d.clear();
                break;
            default:
                jg.g gVar2 = (jg.g) obj2;
                zh.e eVar3 = (zh.e) obj;
                try {
                    eVar3.a.f633m.h(eVar3.f21248b, zh.f.a(), new zh.d(eVar3, gVar2));
                    break;
                } catch (RemoteException e10) {
                    e eVar4 = zh.e.f21247c;
                    Object[] objArr2 = {eVar3.f21248b};
                    eVar4.getClass();
                    if (Log.isLoggable("PlayCore", 6)) {
                        Log.e("PlayCore", e.c(eVar4.a, "error requesting in-app review for %s", objArr2), e10);
                    }
                    gVar2.c(new RuntimeException(e10));
                }
        }
    }

    public h(c0 c0Var, IBinder iBinder) {
        this.f618e = 1;
        this.f620v = c0Var;
        this.f619i = iBinder;
    }
}
