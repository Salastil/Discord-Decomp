package hg;

import af.a0;
import android.os.Parcel;
import com.google.android.gms.internal.play_billing.v0;

/* loaded from: classes3.dex */
public abstract class c extends ag.a {
    @Override // ag.a
    public final boolean w(int i5, Parcel parcel, Parcel parcel2) {
        switch (i5) {
            case 3:
                xf.a.b(parcel);
                break;
            case 4:
                xf.a.b(parcel);
                break;
            case 5:
            default:
                return false;
            case 6:
                xf.a.b(parcel);
                break;
            case 7:
                xf.a.b(parcel);
                break;
            case 8:
                f fVar = (f) xf.a.a(parcel, f.CREATOR);
                xf.a.b(parcel);
                a0 a0Var = (a0) this;
                a0Var.f537h.post(new v0(a0Var, fVar, 4, false));
                break;
            case 9:
                xf.a.b(parcel);
                break;
        }
        parcel2.writeNoException();
        return true;
    }
}
