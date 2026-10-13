package th;

import android.os.Bundle;
import android.os.Parcel;
import android.os.RemoteException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes3.dex */
public final class c extends uh.o {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f18407e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ jg.g f18408i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f18409v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f18410w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ c(m mVar, jg.g gVar, Object obj, jg.g gVar2, int i5) {
        super(gVar);
        this.f18407e = i5;
        this.f18410w = obj;
        this.f18408i = gVar2;
        this.f18409v = mVar;
    }

    @Override // uh.o
    public final void a() {
        int i5 = 0;
        switch (this.f18407e) {
            case 0:
                m mVar = (m) this.f18409v;
                List list = (List) this.f18410w;
                ArrayList l6 = m.l(list);
                try {
                    uh.k kVar = mVar.f18506d.f18930m;
                    String str = mVar.a;
                    Bundle h6 = m.h();
                    i iVar = new i(mVar, this.f18408i, i5);
                    uh.i iVar2 = (uh.i) kVar;
                    Parcel b10 = iVar2.b();
                    b10.writeString(str);
                    b10.writeTypedList(l6);
                    int i6 = uh.h.a;
                    b10.writeInt(1);
                    h6.writeToParcel(b10, 0);
                    b10.writeStrongBinder(iVar);
                    iVar2.k(14, b10);
                    return;
                } catch (RemoteException e9) {
                    m.f18502g.d(e9, "cancelDownloads(%s)", list);
                    return;
                }
            case 1:
                jg.g gVar = this.f18408i;
                m mVar2 = (m) this.f18409v;
                try {
                    uh.k kVar2 = mVar2.f18506d.f18930m;
                    String str2 = mVar2.a;
                    Bundle k = m.k((HashMap) this.f18410w);
                    j jVar = new j(mVar2, gVar, i5);
                    uh.i iVar3 = (uh.i) kVar2;
                    Parcel b11 = iVar3.b();
                    b11.writeString(str2);
                    int i10 = uh.h.a;
                    b11.writeInt(1);
                    k.writeToParcel(b11, 0);
                    b11.writeStrongBinder(jVar);
                    iVar3.k(5, b11);
                    return;
                } catch (RemoteException e10) {
                    m.f18502g.d(e10, "syncPacks", new Object[0]);
                    gVar.c(new RuntimeException(e10));
                    return;
                }
            default:
                synchronized (((uh.q) this.f18409v).f18925f) {
                    try {
                        uh.q qVar = (uh.q) this.f18409v;
                        jg.g gVar2 = this.f18408i;
                        qVar.f18924e.add(gVar2);
                        gVar2.a.addOnCompleteListener(new e4.r(23, qVar, gVar2));
                        if (((uh.q) this.f18409v).k.getAndIncrement() > 0) {
                            ((uh.q) this.f18409v).f18921b.e("Already connected to the service.", new Object[0]);
                        }
                        uh.q.b((uh.q) this.f18409v, (uh.o) this.f18410w);
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(uh.q qVar, jg.g gVar, jg.g gVar2, uh.o oVar) {
        super(gVar);
        this.f18407e = 2;
        this.f18408i = gVar2;
        this.f18410w = oVar;
        this.f18409v = qVar;
    }
}
