package xh;

import android.os.Bundle;
import android.os.Parcel;
import android.os.RemoteException;
import di.t;
import di.v;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class k extends o {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ long f20476i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ jg.g f20477v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ com.google.android.play.core.integrity.c f20478w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(com.google.android.play.core.integrity.c cVar, jg.g gVar, long j, jg.g gVar2) {
        super(cVar, gVar);
        this.f20476i = j;
        this.f20477v = gVar2;
        Objects.requireNonNull(cVar);
        this.f20478w = cVar;
    }

    @Override // di.b0
    public final void b() {
        jg.g gVar = this.f20477v;
        long j = this.f20476i;
        com.google.android.play.core.integrity.c cVar = this.f20478w;
        if (com.google.android.play.core.integrity.c.d(cVar)) {
            a(new b(-2, null));
            return;
        }
        if (com.google.android.play.core.integrity.c.c(cVar)) {
            a(new b(-14, null));
            return;
        }
        try {
            v vVar = (v) cVar.f6180e.f7577n;
            Bundle b10 = com.google.android.play.core.integrity.c.b(cVar, j);
            n nVar = new n(cVar, gVar);
            t tVar = (t) vVar;
            tVar.getClass();
            Parcel obtain = Parcel.obtain();
            obtain.writeInterfaceToken(tVar.f5731h);
            int i5 = di.r.a;
            obtain.writeInt(1);
            b10.writeToParcel(obtain, 0);
            obtain.writeStrongBinder(nVar);
            tVar.k(2, obtain);
        } catch (RemoteException e9) {
            cVar.a.a(e9, "warmUpIntegrityToken(%s)", Long.valueOf(j));
            gVar.c(new b(-100, e9));
        }
    }
}
