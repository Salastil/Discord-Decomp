package qf;

import android.app.PendingIntent;
import android.os.BadParcelableException;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;
import bg.n;
import bg.o1;
import com.google.android.gms.common.api.Status;
import jg.g;
import k0.d;

/* loaded from: classes3.dex */
public final class b extends Binder implements o1, IInterface {

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ int f16886f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ g f16887g;

    public b(g gVar, int i5) {
        this.f16886f = i5;
        this.f16887g = gVar;
        attachInterface(this, "com.google.android.gms.fido.fido2.internal.regular.IFido2AppCallbacks");
    }

    @Override // android.os.Binder
    public final boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
        if (i5 <= 16777215) {
            parcel.enforceInterface(getInterfaceDescriptor());
        } else if (super.onTransact(i5, parcel, parcel2, i6)) {
            return true;
        }
        if (i5 != 1) {
            return false;
        }
        Parcelable.Creator<Status> creator = Status.CREATOR;
        int i10 = n.a;
        Status createFromParcel = parcel.readInt() == 0 ? null : creator.createFromParcel(parcel);
        PendingIntent pendingIntent = (PendingIntent) (parcel.readInt() != 0 ? (Parcelable) PendingIntent.CREATOR.createFromParcel(parcel) : null);
        int dataAvail = parcel.dataAvail();
        if (dataAvail > 0) {
            throw new BadParcelableException(d.i(dataAvail, "Parcel data not fully consumed, unread size: "));
        }
        p(createFromParcel, pendingIntent);
        return true;
    }

    @Override // bg.o1
    public final void p(Status status, PendingIntent pendingIntent) {
        switch (this.f16886f) {
            case 0:
                ks.n.x(status, pendingIntent, this.f16887g);
                break;
            default:
                ks.n.x(status, pendingIntent, this.f16887g);
                break;
        }
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this;
    }
}
