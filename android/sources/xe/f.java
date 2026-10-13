package xe;

import android.os.IBinder;
import android.os.Messenger;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class f implements Parcelable {
    public static final Parcelable.Creator<f> CREATOR = new b(1);

    /* renamed from: d, reason: collision with root package name */
    public final Messenger f20403d;

    public f(IBinder iBinder) {
        this.f20403d = new Messenger(iBinder);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        try {
            Messenger messenger = this.f20403d;
            messenger.getClass();
            IBinder binder = messenger.getBinder();
            Messenger messenger2 = ((f) obj).f20403d;
            messenger2.getClass();
            return binder.equals(messenger2.getBinder());
        } catch (ClassCastException unused) {
            return false;
        }
    }

    public final int hashCode() {
        Messenger messenger = this.f20403d;
        messenger.getClass();
        return messenger.getBinder().hashCode();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        Messenger messenger = this.f20403d;
        messenger.getClass();
        parcel.writeStrongBinder(messenger.getBinder());
    }
}
