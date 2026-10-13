package fh;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class j implements Parcelable {
    public static final Parcelable.Creator<j> CREATOR = new android.support.v4.media.a(29);

    /* renamed from: d, reason: collision with root package name */
    public int f8613d;

    /* renamed from: e, reason: collision with root package name */
    public ch.g f8614e;

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f8613d);
        parcel.writeParcelable(this.f8614e, 0);
    }
}
