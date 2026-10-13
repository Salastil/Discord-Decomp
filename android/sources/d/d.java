package d;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes.dex */
public class d implements Parcelable {
    public static final Parcelable.Creator<d> CREATOR = new android.support.v4.media.a(24);

    /* renamed from: d, reason: collision with root package name */
    public b f7344d;

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        synchronized (this) {
            try {
                if (this.f7344d == null) {
                    this.f7344d = new c(this);
                }
                parcel.writeStrongBinder(this.f7344d.asBinder());
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public void a(int i5, Bundle bundle) {
    }
}
