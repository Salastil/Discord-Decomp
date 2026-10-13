package xh;

import android.os.Bundle;
import android.os.Parcel;
import android.os.RemoteException;
import di.t;
import di.v;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class l extends o {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ s f20479i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ long f20480v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ long f20481w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ jg.g f20482x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ com.google.android.play.core.integrity.c f20483y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(com.google.android.play.core.integrity.c cVar, jg.g gVar, s sVar, long j, long j5, jg.g gVar2) {
        super(cVar, gVar);
        this.f20479i = sVar;
        this.f20480v = j;
        this.f20481w = j5;
        this.f20482x = gVar2;
        Objects.requireNonNull(cVar);
        this.f20483y = cVar;
    }

    @Override // di.b0
    public final void b() {
        s sVar = this.f20479i;
        jg.g gVar = this.f20482x;
        com.google.android.play.core.integrity.c cVar = this.f20483y;
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
            Bundle a = com.google.android.play.core.integrity.c.a(cVar, sVar, this.f20480v, this.f20481w);
            com.google.android.play.core.integrity.b bVar = new com.google.android.play.core.integrity.b(cVar, gVar);
            t tVar = (t) vVar;
            tVar.getClass();
            Parcel obtain = Parcel.obtain();
            obtain.writeInterfaceToken(tVar.f5731h);
            int i5 = di.r.a;
            obtain.writeInt(1);
            a.writeToParcel(obtain, 0);
            obtain.writeStrongBinder(bVar);
            tVar.k(3, obtain);
        } catch (RemoteException e9) {
            cVar.a.a(e9, "requestExpressIntegrityToken(%s, %s, %s)", sVar.a, sVar.f20489b, Long.valueOf(this.f20480v));
            gVar.c(new b(-100, e9));
        }
    }
}
