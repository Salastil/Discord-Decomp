package xh;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import di.w;
import java.util.Objects;

/* loaded from: classes3.dex */
public abstract class m extends ag.a implements w {

    /* renamed from: g, reason: collision with root package name */
    public final jg.g f20484g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ com.google.android.play.core.integrity.c f20485h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(com.google.android.play.core.integrity.c cVar, jg.g gVar) {
        super("com.google.android.play.core.integrity.protocol.IExpressIntegrityServiceCallback", 5);
        Objects.requireNonNull(cVar);
        this.f20485h = cVar;
        this.f20484g = gVar;
    }

    public void f(Bundle bundle) {
        this.f20485h.f6180e.c(this.f20484g);
    }

    @Override // di.w
    public void j(Bundle bundle) {
        this.f20485h.f6180e.c(this.f20484g);
    }

    @Override // ag.a
    public final boolean r(int i5, Parcel parcel) {
        if (i5 == 2) {
            Parcelable.Creator creator = Bundle.CREATOR;
            Bundle bundle = (Bundle) di.r.a(parcel);
            di.r.b(parcel);
            j(bundle);
            return true;
        }
        if (i5 == 3) {
            Parcelable.Creator creator2 = Bundle.CREATOR;
            Bundle bundle2 = (Bundle) di.r.a(parcel);
            di.r.b(parcel);
            f(bundle2);
            return true;
        }
        jg.g gVar = this.f20484g;
        com.google.android.play.core.integrity.c cVar = this.f20485h;
        if (i5 == 4) {
            Parcelable.Creator creator3 = Bundle.CREATOR;
            di.r.b(parcel);
            cVar.f6180e.c(gVar);
            return true;
        }
        if (i5 != 5) {
            return false;
        }
        Parcelable.Creator creator4 = Bundle.CREATOR;
        di.r.b(parcel);
        cVar.f6180e.c(gVar);
        return true;
    }
}
