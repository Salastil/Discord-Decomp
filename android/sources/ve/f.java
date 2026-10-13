package ve;

import android.os.Parcel;
import com.google.android.gms.common.api.Status;

/* loaded from: classes3.dex */
public final class f extends ag.a implements j {

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f19401g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ g f19402h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(g gVar, int i5) {
        super("com.google.android.gms.auth.api.signin.internal.ISignInCallbacks", 7);
        this.f19401g = i5;
        this.f19402h = gVar;
    }

    @Override // ve.j
    public void g(Status status) {
        switch (this.f19401g) {
            case 1:
                this.f19402h.setResult(status);
                return;
            default:
                throw new UnsupportedOperationException();
        }
    }

    @Override // ve.j
    public void i(Status status) {
        switch (this.f19401g) {
            case 0:
                this.f19402h.setResult(status);
                return;
            default:
                throw new UnsupportedOperationException();
        }
    }

    @Override // ag.a
    public final boolean x(int i5, Parcel parcel, Parcel parcel2) {
        switch (i5) {
            case 101:
                vf.f.b(parcel);
                throw new UnsupportedOperationException();
            case 102:
                Status status = (Status) vf.f.a(parcel, Status.CREATOR);
                vf.f.b(parcel);
                i(status);
                break;
            case 103:
                Status status2 = (Status) vf.f.a(parcel, Status.CREATOR);
                vf.f.b(parcel);
                g(status2);
                break;
            default:
                return false;
        }
        parcel2.writeNoException();
        return true;
    }
}
