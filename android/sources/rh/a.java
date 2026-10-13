package rh;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import dg.g;

/* loaded from: classes3.dex */
public abstract class a extends ag.a {
    @Override // ag.a
    public final boolean s(int i5, Parcel parcel) {
        if (i5 == 1) {
            Parcelable.Creator creator = Bundle.CREATOR;
            Bundle bundle = (Bundle) dg.a.a(parcel);
            dg.a.b(parcel);
            ((qh.d) this).z(bundle);
            return true;
        }
        if (i5 != 2) {
            return false;
        }
        Parcelable.Creator creator2 = Bundle.CREATOR;
        Bundle bundle2 = (Bundle) dg.a.a(parcel);
        dg.a.b(parcel);
        qh.d dVar = (qh.d) this;
        g gVar = dVar.j.f16898c;
        jg.g gVar2 = dVar.f16891h;
        gVar.c(gVar2);
        int i6 = bundle2.getInt("error.code");
        dVar.f16890g.a(Integer.valueOf(i6));
        gVar2.c(new qh.a(i6, 0));
        return true;
    }
}
