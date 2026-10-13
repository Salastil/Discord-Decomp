package dg;

import android.os.Bundle;
import android.os.Parcel;
import android.os.RemoteException;

/* loaded from: classes3.dex */
public final class d extends c {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7541e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ jg.g f7542i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f7543v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f7544w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ d(Object obj, jg.g gVar, jg.g gVar2, Object obj2, int i5) {
        super(gVar);
        this.f7541e = i5;
        this.f7542i = gVar2;
        this.f7543v = obj2;
        this.f7544w = obj;
    }

    @Override // dg.c
    public void a(Exception exc) {
        switch (this.f7541e) {
            case 1:
                if (!(exc instanceof h)) {
                    super.a(exc);
                    break;
                } else {
                    super.a(new qh.a(-5, 0));
                    break;
                }
            case 2:
                if (!(exc instanceof h)) {
                    super.a(exc);
                    break;
                } else {
                    super.a(new qh.a(-5, 0));
                    break;
                }
            default:
                super.a(exc);
                break;
        }
    }

    @Override // dg.c
    public final void b() {
        Parcel obtain;
        switch (this.f7541e) {
            case 0:
                g gVar = (g) this.f7544w;
                synchronized (gVar.f7554f) {
                    try {
                        jg.g gVar2 = this.f7542i;
                        gVar.f7553e.add(gVar2);
                        gVar2.a.addOnCompleteListener(new e4.e(8, gVar, gVar2));
                        if (gVar.k.getAndIncrement() > 0) {
                            gVar.f7550b.c("Already connected to the service.", new Object[0]);
                        }
                        g.b(gVar, (c) this.f7543v);
                    } finally {
                    }
                }
                return;
            case 1:
                jg.g gVar3 = this.f7542i;
                try {
                    qh.f fVar = (qh.f) this.f7544w;
                    rh.d dVar = fVar.f16898c.f7559m;
                    String packageName = fVar.f16897b.getPackageName();
                    Bundle bundle = new Bundle();
                    bundle.putInt("playcore.version.code", 4);
                    qh.e eVar = new qh.e(fVar, gVar3);
                    rh.b bVar = (rh.b) dVar;
                    bVar.getClass();
                    obtain = Parcel.obtain();
                    obtain.writeInterfaceToken("com.google.android.play.agesignals.protocol.IAgeSignalsService");
                    obtain.writeString(packageName);
                    int i5 = a.a;
                    obtain.writeInt(1);
                    bundle.writeToParcel(obtain, 0);
                    obtain.writeStrongBinder(eVar);
                    try {
                        bVar.f17386f.transact(1, obtain, null, 1);
                        obtain.recycle();
                        return;
                    } finally {
                    }
                } catch (RemoteException e9) {
                    qh.f.f16896d.b(e9, "checkAgeSignals(%s)", (l8.a) this.f7543v);
                    gVar3.c(new qh.a(-100, 0));
                    return;
                }
            default:
                jg.g gVar4 = this.f7542i;
                try {
                    qh.f fVar2 = (qh.f) this.f7544w;
                    rh.d dVar2 = fVar2.f16898c.f7559m;
                    String packageName2 = fVar2.f16897b.getPackageName();
                    Bundle bundle2 = new Bundle();
                    bundle2.putInt("playcore.version.code", 4);
                    qh.d dVar3 = new qh.d(fVar2, gVar4, ((qh.g) this.f7543v).a);
                    rh.b bVar2 = (rh.b) dVar2;
                    bVar2.getClass();
                    obtain = Parcel.obtain();
                    obtain.writeInterfaceToken("com.google.android.play.agesignals.protocol.IAgeSignalsService");
                    obtain.writeString(packageName2);
                    int i6 = a.a;
                    obtain.writeInt(1);
                    bundle2.writeToParcel(obtain, 0);
                    obtain.writeStrongBinder(dVar3);
                    try {
                        bVar2.f17386f.transact(2, obtain, null, 1);
                        obtain.recycle();
                        return;
                    } finally {
                    }
                } catch (RemoteException e10) {
                    qh.f.f16896d.b(e10, "requestAgeSignalsAccess failed.", new Object[0]);
                    gVar4.c(new qh.a(-100, 0));
                    return;
                }
        }
    }
}
