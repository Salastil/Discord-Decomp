package zh;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public abstract class b implements Parcelable {
    public static final Parcelable.Creator<b> CREATOR = new sf.c(24);

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        c cVar = (c) this;
        parcel.writeParcelable(cVar.f21242d, 0);
        parcel.writeInt(cVar.f21243e ? 1 : 0);
    }
}
