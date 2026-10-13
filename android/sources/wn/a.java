package wn;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class a implements Parcelable {
    public static final Parcelable.Creator<a> CREATOR = new sf.c(21);

    /* renamed from: d, reason: collision with root package name */
    public final String f19960d;

    /* renamed from: e, reason: collision with root package name */
    public final float f19961e;

    /* renamed from: i, reason: collision with root package name */
    public final float f19962i;

    public a(String str, float f2, float f10) {
        this.f19960d = str;
        this.f19961e = f2;
        this.f19962i = f10;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f19960d);
        parcel.writeFloat(this.f19961e);
        parcel.writeFloat(this.f19962i);
    }

    public a(Parcel parcel) {
        this.f19960d = parcel.readString();
        this.f19961e = parcel.readFloat();
        this.f19962i = parcel.readFloat();
    }
}
