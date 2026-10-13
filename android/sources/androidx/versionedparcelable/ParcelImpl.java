package androidx.versionedparcelable;

import android.annotation.SuppressLint;
import android.os.Parcel;
import android.os.Parcelable;
import kf.b;
import o3.c;

@SuppressLint({"BanParcelableUsage"})
/* loaded from: classes.dex */
public class ParcelImpl implements Parcelable {
    public static final Parcelable.Creator<ParcelImpl> CREATOR = new b(6);

    /* renamed from: d, reason: collision with root package name */
    public final c f2559d;

    public ParcelImpl(Parcel parcel) {
        this.f2559d = new o3.b(parcel).h();
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        new o3.b(parcel).l(this.f2559d);
    }
}
