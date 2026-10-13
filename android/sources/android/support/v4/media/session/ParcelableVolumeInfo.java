package android.support.v4.media.session;

import android.annotation.SuppressLint;
import android.os.Parcel;
import android.os.Parcelable;

@SuppressLint({"BanParcelableUsage"})
/* loaded from: classes.dex */
public class ParcelableVolumeInfo implements Parcelable {
    public static final Parcelable.Creator<ParcelableVolumeInfo> CREATOR = new a(3);

    /* renamed from: d, reason: collision with root package name */
    public int f714d;

    /* renamed from: e, reason: collision with root package name */
    public int f715e;

    /* renamed from: i, reason: collision with root package name */
    public int f716i;

    /* renamed from: v, reason: collision with root package name */
    public int f717v;

    /* renamed from: w, reason: collision with root package name */
    public int f718w;

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f714d);
        parcel.writeInt(this.f716i);
        parcel.writeInt(this.f717v);
        parcel.writeInt(this.f718w);
        parcel.writeInt(this.f715e);
    }
}
