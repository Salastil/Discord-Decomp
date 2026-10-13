package xh;

import android.os.Bundle;
import android.os.Parcel;
import android.os.RemoteException;
import com.google.android.play.core.integrity.IntegrityTokenRequest;
import di.b0;
import di.x;
import di.z;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class e extends b0 {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ byte[] f20462e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Long f20463i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ jg.g f20464v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ IntegrityTokenRequest f20465w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ g f20466x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(g gVar, jg.g gVar2, byte[] bArr, Long l6, jg.g gVar3, IntegrityTokenRequest integrityTokenRequest) {
        super(gVar2);
        this.f20462e = bArr;
        this.f20463i = l6;
        this.f20464v = gVar3;
        this.f20465w = integrityTokenRequest;
        Objects.requireNonNull(gVar);
        this.f20466x = gVar;
    }

    @Override // di.b0
    public final void a(Exception exc) {
        if (exc instanceof di.d) {
            super.a(new a(-9, exc));
        } else {
            super.a(exc);
        }
    }

    @Override // di.b0
    public final void b() {
        jg.g gVar = this.f20464v;
        g gVar2 = this.f20466x;
        try {
            z zVar = (z) gVar2.f20473e.f7577n;
            Bundle a = g.a(gVar2, this.f20462e, this.f20463i);
            f fVar = new f(gVar2, gVar);
            x xVar = (x) zVar;
            xVar.getClass();
            Parcel obtain = Parcel.obtain();
            obtain.writeInterfaceToken(xVar.f5731h);
            int i5 = di.r.a;
            obtain.writeInt(1);
            a.writeToParcel(obtain, 0);
            obtain.writeStrongBinder(fVar);
            xVar.k(2, obtain);
        } catch (RemoteException e9) {
            gVar2.a.a(e9, "requestIntegrityToken(%s)", this.f20465w);
            gVar.c(new a(-100, e9));
        }
    }
}
